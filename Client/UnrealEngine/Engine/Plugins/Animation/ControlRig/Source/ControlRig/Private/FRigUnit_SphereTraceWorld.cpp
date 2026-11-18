// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 7

// StaticStruct @ 14a481ba0

UScriptStruct * __cdecl FRigUnit_SphereTraceWorld::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_SphereTraceWorld.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_SphereTraceWorld.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_SphereTraceWorld,(UObject *)pUVar1,
                         L"RigUnit_SphereTraceWorld");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr = Z_Construct_UScriptStruct_FRigUnit_SphereTraceWorld_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_SphereTraceWorld.OuterSingleton,
               &local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_SphereTraceWorld.OuterSingleton;
}

// GetExecuteContextStruct @ 14a481c20

UScriptStruct * __thiscall
FRigUnit_SphereTraceWorld::GetExecuteContextStruct(FRigUnit_SphereTraceWorld *this)

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

// Execute @ 14a481e00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FRigUnit_SphereTraceWorld::Execute(FRigUnit_SphereTraceWorld *this)

{
  undefined1 auStackY_2b8 [32];
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
  StaticExecute((FControlRigExecuteContext *)local_268,&this->Start,&this->End,&this->Channel,
                this->Radius,&this->bHit,&this->HitLocation,&this->HitNormal,&this->WorkData);
  FControlRigExecuteContext::~FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  return;
}

// GetUpgradeInfo @ 14a482190

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FRigVMStructUpgradeInfo * __thiscall
FRigUnit_SphereTraceWorld::GetUpgradeInfo
          (FRigUnit_SphereTraceWorld *this,FRigVMStructUpgradeInfo *__return_storage_ptr__)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *pFVar2;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_c8;
  FRigVMStruct local_b8;
  double local_b0;
  double dStack_a8;
  double local_a0;
  double local_98;
  double dStack_90;
  double local_88;
  undefined1 local_80;
  float local_7c;
  undefined1 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined1 local_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_18 = ___xmm_3ff00000000000000000000000000000;
  uStack_10 = _UNK_15061cbc8;
  local_b0 = (this->Start).field0_0x0._s_0.X;
  dStack_a8 = (this->Start).field0_0x0._s_0.Y;
  local_b8 = (FRigVMStruct)&___7FRigUnit_SphereTraceByTraceChannel__6B_;
  local_48 = __real_3ff0000000000000;
  local_40 = 0xffffffff;
  local_98 = (this->End).field0_0x0._s_0.X;
  dStack_90 = (this->End).field0_0x0._s_0.Y;
  local_3c = 0;
  local_28 = 0;
  uStack_20 = 0;
  local_a0 = (this->Start).field0_0x0._s_0.Z;
  local_7c = this->Radius;
  local_88 = (this->End).field0_0x0._s_0.Z;
  (__return_storage_ptr__->NodePath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->NodePath).Data.ArrayNum = 0;
  (__return_storage_ptr__->NodePath).Data.ArrayMax = 0;
  (__return_storage_ptr__->OldDispatchFunction).ComparisonIndex = 0;
  (__return_storage_ptr__->OldDispatchFunction).Number = 0;
  (__return_storage_ptr__->NewDispatchFunction).ComparisonIndex = 0;
  (__return_storage_ptr__->NewDispatchFunction).Number = 0;
  *(undefined8 *)&__return_storage_ptr__->InputLinkMap = 0;
  *(undefined8 *)&(__return_storage_ptr__->InputLinkMap).field_0x8 = 0;
  *(undefined8 *)&(__return_storage_ptr__->InputLinkMap).field_0x20 = 0;
  *(undefined4 *)&(__return_storage_ptr__->InputLinkMap).field_0x28 = 0;
  *(undefined4 *)&(__return_storage_ptr__->InputLinkMap).field_0x2c = 0x80;
  *(undefined4 *)&(__return_storage_ptr__->InputLinkMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(__return_storage_ptr__->InputLinkMap).field_0x34 = 0;
  *(undefined8 *)&(__return_storage_ptr__->InputLinkMap).field_0x40 = 0;
  *(undefined4 *)&(__return_storage_ptr__->InputLinkMap).field_0x48 = 0;
  *(undefined8 *)&__return_storage_ptr__->OutputLinkMap = 0;
  *(undefined8 *)&(__return_storage_ptr__->OutputLinkMap).field_0x8 = 0;
  *(undefined8 *)&(__return_storage_ptr__->OutputLinkMap).field_0x20 = 0;
  *(undefined4 *)&(__return_storage_ptr__->OutputLinkMap).field_0x28 = 0;
  *(undefined4 *)&(__return_storage_ptr__->OutputLinkMap).field_0x2c = 0x80;
  *(undefined4 *)&(__return_storage_ptr__->OutputLinkMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(__return_storage_ptr__->OutputLinkMap).field_0x34 = 0;
  *(undefined8 *)&(__return_storage_ptr__->OutputLinkMap).field_0x40 = 0;
  *(undefined4 *)&(__return_storage_ptr__->OutputLinkMap).field_0x48 = 0;
  *(undefined8 *)&__return_storage_ptr__->DefaultValues = 0;
  *(undefined8 *)&(__return_storage_ptr__->DefaultValues).field_0x8 = 0;
  *(undefined8 *)&(__return_storage_ptr__->DefaultValues).field_0x20 = 0;
  *(undefined4 *)&(__return_storage_ptr__->DefaultValues).field_0x28 = 0;
  *(undefined4 *)&(__return_storage_ptr__->DefaultValues).field_0x2c = 0x80;
  *(undefined4 *)&(__return_storage_ptr__->DefaultValues).field_0x30 = 0xffffffff;
  *(undefined4 *)&(__return_storage_ptr__->DefaultValues).field_0x34 = 0;
  *(undefined8 *)&(__return_storage_ptr__->DefaultValues).field_0x40 = 0;
  *(undefined4 *)&(__return_storage_ptr__->DefaultValues).field_0x48 = 0;
  (__return_storage_ptr__->AggregatePins).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AggregatePins).ArrayNum = 0;
  (__return_storage_ptr__->AggregatePins).ArrayMax = 0;
  if (Z_Registration_Info_UScriptStruct_FRigUnit_SphereTraceWorld.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_SphereTraceWorld.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_SphereTraceWorld,(UObject *)pUVar1,
                         L"RigUnit_SphereTraceWorld");
    pFVar2 = FRigVMRegistry_RWLock::Get();
    local_c8.ArrayNum = 1;
    local_c8.DataPtr = Z_Construct_UScriptStruct_FRigUnit_SphereTraceWorld_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (pFVar2,Z_Registration_Info_UScriptStruct_FRigUnit_SphereTraceWorld.OuterSingleton,
               &local_c8);
  }
  __return_storage_ptr__->OldStruct =
       Z_Registration_Info_UScriptStruct_FRigUnit_SphereTraceWorld.OuterSingleton;
  if (Z_Registration_Info_UScriptStruct_FRigUnit_SphereTraceByTraceChannel.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_SphereTraceByTraceChannel.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_SphereTraceByTraceChannel,
                         (UObject *)pUVar1,L"RigUnit_SphereTraceByTraceChannel");
    pFVar2 = FRigVMRegistry_RWLock::Get();
    local_c8.ArrayNum = 1;
    local_c8.DataPtr =
         Z_Construct_UScriptStruct_FRigUnit_SphereTraceByTraceChannel_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (pFVar2,Z_Registration_Info_UScriptStruct_FRigUnit_SphereTraceByTraceChannel.
                      OuterSingleton,&local_c8);
  }
  __return_storage_ptr__->NewStruct =
       Z_Registration_Info_UScriptStruct_FRigUnit_SphereTraceByTraceChannel.OuterSingleton;
  (__return_storage_ptr__->OldDispatchFunction).ComparisonIndex = 0;
  (__return_storage_ptr__->OldDispatchFunction).Number = 0;
  (__return_storage_ptr__->NewDispatchFunction).ComparisonIndex = 0;
  (__return_storage_ptr__->NewDispatchFunction).Number = 0;
  FRigVMStructUpgradeInfo::SetDefaultValues(__return_storage_ptr__,&local_b8);
  return __return_storage_ptr__;
}

// Execute @ 14a52e380

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_SphereTraceWorld::Execute
          (FRigUnit_SphereTraceWorld *this,FControlRigExecuteContext *param_1)

{
  StaticExecute(param_1,&this->Start,&this->End,&this->Channel,this->Radius,&this->bHit,
                &this->HitLocation,&this->HitNormal,&this->WorkData);
  return;
}

// RigVMExecute @ 14a557240

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_SphereTraceWorld::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  float fVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  TVector<double> *pTVar5;
  TVector<double> *pTVar6;
  TEnumAsByte<ECollisionChannel> *pTVar7;
  FRigVMMemoryHandle *pFVar8;
  float *pfVar9;
  bool *pbVar10;
  TVector<double> *pTVar11;
  TVector<double> *pTVar12;
  FRigVMSlice *pFVar13;
  FRigUnit_SphereTrace_WorkData *pFVar14;
  FControlRigExecuteContext *pFVar15;
  
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
    pTVar5 = (TVector<double> *)pFVar8->Ptr;
  }
  else {
    pTVar5 = (TVector<double> *)
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
    pTVar6 = (TVector<double> *)pFVar8[1].Ptr;
  }
  else {
    pTVar6 = (TVector<double> *)
             FRigVMPropertyPath::GetData_Internal
                       (pFVar8[1].PropertyPath,pFVar8[1].Ptr,pFVar8[1].Property);
  }
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
    pTVar7 = (TEnumAsByte<ECollisionChannel> *)pFVar8[2].Ptr;
  }
  else {
    pTVar7 = (TEnumAsByte<ECollisionChannel> *)
             FRigVMPropertyPath::GetData_Internal
                       (pFVar8[2].PropertyPath,pFVar8[2].Ptr,pFVar8[2].Property);
  }
  pFVar8 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,3);
  pfVar9 = (float *)FRigVMMemoryHandle::GetData_Internal(pFVar8,true,-1);
  fVar1 = *pfVar9;
  pFVar8 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,4);
  pbVar10 = (bool *)FRigVMMemoryHandle::GetData_Internal(pFVar8,false,-1);
  pFVar8 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,5);
  pTVar11 = (TVector<double> *)FRigVMMemoryHandle::GetData_Internal(pFVar8,false,-1);
  pFVar8 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,6);
  pTVar12 = (TVector<double> *)FRigVMMemoryHandle::GetData_Internal(pFVar8,false,-1);
  pFVar8 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,7);
  pFVar13 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pFVar14 = (FRigUnit_SphereTrace_WorkData *)
            FRigVMMemoryHandle::GetData_Internal(pFVar8,false,pFVar13->Offset + pFVar13->Index);
  pFVar15 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  StaticExecute(pFVar15,pTVar5,pTVar6,pTVar7,fVar1,pbVar10,pTVar11,pTVar12,pFVar14);
  return;
}

// StaticExecute @ 14a597ea0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
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
FRigUnit_SphereTraceWorld::StaticExecute
          (FControlRigExecuteContext *param_1,TVector<double> *param_2,TVector<double> *param_3,
          TEnumAsByte<ECollisionChannel> *param_4,float param_5,bool *param_6,
          TVector<double> *param_7,TVector<double> *param_8,FRigUnit_SphereTrace_WorkData *param_9)

{
  byte bVar1;
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  double dVar5;
  undefined1 auVar6 [16];
  undefined8 uVar7;
  bool *pbVar8;
  FControlRigExecuteContext *pFVar9;
  bool bVar10;
  uint uVar11;
  UPrimitiveComponent *pUVar12;
  UClass *pUVar13;
  TVector<double> *pTVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
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
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  double dVar39;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined4 uVar45;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  double dVar53;
  double dVar56;
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined4 uVar61;
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auStackY_358 [32];
  TVector<double>_u_0 local_308;
  undefined4 uStack_2f0;
  undefined1 uStack_2ec;
  undefined2 uStack_2eb;
  undefined1 uStack_2e9;
  TVector<double> *local_2e8;
  TEnumAsByte<ECollisionChannel> *local_2e0;
  bool *local_2d8;
  FControlRigExecuteContext *local_2d0;
  TVector<double> *local_2c8;
  FCollisionShape local_2c0;
  TVector<double>_u_0 local_2b0;
  FCollisionResponseParams local_298;
  undefined1 local_278 [48];
  double dStack_248;
  double local_240;
  TVector<double> local_220 [3];
  int local_1d4;
  FWeakObjectPtr local_1c0;
  FWeakObjectPtr FStack_1b8;
  IActorInstanceManagerInterface *local_1b0;
  undefined8 uStack_1a8;
  FCollisionQueryParams local_178;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_358;
  *param_6 = false;
  uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (param_7->field0_0x0)._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (param_7->field0_0x0)._s_0.Y = (double)uVar7;
  (param_7->field0_0x0)._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_308._s_0.Z = __real_3ff0000000000000;
  (param_8->field0_0x0)._s_0.X = 0.0;
  (param_8->field0_0x0)._s_0.Y = 0.0;
  (param_8->field0_0x0)._s_0.Z = local_308._s_0.Z;
  local_2d8 = param_6;
  if (*(longlong *)&param_1->field_0xe0 == 0) {
    param_9->Hash = 0xffffffff;
  }
  else {
    iVar15 = *(int *)&param_1->field_0x1c;
    local_2e8 = param_3;
    local_2e0 = param_4;
    local_2d0 = param_1;
    local_2c8 = param_2;
    uVar11 = FCrc::MemCrc_DEPRECATED(param_2,0x18,0);
    uVar18 = iVar15 - uVar11 ^ uVar11 >> 0xd;
    uVar16 = (-0x61c88647 - uVar18) - uVar11 ^ uVar18 << 8;
    uVar17 = (uVar11 - uVar16) - uVar18 ^ uVar16 >> 0xd;
    uVar18 = (uVar18 - uVar17) - uVar16 ^ uVar17 >> 0xc;
    uVar11 = (uVar16 - uVar18) - uVar17 ^ uVar18 << 0x10;
    uVar17 = (uVar17 - uVar11) - uVar18 ^ uVar11 >> 5;
    uVar18 = (uVar18 - uVar17) - uVar11 ^ uVar17 >> 3;
    uVar16 = (uVar11 - uVar18) - uVar17 ^ uVar18 << 10;
    uVar11 = FCrc::MemCrc_DEPRECATED(local_2e8,0x18,0);
    uVar18 = ((uVar17 - uVar16) - uVar18 ^ uVar16 >> 0xf) - uVar11 ^ uVar11 >> 0xd;
    uVar16 = (-0x61c88647 - uVar18) - uVar11 ^ uVar18 << 8;
    uVar17 = (uVar11 - uVar16) - uVar18 ^ uVar16 >> 0xd;
    uVar18 = (uVar18 - uVar17) - uVar16 ^ uVar17 >> 0xc;
    uVar11 = (uVar16 - uVar18) - uVar17 ^ uVar18 << 0x10;
    uVar16 = (uVar17 - uVar11) - uVar18 ^ uVar11 >> 5;
    uVar17 = (uVar18 - uVar16) - uVar11 ^ uVar16 >> 3;
    uVar11 = (uVar11 - uVar17) - uVar16 ^ uVar17 << 10;
    bVar1 = local_2e0->Value;
    iVar15 = ((uVar16 - uVar11) - uVar17 ^ uVar11 >> 0xf) - (uint)bVar1;
    uVar11 = (-0x61c88647 - iVar15) - (uint)bVar1 ^ iVar15 * 0x100;
    uVar17 = (bVar1 - uVar11) - iVar15 ^ uVar11 >> 0xd;
    uVar16 = (iVar15 - uVar17) - uVar11 ^ uVar17 >> 0xc;
    uVar11 = (uVar11 - uVar16) - uVar17 ^ uVar16 << 0x10;
    uVar17 = (uVar17 - uVar11) - uVar16 ^ uVar11 >> 5;
    uVar16 = (uVar16 - uVar17) - uVar11 ^ uVar17 >> 3;
    uVar11 = (uVar11 - uVar16) - uVar17 ^ uVar16 << 10;
    uVar16 = ((uVar17 - uVar11) - uVar16 ^ uVar11 >> 0xf) - (int)param_5 ^ (uint)param_5 >> 0xd;
    uVar17 = (-0x61c88647 - uVar16) - (int)param_5 ^ uVar16 << 8;
    uVar11 = ((int)param_5 - uVar17) - uVar16 ^ uVar17 >> 0xd;
    uVar16 = (uVar16 - uVar11) - uVar17 ^ uVar11 >> 0xc;
    uVar17 = (uVar17 - uVar16) - uVar11 ^ uVar16 << 0x10;
    uVar11 = (uVar11 - uVar17) - uVar16 ^ uVar17 >> 5;
    uVar16 = (uVar16 - uVar11) - uVar17 ^ uVar11 >> 3;
    uVar17 = (uVar17 - uVar16) - uVar11 ^ uVar16 << 10;
    uVar11 = (uVar11 - uVar17) - uVar16 ^ uVar17 >> 0xf;
    if (param_9->Hash == uVar11) {
      *local_2d8 = param_9->bHit;
      dVar2 = (param_9->HitLocation).field0_0x0._s_0.Y;
      (param_7->field0_0x0)._s_0.X = (param_9->HitLocation).field0_0x0._s_0.X;
      (param_7->field0_0x0)._s_0.Y = dVar2;
      (param_7->field0_0x0)._s_0.Z = (param_9->HitLocation).field0_0x0._s_0.Z;
      dVar2 = (param_9->HitNormal).field0_0x0._s_0.Y;
      (param_8->field0_0x0)._s_0.X = (param_9->HitNormal).field0_0x0._s_0.X;
      (param_8->field0_0x0)._s_0.Y = dVar2;
      (param_8->field0_0x0)._s_0.Z = (param_9->HitNormal).field0_0x0._s_0.Z;
    }
    else {
      FCollisionQueryParams::FCollisionQueryParams(&local_178);
      pFVar9 = local_2d0;
      local_178.bTraceComplex = true;
      if (*(AActor **)&local_2d0->field_0xd8 == (AActor *)0x0) {
        pUVar12 = (UPrimitiveComponent *)
                  FRigVMExecuteContext::GetOwningComponent((FRigVMExecuteContext *)local_2d0);
        if (pUVar12 != (UPrimitiveComponent *)0x0) {
          pUVar13 = Z_Construct_UClass_UPrimitiveComponent_NoRegister();
          iVar15 = (int)pUVar13->_padding_;
          if ((iVar15 <= *(int *)(*(longlong *)&pUVar12->field_0x10 + 0x38)) &&
             ((longlong *)
              *(undefined1 **)
               (*(longlong *)(*(longlong *)&pUVar12->field_0x10 + 0x30) + (longlong)iVar15 * 8) ==
              &pUVar13->_padding_)) {
            FCollisionQueryParams::AddIgnoredComponent(&local_178,pUVar12);
          }
        }
      }
      else {
        FCollisionQueryParams::AddIgnoredActor(&local_178,*(AActor **)&local_2d0->field_0xd8);
      }
      FCollisionResponseContainer::FCollisionResponseContainer(&local_298.CollisionResponse);
      FCollisionResponseContainer::SetAllChannels(&local_298.CollisionResponse,ECR_Ignore);
      FCollisionResponseContainer::SetResponse
                (&local_298.CollisionResponse,ECC_WorldStatic,ECR_Block);
      local_2c0.field1_0x4.Box.HalfExtentX = param_5;
      local_2c0.ShapeType = Sphere;
      memset(local_278,0,0x100);
      dVar5 = *(double *)&pFVar9->field_0x88;
      local_1c0.ObjectIndex = 0;
      local_1c0.ObjectSerialNumber = 0;
      FStack_1b8.ObjectIndex = 0;
      FStack_1b8.ObjectSerialNumber = 0;
      uStack_2f0 = 0xffffffff;
      uStack_2eb = 0;
      uStack_2e9 = 0;
      uStack_2ec = 0;
      uStack_1a8._0_4_ = -1;
      uStack_1a8._4_1_ = Invalid;
      uStack_1a8._5_3_ = 0;
      local_278._4_4_ = 1.0;
      local_1d4 = -1;
      dVar53 = (local_2e8->field0_0x0)._s_0.X * *(double *)&pFVar9->field_0xb0;
      dVar56 = (local_2e8->field0_0x0)._s_0.Y * *(double *)&pFVar9->field_0xb8;
      auVar57._0_8_ = (local_2e8->field0_0x0)._s_0.Z * *(double *)&pFVar9->field_0xc0;
      auVar57._8_8_ = *(double *)&pFVar9->field_0xc8 * 0.0;
      local_1b0 = (IActorInstanceManagerInterface *)0x0;
      auVar22 = *(undefined1 (*) [16])&pFVar9->field_0x70;
      auVar46._8_4_ = SUB84(dVar56,0);
      auVar46._0_8_ = dVar53;
      uVar45 = (undefined4)((ulonglong)dVar56 >> 0x20);
      auVar46._12_4_ = uVar45;
      auVar30 = blendpd(auVar22,*(undefined1 (*) [16])&pFVar9->field_0x80,2);
      auVar47._0_8_ = auVar46._8_8_ * auVar22._0_8_ - auVar22._8_8_ * dVar53;
      auVar47._8_8_ = auVar57._0_8_ * auVar22._8_8_ - *(double *)&pFVar9->field_0x80 * dVar56;
      auVar22._8_4_ = SUB84(dVar56,0);
      auVar22._0_8_ = dVar53;
      auVar22._12_4_ = uVar45;
      auVar22 = blendpd(auVar22,auVar57,2);
      auVar31._0_8_ = auVar22._0_8_ * *(double *)&pFVar9->field_0x80 - auVar30._0_8_ * auVar57._0_8_
      ;
      auVar31._8_8_ = auVar22._8_8_ * *(double *)&pFVar9->field_0x88 - auVar30._8_8_ * auVar57._8_8_
      ;
      auVar22 = *(undefined1 (*) [16])&pFVar9->field_0x70;
      auVar30 = blendpd(auVar47,auVar31,2);
      dVar2 = auVar47._8_8_ + auVar47._8_8_;
      dVar3 = auVar31._0_8_ + auVar31._0_8_;
      uVar45 = (undefined4)((ulonglong)dVar3 >> 0x20);
      auVar48._0_8_ = auVar30._0_8_ + auVar30._0_8_;
      auVar48._8_8_ = auVar30._8_8_ + auVar30._8_8_;
      auVar40._8_4_ = SUB84(dVar3,0);
      auVar40._0_8_ = dVar2;
      auVar40._12_4_ = uVar45;
      auVar34._8_4_ = SUB84(dVar3,0);
      auVar34._0_8_ = dVar2;
      auVar34._12_4_ = uVar45;
      auVar30 = blendpd(auVar34,auVar48,2);
      auVar31 = blendpd(auVar22,*(undefined1 (*) [16])&pFVar9->field_0x80,2);
      auVar41._0_8_ = auVar40._8_8_ * auVar22._0_8_ - auVar22._8_8_ * dVar2;
      auVar41._8_8_ = auVar48._0_8_ * auVar22._8_8_ - *(double *)&pFVar9->field_0x80 * dVar3;
      auVar35._0_8_ = auVar30._0_8_ * *(double *)&pFVar9->field_0x80 - auVar31._0_8_ * auVar48._0_8_
      ;
      auVar35._8_8_ = auVar30._8_8_ * *(double *)&pFVar9->field_0x88 - auVar31._8_8_ * auVar48._8_8_
      ;
      auVar30._8_4_ = SUB84(auVar41._8_8_,0);
      auVar30._0_8_ = auVar41._0_8_;
      auVar30._12_4_ = (int)((ulonglong)auVar41._8_8_ >> 0x20);
      auVar22 = blendpd(auVar41,auVar35,2);
      dVar3 = dVar3 * dVar5 + dVar56 + auVar35._0_8_ + *(double *)&pFVar9->field_0x98;
      local_2b0._s_0.Z =
           auVar48._0_8_ * dVar5 + auVar57._0_8_ + auVar22._0_8_ + *(double *)&pFVar9->field_0xa0;
      local_2b0._8_4_ = SUB84(dVar3,0);
      local_2b0._0_8_ = dVar2 * dVar5 + dVar53 + auVar30._8_8_ + *(double *)&pFVar9->field_0x90;
      local_2b0._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
      dVar5 = *(double *)&pFVar9->field_0x88;
      auVar58._0_8_ = (local_2c8->field0_0x0)._s_0.Z * *(double *)&pFVar9->field_0xc0;
      auVar58._8_8_ = *(double *)&pFVar9->field_0xc8 * 0.0;
      dVar53 = *(double *)&pFVar9->field_0xb0 * (local_2c8->field0_0x0)._s_0.X;
      dVar56 = *(double *)&pFVar9->field_0xb8 * (local_2c8->field0_0x0)._s_0.Y;
      auVar22 = *(undefined1 (*) [16])&pFVar9->field_0x70;
      auVar31 = blendpd(auVar22,*(undefined1 (*) [16])&pFVar9->field_0x80,2);
      auVar49._8_4_ = SUB84(dVar56,0);
      auVar49._0_8_ = dVar53;
      uVar45 = (undefined4)((ulonglong)dVar56 >> 0x20);
      auVar49._12_4_ = uVar45;
      auVar50._0_8_ = auVar49._8_8_ * auVar22._0_8_ - auVar22._8_8_ * dVar53;
      auVar50._8_8_ = auVar58._0_8_ * auVar22._8_8_ - *(double *)&pFVar9->field_0x80 * dVar56;
      auVar23._8_4_ = SUB84(dVar56,0);
      auVar23._0_8_ = dVar53;
      auVar23._12_4_ = uVar45;
      auVar22 = blendpd(auVar23,auVar58,2);
      auVar24._0_8_ = auVar22._0_8_ * *(double *)&pFVar9->field_0x80 - auVar31._0_8_ * auVar58._0_8_
      ;
      auVar24._8_8_ = auVar22._8_8_ * *(double *)&pFVar9->field_0x88 - auVar31._8_8_ * auVar58._8_8_
      ;
      auVar22 = *(undefined1 (*) [16])&pFVar9->field_0x70;
      auVar31 = blendpd(auVar50,auVar24,2);
      dVar2 = auVar50._8_8_ + auVar50._8_8_;
      dVar3 = auVar24._0_8_ + auVar24._0_8_;
      uVar45 = (undefined4)((ulonglong)dVar3 >> 0x20);
      auVar51._0_8_ = auVar31._0_8_ + auVar31._0_8_;
      auVar51._8_8_ = auVar31._8_8_ + auVar31._8_8_;
      auVar42._8_4_ = SUB84(dVar3,0);
      auVar42._0_8_ = dVar2;
      auVar42._12_4_ = uVar45;
      auVar36._8_4_ = SUB84(dVar3,0);
      auVar36._0_8_ = dVar2;
      auVar36._12_4_ = uVar45;
      auVar30 = blendpd(auVar36,auVar51,2);
      auVar31 = blendpd(auVar22,*(undefined1 (*) [16])&pFVar9->field_0x80,2);
      auVar43._0_8_ = auVar42._8_8_ * auVar22._0_8_ - auVar22._8_8_ * dVar2;
      auVar43._8_8_ = auVar51._0_8_ * auVar22._8_8_ - *(double *)&pFVar9->field_0x80 * dVar3;
      auVar37._0_8_ = auVar30._0_8_ * *(double *)&pFVar9->field_0x80 - auVar31._0_8_ * auVar51._0_8_
      ;
      auVar37._8_8_ = auVar30._8_8_ * *(double *)&pFVar9->field_0x88 - auVar31._8_8_ * auVar51._8_8_
      ;
      auVar25._8_4_ = SUB84(auVar43._8_8_,0);
      auVar25._0_8_ = auVar43._0_8_;
      auVar25._12_4_ = (int)((ulonglong)auVar43._8_8_ >> 0x20);
      auVar22 = blendpd(auVar43,auVar37,2);
      dVar3 = dVar3 * dVar5 + dVar56 + auVar37._0_8_ + *(double *)&pFVar9->field_0x98;
      local_308._s_0.Z =
           auVar51._0_8_ * dVar5 + auVar58._0_8_ + auVar22._0_8_ + *(double *)&pFVar9->field_0xa0;
      local_308._8_4_ = SUB84(dVar3,0);
      local_308._0_8_ = dVar2 * dVar5 + dVar53 + auVar25._8_8_ + *(double *)&pFVar9->field_0x90;
      local_308._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
      bVar10 = UWorld::SweepSingleByChannel
                         (*(UWorld **)&pFVar9->field_0xe0,(FHitResult *)local_278,
                          (TVector<double> *)&local_308._s_0,(TVector<double> *)&local_2b0._s_0,
                          &UE::Math::TQuat<double>::Identity,(uint)local_2e0->Value,&local_2c0,
                          &local_178,&local_298);
      pbVar8 = local_2d8;
      *local_2d8 = bVar10;
      if (bVar10) {
        dVar2 = *(double *)&pFVar9->field_0x70 *
                GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
        dVar3 = *(double *)&pFVar9->field_0x78 *
                GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
        uVar45 = (undefined4)((ulonglong)dVar3 >> 0x20);
        auVar52._0_8_ =
             *(double *)&pFVar9->field_0x80 *
             GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
        auVar52._8_8_ =
             *(double *)&pFVar9->field_0x88 *
             GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
        auVar38._8_4_ = SUB84(dVar3,0);
        auVar38._0_8_ = dVar2;
        auVar38._12_4_ = uVar45;
        local_240 = local_240 - *(double *)&pFVar9->field_0xa0;
        auVar44._8_4_ = SUB84(dVar3,0);
        auVar44._0_8_ = dVar2;
        auVar44._12_4_ = uVar45;
        dVar39 = auVar38._8_8_;
        auVar31 = blendpd(auVar44,auVar52,2);
        dVar56 = (double)local_278._40_8_ - *(double *)&pFVar9->field_0x90;
        dStack_248 = dStack_248 - *(double *)&pFVar9->field_0x98;
        uVar45 = (undefined4)((ulonglong)dStack_248 >> 0x20);
        auVar26._8_4_ = SUB84(auVar52._0_8_,0);
        auVar26._0_8_ = dVar39;
        auVar26._12_4_ = (int)((ulonglong)auVar52._0_8_ >> 0x20);
        auVar64._8_4_ = SUB84(dStack_248,0);
        auVar64._0_8_ = dVar56;
        auVar64._12_4_ = uVar45;
        auVar32._8_4_ = SUB84(dStack_248,0);
        auVar32._0_8_ = dVar56;
        auVar32._12_4_ = uVar45;
        auVar6._8_8_ = 0;
        auVar6._0_8_ = local_240;
        auVar22 = blendpd(auVar32,auVar6,2);
        auVar65._0_8_ = auVar64._8_8_ * dVar2 - dVar39 * dVar56;
        auVar65._8_8_ = local_240 * dVar3 - auVar26._8_8_ * dStack_248;
        auVar33._0_8_ = auVar22._0_8_ * auVar52._0_8_ - auVar31._0_8_ * local_240;
        auVar33._8_8_ = auVar22._8_8_ * auVar52._8_8_ - auVar31._8_8_ * 0.0;
        dVar5 = auVar65._8_8_ + auVar65._8_8_;
        dVar53 = auVar33._0_8_ + auVar33._0_8_;
        uVar45 = SUB84(dVar53,0);
        uVar61 = (undefined4)((ulonglong)dVar53 >> 0x20);
        auVar22 = blendpd(auVar65,auVar33,2);
        auVar62._8_4_ = uVar45;
        auVar62._0_8_ = dVar5;
        auVar62._12_4_ = uVar61;
        auVar27._8_4_ = uVar45;
        auVar27._0_8_ = dVar5;
        auVar27._12_4_ = uVar61;
        auVar59._8_4_ = uVar45;
        auVar59._0_8_ = dVar5;
        auVar59._12_4_ = uVar61;
        auVar66._0_8_ = auVar22._0_8_ + auVar22._0_8_;
        auVar66._8_8_ = auVar22._8_8_ + auVar22._8_8_;
        auVar30 = blendpd(auVar59,auVar66,2);
        auVar63._0_8_ = auVar62._8_8_ * dVar2 - dVar5 * dVar39;
        auVar63._8_8_ = auVar66._0_8_ * dVar3 - auVar27._8_8_ * auVar52._0_8_;
        auVar28._8_4_ = SUB84(auVar66._8_8_,0);
        auVar28._0_8_ = auVar66._0_8_;
        auVar28._12_4_ = (int)((ulonglong)auVar66._8_8_ >> 0x20);
        auVar22 = *(undefined1 (*) [16])&pFVar9->field_0xb0;
        auVar60._0_8_ = auVar30._0_8_ * auVar52._0_8_ - auVar66._0_8_ * auVar31._0_8_;
        auVar60._8_8_ = auVar30._8_8_ * auVar52._8_8_ - auVar28._8_8_ * auVar31._8_8_;
        auVar31 = *(undefined1 (*) [16])&pFVar9->field_0xc0;
        auVar54._0_8_ =
             (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ & auVar22._4_4_,
                              (uint)__xmm_7fffffffffffffff7fffffffffffffff & auVar22._0_4_);
        auVar54._8_4_ = _UNK_15061cc88 & auVar22._8_4_;
        auVar54._12_4_ = _UNK_15061cc8c & auVar22._12_4_;
        lVar19 = -(ulonglong)
                  ((double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ & auVar31._4_4_,
                                    (uint)__xmm_7fffffffffffffff7fffffffffffffff & auVar31._0_4_) <=
                  (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
        auVar22 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar22);
        lVar20 = -(ulonglong)
                  (auVar54._0_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[0]);
        lVar21 = -(ulonglong)
                  (auVar54._8_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[1]);
        auVar55._0_8_ =
             (double)CONCAT44(~(uint)((ulonglong)lVar20 >> 0x20) & auVar22._4_4_,
                              ~(uint)lVar20 & auVar22._0_4_);
        auVar55._8_4_ = ~(uint)lVar21 & auVar22._8_4_;
        auVar55._12_4_ = ~(uint)((ulonglong)lVar21 >> 0x20) & auVar22._12_4_;
        auVar29._8_4_ = SUB84(auVar63._8_8_,0);
        auVar29._0_8_ = auVar63._0_8_;
        auVar29._12_4_ = (int)((ulonglong)auVar63._8_8_ >> 0x20);
        auVar4._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
        auVar4._0_8_ = auVar31._0_8_;
        auVar4._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
        auVar22 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar4);
        auVar31 = blendpd(auVar63,auVar60,2);
        (param_7->field0_0x0)._s_0.X =
             auVar55._0_8_ * (dVar5 * auVar52._8_8_ + dVar56 + auVar29._8_8_);
        (param_7->field0_0x0)._s_0.Y =
             auVar55._8_8_ * (dVar53 * auVar52._8_8_ + dStack_248 + auVar60._0_8_);
        (param_7->field0_0x0)._s_0.Z =
             (double)CONCAT44(~(uint)((ulonglong)lVar19 >> 0x20) & auVar22._4_4_,
                              ~(uint)lVar19 & auVar22._0_4_) *
             (auVar66._0_8_ * auVar52._8_8_ + local_240 + auVar31._0_8_);
        pTVar14 = UE::Math::TTransform<double>::InverseTransformVector
                            ((TTransform<double> *)&pFVar9->field_0x70,
                             (TVector<double> *)&local_308._s_0,local_220);
        dVar2 = (pTVar14->field0_0x0)._s_0.Y;
        (param_8->field0_0x0)._s_0.X = (pTVar14->field0_0x0)._s_0.X;
        (param_8->field0_0x0)._s_0.Y = dVar2;
        (param_8->field0_0x0)._s_0.Z = (pTVar14->field0_0x0)._s_0.Z;
      }
      param_9->Hash = uVar11;
      param_9->bHit = *pbVar8;
      dVar2 = (param_7->field0_0x0)._s_0.Y;
      (param_9->HitLocation).field0_0x0._s_0.X = (param_7->field0_0x0)._s_0.X;
      (param_9->HitLocation).field0_0x0._s_0.Y = dVar2;
      (param_9->HitLocation).field0_0x0._s_0.Z = (param_7->field0_0x0)._s_0.Z;
      dVar2 = (param_8->field0_0x0)._s_0.Y;
      (param_9->HitNormal).field0_0x0._s_0.X = (param_8->field0_0x0)._s_0.X;
      (param_9->HitNormal).field0_0x0._s_0.Y = dVar2;
      (param_9->HitNormal).field0_0x0._s_0.Z = (param_8->field0_0x0)._s_0.Z;
      if (local_178.IgnoreSourceObjects.AllocatorInstance.SecondaryData !=
          (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_178.IgnoreSourceObjects.AllocatorInstance.SecondaryData);
      }
      if (local_178.IgnoreComponents.AllocatorInstance.SecondaryData !=
          (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_178.IgnoreComponents.AllocatorInstance.SecondaryData);
      }
    }
  }
  return;
}

