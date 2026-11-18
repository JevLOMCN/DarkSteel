// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 27

// StaticClass @ 14907f2b0

UClass * __cdecl UNiagaraDataInterfaceCamera::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceCamera.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataInterfaceCamera",
               &Z_Registration_Info_UClass_UNiagaraDataInterfaceCamera.InnerSingleton,
               StaticRegisterNativesUNiagaraDataInterfaceCamera,0x40,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraDataInterfaceCamera>,
               InternalVTableHelperCtorCaller<UNiagaraDataInterfaceCamera>,local_res8,
               UNiagaraDataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceCamera.InnerSingleton;
}

// UNiagaraDataInterfaceCamera @ 1490b40a0

UNiagaraDataInterfaceCamera * __thiscall
UNiagaraDataInterfaceCamera::UNiagaraDataInterfaceCamera
          (UNiagaraDataInterfaceCamera *this,FVTableHelper *param_1)

{
  UNiagaraDataInterfaceBase::UNiagaraDataInterfaceBase((UNiagaraDataInterfaceBase *)this,param_1);
  this->bRequireCurrentFrameData = true;
  this->_padding_ = (longlong)&___7UNiagaraDataInterfaceCamera__6B_;
  this->_padding_ = 0;
  this->PlayerControllerIndex = 0;
  return this;
}

// UNiagaraDataInterfaceCamera @ 1490b40e0

UNiagaraDataInterfaceCamera * __thiscall
UNiagaraDataInterfaceCamera::UNiagaraDataInterfaceCamera
          (UNiagaraDataInterfaceCamera *this,FObjectInitializer *param_1)

{
  FObjectInitializer *pFVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  pFVar1 = FObjectInitializer::Get();
  UNiagaraDataInterfaceBase::UNiagaraDataInterfaceBase((UNiagaraDataInterfaceBase *)this,pFVar1);
  *(uint *)&this->_padding_ = (uint)this->_padding_ & 0xfffffff8;
  puVar3 = (undefined8 *)0x0;
  this->_padding_ = (longlong)&___7UNiagaraDataInterfaceCamera__6B_;
  this->_padding_ = 0;
  this->PlayerControllerIndex = 0;
  this->bRequireCurrentFrameData = true;
  puVar2 = ::operator_new(0x60);
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[9] = 0;
    puVar2[0xb] = 0;
    *puVar2 = &___7FNiagaraDataInterfaceProxyCameraQuery__6B_;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[6] = 0;
    *(undefined4 *)(puVar2 + 7) = 0;
    *(undefined4 *)((longlong)puVar2 + 0x3c) = 0x80;
    *(undefined4 *)(puVar2 + 8) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x44) = 0;
    puVar2[10] = 0;
    puVar3 = puVar2;
  }
  puVar2 = (undefined8 *)this->_padding_;
  if ((puVar2 != puVar3) && (this->_padding_ = (longlong)puVar3, puVar2 != (undefined8 *)0x0)) {
    (**(code **)*puVar2)(puVar2,1);
  }
  return this;
}

// ~UNiagaraDataInterfaceCamera @ 1490b90b0

void __thiscall
UNiagaraDataInterfaceCamera::~UNiagaraDataInterfaceCamera(UNiagaraDataInterfaceCamera *this)

{
  this->_padding_ = (longlong)&___7UNiagaraDataInterfaceCamera__6B_;
  UNiagaraDataInterface::~UNiagaraDataInterface((UNiagaraDataInterface *)this);
  return;
}

// BuildShaderParameters @ 1490d0d00

void __thiscall
UNiagaraDataInterfaceCamera::BuildShaderParameters
          (UNiagaraDataInterfaceCamera *this,FNiagaraShaderParametersBuilder *param_1)

{
  int *piVar1;
  uint uVar2;
  FShaderParametersMetadataBuilder *pFVar3;
  int iVar4;
  FShaderParametersMetadata *pFVar5;
  FScriptContainerElement *pFVar6;
  wchar_t *pwVar7;
  
  pFVar3 = param_1->MetadataBuilder;
  if ((param_1->GPUParamInfo->DataInterfaceHLSLSymbol).Data.ArrayNum == 0) {
    pwVar7 = L"";
  }
  else {
    pwVar7 = (wchar_t *)(param_1->GPUParamInfo->DataInterfaceHLSLSymbol).Data.AllocatorInstance.Data
    ;
  }
  pFVar3->NextMemberOffset = pFVar3->NextMemberOffset + 0xf & 0xfffffff0;
  pFVar5 = TShaderParameterStructTypeInfo<UNiagaraDataInterfaceCamera::FShaderParameters>::
           GetStructMetadata();
  piVar1 = &(pFVar3->Members).ArrayMax;
  iVar4 = (pFVar3->Members).ArrayNum;
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,(ForAnyElementType *)pFVar3,piVar1);
  }
  (pFVar3->Members).ArrayNum = iVar4 + 1;
  uVar2 = pFVar3->NextMemberOffset;
  pFVar6 = (pFVar3->Members).AllocatorInstance.Data + (longlong)iVar4 * 0x30;
  *(wchar_t **)(pFVar6 + 8) = L"";
  *(FShaderParametersMetadata **)(pFVar6 + 0x28) = pFVar5;
  *(wchar_t **)pFVar6 = pwVar7;
  *(undefined4 *)(pFVar6 + 0x10) = 0x7b;
  *(uint *)(pFVar6 + 0x14) = uVar2;
  *(undefined2 *)(pFVar6 + 0x18) = 0x14;
  *(undefined4 *)(pFVar6 + 0x1c) = 1;
  *(undefined8 *)(pFVar6 + 0x20) = 1;
  pFVar3->NextMemberOffset = pFVar3->NextMemberOffset + 0x10;
  return;
}

// CalculateParticleDistances @ 1490d1180

void __thiscall
UNiagaraDataInterfaceCamera::CalculateParticleDistances
          (UNiagaraDataInterfaceCamera *this,FVectorVMExternalFunctionContext *param_1)

{
  float fVar1;
  TNode *pTVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  TNode *pTVar6;
  int iVar7;
  longlong lVar8;
  float *pfVar9;
  int iVar10;
  float *pfVar11;
  TQueue<FDistanceData,0> *pTVar12;
  float fVar13;
  float *local_res10;
  float local_138;
  float fStack_134;
  FNiagaraID local_128;
  FCameraDataInterface_InstanceData *pFStack_120;
  longlong local_118;
  longlong local_110;
  longlong local_108;
  float *local_100;
  float *local_f8;
  float *local_f0;
  int local_e0 [6];
  int local_c8 [4];
  FNDIInputParam<FNiagaraPosition> local_b8;
  
  VectorVM::FUserPtrHandler<FCameraDataInterface_InstanceData>::
  FUserPtrHandler<FCameraDataInterface_InstanceData>
            ((FUserPtrHandler<FCameraDataInterface_InstanceData> *)&local_128,param_1);
  local_e0[0] = 0;
  local_f0 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_e0);
  local_c8[0] = 0;
  local_f0 = local_f0 + local_e0[0] * param_1->PerInstanceFnInstanceIdx;
  pfVar5 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_c8);
  lVar8 = (longlong)local_c8[0];
  iVar7 = local_c8[0] * param_1->PerInstanceFnInstanceIdx;
  FNDIInputParam<FNiagaraPosition>::FNDIInputParam<FNiagaraPosition>(&local_b8,param_1);
  iVar10 = 0;
  fVar3 = *(float *)&(pFStack_120->CameraLocation).field_0x8;
  if (0 < param_1->NumInstances) {
    fStack_134 = (float)((ulonglong)*(undefined8 *)&pFStack_120->CameraLocation >> 0x20);
    local_118 = (longlong)local_b8.X.AdvanceOffset << 2;
    local_110 = lVar8 << 2;
    local_108 = (longlong)local_e0[0] << 2;
    pTVar12 = &pFStack_120->DistanceSortQueue;
    local_138 = (float)*(undefined8 *)&pFStack_120->CameraLocation;
    pfVar9 = local_f0;
    pfVar11 = local_b8.X.InputPtr;
    local_res10 = pfVar5 + iVar7;
    do {
      fVar1 = *pfVar11;
      local_100 = local_b8.Z.InputPtr + local_b8.Z.AdvanceOffset;
      local_f8 = local_b8.Y.InputPtr + local_b8.Y.AdvanceOffset;
      fVar13 = *local_b8.Z.InputPtr - fVar3;
      pfVar11 = (float *)(local_118 + (longlong)pfVar11);
      pfVar5 = (float *)(local_110 + (longlong)local_res10);
      fVar4 = *pfVar9;
      pfVar9 = (float *)((longlong)pfVar9 + local_108);
      local_128.AcquireTag = (int)*local_res10;
      local_128.Index = (int)fVar4;
      pFStack_120 = (FCameraDataInterface_InstanceData *)
                    (double)((*local_b8.Y.InputPtr - fStack_134) *
                             (*local_b8.Y.InputPtr - fStack_134) +
                             (fVar1 - local_138) * (fVar1 - local_138) + fVar13 * fVar13);
      pTVar6 = ::operator_new(0x18);
      if (pTVar6 != (TNode *)0x0) {
        pTVar6->NextNode = (TNode *)0x0;
        (pTVar6->Item).ParticleID = local_128;
        (pTVar6->Item).DistanceSquared = (double)pFStack_120;
        if (((ulonglong)pTVar12 & 7) != 0) {
          FWindowsPlatformAtomics::HandleAtomicsFailure
                    (L"InterlockedExchangePointer requires Dest pointer to be aligned to %d bytes");
        }
        LOCK();
        pTVar2 = pTVar12->Head;
        pTVar12->Head = pTVar6;
        UNLOCK();
        if (((ulonglong)pTVar2 & 7) != 0) {
          FWindowsPlatformAtomics::HandleAtomicsFailure
                    (L"InterlockedExchangePointer requires Dest pointer to be aligned to %d bytes");
        }
        LOCK();
        pTVar2->NextNode = pTVar6;
        UNLOCK();
      }
      iVar10 = iVar10 + 1;
      local_b8.Z.InputPtr = local_100;
      local_b8.Y.InputPtr = local_f8;
      local_res10 = pfVar5;
    } while (iVar10 < param_1->NumInstances);
  }
  return;
}

// CalculateTickGroup @ 1490d13f0

ETickingGroup __thiscall
UNiagaraDataInterfaceCamera::CalculateTickGroup(UNiagaraDataInterfaceCamera *this,void *param_1)

{
  if ((((uint)this->_padding_ >> 1 & 1) != 0) && (this->bRequireCurrentFrameData != false)) {
    return TG_PostUpdateWork;
  }
  return TG_PrePhysics;
}

// CanExecuteOnTarget @ 1490d2a80

bool __thiscall
UNiagaraDataInterfaceCamera::CanExecuteOnTarget
          (UNiagaraDataInterfaceCamera *this,ENiagaraSimTarget param_1)

{
  return true;
}

// CopyToInternal @ 1490d93a0

bool __thiscall
UNiagaraDataInterfaceCamera::CopyToInternal
          (UNiagaraDataInterfaceCamera *this,UNiagaraDataInterface *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if ((param_1 == (UNiagaraDataInterface *)0x0) || (param_1->_padding_ != this->_padding_)) {
    return false;
  }
  pUVar2 = StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    *(int *)&param_1[1]._padding_ = this->PlayerControllerIndex;
    *(bool *)((longlong)&param_1[1]._padding_ + 4) = this->bRequireCurrentFrameData;
    return true;
  }
  pFVar3 = GetTypeName<UNiagaraDataInterfaceCamera>(&local_28);
  pwVar5 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar4 = L"";
  }
  else {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UNiagaraDataInterface>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar5,pwVar4);
}

// DestroyPerInstanceData @ 1490ebf70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UNiagaraDataInterfaceCamera::DestroyPerInstanceData
          (UNiagaraDataInterfaceCamera *this,void *param_1,FNiagaraSystemInstance *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar5;
  undefined ***pppuVar6;
  ulonglong uVar7;
  undefined1 auStack_a8 [32];
  code *local_88 [2];
  undefined **local_78;
  longlong lStack_70;
  ulong64 local_68;
  undefined ***local_60;
  undefined1 local_58 [16];
  undefined **local_48;
  longlong lStack_40;
  ulong64 local_38;
  undefined ***local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  if (*(void **)((longlong)param_1 + 0x60) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x60));
  }
  puVar1 = *(undefined8 **)((longlong)param_1 + 0x58);
  while (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((longlong)param_1 + 0x58) = *puVar1;
    ::operator_delete(puVar1,0x18);
    puVar1 = *(undefined8 **)((longlong)param_1 + 0x58);
  }
  lVar2 = this->_padding_;
  if ((lVar2 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypedProxy != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterface.h"
                         ,0x3a0,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_78 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UNiagaraDataInterfaceCamera::DestroyPerInstanceData'::`2'::<lambda_1>,1,0>
              ::_vftable_;
  local_68 = param_2->ID;
  local_88[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UNiagaraDataInterfaceCamera::DestroyPerInstanceData'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                ::Call;
  local_60 = (undefined ***)0x0;
  lStack_70 = lVar2;
  this_00 = FRenderCommandList::GetInstanceTLS();
  if (this_00 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_UNiagaraDataInterfaceCamera::DestroyPerInstanceData_::__l2::TSTR_RemoveProxy111>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_88);
  }
  else {
    this_01 = FRenderCommandList::GetRenderThread(this_00);
    local_58._0_8_ = local_88[0];
    local_30 = local_60;
    local_48 = local_78;
    lStack_40 = lStack_70;
    local_38 = local_68;
    local_88[0] = (code *)0x0;
    local_28 = 2;
    pFVar5 = (FRenderCommandTag *)
             TRenderCommandTag<`UNiagaraDataInterfaceCamera::DestroyPerInstanceData'::__l2::TSTR_RemoveProxy111>
             ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_58,pFVar5);
    uVar7 = (ulonglong)local_28;
    if ((2 < uVar7) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar7] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if ((code *)local_58._0_8_ != (code *)0x0) {
        pppuVar6 = (undefined ***)(local_58 + 0x10);
        if (local_30 != (undefined ***)0x0) {
          pppuVar6 = local_30;
        }
        (*(code *)(*pppuVar6)[2])();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar7])(local_58);
    }
  }
  if (local_88[0] != (code *)0x0) {
    pppuVar6 = &local_78;
    if (local_60 != (undefined ***)0x0) {
      pppuVar6 = local_60;
    }
    (*(code *)(*pppuVar6)[2])();
  }
  return;
}

// Equals @ 1490f2880

bool __thiscall
UNiagaraDataInterfaceCamera::Equals
          (UNiagaraDataInterfaceCamera *this,UNiagaraDataInterface *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if ((param_1 != (UNiagaraDataInterface *)0x0) && (param_1->_padding_ == this->_padding_)) {
    pUVar2 = StaticClass();
    iVar1 = (int)pUVar2->_padding_;
    if ((*(int *)(param_1->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar2->_padding_)) {
      pFVar3 = GetTypeName<UNiagaraDataInterfaceCamera_const_>(&local_28);
      pwVar5 = L"";
      if ((pFVar3->Data).ArrayNum == 0) {
        pwVar4 = L"";
      }
      else {
        pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
      }
      pFVar3 = GetFullNameForCastLogError<UNiagaraDataInterface_const_>(&local_18,param_1);
      if ((pFVar3->Data).ArrayNum != 0) {
        pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar5,pwVar4);
    }
    if (((int)param_1[1]._padding_ == this->PlayerControllerIndex) &&
       ((bool)*(char *)((longlong)&param_1[1]._padding_ + 4) == this->bRequireCurrentFrameData)) {
      return true;
    }
  }
  return false;
}

// GetCameraFOV @ 149103b30

void __thiscall
UNiagaraDataInterfaceCamera::GetCameraFOV
          (UNiagaraDataInterfaceCamera *this,FVectorVMExternalFunctionContext *param_1)

{
  float fVar1;
  float *pfVar2;
  int iVar3;
  int local_20 [2];
  FUserPtrHandler<FCameraDataInterface_InstanceData> local_18;
  
  VectorVM::FUserPtrHandler<FCameraDataInterface_InstanceData>::
  FUserPtrHandler<FCameraDataInterface_InstanceData>(&local_18,param_1);
  iVar3 = 0;
  local_20[0] = 0;
  pfVar2 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_20);
  pfVar2 = pfVar2 + local_20[0] * param_1->PerInstanceFnInstanceIdx;
  fVar1 = (local_18.Ptr)->CameraFOV;
  if (0 < param_1->NumInstances) {
    do {
      iVar3 = iVar3 + 1;
      *pfVar2 = fVar1;
      pfVar2 = pfVar2 + local_20[0];
    } while (iVar3 < param_1->NumInstances);
  }
  return;
}

// GetCameraProperties @ 149103bc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UNiagaraDataInterfaceCamera::GetCameraProperties
          (UNiagaraDataInterfaceCamera *this,FVectorVMExternalFunctionContext *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  double extraout_XMM0_Qa;
  double extraout_XMM0_Qa_00;
  double extraout_XMM0_Qb;
  uint uVar15;
  double dVar16;
  uint uVar17;
  double dVar18;
  uint uVar19;
  uint uVar20;
  undefined1 auStack_258 [48];
  FVectorVMExternalFunctionContext *local_228;
  int local_218 [4];
  int local_208 [4];
  int local_1f8 [4];
  int local_1e8 [4];
  int local_1d8 [4];
  int local_1c8 [2];
  float *local_1c0;
  float *local_1b8;
  float *local_1b0;
  float *local_1a8;
  float *local_1a0;
  float *local_198;
  float *local_190;
  int local_158 [4];
  int local_148 [4];
  int local_138 [4];
  int local_128 [4];
  int local_118 [4];
  int local_108 [4];
  FUserPtrHandler<FCameraDataInterface_InstanceData> local_f8 [2];
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStack_258;
  local_228 = param_1;
  VectorVM::FUserPtrHandler<FCameraDataInterface_InstanceData>::
  FUserPtrHandler<FCameraDataInterface_InstanceData>(local_f8,param_1);
  iVar14 = 0;
  local_1c8[0] = 0;
  pfVar4 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_1c8);
  iVar9 = local_1c8[0] * param_1->PerInstanceFnInstanceIdx;
  local_1d8[0] = 0;
  pfVar5 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_1d8);
  iVar10 = local_1d8[0] * param_1->PerInstanceFnInstanceIdx;
  local_1e8[0] = 0;
  pfVar6 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_1e8);
  iVar11 = local_1e8[0] * param_1->PerInstanceFnInstanceIdx;
  local_1f8[0] = 0;
  pfVar7 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_1f8);
  iVar12 = local_1f8[0] * param_1->PerInstanceFnInstanceIdx;
  local_208[0] = 0;
  pfVar8 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_208);
  iVar13 = local_208[0] * param_1->PerInstanceFnInstanceIdx;
  local_218[0] = 0;
  local_1c0 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_218);
  local_158[0] = 0;
  local_1c0 = local_1c0 + local_218[0] * param_1->PerInstanceFnInstanceIdx;
  local_1b8 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_158);
  local_148[0] = 0;
  local_1b8 = local_1b8 + local_158[0] * param_1->PerInstanceFnInstanceIdx;
  local_1b0 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_148);
  local_138[0] = 0;
  local_1b0 = local_1b0 + local_148[0] * param_1->PerInstanceFnInstanceIdx;
  local_1a8 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_138);
  local_1a8 = local_1a8 + local_138[0] * param_1->PerInstanceFnInstanceIdx;
  local_128[0] = 0;
  local_1a0 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_128);
  local_118[0] = 0;
  local_1a0 = local_1a0 + local_128[0] * param_1->PerInstanceFnInstanceIdx;
  local_198 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_118);
  local_108[0] = 0;
  local_198 = local_198 + local_118[0] * param_1->PerInstanceFnInstanceIdx;
  local_190 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_108);
  dVar16 = (double)GlobalVectorConstants::DEG_TO_RAD.m128_f32[0];
  dVar18 = (double)GlobalVectorConstants::DEG_TO_RAD.m128_f32[1];
  local_190 = local_190 + local_108[0] * param_1->PerInstanceFnInstanceIdx;
  fVar1 = *(float *)&(local_f8[0].Ptr)->CameraLocation;
  fVar2 = *(float *)&((local_f8[0].Ptr)->CameraLocation).field_0x4;
  fVar3 = *(float *)&((local_f8[0].Ptr)->CameraLocation).field_0x8;
  __vdecl_sincos2();
  local_f8[0].Ptr._0_4_ = SUB84(dVar18,0);
  local_f8[0]._0_8_ = dVar16;
  local_f8[0].Ptr._4_4_ = (int)((ulonglong)dVar18 >> 0x20);
  __vdecl_sincos2();
  dVar18 = extraout_XMM0_Qa_00 * extraout_XMM0_Qb +
           (double)local_f8[0].Ptr * dVar16 * extraout_XMM0_Qa;
  uVar15 = SUB84(dVar18,0) ^ (uint)__xmm_80000000000000008000000000000000;
  uVar17 = (uint)((ulonglong)dVar18 >> 0x20) ^ __xmm_80000000000000008000000000000000._4_4_;
  uVar19 = SUB84((double)local_f8[0]._0_8_ * extraout_XMM0_Qa_00,0) ^
           (uint)__xmm_80000000000000008000000000000000;
  uVar20 = (uint)((ulonglong)((double)local_f8[0]._0_8_ * extraout_XMM0_Qa_00) >> 0x20) ^
           __xmm_80000000000000008000000000000000._4_4_;
  if (0 < local_228->NumInstances) {
    pfVar4 = pfVar4 + iVar9;
    pfVar5 = pfVar7 + iVar12;
    pfVar6 = pfVar8 + iVar13;
    pfVar7 = pfVar5 + iVar10;
    pfVar8 = pfVar6 + iVar11;
    do {
      iVar14 = iVar14 + 1;
      *pfVar4 = fVar1;
      *pfVar7 = fVar2;
      *pfVar8 = fVar3;
      *pfVar5 = (float)((double)local_f8[0].Ptr * (double)local_f8[0]._0_8_);
      *pfVar6 = (float)((double)local_f8[0]._0_8_ * extraout_XMM0_Qb);
      *local_1c0 = (float)extraout_XMM0_Qa;
      *local_1b8 = (float)(double)CONCAT44(uVar17,uVar15);
      *local_1b0 = (float)((double)local_f8[0].Ptr * extraout_XMM0_Qa_00 -
                          extraout_XMM0_Qb * dVar16 * extraout_XMM0_Qa);
      *local_1a8 = (float)(dVar16 * (double)local_f8[0]._0_8_);
      *local_1a0 = (float)((double)local_f8[0].Ptr * extraout_XMM0_Qa_00 * extraout_XMM0_Qa -
                          dVar16 * extraout_XMM0_Qb);
      *local_198 = (float)(dVar16 * (double)local_f8[0].Ptr +
                          extraout_XMM0_Qb * extraout_XMM0_Qa_00 * extraout_XMM0_Qa);
      *local_190 = (float)(double)CONCAT44(uVar20,uVar19);
      local_1c0 = local_1c0 + local_218[0];
      local_1b8 = local_1b8 + local_158[0];
      local_190 = local_190 + local_108[0];
      pfVar4 = pfVar4 + local_1c8[0];
      local_1b0 = local_1b0 + local_148[0];
      local_1a8 = local_1a8 + local_138[0];
      local_1a0 = local_1a0 + local_128[0];
      local_198 = local_198 + local_118[0];
      pfVar5 = pfVar5 + local_1f8[0];
      pfVar6 = pfVar6 + local_208[0];
      pfVar7 = pfVar7 + local_1d8[0];
      pfVar8 = pfVar8 + local_1e8[0];
    } while (iVar14 < local_228->NumInstances);
  }
  return;
}

// GetClosestParticles @ 1491041a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UNiagaraDataInterfaceCamera::GetClosestParticles
          (UNiagaraDataInterfaceCamera *this,FVectorVMExternalFunctionContext *param_1)

{
  float fVar1;
  float fVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  float *pfVar6;
  FNiagaraID FVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  ForElementType<FSetElementId> FVar11;
  longlong lVar12;
  int iVar13;
  ulonglong uVar14;
  int iVar15;
  uint uVar16;
  ulonglong uVar17;
  undefined1 auStack_128 [32];
  ulonglong local_108;
  longlong local_100;
  FNiagaraID local_f8;
  float *local_f0;
  int local_e8 [2];
  float *local_e0;
  float *local_d8;
  int local_d0 [2];
  FNiagaraID local_c8;
  FNiagaraID local_c0;
  int local_b8 [2];
  float *local_b0;
  float *local_a8;
  int local_a0 [2];
  FUserPtrHandler<FCameraDataInterface_InstanceData> local_98;
  TSet<FNiagaraID,DefaultKeyFuncs<FNiagaraID,0>,FDefaultSetAllocator> local_88;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_128;
  VectorVM::FUserPtrHandler<FCameraDataInterface_InstanceData>::
  FUserPtrHandler<FCameraDataInterface_InstanceData>(&local_98,param_1);
  uVar9 = 0;
  local_d0[0] = 0;
  local_e0 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_d0);
  local_b8[0] = 0;
  local_e0 = local_e0 + local_d0[0] * param_1->PerInstanceFnInstanceIdx;
  local_d8 = local_e0;
  pfVar6 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_b8);
  iVar15 = local_b8[0];
  local_a0[0] = 0;
  local_f8 = (FNiagaraID)(pfVar6 + local_b8[0] * param_1->PerInstanceFnInstanceIdx);
  local_c8 = local_f8;
  local_c0 = local_f8;
  pfVar6 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_a0);
  lVar12 = (longlong)local_a0[0];
  local_e8[0] = 0;
  pfVar6 = pfVar6 + local_a0[0] * param_1->PerInstanceFnInstanceIdx;
  local_a8 = pfVar6;
  local_f0 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_e8);
  local_f0 = local_f0 + local_e8[0] * param_1->PerInstanceFnInstanceIdx;
  if (0 < param_1->NumInstances) {
    local_b0 = pfVar6 + lVar12;
    fVar1 = *pfVar6;
    if ((fVar1 == 0.0) || (((local_98.Ptr)->ParticlesSortedByDistance).ArrayNum == 0)) {
      do {
        uVar8 = (int)uVar9 + 1;
        uVar9 = (ulonglong)uVar8;
        *local_f0 = 0.0;
        local_f0 = local_f0 + local_e8[0];
      } while ((int)uVar8 < param_1->NumInstances);
    }
    else {
      local_88.Elements._0_8_ = 0;
      local_88.Elements._8_8_ = 0;
      local_88.Elements._32_8_ = 0;
      local_88.Elements._40_4_ = 0;
      local_88.Elements._44_4_ = 0x80;
      local_88.Elements._48_4_ = 0xffffffff;
      local_88.Elements._52_4_ = 0;
      local_88.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
      local_88.HashSize = 0;
      FVar7 = local_f8;
      uVar14 = uVar9;
      uVar17 = uVar9;
      if (0 < (int)fVar1) {
        do {
          iVar15 = ((local_98.Ptr)->ParticlesSortedByDistance).ArrayNum;
          uVar10 = (uint)uVar9;
          uVar8 = 0;
          if ((int)uVar10 < iVar15) {
            uVar8 = ~uVar10 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (local_108 = uVar14, local_100 = (longlong)iVar15,
             bVar4 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          TSet<FNiagaraID,DefaultKeyFuncs<FNiagaraID,0>,FDefaultSetAllocator>::
          Emplace<FNiagaraID_const_&>
                    (&local_88,&local_f8,
                     (bool *)(((local_98.Ptr)->ParticlesSortedByDistance).AllocatorInstance.Data +
                             uVar17));
          uVar9 = (ulonglong)(uVar10 + 1);
          FVar7 = local_c8;
          uVar14 = uVar14 + 1;
          uVar17 = uVar17 + 0x10;
          iVar15 = local_b8[0];
        } while ((int)(uVar10 + 1) < (int)fVar1);
      }
      iVar13 = 0;
      if (0 < param_1->NumInstances) {
        pfVar6 = local_f0;
        local_f0 = local_e0;
        do {
          fVar1 = *local_f0;
          local_f8 = (FNiagaraID)((longlong)FVar7 + (longlong)iVar15 * 4);
          local_f0 = local_f0 + local_d0[0];
          fVar2 = *(float *)FVar7;
          uVar10 = (int)fVar1 - (int)fVar2 ^ (uint)fVar2 >> 0xd;
          uVar8 = (-0x61c88647 - (int)fVar2) - uVar10 ^ uVar10 << 8;
          uVar16 = ((int)fVar2 - uVar8) - uVar10 ^ uVar8 >> 0xd;
          uVar10 = (uVar10 - uVar16) - uVar8 ^ uVar16 >> 0xc;
          uVar8 = (uVar8 - uVar10) - uVar16 ^ uVar10 << 0x10;
          uVar16 = (uVar16 - uVar8) - uVar10 ^ uVar8 >> 5;
          uVar10 = (uVar10 - uVar16) - uVar8 ^ uVar16 >> 3;
          uVar8 = (uVar8 - uVar10) - uVar16 ^ uVar10 << 10;
          if (local_88.Elements._8_4_ != local_88.Elements._52_4_) {
            FVar11 = (ForElementType<FSetElementId>)&local_88.Hash;
            if (local_88.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
              FVar11 = local_88.Hash.SecondaryData;
            }
            iVar5 = *(int *)((longlong)FVar11 +
                            (ulonglong)
                            (local_88.HashSize - 1U & ((uVar16 - uVar8) - uVar10 ^ uVar8 >> 0xf)) *
                            4);
            while (iVar5 != -1) {
              lVar12 = (longlong)iVar5;
              if ((*(float *)(local_88.Elements._0_8_ + lVar12 * 0x10) == fVar1) &&
                 (*(float *)(local_88.Elements._0_8_ + 4 + lVar12 * 0x10) == fVar2))
              goto LAB_149104492;
              iVar5 = *(int *)(local_88.Elements._0_8_ + 8 + lVar12 * 0x10);
            }
          }
          iVar5 = -1;
LAB_149104492:
          iVar13 = iVar13 + 1;
          *pfVar6 = (float)-(uint)(iVar5 != -1);
          FVar7 = local_f8;
          pfVar6 = pfVar6 + local_e8[0];
        } while (iVar13 < param_1->NumInstances);
      }
      local_88.HashSize = 0;
      if (local_88.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_88.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<FNiagaraID>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<FNiagaraID>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_88.Elements);
    }
  }
  return;
}

// GetGetSplitScreenInfo @ 149105b70

void __thiscall
UNiagaraDataInterfaceCamera::GetGetSplitScreenInfo
          (UNiagaraDataInterfaceCamera *this,FVectorVMExternalFunctionContext *param_1)

{
  float fVar1;
  float *pfVar2;
  int iVar3;
  int local_20 [2];
  FUserPtrHandler<FCameraDataInterface_InstanceData> local_18;
  
  VectorVM::FUserPtrHandler<FCameraDataInterface_InstanceData>::
  FUserPtrHandler<FCameraDataInterface_InstanceData>(&local_18,param_1);
  iVar3 = 0;
  local_20[0] = 0;
  pfVar2 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_20);
  pfVar2 = pfVar2 + local_20[0] * param_1->PerInstanceFnInstanceIdx;
  fVar1 = (float)(local_18.Ptr)->SplitscreenMode;
  if (0 < param_1->NumInstances) {
    do {
      iVar3 = iVar3 + 1;
      *pfVar2 = fVar1;
      pfVar2 = pfVar2 + local_20[0];
    } while (iVar3 < param_1->NumInstances);
  }
  return;
}

// GetPrivateStaticClass @ 149109a10

UClass * __cdecl UNiagaraDataInterfaceCamera::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceCamera.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataInterfaceCamera",
               &Z_Registration_Info_UClass_UNiagaraDataInterfaceCamera.InnerSingleton,
               StaticRegisterNativesUNiagaraDataInterfaceCamera,0x40,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraDataInterfaceCamera>,
               InternalVTableHelperCtorCaller<UNiagaraDataInterfaceCamera>,local_res8,
               UNiagaraDataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceCamera.InnerSingleton;
}

// GetVMExternalFunction @ 14910deb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UNiagaraDataInterfaceCamera::GetVMExternalFunction
          (UNiagaraDataInterfaceCamera *this,FVMExternalFunctionBindingInfo *param_1,void *param_2,
          TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
          *param_3)

{
  FName FVar1;
  undefined8 *puVar2;
  ulong64 uVar3;
  FDestructionSentinel local_48;
  FDelegateAllocation *local_30;
  undefined1 local_28 [8];
  FDelegateAllocation local_20;
  
  FVar1 = param_1->Name;
  if (FVar1 == GetFieldOfViewName) {
    local_28 = (undefined1  [8])0x0;
    local_20.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_20.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_28,
               (FWriteAccessScope *)&local_48);
    local_30 = &local_20;
    puVar2 = UE::Core::Private::DelegateAllocate(0x20,&local_20);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar3 = FDelegateHandle::GenerateNewID();
      puVar2[2] = uVar3;
      *puVar2 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceCamera_GetCameraFOVBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar2[3] = this;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                ((FMRSWRecursiveAccessDetector *)
                 CONCAT44(local_48.Accessor._4_4_,local_48.Accessor._0_4_),&local_48);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_28);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_28,
               (FWriteAccessScope *)&local_48);
    if ((local_20.DelegateSize != 0) &&
       (local_20.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_20.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_20,0,0,0x10);
      local_20.DelegateSize = 0;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                ((FMRSWRecursiveAccessDetector *)
                 CONCAT44(local_48.Accessor._4_4_,local_48.Accessor._0_4_),&local_48);
    }
    if (local_20.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_20.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_28);
  }
  else if (FVar1 == CalculateDistancesName) {
    local_28 = (undefined1  [8])0x0;
    local_20.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_20.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_28,
               (FWriteAccessScope *)&local_48);
    local_30 = &local_20;
    puVar2 = UE::Core::Private::DelegateAllocate(0x20,&local_20);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar3 = FDelegateHandle::GenerateNewID();
      puVar2[2] = uVar3;
      *puVar2 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceCamera_CalculateParticleDistancesBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar2[3] = this;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                ((FMRSWRecursiveAccessDetector *)
                 CONCAT44(local_48.Accessor._4_4_,local_48.Accessor._0_4_),&local_48);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_28);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_28,
               (FWriteAccessScope *)&local_48);
    if ((local_20.DelegateSize != 0) &&
       (local_20.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_20.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_20,0,0,0x10);
      local_20.DelegateSize = 0;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                ((FMRSWRecursiveAccessDetector *)
                 CONCAT44(local_48.Accessor._4_4_,local_48.Accessor._0_4_),&local_48);
    }
    if (local_20.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_20.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_28);
  }
  else if (FVar1 == QueryClosestName) {
    local_28 = (undefined1  [8])0x0;
    local_20.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_20.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_28,
               (FWriteAccessScope *)&local_48);
    local_30 = &local_20;
    puVar2 = UE::Core::Private::DelegateAllocate(0x20,&local_20);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar3 = FDelegateHandle::GenerateNewID();
      puVar2[2] = uVar3;
      *puVar2 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceCamera_GetClosestParticlesBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar2[3] = this;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                ((FMRSWRecursiveAccessDetector *)
                 CONCAT44(local_48.Accessor._4_4_,local_48.Accessor._0_4_),&local_48);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_28);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_28,
               (FWriteAccessScope *)&local_48);
    if ((local_20.DelegateSize != 0) &&
       (local_20.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_20.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_20,0,0,0x10);
      local_20.DelegateSize = 0;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                ((FMRSWRecursiveAccessDetector *)
                 CONCAT44(local_48.Accessor._4_4_,local_48.Accessor._0_4_),&local_48);
    }
    if (local_20.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_20.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_28);
  }
  else if (FVar1 == GetCameraPropertiesName) {
    local_28 = (undefined1  [8])0x0;
    local_20.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_20.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_28,
               (FWriteAccessScope *)&local_48);
    local_30 = &local_20;
    puVar2 = UE::Core::Private::DelegateAllocate(0x20,&local_20);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar3 = FDelegateHandle::GenerateNewID();
      puVar2[2] = uVar3;
      *puVar2 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceCamera_GetCameraPropertiesBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar2[3] = this;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                ((FMRSWRecursiveAccessDetector *)
                 CONCAT44(local_48.Accessor._4_4_,local_48.Accessor._0_4_),&local_48);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_28);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_28,
               (FWriteAccessScope *)&local_48);
    if ((local_20.DelegateSize != 0) &&
       (local_20.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_20.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_20,0,0,0x10);
      local_20.DelegateSize = 0;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                ((FMRSWRecursiveAccessDetector *)
                 CONCAT44(local_48.Accessor._4_4_,local_48.Accessor._0_4_),&local_48);
    }
    if (local_20.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_20.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_28);
  }
  else if (FVar1 == GetSplitScreenName) {
    local_28 = (undefined1  [8])0x0;
    local_20.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_20.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_28,
               (FWriteAccessScope *)&local_48);
    local_30 = &local_20;
    puVar2 = UE::Core::Private::DelegateAllocate(0x20,&local_20);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar3 = FDelegateHandle::GenerateNewID();
      puVar2[2] = uVar3;
      *puVar2 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceCamera_GetGetSplitScreenInfoBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar2[3] = this;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                ((FMRSWRecursiveAccessDetector *)
                 CONCAT44(local_48.Accessor._4_4_,local_48.Accessor._0_4_),&local_48);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_28);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_28,
               (FWriteAccessScope *)&local_48);
    if ((local_20.DelegateSize != 0) &&
       (local_20.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_20.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_20,0,0,0x10);
      local_20.DelegateSize = 0;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                ((FMRSWRecursiveAccessDetector *)
                 CONCAT44(local_48.Accessor._4_4_,local_48.Accessor._0_4_),&local_48);
    }
    if (local_20.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_20.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_28);
  }
  else if (3 < (byte)LogNiagara._0_1_) {
    ::FName::ToString(&param_1->Name,(FString *)local_28);
    if (this == (UNiagaraDataInterfaceCamera *)0x0) {
      ::FString::FString((FString *)&local_48,L"None");
    }
    else {
      UObjectBaseUtility::GetPathName
                ((UObjectBaseUtility *)this,(FString *)&local_48,(UObject *)0x0);
    }
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
    if ((void *)local_48._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_48._0_8_);
    }
    if ((atomic<unsigned___int64>)local_28 != (atomic<unsigned___int64>)0x0) {
      FMemory::Free((void *)local_28);
    }
  }
  return;
}

// HasPreSimulateTick @ 149111d80

bool __thiscall UNiagaraDataInterfaceCamera::HasPreSimulateTick(UNiagaraDataInterfaceCamera *this)

{
  return true;
}

// HasTickGroupPrereqs @ 149112740

bool __thiscall UNiagaraDataInterfaceCamera::HasTickGroupPrereqs(UNiagaraDataInterfaceCamera *this)

{
  return true;
}

// InitPerInstanceData @ 149116af0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UNiagaraDataInterfaceCamera::InitPerInstanceData
          (UNiagaraDataInterfaceCamera *this,void *param_1,FNiagaraSystemInstance *param_2)

{
  undefined8 uVar1;
  double dVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  float fVar5;
  TVector<double>_u_0 local_28;
  
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  puVar4 = (undefined8 *)0x0;
  fVar5 = (float)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  *(float *)param_1 = (float)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(float *)((longlong)param_1 + 8) = fVar5;
  *(float *)((longlong)param_1 + 4) = (float)(double)uVar1;
  dVar2 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  *(double *)((longlong)param_1 + 0x10) = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  *(double *)((longlong)param_1 + 0x18) = dVar2;
  *(double *)((longlong)param_1 + 0x20) = UE::Math::TRotator<double>::ZeroRotator.Roll;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  local_28._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_28._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_28._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  FNiagaraLWCConverter::FNiagaraLWCConverter
            ((FNiagaraLWCConverter *)((longlong)param_1 + 0x30),(TVector<double> *)&local_28._s_0);
  puVar3 = ::operator_new(0x18);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = 0;
    puVar3[1] = 0xffffffffffffffff;
    puVar4 = puVar3;
  }
  *(undefined8 **)((longlong)param_1 + 0x58) = puVar4;
  *(undefined8 **)((longlong)param_1 + 0x50) = puVar4;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  return true;
}

// PerInstanceDataSize @ 14911ae00

int __thiscall UNiagaraDataInterfaceCamera::PerInstanceDataSize(UNiagaraDataInterfaceCamera *this)

{
  return 0x70;
}

// PerInstanceTick @ 14911b530

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

bool __thiscall
UNiagaraDataInterfaceCamera::PerInstanceTick
          (UNiagaraDataInterfaceCamera *this,void *param_1,FNiagaraSystemInstance *param_2,
          float param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  void *pvVar4;
  APlayerCameraManager *pAVar5;
  UGameViewportClient *pUVar6;
  code *pcVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  TArray<TWeakObjectPtr<APlayerController,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *pTVar10;
  bool bVar11;
  undefined1 uVar12;
  int iVar13;
  uint uVar14;
  FNiagaraWorldManager *this_00;
  UWorld *this_01;
  APlayerController *this_02;
  ULocalPlayer *pUVar15;
  double *pdVar16;
  FNiagaraPosition *pFVar17;
  undefined4 *puVar18;
  uint uVar19;
  int iVar20;
  undefined4 uVar21;
  FIdentityFunctor local_res10 [8];
  undefined8 local_e8;
  undefined8 uStack_e0;
  TIndexedContainerIterator<TArray<TWeakObjectPtr<APlayerController,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>_const_,TWeakObjectPtr<APlayerController,FWeakObjectPtr>_const_,int>
  local_d8;
  undefined8 local_c8;
  undefined8 uStack_c0;
  FString local_b8;
  TVector<double>_u_0 local_a8;
  TVector<double>_u_0 local_88;
  FNiagaraPosition local_68;
  undefined1 local_58 [24];
  undefined1 local_40 [24];
  
  if (param_1 == (void *)0x0) {
    return true;
  }
  iVar20 = 0;
  piVar1 = (int *)((longlong)param_1 + 0x6c);
  uVar19 = 0;
  *(undefined4 *)((longlong)param_1 + 0x68) = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)((longlong)param_1 + 0x60),0,piVar1);
  }
  local_e8 = 0xffffffffffffffff;
  while (lVar3 = **(longlong **)((longlong)param_1 + 0x58), lVar3 != 0) {
    local_e8 = *(undefined8 *)(lVar3 + 8);
    uStack_e0 = *(undefined8 *)(lVar3 + 0x10);
    pvVar4 = *(void **)((longlong)param_1 + 0x58);
    *(longlong *)((longlong)param_1 + 0x58) = lVar3;
    uStack_c0 = 0;
    local_c8 = 0xffffffffffffffff;
    *(undefined8 *)(lVar3 + 8) = 0xffffffffffffffff;
    *(undefined8 *)(lVar3 + 0x10) = 0;
    ::operator_delete(pvVar4,0x18);
    if (((*(undefined8 **)((longlong)param_1 + 0x60) <= &local_e8) &&
        (&local_e8 < *(undefined8 **)((longlong)param_1 + 0x60) + (longlong)*piVar1 * 2)) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar11)) {
      pcVar7 = (code *)swi(3);
      uVar12 = (*pcVar7)();
      return (bool)uVar12;
    }
    iVar13 = *(int *)((longlong)param_1 + 0x68);
    if (iVar13 == *piVar1) {
      iVar13 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,(ForAnyElementType *)((longlong)param_1 + 0x60),piVar1);
    }
    *(int *)((longlong)param_1 + 0x68) = iVar13 + 1;
    puVar2 = (undefined8 *)(*(longlong *)((longlong)param_1 + 0x60) + (longlong)iVar13 * 0x10);
    *puVar2 = local_e8;
    puVar2[1] = uStack_e0;
  }
  AlgoImpl::
  StableSortInternal<FDistanceData,FIdentityFunctor,TDereferenceWrapper<FDistanceData,_UNiagaraDataInterfaceCamera::PerInstanceTick_::__l2::<lambda_1>_>_>
            (*(FDistanceData **)((longlong)param_1 + 0x60),*(int *)((longlong)param_1 + 0x68),
             local_res10[0],(<lambda_1> *)local_res10);
  FNiagaraSystemInstance::GetLWCConverter(param_2,(FNiagaraLWCConverter *)&local_a8._s_0,false);
  *(double *)((longlong)param_1 + 0x30) = local_a8._s_0.X;
  *(double *)((longlong)param_1 + 0x38) = local_a8._s_0.Y;
  *(double *)((longlong)param_1 + 0x40) = local_a8._s_0.Z;
  this_00 = FNiagaraSystemInstance::GetWorldManager(param_2);
  this_01 = FNiagaraWorldManager::GetWorld(this_00);
  if ((this_01 != (UWorld *)0x0) &&
     (iVar13 = UWorld::GetNumPlayerControllers(this_01), this->PlayerControllerIndex < iVar13)) {
    UWorld::GetPlayerControllerIterator(this_01,&local_d8);
    do {
      iVar13 = local_d8.Index;
      pTVar10 = local_d8.Container;
      if ((local_d8.Index < 0) || ((local_d8.Container)->ArrayNum <= local_d8.Index)) break;
      uVar14 = uVar19;
      if (local_d8.Index < (local_d8.Container)->ArrayNum) {
        uVar14 = (uint)~local_d8.Index >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar7 = (code *)swi(3);
        uVar12 = (*pcVar7)();
        return (bool)uVar12;
      }
      this_02 = (APlayerController *)
                FWeakObjectPtr::Get((FWeakObjectPtr *)
                                    ((pTVar10->AllocatorInstance).Data + (longlong)iVar13 * 8));
      if ((this_02 != (APlayerController *)0x0) &&
         (pUVar15 = APlayerController::GetLocalPlayer(this_02), pUVar15 != (ULocalPlayer *)0x0)) {
        if (iVar20 == this->PlayerControllerIndex) {
          pAVar5 = (this_02->PlayerCameraManager).field0_0x0.DebugPtr;
          if (pAVar5 != (APlayerCameraManager *)0x0) {
            pdVar16 = (double *)(**(code **)(pAVar5->_padding_ + 0x848))(pAVar5,local_58);
            local_88._s_0.X = *pdVar16;
            local_88._s_0.Y = pdVar16[1];
            local_88._s_0.Z = pdVar16[2];
            pFVar17 = FNiagaraLWCConverter::ConvertWorldToSimulationPosition
                                ((FNiagaraLWCConverter *)&local_a8._s_0,&local_68,
                                 (TVector<double> *)&local_88._s_0);
            *(undefined8 *)param_1 = *(undefined8 *)pFVar17;
            *(undefined4 *)((longlong)param_1 + 8) = *(undefined4 *)&pFVar17->field_0x8;
            pAVar5 = (this_02->PlayerCameraManager).field0_0x0.DebugPtr;
            puVar18 = (undefined4 *)(**(code **)(pAVar5->_padding_ + 0x840))(pAVar5,local_40);
            uVar21 = puVar18[1];
            uVar8 = puVar18[2];
            uVar9 = puVar18[3];
            *(undefined4 *)((longlong)param_1 + 0x10) = *puVar18;
            *(undefined4 *)((longlong)param_1 + 0x14) = uVar21;
            *(undefined4 *)((longlong)param_1 + 0x18) = uVar8;
            *(undefined4 *)((longlong)param_1 + 0x1c) = uVar9;
            *(undefined8 *)((longlong)param_1 + 0x20) = *(undefined8 *)(puVar18 + 4);
            uVar21 = (**(code **)(((this_02->PlayerCameraManager).field0_0x0.DebugPtr)->_padding_ +
                                 0x800))();
            *(undefined4 *)((longlong)param_1 + 0x28) = uVar21;
            pUVar15 = APlayerController::GetLocalPlayer(this_02);
            if (pUVar15 == (ULocalPlayer *)0x0) {
              return false;
            }
            pUVar6 = (pUVar15->ViewportClient).field0_0x0.DebugPtr;
            if (pUVar6 != (UGameViewportClient *)0x0) {
              uVar19 = (uint)(pUVar6->ActiveSplitscreenType).Value;
            }
            *(uint *)((longlong)param_1 + 0x2c) = uVar19;
            return false;
          }
          if (2 < (byte)LogNiagara._0_1_) {
            UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_b8,(UObject *)0x0);
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
            if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_b8.Data.AllocatorInstance.Data);
            }
          }
          break;
        }
        iVar20 = iVar20 + 1;
      }
      local_d8.Index = local_d8.Index + 1;
    } while( true );
  }
  *(undefined8 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined4 *)((longlong)param_1 + 0x28) = 0;
  return false;
}

// PostInitProperties @ 1491207c0

void __thiscall UNiagaraDataInterfaceCamera::PostInitProperties(UNiagaraDataInterfaceCamera *this)

{
  TObjectPtr<UObject>_u_0 local_28;
  undefined2 local_20;
  undefined1 local_1e;
  undefined8 local_1c;
  undefined4 local_14;
  
  UObject::PostInitProperties((UObject *)this);
  if ((this->_padding_ & 0x10) != 0) {
    local_28 = (TObjectPtr<UObject>_u_0)this->_padding_;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_28.DebugPtr != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_28.DebugPtr);
    }
    local_1e = 0;
    local_20 = 1;
    local_1c = 0xffffffffffffffff;
    local_14 = 0xffffffff;
    FNiagaraTypeDefinition::GeneratePathNameHash((FNiagaraTypeDefinition *)&local_28.ObjectPtr);
    FNiagaraTypeRegistry::Register
              ((FNiagaraTypeDefinition *)&local_28.ObjectPtr,AllowParameter|AllowAnyVariable);
  }
  return;
}

// ProvidePerInstanceDataForRenderThread @ 1491254b0

void __thiscall
UNiagaraDataInterfaceCamera::ProvidePerInstanceDataForRenderThread
          (UNiagaraDataInterfaceCamera *this,void *param_1,void *param_2,ulong64 *param_3)

{
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)param_1 = *(undefined4 *)((longlong)param_2 + 0x2c);
  return;
}

// RequiresEarlyViewData @ 14912b1e0

bool __thiscall
UNiagaraDataInterfaceCamera::RequiresEarlyViewData(UNiagaraDataInterfaceCamera *this)

{
  return true;
}

// SetShaderParameters @ 149132cf0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UNiagaraDataInterfaceCamera::SetShaderParameters
          (UNiagaraDataInterfaceCamera *this,
          FNiagaraDataInterfaceSetShaderParametersContext *param_1)

{
  FNiagaraDataInterfaceProxy *pFVar1;
  ulonglong uVar2;
  code *pcVar3;
  bool bVar4;
  FShaderParametersMetadata *pFVar5;
  FName *pFVar6;
  uint uVar7;
  longlong lVar8;
  
  if ((param_1->DataInterfaceProxy == (FNiagaraDataInterfaceProxy *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataInterfaceProxy",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterface.h"
                         ,0x1c1,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar1 = param_1->DataInterfaceProxy;
  uVar2 = param_1->SystemTick->SystemInstanceID;
  if (pFVar1[1].SourceDIName.ComparisonIndex.Value != *(uint *)((longlong)&pFVar1[4]._padding_ + 4))
  {
    pFVar6 = (FName *)pFVar1[5]._padding_;
    if ((FName *)pFVar1[5]._padding_ == (FName *)0x0) {
      pFVar6 = &pFVar1[4].SourceDIName;
    }
    uVar7 = (&pFVar6->ComparisonIndex)
            [(ulonglong)(pFVar1[5].SourceDIName.ComparisonIndex.Value - 1) &
             (uVar2 >> 0x20) * 0x17 + uVar2].Value;
    if (uVar7 != 0xffffffff) {
      do {
        lVar8 = pFVar1[1]._padding_ + (longlong)(int)uVar7 * 0x18;
        if (*(ulonglong *)(pFVar1[1]._padding_ + (longlong)(int)uVar7 * 0x18) == uVar2) {
          if (lVar8 == 0) goto LAB_149132d9a;
          goto LAB_149132dc0;
        }
        uVar7 = *(uint *)(lVar8 + 0x10);
      } while (uVar7 != 0xffffffff);
    }
  }
  lVar8 = 0;
LAB_149132d9a:
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
LAB_149132dc0:
  uVar7 = param_1->ParametersOffset + 0xf & 0xfffffff0;
  pFVar5 = TShaderParameterStructTypeInfo<UNiagaraDataInterfaceCamera::FShaderParameters>::
           GetStructMetadata();
  param_1->ParametersOffset = pFVar5->Size + uVar7;
  *(undefined4 *)(param_1->BaseParameters + uVar7) = *(undefined4 *)(lVar8 + 8);
  return;
}

// StaticRegisterNativesUNiagaraDataInterfaceCamera @ 149139fa0

void __cdecl UNiagaraDataInterfaceCamera::StaticRegisterNativesUNiagaraDataInterfaceCamera(void)

{
  return;
}

