// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 6

// StaticStruct @ 14a488e20

UScriptStruct * __cdecl FRigUnit_SphereTraceByTraceChannel::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_SphereTraceByTraceChannel.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_SphereTraceByTraceChannel.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_SphereTraceByTraceChannel,
                         (UObject *)pUVar1,L"RigUnit_SphereTraceByTraceChannel");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigUnit_SphereTraceByTraceChannel_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_SphereTraceByTraceChannel.
                    OuterSingleton,&local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_SphereTraceByTraceChannel.OuterSingleton;
}

// Execute @ 14a52e200

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_SphereTraceByTraceChannel::Execute
          (FRigUnit_SphereTraceByTraceChannel *this,FControlRigExecuteContext *param_1)

{
  StaticExecute(param_1,&this->Start,&this->End,&this->TraceChannel,this->Radius,&this->bHit,
                &this->HitLocation,&this->HitNormal,&this->WorkData);
  return;
}

// Execute @ 14a52e270

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_SphereTraceByTraceChannel::Execute(FRigUnit_SphereTraceByTraceChannel *this)

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
  StaticExecute((FControlRigExecuteContext *)local_268,&this->Start,&this->End,&this->TraceChannel,
                this->Radius,&this->bHit,&this->HitLocation,&this->HitNormal,&this->WorkData);
  FControlRigExecuteContext::~FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  return;
}

// GetExecuteContextStruct @ 14a5312a0

UScriptStruct * __thiscall
FRigUnit_SphereTraceByTraceChannel::GetExecuteContextStruct
          (FRigUnit_SphereTraceByTraceChannel *this)

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

// RigVMExecute @ 14a556fe0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_SphereTraceByTraceChannel::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  float fVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  TVector<double> *pTVar5;
  TVector<double> *pTVar6;
  TEnumAsByte<ETraceTypeQuery> *pTVar7;
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
    pTVar7 = (TEnumAsByte<ETraceTypeQuery> *)pFVar8[2].Ptr;
  }
  else {
    pTVar7 = (TEnumAsByte<ETraceTypeQuery> *)
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

// StaticExecute @ 14a597530

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
FRigUnit_SphereTraceByTraceChannel::StaticExecute
          (FControlRigExecuteContext *param_1,TVector<double> *param_2,TVector<double> *param_3,
          TEnumAsByte<ETraceTypeQuery> *param_4,float param_5,bool *param_6,TVector<double> *param_7
          ,TVector<double> *param_8,FRigUnit_SphereTrace_WorkData *param_9)

{
  byte bVar1;
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  undefined1 auVar7 [16];
  undefined8 uVar8;
  bool *pbVar9;
  FControlRigExecuteContext *pFVar10;
  bool bVar11;
  uint uVar12;
  ECollisionChannel EVar13;
  UPrimitiveComponent *pUVar14;
  UClass *pUVar15;
  TVector<double> *pTVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
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
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined4 uVar46;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  double dVar54;
  double dVar57;
  double dVar58;
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined4 uVar63;
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auStackY_348 [32];
  TVector<double>_u_0 local_2e8;
  undefined4 uStack_2d0;
  undefined1 uStack_2cc;
  undefined2 uStack_2cb;
  undefined1 uStack_2c9;
  TVector<double> *local_2c8;
  bool *local_2c0;
  FControlRigExecuteContext *local_2b8;
  TVector<double> *local_2b0;
  FCollisionShape local_2a8;
  TVector<double>_u_0 local_298;
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
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_348;
  *param_6 = false;
  uVar8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (param_7->field0_0x0)._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (param_7->field0_0x0)._s_0.Y = (double)uVar8;
  (param_7->field0_0x0)._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_2e8._s_0.Z = __real_3ff0000000000000;
  (param_8->field0_0x0)._s_0.X = 0.0;
  (param_8->field0_0x0)._s_0.Y = 0.0;
  (param_8->field0_0x0)._s_0.Z = local_2e8._s_0.Z;
  local_2c0 = param_6;
  if (*(longlong *)&param_1->field_0xe0 == 0) {
    param_9->Hash = 0xffffffff;
  }
  else {
    iVar20 = *(int *)&param_1->field_0x1c;
    local_2c8 = param_3;
    local_2b8 = param_1;
    local_2b0 = param_2;
    uVar12 = FCrc::MemCrc_DEPRECATED(param_2,0x18,0);
    uVar19 = iVar20 - uVar12 ^ uVar12 >> 0xd;
    uVar17 = (-0x61c88647 - uVar19) - uVar12 ^ uVar19 << 8;
    uVar18 = (uVar12 - uVar17) - uVar19 ^ uVar17 >> 0xd;
    uVar19 = (uVar19 - uVar18) - uVar17 ^ uVar18 >> 0xc;
    uVar12 = (uVar17 - uVar19) - uVar18 ^ uVar19 << 0x10;
    uVar18 = (uVar18 - uVar12) - uVar19 ^ uVar12 >> 5;
    uVar19 = (uVar19 - uVar18) - uVar12 ^ uVar18 >> 3;
    uVar17 = (uVar12 - uVar19) - uVar18 ^ uVar19 << 10;
    uVar12 = FCrc::MemCrc_DEPRECATED(local_2c8,0x18,0);
    uVar18 = ((uVar18 - uVar17) - uVar19 ^ uVar17 >> 0xf) - uVar12 ^ uVar12 >> 0xd;
    uVar17 = (-0x61c88647 - uVar18) - uVar12 ^ uVar18 << 8;
    uVar19 = (uVar12 - uVar17) - uVar18 ^ uVar17 >> 0xd;
    uVar18 = (uVar18 - uVar19) - uVar17 ^ uVar19 >> 0xc;
    uVar12 = (uVar17 - uVar18) - uVar19 ^ uVar18 << 0x10;
    uVar19 = (uVar19 - uVar12) - uVar18 ^ uVar12 >> 5;
    uVar17 = (uVar18 - uVar19) - uVar12 ^ uVar19 >> 3;
    uVar12 = (uVar12 - uVar17) - uVar19 ^ uVar17 << 10;
    bVar1 = param_4->Value;
    iVar20 = ((uVar19 - uVar12) - uVar17 ^ uVar12 >> 0xf) - (uint)bVar1;
    uVar12 = (-0x61c88647 - iVar20) - (uint)bVar1 ^ iVar20 * 0x100;
    uVar17 = (bVar1 - uVar12) - iVar20 ^ uVar12 >> 0xd;
    uVar18 = (iVar20 - uVar17) - uVar12 ^ uVar17 >> 0xc;
    uVar12 = (uVar12 - uVar18) - uVar17 ^ uVar18 << 0x10;
    uVar17 = (uVar17 - uVar12) - uVar18 ^ uVar12 >> 5;
    uVar18 = (uVar18 - uVar17) - uVar12 ^ uVar17 >> 3;
    uVar12 = (uVar12 - uVar18) - uVar17 ^ uVar18 << 10;
    uVar12 = ((uVar17 - uVar12) - uVar18 ^ uVar12 >> 0xf) - (int)param_5 ^ (uint)param_5 >> 0xd;
    uVar18 = (-0x61c88647 - uVar12) - (int)param_5 ^ uVar12 << 8;
    uVar17 = ((int)param_5 - uVar18) - uVar12 ^ uVar18 >> 0xd;
    uVar12 = (uVar12 - uVar17) - uVar18 ^ uVar17 >> 0xc;
    uVar18 = (uVar18 - uVar12) - uVar17 ^ uVar12 << 0x10;
    uVar17 = (uVar17 - uVar18) - uVar12 ^ uVar18 >> 5;
    uVar12 = (uVar12 - uVar17) - uVar18 ^ uVar17 >> 3;
    uVar18 = (uVar18 - uVar12) - uVar17 ^ uVar12 << 10;
    uVar12 = (uVar17 - uVar18) - uVar12 ^ uVar18 >> 0xf;
    if (param_9->Hash == uVar12) {
      *local_2c0 = param_9->bHit;
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
      EVar13 = UEngineTypes::ConvertToCollisionChannel((uint)bVar1);
      local_2a8.field1_0x4.Box.HalfExtentX = param_5;
      local_2a8.ShapeType = Sphere;
      FCollisionQueryParams::FCollisionQueryParams(&local_178);
      pFVar10 = local_2b8;
      local_178.bTraceComplex = true;
      if (*(AActor **)&local_2b8->field_0xd8 == (AActor *)0x0) {
        pUVar14 = (UPrimitiveComponent *)
                  FRigVMExecuteContext::GetOwningComponent((FRigVMExecuteContext *)local_2b8);
        if (pUVar14 != (UPrimitiveComponent *)0x0) {
          pUVar15 = Z_Construct_UClass_UPrimitiveComponent_NoRegister();
          iVar20 = (int)pUVar15->_padding_;
          if ((iVar20 <= *(int *)(*(longlong *)&pUVar14->field_0x10 + 0x38)) &&
             ((longlong *)
              *(undefined1 **)
               (*(longlong *)(*(longlong *)&pUVar14->field_0x10 + 0x30) + (longlong)iVar20 * 8) ==
              &pUVar15->_padding_)) {
            FCollisionQueryParams::AddIgnoredComponent(&local_178,pUVar14);
          }
        }
      }
      else {
        FCollisionQueryParams::AddIgnoredActor(&local_178,*(AActor **)&local_2b8->field_0xd8);
      }
      memset(local_278,0,0x100);
      dVar5 = *(double *)&pFVar10->field_0x88;
      local_1c0.ObjectIndex = 0;
      local_1c0.ObjectSerialNumber = 0;
      FStack_1b8.ObjectIndex = 0;
      FStack_1b8.ObjectSerialNumber = 0;
      uStack_2d0 = 0xffffffff;
      uStack_2cb = 0;
      uStack_2c9 = 0;
      uStack_2cc = 0;
      uStack_1a8._0_4_ = -1;
      uStack_1a8._4_1_ = Invalid;
      uStack_1a8._5_3_ = 0;
      local_278._4_4_ = 1.0;
      local_1d4 = -1;
      dVar54 = (local_2c8->field0_0x0)._s_0.X * *(double *)&pFVar10->field_0xb0;
      dVar57 = (local_2c8->field0_0x0)._s_0.Y * *(double *)&pFVar10->field_0xb8;
      auVar59._0_8_ = (local_2c8->field0_0x0)._s_0.Z * *(double *)&pFVar10->field_0xc0;
      auVar59._8_8_ = *(double *)&pFVar10->field_0xc8 * 0.0;
      local_1b0 = (IActorInstanceManagerInterface *)0x0;
      auVar24 = *(undefined1 (*) [16])&pFVar10->field_0x70;
      auVar47._8_4_ = SUB84(dVar57,0);
      auVar47._0_8_ = dVar54;
      uVar46 = (undefined4)((ulonglong)dVar57 >> 0x20);
      auVar47._12_4_ = uVar46;
      auVar31 = blendpd(auVar24,*(undefined1 (*) [16])&pFVar10->field_0x80,2);
      auVar48._0_8_ = auVar47._8_8_ * auVar24._0_8_ - auVar24._8_8_ * dVar54;
      auVar48._8_8_ = auVar59._0_8_ * auVar24._8_8_ - *(double *)&pFVar10->field_0x80 * dVar57;
      auVar24._8_4_ = SUB84(dVar57,0);
      auVar24._0_8_ = dVar54;
      auVar24._12_4_ = uVar46;
      auVar24 = blendpd(auVar24,auVar59,2);
      auVar32._0_8_ =
           auVar24._0_8_ * *(double *)&pFVar10->field_0x80 - auVar31._0_8_ * auVar59._0_8_;
      auVar32._8_8_ =
           auVar24._8_8_ * *(double *)&pFVar10->field_0x88 - auVar31._8_8_ * auVar59._8_8_;
      auVar24 = *(undefined1 (*) [16])&pFVar10->field_0x70;
      auVar31 = blendpd(auVar48,auVar32,2);
      dVar2 = auVar48._8_8_ + auVar48._8_8_;
      dVar3 = auVar32._0_8_ + auVar32._0_8_;
      uVar46 = (undefined4)((ulonglong)dVar3 >> 0x20);
      auVar49._0_8_ = auVar31._0_8_ + auVar31._0_8_;
      auVar49._8_8_ = auVar31._8_8_ + auVar31._8_8_;
      auVar41._8_4_ = SUB84(dVar3,0);
      auVar41._0_8_ = dVar2;
      auVar41._12_4_ = uVar46;
      auVar35._8_4_ = SUB84(dVar3,0);
      auVar35._0_8_ = dVar2;
      auVar35._12_4_ = uVar46;
      auVar36 = blendpd(auVar35,auVar49,2);
      auVar32 = blendpd(auVar24,*(undefined1 (*) [16])&pFVar10->field_0x80,2);
      dVar6 = *(double *)&pFVar10->field_0x88;
      auVar42._0_8_ = auVar41._8_8_ * auVar24._0_8_ - auVar24._8_8_ * dVar2;
      auVar42._8_8_ = auVar49._0_8_ * auVar24._8_8_ - *(double *)&pFVar10->field_0x80 * dVar3;
      auVar31._8_4_ = SUB84(auVar42._8_8_,0);
      auVar31._0_8_ = auVar42._0_8_;
      auVar31._12_4_ = (int)((ulonglong)auVar42._8_8_ >> 0x20);
      auVar60._0_8_ = (local_2b0->field0_0x0)._s_0.Z * *(double *)&pFVar10->field_0xc0;
      auVar60._8_8_ = *(double *)&pFVar10->field_0xc8 * 0.0;
      auVar37._0_8_ =
           auVar36._0_8_ * *(double *)&pFVar10->field_0x80 - auVar32._0_8_ * auVar49._0_8_;
      auVar37._8_8_ =
           auVar36._8_8_ * *(double *)&pFVar10->field_0x88 - auVar32._8_8_ * auVar49._8_8_;
      dVar3 = dVar3 * dVar5 + dVar57 + auVar37._0_8_ + *(double *)&pFVar10->field_0x98;
      auVar32 = blendpd(auVar42,auVar37,2);
      dVar57 = *(double *)&pFVar10->field_0xb0 * (local_2b0->field0_0x0)._s_0.X;
      dVar58 = *(double *)&pFVar10->field_0xb8 * (local_2b0->field0_0x0)._s_0.Y;
      auVar24 = *(undefined1 (*) [16])&pFVar10->field_0x70;
      local_298._s_0.Z =
           auVar49._0_8_ * dVar5 + auVar59._0_8_ + auVar32._0_8_ + *(double *)&pFVar10->field_0xa0;
      local_298._8_4_ = SUB84(dVar3,0);
      local_298._0_8_ = dVar2 * dVar5 + dVar54 + auVar31._8_8_ + *(double *)&pFVar10->field_0x90;
      local_298._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
      auVar32 = blendpd(auVar24,*(undefined1 (*) [16])&pFVar10->field_0x80,2);
      auVar50._8_4_ = SUB84(dVar58,0);
      auVar50._0_8_ = dVar57;
      uVar46 = (undefined4)((ulonglong)dVar58 >> 0x20);
      auVar50._12_4_ = uVar46;
      auVar51._0_8_ = auVar50._8_8_ * auVar24._0_8_ - auVar24._8_8_ * dVar57;
      auVar51._8_8_ = auVar60._0_8_ * auVar24._8_8_ - *(double *)&pFVar10->field_0x80 * dVar58;
      auVar36._8_4_ = SUB84(dVar58,0);
      auVar36._0_8_ = dVar57;
      auVar36._12_4_ = uVar46;
      auVar24 = blendpd(auVar36,auVar60,2);
      auVar25._0_8_ =
           auVar24._0_8_ * *(double *)&pFVar10->field_0x80 - auVar32._0_8_ * auVar60._0_8_;
      auVar25._8_8_ =
           auVar24._8_8_ * *(double *)&pFVar10->field_0x88 - auVar32._8_8_ * auVar60._8_8_;
      auVar24 = *(undefined1 (*) [16])&pFVar10->field_0x70;
      auVar32 = blendpd(auVar51,auVar25,2);
      dVar2 = auVar51._8_8_ + auVar51._8_8_;
      dVar3 = auVar25._0_8_ + auVar25._0_8_;
      uVar46 = (undefined4)((ulonglong)dVar3 >> 0x20);
      auVar52._0_8_ = auVar32._0_8_ + auVar32._0_8_;
      auVar52._8_8_ = auVar32._8_8_ + auVar32._8_8_;
      auVar43._8_4_ = SUB84(dVar3,0);
      auVar43._0_8_ = dVar2;
      auVar43._12_4_ = uVar46;
      auVar38._8_4_ = SUB84(dVar3,0);
      auVar38._0_8_ = dVar2;
      auVar38._12_4_ = uVar46;
      auVar31 = blendpd(auVar38,auVar52,2);
      auVar32 = blendpd(auVar24,*(undefined1 (*) [16])&pFVar10->field_0x80,2);
      auVar44._0_8_ = auVar43._8_8_ * auVar24._0_8_ - auVar24._8_8_ * dVar2;
      auVar44._8_8_ = auVar52._0_8_ * auVar24._8_8_ - *(double *)&pFVar10->field_0x80 * dVar3;
      auVar39._0_8_ =
           auVar31._0_8_ * *(double *)&pFVar10->field_0x80 - auVar32._0_8_ * auVar52._0_8_;
      auVar39._8_8_ =
           auVar31._8_8_ * *(double *)&pFVar10->field_0x88 - auVar32._8_8_ * auVar52._8_8_;
      auVar26._8_4_ = SUB84(auVar44._8_8_,0);
      auVar26._0_8_ = auVar44._0_8_;
      auVar26._12_4_ = (int)((ulonglong)auVar44._8_8_ >> 0x20);
      auVar24 = blendpd(auVar44,auVar39,2);
      dVar3 = dVar3 * dVar6 + dVar58 + auVar39._0_8_ + *(double *)&pFVar10->field_0x98;
      local_2e8._s_0.Z =
           auVar52._0_8_ * dVar6 + auVar60._0_8_ + auVar24._0_8_ + *(double *)&pFVar10->field_0xa0;
      local_2e8._8_4_ = SUB84(dVar3,0);
      local_2e8._0_8_ = dVar2 * dVar6 + dVar57 + auVar26._8_8_ + *(double *)&pFVar10->field_0x90;
      local_2e8._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
      bVar11 = UWorld::SweepSingleByChannel
                         (*(UWorld **)&pFVar10->field_0xe0,(FHitResult *)local_278,
                          (TVector<double> *)&local_2e8._s_0,(TVector<double> *)&local_298._s_0,
                          &UE::Math::TQuat<double>::Identity,EVar13,&local_2a8,&local_178,
                          &FCollisionResponseParams::DefaultResponseParam);
      pbVar9 = local_2c0;
      *local_2c0 = bVar11;
      if (bVar11) {
        dVar2 = *(double *)&pFVar10->field_0x70 *
                GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
        dVar3 = *(double *)&pFVar10->field_0x78 *
                GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
        uVar46 = (undefined4)((ulonglong)dVar3 >> 0x20);
        auVar53._0_8_ =
             *(double *)&pFVar10->field_0x80 *
             GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
        auVar53._8_8_ =
             *(double *)&pFVar10->field_0x88 *
             GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
        auVar40._8_4_ = SUB84(dVar3,0);
        auVar40._0_8_ = dVar2;
        auVar40._12_4_ = uVar46;
        local_240 = local_240 - *(double *)&pFVar10->field_0xa0;
        auVar45._8_4_ = SUB84(dVar3,0);
        auVar45._0_8_ = dVar2;
        auVar45._12_4_ = uVar46;
        dVar57 = auVar40._8_8_;
        auVar32 = blendpd(auVar45,auVar53,2);
        dVar54 = (double)local_278._40_8_ - *(double *)&pFVar10->field_0x90;
        dStack_248 = dStack_248 - *(double *)&pFVar10->field_0x98;
        uVar46 = (undefined4)((ulonglong)dStack_248 >> 0x20);
        auVar27._8_4_ = SUB84(auVar53._0_8_,0);
        auVar27._0_8_ = dVar57;
        auVar27._12_4_ = (int)((ulonglong)auVar53._0_8_ >> 0x20);
        auVar66._8_4_ = SUB84(dStack_248,0);
        auVar66._0_8_ = dVar54;
        auVar66._12_4_ = uVar46;
        auVar33._8_4_ = SUB84(dStack_248,0);
        auVar33._0_8_ = dVar54;
        auVar33._12_4_ = uVar46;
        auVar7._8_8_ = 0;
        auVar7._0_8_ = local_240;
        auVar24 = blendpd(auVar33,auVar7,2);
        auVar67._0_8_ = auVar66._8_8_ * dVar2 - dVar57 * dVar54;
        auVar67._8_8_ = local_240 * dVar3 - auVar27._8_8_ * dStack_248;
        auVar34._0_8_ = auVar24._0_8_ * auVar53._0_8_ - auVar32._0_8_ * local_240;
        auVar34._8_8_ = auVar24._8_8_ * auVar53._8_8_ - auVar32._8_8_ * 0.0;
        dVar5 = auVar67._8_8_ + auVar67._8_8_;
        dVar6 = auVar34._0_8_ + auVar34._0_8_;
        uVar46 = SUB84(dVar6,0);
        uVar63 = (undefined4)((ulonglong)dVar6 >> 0x20);
        auVar24 = blendpd(auVar67,auVar34,2);
        auVar64._8_4_ = uVar46;
        auVar64._0_8_ = dVar5;
        auVar64._12_4_ = uVar63;
        auVar28._8_4_ = uVar46;
        auVar28._0_8_ = dVar5;
        auVar28._12_4_ = uVar63;
        auVar61._8_4_ = uVar46;
        auVar61._0_8_ = dVar5;
        auVar61._12_4_ = uVar63;
        auVar68._0_8_ = auVar24._0_8_ + auVar24._0_8_;
        auVar68._8_8_ = auVar24._8_8_ + auVar24._8_8_;
        auVar31 = blendpd(auVar61,auVar68,2);
        auVar65._0_8_ = auVar64._8_8_ * dVar2 - dVar5 * dVar57;
        auVar65._8_8_ = auVar68._0_8_ * dVar3 - auVar28._8_8_ * auVar53._0_8_;
        auVar29._8_4_ = SUB84(auVar68._8_8_,0);
        auVar29._0_8_ = auVar68._0_8_;
        auVar29._12_4_ = (int)((ulonglong)auVar68._8_8_ >> 0x20);
        auVar24 = *(undefined1 (*) [16])&pFVar10->field_0xb0;
        auVar62._0_8_ = auVar31._0_8_ * auVar53._0_8_ - auVar68._0_8_ * auVar32._0_8_;
        auVar62._8_8_ = auVar31._8_8_ * auVar53._8_8_ - auVar29._8_8_ * auVar32._8_8_;
        auVar32 = *(undefined1 (*) [16])&pFVar10->field_0xc0;
        auVar55._0_8_ =
             (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ & auVar24._4_4_,
                              (uint)__xmm_7fffffffffffffff7fffffffffffffff & auVar24._0_4_);
        auVar55._8_4_ = _UNK_15061cc88 & auVar24._8_4_;
        auVar55._12_4_ = _UNK_15061cc8c & auVar24._12_4_;
        lVar21 = -(ulonglong)
                  ((double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ & auVar32._4_4_,
                                    (uint)__xmm_7fffffffffffffff7fffffffffffffff & auVar32._0_4_) <=
                  (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
        auVar24 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar24);
        lVar22 = -(ulonglong)
                  (auVar55._0_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[0]);
        lVar23 = -(ulonglong)
                  (auVar55._8_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[1]);
        auVar56._0_8_ =
             (double)CONCAT44(~(uint)((ulonglong)lVar22 >> 0x20) & auVar24._4_4_,
                              ~(uint)lVar22 & auVar24._0_4_);
        auVar56._8_4_ = ~(uint)lVar23 & auVar24._8_4_;
        auVar56._12_4_ = ~(uint)((ulonglong)lVar23 >> 0x20) & auVar24._12_4_;
        auVar30._8_4_ = SUB84(auVar65._8_8_,0);
        auVar30._0_8_ = auVar65._0_8_;
        auVar30._12_4_ = (int)((ulonglong)auVar65._8_8_ >> 0x20);
        auVar4._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
        auVar4._0_8_ = auVar32._0_8_;
        auVar4._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
        auVar24 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar4);
        auVar32 = blendpd(auVar65,auVar62,2);
        (param_7->field0_0x0)._s_0.X =
             auVar56._0_8_ * (dVar5 * auVar53._8_8_ + dVar54 + auVar30._8_8_);
        (param_7->field0_0x0)._s_0.Y =
             auVar56._8_8_ * (dVar6 * auVar53._8_8_ + dStack_248 + auVar62._0_8_);
        (param_7->field0_0x0)._s_0.Z =
             (double)CONCAT44(~(uint)((ulonglong)lVar21 >> 0x20) & auVar24._4_4_,
                              ~(uint)lVar21 & auVar24._0_4_) *
             (auVar68._0_8_ * auVar53._8_8_ + local_240 + auVar32._0_8_);
        pTVar16 = UE::Math::TTransform<double>::InverseTransformVector
                            ((TTransform<double> *)&pFVar10->field_0x70,
                             (TVector<double> *)&local_2e8._s_0,local_220);
        dVar2 = (pTVar16->field0_0x0)._s_0.Y;
        (param_8->field0_0x0)._s_0.X = (pTVar16->field0_0x0)._s_0.X;
        (param_8->field0_0x0)._s_0.Y = dVar2;
        (param_8->field0_0x0)._s_0.Z = (pTVar16->field0_0x0)._s_0.Z;
      }
      param_9->Hash = uVar12;
      param_9->bHit = *pbVar9;
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

