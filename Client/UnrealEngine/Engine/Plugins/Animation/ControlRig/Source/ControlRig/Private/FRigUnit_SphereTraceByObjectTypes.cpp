// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 6

// StaticStruct @ 14a48c640

UScriptStruct * __cdecl FRigUnit_SphereTraceByObjectTypes::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_SphereTraceByObjectTypes.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_SphereTraceByObjectTypes.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_SphereTraceByObjectTypes,
                         (UObject *)pUVar1,L"RigUnit_SphereTraceByObjectTypes");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigUnit_SphereTraceByObjectTypes_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_SphereTraceByObjectTypes.
                    OuterSingleton,&local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_SphereTraceByObjectTypes.OuterSingleton;
}

// GetExecuteContextStruct @ 14a48c6c0

UScriptStruct * __thiscall
FRigUnit_SphereTraceByObjectTypes::GetExecuteContextStruct(FRigUnit_SphereTraceByObjectTypes *this)

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

// Execute @ 14a48cdb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FRigUnit_SphereTraceByObjectTypes::Execute(FRigUnit_SphereTraceByObjectTypes *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 auStackY_2c8 [32];
  TArrayView<TEnumAsByte<EObjectTypeQuery>_const_,int> local_278;
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
  local_278.DataPtr = (TEnumAsByte<EObjectTypeQuery> *)(this->ObjectTypes).AllocatorInstance.Data;
  iVar1 = (this->ObjectTypes).ArrayNum;
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
  StaticExecute((FControlRigExecuteContext *)local_268,&this->Start,&this->End,&local_278,
                this->Radius,&this->bHit,&this->HitLocation,&this->HitNormal,&this->WorkData);
  FControlRigExecuteContext::~FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  return;
}

// Execute @ 14a52e150

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_SphereTraceByObjectTypes::Execute
          (FRigUnit_SphereTraceByObjectTypes *this,FControlRigExecuteContext *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<TEnumAsByte<EObjectTypeQuery>_const_,int> local_18;
  
  local_18.DataPtr = (TEnumAsByte<EObjectTypeQuery> *)(this->ObjectTypes).AllocatorInstance.Data;
  iVar1 = (this->ObjectTypes).ArrayNum;
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
  StaticExecute(param_1,&this->Start,&this->End,&local_18,this->Radius,&this->bHit,
                &this->HitLocation,&this->HitNormal,&this->WorkData);
  return;
}

// RigVMExecute @ 14a556d40

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_SphereTraceByObjectTypes::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  float fVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  TVector<double> *pTVar5;
  TVector<double> *pTVar6;
  uchar *puVar7;
  FRigVMMemoryHandle *pFVar8;
  float *pfVar9;
  bool *pbVar10;
  TVector<double> *pTVar11;
  TVector<double> *pTVar12;
  FRigVMSlice *pFVar13;
  FRigUnit_SphereTrace_WorkData *pFVar14;
  FControlRigExecuteContext *pFVar15;
  TArrayView<TEnumAsByte<EObjectTypeQuery>_const_,int> local_48 [2];
  
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
    puVar7 = pFVar8[2].Ptr;
  }
  else {
    puVar7 = FRigVMPropertyPath::GetData_Internal
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
  local_48[0].DataPtr = *(TEnumAsByte<EObjectTypeQuery> **)puVar7;
  local_48[0].ArrayNum = *(int *)(puVar7 + 8);
  if (local_48[0].ArrayNum < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar15 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  StaticExecute(pFVar15,pTVar5,pTVar6,local_48,fVar1,pbVar10,pTVar11,pTVar12,pFVar14);
  return;
}

// StaticExecute @ 14a596b90

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
FRigUnit_SphereTraceByObjectTypes::StaticExecute
          (FControlRigExecuteContext *param_1,TVector<double> *param_2,TVector<double> *param_3,
          TArrayView<TEnumAsByte<EObjectTypeQuery>_const_,int> *param_4,float param_5,bool *param_6,
          TVector<double> *param_7,TVector<double> *param_8,FRigUnit_SphereTrace_WorkData *param_9)

{
  TEnumAsByte<EObjectTypeQuery> *pTVar1;
  FScriptContainerElement *pFVar2;
  byte bVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  undefined1 auVar10 [16];
  undefined8 uVar11;
  bool *pbVar12;
  FControlRigExecuteContext *pFVar13;
  bool bVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  ECollisionChannel EVar18;
  FCollisionQueryFlag *pFVar19;
  UPrimitiveComponent *pUVar20;
  UClass *pUVar21;
  ulonglong uVar22;
  longlong lVar23;
  ForAnyElementType FVar24;
  int iVar25;
  uint uVar26;
  TEnumAsByte<EObjectTypeQuery> *pTVar27;
  longlong lVar28;
  longlong lVar29;
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
  undefined1 auVar50 [16];
  undefined4 uVar51;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  double dVar59;
  double dVar60;
  double dVar63;
  double dVar64;
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined4 uVar69;
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auStackY_398 [32];
  undefined1 local_358 [8];
  ForAnyElementType local_350;
  undefined8 local_348;
  FCollisionObjectQueryParams local_340;
  uint local_338;
  bool *local_330;
  TVector<double> *local_328;
  FControlRigExecuteContext *local_320;
  TVector<double> *local_318;
  TVector<double> *local_310;
  undefined8 local_2f8;
  undefined4 uStack_2f0;
  undefined1 uStack_2ec;
  undefined2 uStack_2eb;
  undefined1 uStack_2e9;
  FCollisionShape local_2e8;
  TVector<double>_u_0 local_2d8;
  TVector<double>_u_0 local_2c0;
  TVector<double>_u_0 local_2a8;
  undefined8 local_290;
  undefined8 uStack_288;
  double local_280;
  undefined1 local_278 [104];
  double local_210;
  int local_1d4;
  FWeakObjectPtr local_1c0;
  FWeakObjectPtr FStack_1b8;
  IActorInstanceManagerInterface *local_1b0;
  undefined8 uStack_1a8;
  FCollisionQueryParams local_178;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_398;
  *param_6 = false;
  uVar11 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (param_7->field0_0x0)._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (param_7->field0_0x0)._s_0.Y = (double)uVar11;
  local_330 = param_6;
  (param_7->field0_0x0)._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_280 = __real_3ff0000000000000;
  (param_8->field0_0x0)._s_0.X = 0.0;
  (param_8->field0_0x0)._s_0.Y = 0.0;
  local_328 = param_8;
  (param_8->field0_0x0)._s_0.Z = local_280;
  local_290 = 0;
  uStack_288 = 0;
  if (*(longlong *)&param_1->field_0xe0 == 0) {
    param_9->Hash = 0xffffffff;
  }
  else {
    uVar17 = *(uint *)&param_1->field_0x1c;
    local_320 = param_1;
    local_318 = param_3;
    local_310 = param_2;
    uVar15 = FCrc::MemCrc_DEPRECATED(param_2,0x18,0);
    uVar16 = FCrc::MemCrc_DEPRECATED(param_3,0x18,0);
    uVar17 = HashCombine(uVar17,uVar15);
    uVar15 = HashCombine(uVar17,uVar16);
    uVar17 = param_4->ArrayNum;
    uVar15 = HashCombine(uVar15,uVar17);
    pTVar27 = param_4->DataPtr;
    pTVar1 = pTVar27 + (int)uVar17;
    for (; pTVar27 != pTVar1; pTVar27 = pTVar27 + 1) {
      bVar3 = pTVar27->Value;
      iVar25 = uVar15 - bVar3;
      uVar16 = (-0x61c88647 - iVar25) - (uint)bVar3 ^ iVar25 * 0x100;
      uVar26 = (bVar3 - uVar16) - iVar25 ^ uVar16 >> 0xd;
      uVar15 = (iVar25 - uVar26) - uVar16 ^ uVar26 >> 0xc;
      uVar16 = (uVar16 - uVar15) - uVar26 ^ uVar15 << 0x10;
      uVar26 = (uVar26 - uVar16) - uVar15 ^ uVar16 >> 5;
      uVar15 = (uVar15 - uVar26) - uVar16 ^ uVar26 >> 3;
      uVar16 = (uVar16 - uVar15) - uVar26 ^ uVar15 << 10;
      uVar15 = (uVar26 - uVar16) - uVar15 ^ uVar16 >> 0xf;
    }
    local_338 = HashCombine(uVar15,(uint)param_5);
    if (param_9->Hash == local_338) {
      *local_330 = param_9->bHit;
      dVar5 = (param_9->HitLocation).field0_0x0._s_0.Y;
      (param_7->field0_0x0)._s_0.X = (param_9->HitLocation).field0_0x0._s_0.X;
      (param_7->field0_0x0)._s_0.Y = dVar5;
      (param_7->field0_0x0)._s_0.Z = (param_9->HitLocation).field0_0x0._s_0.Z;
      dVar5 = (param_9->HitNormal).field0_0x0._s_0.Y;
      (param_8->field0_0x0)._s_0.X = (param_9->HitNormal).field0_0x0._s_0.X;
      (param_8->field0_0x0)._s_0.Y = dVar5;
      (param_8->field0_0x0)._s_0.Z = (param_9->HitNormal).field0_0x0._s_0.Z;
    }
    else {
      local_2e8.field1_0x4.Box.HalfExtentX = param_5;
      uVar15 = 0;
      local_2e8.ShapeType = Sphere;
      local_350.Data = (FScriptContainerElement *)0x0;
      local_348 = 0;
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar17,&local_350,(int *)&local_348,(int *)((longlong)&local_348 + 4));
      iVar25 = param_4->ArrayNum;
      if (0 < iVar25) {
        lVar23 = 0;
        do {
          uVar17 = 0;
          if ((int)uVar15 < iVar25) {
            uVar17 = ~uVar15 >> 0x1f;
          }
          if ((uVar17 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar14)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          EVar18 = UEngineTypes::ConvertToCollisionChannel((uint)param_4->DataPtr[lVar23].Value);
          uVar17 = 0;
          if ((int)uVar15 < (int)local_348) {
            uVar17 = ~uVar15 >> 0x1f;
          }
          if ((uVar17 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          uVar15 = uVar15 + 1;
          *(ECollisionChannel *)(local_350.Data + lVar23 * 4) = EVar18;
          lVar23 = lVar23 + 1;
          iVar25 = param_4->ArrayNum;
          param_8 = local_328;
        } while ((int)uVar15 < iVar25);
      }
      iVar25 = (int)local_348;
      uVar22 = (ulonglong)(int)local_348;
      local_340.ObjectTypesToQuery = 0;
      local_340.IgnoreMask = '\0';
      pFVar2 = local_350.Data + uVar22 * 4;
      FVar24.Data = local_350.Data;
      while( true ) {
        if ((int)uVar22 != iVar25) {
          `TCheckedPointerIterator<enum_ECollisionChannel,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_358);
        }
        if (FVar24.Data == pFVar2) break;
        uVar17 = *(uint *)FVar24.Data;
        pFVar19 = FCollisionQueryFlag::Get();
        if (((uint)pFVar19->AllObjectQueryFlag >> (uVar17 & 0x1f) & 1) != 0) {
          local_340.ObjectTypesToQuery =
               local_340.ObjectTypesToQuery | 1 << (*(uint *)FVar24.Data & 0x1f);
        }
        uVar22 = local_348 & 0xffffffff;
        FVar24.Data = FVar24.Data + 4;
      }
      FCollisionQueryParams::FCollisionQueryParams(&local_178);
      pFVar13 = local_320;
      local_178.bTraceComplex = true;
      if (*(AActor **)&local_320->field_0xd8 == (AActor *)0x0) {
        pUVar20 = (UPrimitiveComponent *)
                  FRigVMExecuteContext::GetOwningComponent((FRigVMExecuteContext *)local_320);
        if (pUVar20 != (UPrimitiveComponent *)0x0) {
          pUVar21 = Z_Construct_UClass_UPrimitiveComponent_NoRegister();
          iVar25 = (int)pUVar21->_padding_;
          if ((iVar25 <= *(int *)(*(longlong *)&pUVar20->field_0x10 + 0x38)) &&
             ((longlong *)
              *(undefined1 **)
               (*(longlong *)(*(longlong *)&pUVar20->field_0x10 + 0x30) + (longlong)iVar25 * 8) ==
              &pUVar21->_padding_)) {
            FCollisionQueryParams::AddIgnoredComponent(&local_178,pUVar20);
          }
        }
      }
      else {
        FCollisionQueryParams::AddIgnoredActor(&local_178,*(AActor **)&local_320->field_0xd8);
      }
      memset(local_278,0,0x100);
      dVar8 = *(double *)&pFVar13->field_0x88;
      local_1c0.ObjectIndex = 0;
      local_1c0.ObjectSerialNumber = 0;
      FStack_1b8.ObjectIndex = 0;
      FStack_1b8.ObjectSerialNumber = 0;
      uStack_2f0 = 0xffffffff;
      uStack_2eb = 0;
      uStack_2e9 = 0;
      local_2f8 = 0;
      uStack_2ec = 0;
      uStack_1a8._0_4_ = -1;
      uStack_1a8._4_1_ = Invalid;
      uStack_1a8._5_3_ = 0;
      local_278._4_4_ = 1.0;
      local_1d4 = -1;
      dVar59 = (local_318->field0_0x0)._s_0.X * *(double *)&pFVar13->field_0xb0;
      dVar63 = (local_318->field0_0x0)._s_0.Y * *(double *)&pFVar13->field_0xb8;
      auVar65._0_8_ = (local_318->field0_0x0)._s_0.Z * *(double *)&pFVar13->field_0xc0;
      auVar65._8_8_ = *(double *)&pFVar13->field_0xc8 * 0.0;
      local_1b0 = (IActorInstanceManagerInterface *)0x0;
      auVar30 = *(undefined1 (*) [16])&pFVar13->field_0x70;
      auVar52._8_4_ = SUB84(dVar63,0);
      auVar52._0_8_ = dVar59;
      uVar51 = (undefined4)((ulonglong)dVar63 >> 0x20);
      auVar52._12_4_ = uVar51;
      auVar38 = blendpd(auVar30,*(undefined1 (*) [16])&pFVar13->field_0x80,2);
      auVar53._0_8_ = auVar52._8_8_ * auVar30._0_8_ - auVar30._8_8_ * dVar59;
      auVar53._8_8_ = auVar65._0_8_ * auVar30._8_8_ - *(double *)&pFVar13->field_0x80 * dVar63;
      auVar30._8_4_ = SUB84(dVar63,0);
      auVar30._0_8_ = dVar59;
      auVar30._12_4_ = uVar51;
      auVar30 = blendpd(auVar30,auVar65,2);
      auVar39._0_8_ =
           auVar30._0_8_ * *(double *)&pFVar13->field_0x80 - auVar38._0_8_ * auVar65._0_8_;
      auVar39._8_8_ =
           auVar30._8_8_ * *(double *)&pFVar13->field_0x88 - auVar38._8_8_ * auVar65._8_8_;
      auVar30 = *(undefined1 (*) [16])&pFVar13->field_0x70;
      auVar38 = blendpd(auVar53,auVar39,2);
      auVar54._0_8_ = auVar38._0_8_ + auVar38._0_8_;
      auVar54._8_8_ = auVar38._8_8_ + auVar38._8_8_;
      dVar5 = auVar53._8_8_ + auVar53._8_8_;
      dVar6 = auVar39._0_8_ + auVar39._0_8_;
      uVar51 = (undefined4)((ulonglong)dVar6 >> 0x20);
      auVar46._8_4_ = SUB84(dVar6,0);
      auVar46._0_8_ = dVar5;
      auVar46._12_4_ = uVar51;
      auVar41._8_4_ = SUB84(dVar6,0);
      auVar41._0_8_ = dVar5;
      auVar41._12_4_ = uVar51;
      auVar38 = blendpd(auVar41,auVar54,2);
      auVar39 = blendpd(auVar30,*(undefined1 (*) [16])&pFVar13->field_0x80,2);
      dVar9 = *(double *)&pFVar13->field_0x88;
      auVar66._0_8_ = (local_310->field0_0x0)._s_0.Z * *(double *)&pFVar13->field_0xc0;
      auVar66._8_8_ = *(double *)&pFVar13->field_0xc8 * 0.0;
      auVar47._0_8_ = auVar46._8_8_ * auVar30._0_8_ - auVar30._8_8_ * dVar5;
      auVar47._8_8_ = auVar54._0_8_ * auVar30._8_8_ - *(double *)&pFVar13->field_0x80 * dVar6;
      auVar42._0_8_ =
           auVar38._0_8_ * *(double *)&pFVar13->field_0x80 - auVar39._0_8_ * auVar54._0_8_;
      auVar42._8_8_ =
           auVar38._8_8_ * *(double *)&pFVar13->field_0x88 - auVar39._8_8_ * auVar54._8_8_;
      dVar60 = (local_310->field0_0x0)._s_0.X * *(double *)&pFVar13->field_0xb0;
      dVar64 = (local_310->field0_0x0)._s_0.Y * *(double *)&pFVar13->field_0xb8;
      auVar38._8_4_ = SUB84(auVar47._8_8_,0);
      auVar38._0_8_ = auVar47._0_8_;
      auVar38._12_4_ = (int)((ulonglong)auVar47._8_8_ >> 0x20);
      auVar30 = *(undefined1 (*) [16])&pFVar13->field_0x70;
      dVar6 = dVar6 * dVar8 + dVar63 + auVar42._0_8_ + *(double *)&pFVar13->field_0x98;
      auVar39 = blendpd(auVar47,auVar42,2);
      local_2d8._8_4_ = SUB84(dVar6,0);
      local_2d8._0_8_ = dVar5 * dVar8 + dVar59 + auVar38._8_8_ + *(double *)&pFVar13->field_0x90;
      local_2d8._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
      local_2d8._s_0.Z =
           auVar54._0_8_ * dVar8 + auVar65._0_8_ + auVar39._0_8_ + *(double *)&pFVar13->field_0xa0;
      auVar55._8_4_ = SUB84(dVar64,0);
      auVar55._0_8_ = dVar60;
      uVar51 = (undefined4)((ulonglong)dVar64 >> 0x20);
      auVar55._12_4_ = uVar51;
      auVar39 = blendpd(auVar30,*(undefined1 (*) [16])&pFVar13->field_0x80,2);
      auVar56._0_8_ = auVar55._8_8_ * auVar30._0_8_ - auVar30._8_8_ * dVar60;
      auVar56._8_8_ = auVar66._0_8_ * auVar30._8_8_ - *(double *)&pFVar13->field_0x80 * dVar64;
      auVar31._8_4_ = SUB84(dVar64,0);
      auVar31._0_8_ = dVar60;
      auVar31._12_4_ = uVar51;
      auVar30 = blendpd(auVar31,auVar66,2);
      auVar32._0_8_ =
           auVar30._0_8_ * *(double *)&pFVar13->field_0x80 - auVar39._0_8_ * auVar66._0_8_;
      auVar32._8_8_ =
           auVar30._8_8_ * *(double *)&pFVar13->field_0x88 - auVar39._8_8_ * auVar66._8_8_;
      auVar30 = *(undefined1 (*) [16])&pFVar13->field_0x70;
      auVar39 = blendpd(auVar56,auVar32,2);
      dVar5 = auVar56._8_8_ + auVar56._8_8_;
      dVar6 = auVar32._0_8_ + auVar32._0_8_;
      uVar51 = (undefined4)((ulonglong)dVar6 >> 0x20);
      auVar57._0_8_ = auVar39._0_8_ + auVar39._0_8_;
      auVar57._8_8_ = auVar39._8_8_ + auVar39._8_8_;
      auVar48._8_4_ = SUB84(dVar6,0);
      auVar48._0_8_ = dVar5;
      auVar48._12_4_ = uVar51;
      auVar43._8_4_ = SUB84(dVar6,0);
      auVar43._0_8_ = dVar5;
      auVar43._12_4_ = uVar51;
      auVar38 = blendpd(auVar43,auVar57,2);
      auVar39 = blendpd(auVar30,*(undefined1 (*) [16])&pFVar13->field_0x80,2);
      auVar49._0_8_ = auVar48._8_8_ * auVar30._0_8_ - auVar30._8_8_ * dVar5;
      auVar49._8_8_ = auVar57._0_8_ * auVar30._8_8_ - *(double *)&pFVar13->field_0x80 * dVar6;
      auVar44._0_8_ =
           auVar38._0_8_ * *(double *)&pFVar13->field_0x80 - auVar39._0_8_ * auVar57._0_8_;
      auVar44._8_8_ =
           auVar38._8_8_ * *(double *)&pFVar13->field_0x88 - auVar39._8_8_ * auVar57._8_8_;
      auVar33._8_4_ = SUB84(auVar49._8_8_,0);
      auVar33._0_8_ = auVar49._0_8_;
      auVar33._12_4_ = (int)((ulonglong)auVar49._8_8_ >> 0x20);
      auVar30 = blendpd(auVar49,auVar44,2);
      dVar6 = dVar6 * dVar9 + dVar64 + auVar44._0_8_ + *(double *)&pFVar13->field_0x98;
      local_2c0._s_0.Z =
           auVar57._0_8_ * dVar9 + auVar66._0_8_ + auVar30._0_8_ + *(double *)&pFVar13->field_0xa0;
      local_2c0._8_4_ = SUB84(dVar6,0);
      local_2c0._0_8_ = dVar5 * dVar9 + dVar60 + auVar33._8_8_ + *(double *)&pFVar13->field_0x90;
      local_2c0._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
      bVar14 = UWorld::SweepSingleByObjectType
                         (*(UWorld **)&pFVar13->field_0xe0,(FHitResult *)local_278,
                          (TVector<double> *)&local_2c0._s_0,(TVector<double> *)&local_2d8._s_0,
                          &UE::Math::TQuat<double>::Identity,&local_340,&local_2e8,&local_178);
      pbVar12 = local_330;
      *local_330 = bVar14;
      if (bVar14) {
        UE::Math::TTransform<double>::InverseTransformPosition
                  ((TTransform<double> *)&pFVar13->field_0x70,(TVector<double> *)&local_2a8._s_0,
                   (TVector<double> *)(local_278 + 0x28));
        uVar26 = _UNK_15061cc8c;
        uVar16 = _UNK_15061cc88;
        uVar15 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
        uVar17 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
        (param_7->field0_0x0)._s_0.X = local_2a8._s_0.X;
        (param_7->field0_0x0)._s_0.Y = local_2a8._s_0.Y;
        (param_7->field0_0x0)._s_0.Z = local_2a8._s_0.Z;
        dVar5 = *(double *)&pFVar13->field_0x70 *
                GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
        dVar6 = *(double *)&pFVar13->field_0x78 *
                GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
        uVar51 = (undefined4)((ulonglong)dVar6 >> 0x20);
        auVar58._0_8_ =
             *(double *)&pFVar13->field_0x80 *
             GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
        auVar58._8_8_ =
             *(double *)&pFVar13->field_0x88 *
             GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
        auVar45._8_4_ = SUB84(dVar6,0);
        auVar45._0_8_ = dVar5;
        auVar45._12_4_ = uVar51;
        dVar59 = auVar45._8_8_;
        auVar50._8_4_ = SUB84(dVar6,0);
        auVar50._0_8_ = dVar5;
        auVar50._12_4_ = uVar51;
        auVar39 = blendpd(auVar50,auVar58,2);
        auVar10._8_8_ = 0;
        auVar10._0_8_ = local_210;
        auVar30 = blendpd(local_278._88_16_,auVar10,2);
        dVar60 = local_278._96_8_;
        auVar34._8_4_ = SUB84(auVar58._0_8_,0);
        auVar34._0_8_ = dVar59;
        auVar34._12_4_ = (int)((ulonglong)auVar58._0_8_ >> 0x20);
        auVar72._0_8_ = dVar60 * dVar5 - dVar59 * local_278._88_8_;
        auVar72._8_8_ = local_210 * dVar6 - auVar34._8_8_ * dVar60;
        auVar40._0_8_ = auVar30._0_8_ * auVar58._0_8_ - auVar39._0_8_ * local_210;
        auVar40._8_8_ = auVar30._8_8_ * auVar58._8_8_ - auVar39._8_8_ * 0.0;
        dVar8 = auVar72._8_8_ + auVar72._8_8_;
        dVar9 = auVar40._0_8_ + auVar40._0_8_;
        uVar51 = SUB84(dVar9,0);
        uVar69 = (undefined4)((ulonglong)dVar9 >> 0x20);
        auVar30 = blendpd(auVar72,auVar40,2);
        auVar70._8_4_ = uVar51;
        auVar70._0_8_ = dVar8;
        auVar70._12_4_ = uVar69;
        auVar35._8_4_ = uVar51;
        auVar35._0_8_ = dVar8;
        auVar35._12_4_ = uVar69;
        auVar67._8_4_ = uVar51;
        auVar67._0_8_ = dVar8;
        auVar67._12_4_ = uVar69;
        auVar73._0_8_ = auVar30._0_8_ + auVar30._0_8_;
        auVar73._8_8_ = auVar30._8_8_ + auVar30._8_8_;
        auVar38 = blendpd(auVar67,auVar73,2);
        auVar71._0_8_ = auVar70._8_8_ * dVar5 - dVar8 * dVar59;
        auVar71._8_8_ = auVar73._0_8_ * dVar6 - auVar35._8_8_ * auVar58._0_8_;
        auVar36._8_4_ = SUB84(auVar73._8_8_,0);
        auVar36._0_8_ = auVar73._0_8_;
        auVar36._12_4_ = (int)((ulonglong)auVar73._8_8_ >> 0x20);
        auVar30 = *(undefined1 (*) [16])&pFVar13->field_0xb0;
        auVar68._0_8_ = auVar38._0_8_ * auVar58._0_8_ - auVar73._0_8_ * auVar39._0_8_;
        auVar68._8_8_ = auVar38._8_8_ * auVar58._8_8_ - auVar36._8_8_ * auVar39._8_8_;
        auVar39 = *(undefined1 (*) [16])&pFVar13->field_0xc0;
        auVar61._0_8_ = (double)CONCAT44(uVar15 & auVar30._4_4_,uVar17 & auVar30._0_4_);
        auVar61._8_4_ = uVar16 & auVar30._8_4_;
        auVar61._12_4_ = uVar26 & auVar30._12_4_;
        lVar23 = -(ulonglong)
                  ((double)CONCAT44(uVar15 & auVar39._4_4_,uVar17 & auVar39._0_4_) <=
                  (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
        auVar30 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar30);
        lVar28 = -(ulonglong)
                  (auVar61._0_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[0]);
        lVar29 = -(ulonglong)
                  (auVar61._8_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[1]);
        auVar37._8_4_ = SUB84(auVar71._8_8_,0);
        auVar37._0_8_ = auVar71._0_8_;
        auVar37._12_4_ = (int)((ulonglong)auVar71._8_8_ >> 0x20);
        auVar62._0_8_ =
             (double)CONCAT44(~(uint)((ulonglong)lVar28 >> 0x20) & auVar30._4_4_,
                              ~(uint)lVar28 & auVar30._0_4_);
        auVar62._8_4_ = ~(uint)lVar29 & auVar30._8_4_;
        auVar62._12_4_ = ~(uint)((ulonglong)lVar29 >> 0x20) & auVar30._12_4_;
        auVar7._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
        auVar7._0_8_ = auVar39._0_8_;
        auVar7._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
        auVar30 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar7);
        auVar39 = blendpd(auVar71,auVar68,2);
        (param_8->field0_0x0)._s_0.X =
             auVar62._0_8_ * (dVar8 * auVar58._8_8_ + local_278._88_8_ + auVar37._8_8_);
        (param_8->field0_0x0)._s_0.Y =
             auVar62._8_8_ * (dVar9 * auVar58._8_8_ + dVar60 + auVar68._0_8_);
        (param_8->field0_0x0)._s_0.Z =
             (double)CONCAT44(~(uint)((ulonglong)lVar23 >> 0x20) & auVar30._4_4_,
                              ~(uint)lVar23 & auVar30._0_4_) *
             (auVar73._0_8_ * auVar58._8_8_ + local_210 + auVar39._0_8_);
      }
      param_9->Hash = local_338;
      param_9->bHit = *pbVar12;
      dVar5 = (param_7->field0_0x0)._s_0.Y;
      (param_9->HitLocation).field0_0x0._s_0.X = (param_7->field0_0x0)._s_0.X;
      (param_9->HitLocation).field0_0x0._s_0.Y = dVar5;
      (param_9->HitLocation).field0_0x0._s_0.Z = (param_7->field0_0x0)._s_0.Z;
      dVar5 = (param_8->field0_0x0)._s_0.Y;
      (param_9->HitNormal).field0_0x0._s_0.X = (param_8->field0_0x0)._s_0.X;
      (param_9->HitNormal).field0_0x0._s_0.Y = dVar5;
      (param_9->HitNormal).field0_0x0._s_0.Z = (param_8->field0_0x0)._s_0.Z;
      if (local_178.IgnoreSourceObjects.AllocatorInstance.SecondaryData !=
          (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_178.IgnoreSourceObjects.AllocatorInstance.SecondaryData);
      }
      if (local_178.IgnoreComponents.AllocatorInstance.SecondaryData !=
          (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_178.IgnoreComponents.AllocatorInstance.SecondaryData);
      }
      if (local_350.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_350.Data);
      }
    }
  }
  return;
}

