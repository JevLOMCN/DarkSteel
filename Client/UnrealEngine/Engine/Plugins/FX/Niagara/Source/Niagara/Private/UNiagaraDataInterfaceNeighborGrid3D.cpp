// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 28

// StaticClass @ 149198cd0

UClass * __cdecl UNiagaraDataInterfaceNeighborGrid3D::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceNeighborGrid3D.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataInterfaceNeighborGrid3D",
               &Z_Registration_Info_UClass_UNiagaraDataInterfaceNeighborGrid3D.InnerSingleton,
               StaticRegisterNativesUNiagaraDataInterfaceNeighborGrid3D,0x78,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraDataInterfaceNeighborGrid3D>,
               InternalVTableHelperCtorCaller<UNiagaraDataInterfaceNeighborGrid3D>,local_res8,
               UNiagaraDataInterfaceGrid3D::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceNeighborGrid3D.InnerSingleton;
}

// UNiagaraDataInterfaceNeighborGrid3D @ 1491abf00

UNiagaraDataInterfaceNeighborGrid3D * __thiscall
UNiagaraDataInterfaceNeighborGrid3D::UNiagaraDataInterfaceNeighborGrid3D
          (UNiagaraDataInterfaceNeighborGrid3D *this,FVTableHelper *param_1)

{
  UNiagaraDataInterfaceGrid3D::UNiagaraDataInterfaceGrid3D
            ((UNiagaraDataInterfaceGrid3D *)this,param_1);
  this->_padding_ = (longlong)&___7UNiagaraDataInterfaceNeighborGrid3D__6B_;
  return this;
}

// UNiagaraDataInterfaceNeighborGrid3D @ 1491abf30

UNiagaraDataInterfaceNeighborGrid3D * __thiscall
UNiagaraDataInterfaceNeighborGrid3D::UNiagaraDataInterfaceNeighborGrid3D
          (UNiagaraDataInterfaceNeighborGrid3D *this,FObjectInitializer *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  UNiagaraDataInterfaceGrid3D::UNiagaraDataInterfaceGrid3D
            ((UNiagaraDataInterfaceGrid3D *)this,param_1);
  this->MaxNeighborsPerCell = 8;
  this->_padding_ = (longlong)&___7UNiagaraDataInterfaceNeighborGrid3D__6B_;
  *(undefined4 *)&this->_padding_ = 2;
  puVar1 = ::operator_new(0x60);
  puVar2 = (undefined8 *)0x0;
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[9] = 0;
    puVar1[0xb] = 0;
    puVar1[1] = 0;
    *puVar1 = &___7FNiagaraDataInterfaceProxyNeighborGrid3D__6B_;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[6] = 0;
    *(undefined4 *)(puVar1 + 7) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x3c) = 0x80;
    *(undefined4 *)(puVar1 + 8) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x44) = 0;
    puVar1[10] = 0;
    puVar2 = puVar1;
  }
  puVar1 = (undefined8 *)this->_padding_;
  if ((puVar1 != puVar2) && (this->_padding_ = (longlong)puVar2, puVar1 != (undefined8 *)0x0)) {
    (**(code **)*puVar1)(puVar1,1);
  }
  return this;
}

// ~UNiagaraDataInterfaceNeighborGrid3D @ 1491ad590

void __thiscall
UNiagaraDataInterfaceNeighborGrid3D::~UNiagaraDataInterfaceNeighborGrid3D
          (UNiagaraDataInterfaceNeighborGrid3D *this)

{
  this->_padding_ = (longlong)&___7UNiagaraDataInterfaceNeighborGrid3D__6B_;
  UNiagaraDataInterfaceGrid3D::~UNiagaraDataInterfaceGrid3D((UNiagaraDataInterfaceGrid3D *)this);
  return;
}

// operator() @ 1491b0d90

void __thiscall
`UNiagaraDataInterfaceNeighborGrid3D::InitPerInstanceData'::__l2::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  ulonglong uVar1;
  code *pcVar2;
  undefined8 uVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  TKeyInitializer<unsigned___int64_const_&> local_res8;
  ulonglong *local_res18;
  
  lVar6 = *(longlong *)this;
  uVar1 = *(ulonglong *)((longlong)this + 0x30);
  if (*(int *)(lVar6 + 0x18) != *(int *)(lVar6 + 0x44)) {
    lVar7 = *(longlong *)(lVar6 + 0x50);
    if (*(longlong *)(lVar6 + 0x50) == 0) {
      lVar7 = lVar6 + 0x48;
    }
    iVar5 = *(int *)(lVar7 + ((uVar1 >> 0x20) * 0x17 + uVar1 &
                             (ulonglong)(*(int *)(lVar6 + 0x58) - 1)) * 4);
    if (iVar5 != -1) {
      do {
        if (*(ulonglong *)((longlong)iVar5 * 0xa8 + *(longlong *)(lVar6 + 0x10)) == uVar1) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("!RT_Proxy->SystemInstancesToProxyData_RT.Contains(InstanceID)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceNeighborGrid3D.cpp"
                             ,0x24d,L"");
          if (bVar4) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          break;
        }
        iVar5 = *(int *)((longlong)iVar5 * 0xa8 + 0xa0 + *(longlong *)(lVar6 + 0x10));
      } while (iVar5 != -1);
    }
  }
  lVar6 = *(longlong *)this;
  local_res18 = (ulonglong *)((longlong)this + 0x30);
  TSet<TTuple<unsigned___int64,FNDINeighborGrid3DInstanceData_RT>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDINeighborGrid3DInstanceData_RT,0>,FDefaultSetAllocator>
  ::Emplace<TKeyInitializer<unsigned___int64_const_&>_>
            ((TSet<TTuple<unsigned___int64,FNDINeighborGrid3DInstanceData_RT>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDINeighborGrid3DInstanceData_RT,0>,FDefaultSetAllocator>
              *)(lVar6 + 0x10),&local_res8,(bool *)&local_res18);
  lVar6 = (longlong)(int)local_res8.Key * 0xa8 + *(longlong *)(lVar6 + 0x10);
  *(undefined8 *)(lVar6 + 0xc) = *(undefined8 *)((longlong)this + 8);
  *(undefined4 *)(lVar6 + 0x14) = *(undefined4 *)((longlong)this + 0x10);
  *(undefined4 *)(lVar6 + 0x1c) = *(undefined4 *)((longlong)this + 0x14);
  uVar3 = *(undefined8 *)((longlong)this + 0x20);
  *(undefined8 *)(lVar6 + 0x20) = *(undefined8 *)((longlong)this + 0x18);
  *(undefined8 *)(lVar6 + 0x28) = uVar3;
  *(undefined8 *)(lVar6 + 0x30) = *(undefined8 *)((longlong)this + 0x28);
  *(undefined1 *)(lVar6 + 0x38) = 1;
  return;
}

// operator() @ 1491b1550

void __thiscall
`UNiagaraDataInterfaceNeighborGrid3D::GetVMExternalFunction'::__l5::<lambda_1>::operator()
          (void *this,FVectorVMExternalFunctionContext *param_1)

{
  double dVar1;
  double dVar2;
  longlong lVar3;
  int iVar4;
  FUserPtrHandler<FNDINeighborGrid3DInstanceData_GT> local_48;
  FNDIOutputParam<UE::Math::TVector<float>_> local_38;
  
  lVar3 = *(longlong *)this;
  VectorVM::FUserPtrHandler<FNDINeighborGrid3DInstanceData_GT>::
  FUserPtrHandler<FNDINeighborGrid3DInstanceData_GT>(&local_48,param_1);
  FNDIOutputParam<UE::Math::TVector<float>_>::FNDIOutputParam<UE::Math::TVector<float>_>
            (&local_38,param_1);
  iVar4 = 0;
  if (0 < param_1->NumInstances) {
    do {
      dVar1 = *(double *)(lVar3 + 0x60);
      dVar2 = *(double *)(lVar3 + 0x68);
      iVar4 = iVar4 + 1;
      *local_38.X.Register = (float)*(double *)(lVar3 + 0x58);
      *local_38.Y.Register = (float)dVar1;
      *local_38.Z.Register = (float)dVar2;
      local_38.X.Register = local_38.X.Register + local_38.X.AdvanceOffset;
      local_38.Z.Register = local_38.Z.Register + local_38.Z.AdvanceOffset;
      local_38.Y.Register = local_38.Y.Register + local_38.Y.AdvanceOffset;
    } while (iVar4 < param_1->NumInstances);
  }
  return;
}

// operator() @ 1491b16b0

void __thiscall
`UNiagaraDataInterfaceNeighborGrid3D::PerInstanceTickPostSimulate'::__l5::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  TKeyInitializer<unsigned___int64_const_&> local_res8;
  ulonglong *local_res18;
  
  lVar1 = *(longlong *)this;
  uVar2 = *(ulonglong *)((longlong)this + 0x20);
  if (*(int *)(lVar1 + 0x18) != *(int *)(lVar1 + 0x44)) {
    lVar6 = *(longlong *)(lVar1 + 0x50);
    if (*(longlong *)(lVar1 + 0x50) == 0) {
      lVar6 = lVar1 + 0x48;
    }
    iVar5 = *(int *)(lVar6 + ((uVar2 >> 0x20) * 0x17 + uVar2 &
                             (ulonglong)(*(int *)(lVar1 + 0x58) - 1)) * 4);
    if (iVar5 != -1) {
      do {
        if (*(ulonglong *)((longlong)iVar5 * 0xa8 + *(longlong *)(lVar1 + 0x10)) == uVar2)
        goto LAB_1491b1751;
        iVar5 = *(int *)((longlong)iVar5 * 0xa8 + 0xa0 + *(longlong *)(lVar1 + 0x10));
      } while (iVar5 != -1);
    }
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("RT_Proxy->SystemInstancesToProxyData_RT.Contains(InstanceID)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceNeighborGrid3D.cpp"
                     ,0x299,L"");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
LAB_1491b1751:
  lVar1 = *(longlong *)this;
  local_res18 = (ulonglong *)((longlong)this + 0x20);
  TSet<TTuple<unsigned___int64,FNDINeighborGrid3DInstanceData_RT>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDINeighborGrid3DInstanceData_RT,0>,FDefaultSetAllocator>
  ::Emplace<TKeyInitializer<unsigned___int64_const_&>_>
            ((TSet<TTuple<unsigned___int64,FNDINeighborGrid3DInstanceData_RT>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDINeighborGrid3DInstanceData_RT,0>,FDefaultSetAllocator>
              *)(lVar1 + 0x10),&local_res8,(bool *)&local_res18);
  lVar1 = *(longlong *)(lVar1 + 0x10);
  lVar6 = (longlong)(int)local_res8.Key * 0xa8;
  *(undefined8 *)(lVar6 + 0xc + lVar1) = *(undefined8 *)((longlong)this + 8);
  *(undefined4 *)(lVar6 + 0x14 + lVar1) = *(undefined4 *)((longlong)this + 0x10);
  *(undefined4 *)(lVar6 + 0x1c + lVar1) = *(undefined4 *)((longlong)this + 0x14);
  *(undefined4 *)(lVar6 + 0x18 + lVar1) = *(undefined4 *)((longlong)this + 0x18);
  *(undefined1 *)(lVar6 + 0x38 + lVar1) = 1;
  return;
}

// operator() @ 1491b33d0

void __thiscall
`UNiagaraDataInterfaceNeighborGrid3D::GetVMExternalFunction'::__l16::<lambda_2>::operator()
          (void *this,FVectorVMExternalFunctionContext *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int local_40 [4];
  int local_30 [4];
  int local_20 [2];
  FUserPtrHandler<FNDINeighborGrid3DInstanceData_GT> local_18;
  
  VectorVM::FUserPtrHandler<FNDINeighborGrid3DInstanceData_GT>::
  FUserPtrHandler<FNDINeighborGrid3DInstanceData_GT>(&local_18,param_1);
  iVar9 = 0;
  local_40[0] = 0;
  pfVar4 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_40);
  iVar7 = local_40[0] * param_1->PerInstanceFnInstanceIdx;
  local_30[0] = 0;
  pfVar5 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_30);
  iVar8 = local_30[0] * param_1->PerInstanceFnInstanceIdx;
  local_20[0] = 0;
  pfVar6 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_20);
  fVar1 = (float)((local_18.Ptr)->NumCells).field0_0x0._s_0.X;
  fVar2 = (float)((local_18.Ptr)->NumCells).field0_0x0._s_0.Y;
  fVar3 = (float)((local_18.Ptr)->NumCells).field0_0x0._s_0.Z;
  if (0 < param_1->NumInstances) {
    pfVar6 = pfVar6 + local_20[0] * param_1->PerInstanceFnInstanceIdx;
    pfVar5 = pfVar5 + iVar8;
    pfVar4 = pfVar4 + iVar7;
    do {
      iVar9 = iVar9 + 1;
      *pfVar4 = fVar1;
      *pfVar5 = fVar2;
      *pfVar6 = fVar3;
      pfVar6 = pfVar6 + local_20[0];
      pfVar5 = pfVar5 + local_30[0];
      pfVar4 = pfVar4 + local_40[0];
    } while (iVar9 < param_1->NumInstances);
  }
  return;
}

// BuildShaderParameters @ 1491b5aa0

void __thiscall
UNiagaraDataInterfaceNeighborGrid3D::BuildShaderParameters
          (UNiagaraDataInterfaceNeighborGrid3D *this,FNiagaraShaderParametersBuilder *param_1)

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
  pFVar5 = TShaderParameterStructTypeInfo<UNiagaraDataInterfaceNeighborGrid3D::FShaderParameters>::
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
  pFVar3->NextMemberOffset = pFVar3->NextMemberOffset + 0x60;
  return;
}

// CopyToInternal @ 1491b7ba0

bool __thiscall
UNiagaraDataInterfaceNeighborGrid3D::CopyToInternal
          (UNiagaraDataInterfaceNeighborGrid3D *this,UNiagaraDataInterface *param_1)

{
  int iVar1;
  bool bVar2;
  UClass *pUVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  FString local_28;
  FString local_18;
  
  bVar2 = UNiagaraDataInterfaceGrid3D::CopyToInternal((UNiagaraDataInterfaceGrid3D *)this,param_1);
  if (!bVar2) {
    return false;
  }
  if (param_1 != (UNiagaraDataInterface *)0x0) {
    pUVar3 = StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      *(uint *)&param_1[2]._padding_ = this->MaxNeighborsPerCell;
      return true;
    }
    pFVar4 = GetTypeName<UNiagaraDataInterfaceNeighborGrid3D>(&local_28);
    pwVar5 = L"";
    if ((pFVar4->Data).ArrayNum == 0) {
      pwVar6 = L"";
    }
    else {
      pwVar6 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
    }
    pFVar4 = GetFullNameForCastLogError<UNiagaraDataInterface>(&local_18,param_1);
    if ((pFVar4->Data).ArrayNum != 0) {
      pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(pwVar5,pwVar6);
  }
  pFVar4 = GetTypeName<UNiagaraDataInterfaceNeighborGrid3D>(&local_28);
  if ((pFVar4->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar5);
}

// DestroyPerInstanceData @ 1491be360

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
UNiagaraDataInterfaceNeighborGrid3D::DestroyPerInstanceData
          (UNiagaraDataInterfaceNeighborGrid3D *this,void *param_1,FNiagaraSystemInstance *param_2)

{
  code *pcVar1;
  bool bVar2;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar3;
  undefined ***pppuVar4;
  ulonglong uVar5;
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
  lStack_70 = this->_padding_;
  if (lStack_70 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypedProxy != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterface.h"
                       ,0x3a0,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    local_68 = param_2->ID;
    local_88[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`UNiagaraDataInterfaceNeighborGrid3D::DestroyPerInstanceData'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                  ::Call;
    local_60 = (undefined ***)0x0;
    local_78 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`UNiagaraDataInterfaceNeighborGrid3D::DestroyPerInstanceData'::`2'::<lambda_1>,1,0>
                ::_vftable_;
    this_00 = FRenderCommandList::GetInstanceTLS();
    if (this_00 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_UNiagaraDataInterfaceNeighborGrid3D::DestroyPerInstanceData_::__l2::TSTR_FNiagaraDIDestroyInstanceData688>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
      pFVar3 = (FRenderCommandTag *)
               TRenderCommandTag<`UNiagaraDataInterfaceNeighborGrid3D::DestroyPerInstanceData'::__l2::TSTR_FNiagaraDIDestroyInstanceData688>
               ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)local_58,pFVar3);
      uVar5 = (ulonglong)local_28;
      if (2 < uVar5) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar5] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)local_58._0_8_ != (code *)0x0) {
          pppuVar4 = (undefined ***)(local_58 + 0x10);
          if (local_30 != (undefined ***)0x0) {
            pppuVar4 = local_30;
          }
          (*(code *)(*pppuVar4)[2])();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar5])(local_58);
      }
    }
    if (local_88[0] != (code *)0x0) {
      pppuVar4 = &local_78;
      if (local_60 != (undefined ***)0x0) {
        pppuVar4 = local_60;
      }
      (*(code *)(*pppuVar4)[2])();
    }
  }
  return;
}

// Equals @ 1491c1110

bool __thiscall
UNiagaraDataInterfaceNeighborGrid3D::Equals
          (UNiagaraDataInterfaceNeighborGrid3D *this,UNiagaraDataInterface *param_1)

{
  int iVar1;
  bool bVar2;
  UClass *pUVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  FString local_28;
  FString local_18;
  
  bVar2 = UNiagaraDataInterfaceGrid3D::Equals((UNiagaraDataInterfaceGrid3D *)this,param_1);
  if (!bVar2) {
    return false;
  }
  if (param_1 != (UNiagaraDataInterface *)0x0) {
    pUVar3 = StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      return (uint)param_1[2]._padding_ == this->MaxNeighborsPerCell;
    }
    pFVar4 = GetTypeName<UNiagaraDataInterfaceNeighborGrid3D_const_>(&local_28);
    pwVar5 = L"";
    if ((pFVar4->Data).ArrayNum == 0) {
      pwVar6 = L"";
    }
    else {
      pwVar6 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
    }
    pFVar4 = GetFullNameForCastLogError<UNiagaraDataInterface_const_>(&local_18,param_1);
    if ((pFVar4->Data).ArrayNum != 0) {
      pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(pwVar5,pwVar6);
  }
  pFVar4 = GetTypeName<UNiagaraDataInterfaceNeighborGrid3D_const_>(&local_28);
  if ((pFVar4->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar5);
}

// GetMaxNeighborsPerCell @ 1491c9170

void __thiscall
UNiagaraDataInterfaceNeighborGrid3D::GetMaxNeighborsPerCell
          (UNiagaraDataInterfaceNeighborGrid3D *this,FVectorVMExternalFunctionContext *param_1)

{
  float *pfVar1;
  int iVar2;
  int local_20 [2];
  FUserPtrHandler<FNDINeighborGrid3DInstanceData_GT> local_18;
  
  VectorVM::FUserPtrHandler<FNDINeighborGrid3DInstanceData_GT>::
  FUserPtrHandler<FNDINeighborGrid3DInstanceData_GT>(&local_18,param_1);
  iVar2 = 0;
  local_20[0] = 0;
  pfVar1 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_20);
  pfVar1 = pfVar1 + local_20[0] * param_1->PerInstanceFnInstanceIdx;
  if (0 < param_1->NumInstances) {
    do {
      iVar2 = iVar2 + 1;
      *pfVar1 = (float)(local_18.Ptr)->MaxNeighborsPerCell;
      pfVar1 = pfVar1 + local_20[0];
    } while (iVar2 < param_1->NumInstances);
  }
  return;
}

// GetNumCells @ 1491c91f0

void __thiscall
UNiagaraDataInterfaceNeighborGrid3D::GetNumCells
          (UNiagaraDataInterfaceNeighborGrid3D *this,FVectorVMExternalFunctionContext *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int local_40 [4];
  int local_30 [4];
  int local_20 [2];
  FUserPtrHandler<FNDINeighborGrid3DInstanceData_GT> local_18;
  
  VectorVM::FUserPtrHandler<FNDINeighborGrid3DInstanceData_GT>::
  FUserPtrHandler<FNDINeighborGrid3DInstanceData_GT>(&local_18,param_1);
  iVar9 = 0;
  local_40[0] = 0;
  pfVar4 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_40);
  iVar7 = local_40[0] * param_1->PerInstanceFnInstanceIdx;
  local_30[0] = 0;
  pfVar5 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_30);
  iVar8 = local_30[0] * param_1->PerInstanceFnInstanceIdx;
  local_20[0] = 0;
  pfVar6 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_20);
  fVar1 = (float)((local_18.Ptr)->NumCells).field0_0x0._s_0.X;
  fVar2 = (float)((local_18.Ptr)->NumCells).field0_0x0._s_0.Y;
  fVar3 = (float)((local_18.Ptr)->NumCells).field0_0x0._s_0.Z;
  if (0 < param_1->NumInstances) {
    pfVar6 = pfVar6 + local_20[0] * param_1->PerInstanceFnInstanceIdx;
    pfVar5 = pfVar5 + iVar8;
    pfVar4 = pfVar4 + iVar7;
    do {
      iVar9 = iVar9 + 1;
      *pfVar4 = fVar1;
      *pfVar5 = fVar2;
      *pfVar6 = fVar3;
      pfVar6 = pfVar6 + local_20[0];
      pfVar5 = pfVar5 + local_30[0];
      pfVar4 = pfVar4 + local_40[0];
    } while (iVar9 < param_1->NumInstances);
  }
  return;
}

// GetPrivateStaticClass @ 1491ca020

UClass * __cdecl UNiagaraDataInterfaceNeighborGrid3D::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceNeighborGrid3D.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataInterfaceNeighborGrid3D",
               &Z_Registration_Info_UClass_UNiagaraDataInterfaceNeighborGrid3D.InnerSingleton,
               StaticRegisterNativesUNiagaraDataInterfaceNeighborGrid3D,0x78,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraDataInterfaceNeighborGrid3D>,
               InternalVTableHelperCtorCaller<UNiagaraDataInterfaceNeighborGrid3D>,local_res8,
               UNiagaraDataInterfaceGrid3D::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceNeighborGrid3D.InnerSingleton;
}

// GetVMExternalFunction @ 1491cca20

void __thiscall
UNiagaraDataInterfaceNeighborGrid3D::GetVMExternalFunction
          (UNiagaraDataInterfaceNeighborGrid3D *this,FVMExternalFunctionBindingInfo *param_1,
          void *param_2,
          TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
          *param_3)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  ulong64 uVar5;
  FMRSWRecursiveAccessDetector *this_00;
  undefined1 local_148 [8];
  FDelegateAllocation local_140;
  undefined1 local_130 [8];
  FDelegateAllocation local_128;
  undefined1 local_118 [8];
  FDelegateAllocation local_110;
  undefined1 local_100 [8];
  FDelegateAllocation local_f8;
  FDestructionSentinel local_e8;
  FDestructionSentinel local_d0;
  FDestructionSentinel local_b8;
  FDestructionSentinel local_a0;
  FDestructionSentinel local_88;
  FDelegateAllocation *local_70;
  FDestructionSentinel local_68;
  FDelegateAllocation *local_50;
  FDestructionSentinel local_48;
  FDelegateAllocation *local_30;
  FDestructionSentinel local_28;
  FDelegateAllocation *local_10;
  
  UNiagaraDataInterfaceGrid3D::GetVMExternalFunction
            ((UNiagaraDataInterfaceGrid3D *)this,param_1,param_2,param_3);
  FVar1 = param_1->Name;
  if (FVar1 == UNiagaraDataInterfaceRWBase::WorldBBoxSizeFunctionName) {
    if ((((param_1->InputParamLocations).ArrayNum != 1) || (param_1->NumOutputs != 3)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("BindingInfo.GetNumInputs() == 1 && BindingInfo.GetNumOutputs() == 3",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceNeighborGrid3D.cpp"
                           ,200,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_148 = (undefined1  [8])0x0;
    local_140.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_140.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_148,
               (FWriteAccessScope *)&local_88);
    local_70 = &local_140;
    puVar4 = UE::Core::Private::DelegateAllocate(0x20,&local_140);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar5 = FDelegateHandle::GenerateNewID();
      puVar4[2] = uVar5;
      *puVar4 = &TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`UNiagaraDataInterfaceNeighborGrid3D::GetVMExternalFunction'::`5'::<lambda_1>_>
                 ::_vftable_;
      puVar4[3] = this;
    }
    if (local_88.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_88.Accessor,&local_88);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_148);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_148,
               (FWriteAccessScope *)&local_e8);
    if ((local_140.DelegateSize != 0) &&
       (local_140.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_140.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_140,0,0,0x10);
      local_140.DelegateSize = 0;
    }
    if (local_e8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_e8.Accessor,&local_e8);
    }
    if (local_140.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_140.DelegateAllocator);
    }
    this_00 = (FMRSWRecursiveAccessDetector *)local_148;
  }
  else if (FVar1 == UNiagaraDataInterfaceRWBase::NumCellsFunctionName) {
    if ((((param_1->InputParamLocations).ArrayNum != 1) || (param_1->NumOutputs != 3)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("BindingInfo.GetNumInputs() == 1 && BindingInfo.GetNumOutputs() == 3",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceNeighborGrid3D.cpp"
                           ,0xcd,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_130 = (undefined1  [8])0x0;
    local_128.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_128.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_130,
               (FWriteAccessScope *)&local_68);
    local_50 = &local_128;
    puVar4 = UE::Core::Private::DelegateAllocate(0x20,&local_128);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar5 = FDelegateHandle::GenerateNewID();
      puVar4[2] = uVar5;
      *puVar4 = &TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`UNiagaraDataInterfaceNeighborGrid3D::GetVMExternalFunction'::`16'::<lambda_2>_>
                 ::_vftable_;
      puVar4[3] = this;
    }
    if (local_68.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_130);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_130,
               (FWriteAccessScope *)&local_d0);
    if ((local_128.DelegateSize != 0) &&
       (local_128.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_128.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_128,0,0,0x10);
      local_128.DelegateSize = 0;
    }
    if (local_d0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_d0.Accessor,&local_d0);
    }
    if (local_128.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_128.DelegateAllocator);
    }
    this_00 = (FMRSWRecursiveAccessDetector *)local_130;
  }
  else if (FVar1 == MaxNeighborsPerCellFunctionName) {
    if ((((param_1->InputParamLocations).ArrayNum != 1) || (param_1->NumOutputs != 1)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("BindingInfo.GetNumInputs() == 1 && BindingInfo.GetNumOutputs() == 1",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceNeighborGrid3D.cpp"
                           ,0xd2,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_118 = (undefined1  [8])0x0;
    local_110.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_110.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_118,
               (FWriteAccessScope *)&local_48);
    local_30 = &local_110;
    puVar4 = UE::Core::Private::DelegateAllocate(0x20,&local_110);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar5 = FDelegateHandle::GenerateNewID();
      puVar4[2] = uVar5;
      *puVar4 = &TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`UNiagaraDataInterfaceNeighborGrid3D::GetVMExternalFunction'::`27'::<lambda_3>_>
                 ::_vftable_;
      puVar4[3] = this;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_118);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_118,
               (FWriteAccessScope *)&local_b8);
    if ((local_110.DelegateSize != 0) &&
       (local_110.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_110.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_110,0,0,0x10);
      local_110.DelegateSize = 0;
    }
    if (local_b8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b8.Accessor,&local_b8);
    }
    if (local_110.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_110.DelegateAllocator);
    }
    this_00 = (FMRSWRecursiveAccessDetector *)local_118;
  }
  else {
    if (FVar1 != SetNumCellsFunctionName) {
      return;
    }
    if ((((param_1->InputParamLocations).ArrayNum != 5) || (param_1->NumOutputs != 1)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("BindingInfo.GetNumInputs() == 5 && BindingInfo.GetNumOutputs() == 1",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceNeighborGrid3D.cpp"
                           ,0xd7,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_100 = (undefined1  [8])0x0;
    local_f8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_f8.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_100,
               (FWriteAccessScope *)&local_28);
    local_10 = &local_f8;
    puVar4 = UE::Core::Private::DelegateAllocate(0x20,&local_f8);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar5 = FDelegateHandle::GenerateNewID();
      puVar4[2] = uVar5;
      *puVar4 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceNeighborGrid3D_SetNumCellsBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar4[3] = this;
    }
    if (local_28.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_100);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_100,
               (FWriteAccessScope *)&local_a0);
    if ((local_f8.DelegateSize != 0) &&
       (local_f8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_f8.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_f8,0,0,0x10);
      local_f8.DelegateSize = 0;
    }
    if (local_a0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a0.Accessor,&local_a0);
    }
    if (local_f8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_f8.DelegateAllocator);
    }
    this_00 = (FMRSWRecursiveAccessDetector *)local_100;
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(this_00);
  return;
}

// GetWorldBBoxSize @ 1491d0d30

void __thiscall
UNiagaraDataInterfaceNeighborGrid3D::GetWorldBBoxSize
          (UNiagaraDataInterfaceNeighborGrid3D *this,FVectorVMExternalFunctionContext *param_1)

{
  double dVar1;
  double dVar2;
  int iVar3;
  FUserPtrHandler<FNDINeighborGrid3DInstanceData_GT> local_48;
  FNDIOutputParam<UE::Math::TVector<float>_> local_38;
  
  VectorVM::FUserPtrHandler<FNDINeighborGrid3DInstanceData_GT>::
  FUserPtrHandler<FNDINeighborGrid3DInstanceData_GT>(&local_48,param_1);
  FNDIOutputParam<UE::Math::TVector<float>_>::FNDIOutputParam<UE::Math::TVector<float>_>
            (&local_38,param_1);
  iVar3 = 0;
  if (0 < param_1->NumInstances) {
    do {
      dVar1 = (double)this->_padding_;
      dVar2 = (double)this->_padding_;
      iVar3 = iVar3 + 1;
      *local_38.X.Register = (float)(double)this->_padding_;
      *local_38.Y.Register = (float)dVar1;
      *local_38.Z.Register = (float)dVar2;
      local_38.X.Register = local_38.X.Register + local_38.X.AdvanceOffset;
      local_38.Z.Register = local_38.Z.Register + local_38.Z.AdvanceOffset;
      local_38.Y.Register = local_38.Y.Register + local_38.Y.AdvanceOffset;
    } while (iVar3 < param_1->NumInstances);
  }
  return;
}

// HasPostSimulateTick @ 1491d1170

bool __thiscall
UNiagaraDataInterfaceNeighborGrid3D::HasPostSimulateTick(UNiagaraDataInterfaceNeighborGrid3D *this)

{
  return true;
}

// HasPreSimulateTick @ 1491d1200

bool __thiscall
UNiagaraDataInterfaceNeighborGrid3D::HasPreSimulateTick(UNiagaraDataInterfaceNeighborGrid3D *this)

{
  return true;
}

// InitPerInstanceData @ 1491d23b0

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
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

bool __thiscall
UNiagaraDataInterfaceNeighborGrid3D::InitPerInstanceData
          (UNiagaraDataInterfaceNeighborGrid3D *this,void *param_1,FNiagaraSystemInstance *param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  TRHIGlobal<unsigned___int64> TVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  undefined1 uVar7;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar8;
  code **ppcVar9;
  ulonglong uVar10;
  int iVar11;
  int iVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  code *pcVar16;
  double dVar17;
  undefined1 auStack_1a8 [32];
  int local_188;
  uint local_180;
  uint local_178;
  ulong64 local_170;
  FScriptContainerElement *local_168;
  int local_158;
  int iStack_154;
  int local_150;
  FString local_148;
  FString local_138;
  code *local_128;
  code *pcStack_120;
  code *local_118;
  code *local_110;
  int iStack_108;
  int iStack_104;
  int local_100;
  uint uStack_fc;
  code *pcStack_f8;
  code *pcStack_f0;
  code *pcStack_e8;
  code *local_e0;
  code *local_d8 [2];
  code *local_c8 [3];
  code **local_b0;
  code *local_a8 [2];
  code *local_98 [3];
  code **local_80;
  byte local_78;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStack_1a8;
  if ((GPixelFormats[0x1d].Capabilities & (TypedUAVStore|TypedUAVLoad|BufferAtomics)) !=
      (TypedUAVStore|TypedUAVLoad|BufferAtomics)) {
    return false;
  }
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)param_1 = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_;
  *(int *)((longlong)param_1 + 8) = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x18) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x20) = uVar1;
  *(double *)((longlong)param_1 + 0x28) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  pcVar2 = (code *)this->_padding_;
  if ((pcVar2 == (code *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypedProxy != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterface.h"
                         ,0x3a0,L""), bVar6)) {
    pcVar2 = (code *)swi(3);
    uVar7 = (*pcVar2)();
    return (bool)uVar7;
  }
  uVar1 = *(undefined8 *)((longlong)&this->_padding_ + 4);
  local_128 = (code *)this->_padding_;
  pcStack_120 = (code *)this->_padding_;
  iVar4 = (int)this->_padding_;
  pcVar16 = (code *)this->_padding_;
  iVar12 = *(int *)((longlong)&this->_padding_ + 4);
  uStack_fc = this->MaxNeighborsPerCell;
  local_158 = (int)uVar1;
  dVar17 = (double)local_128 / (double)local_158;
  if (iVar4 == 1) {
    dVar17 = (double)this->_padding_;
    if ((double)this->_padding_ <= (double)this->_padding_) {
      dVar17 = (double)this->_padding_;
    }
    if (dVar17 <= (double)this->_padding_) {
      dVar17 = (double)this->_padding_;
    }
    dVar17 = dVar17 / (double)*(int *)((longlong)&this->_padding_ + 4);
  }
  else {
    if (iVar4 != 2) {
      iStack_154 = (int)((ulonglong)uVar1 >> 0x20);
      goto LAB_1491d2678;
    }
    dVar17 = (double)*(float *)&this->_padding_;
  }
  dVar15 = (double)this->_padding_;
  dVar13 = (double)this->_padding_;
  dVar14 = (double)this->_padding_;
  local_158 = (int)((longlong)
                    ROUND((__real_4000000000000000 / dVar17) * dVar14 - __real_3fe0000000000000) >>
                   1);
  iVar11 = (int)((longlong)ROUND((dVar15 + dVar15) / dVar17 - __real_3fe0000000000000) >> 1);
  iStack_154 = (int)((longlong)
                     ROUND((__real_4000000000000000 / dVar17) * dVar13 - __real_3fe0000000000000) >>
                    1);
  iVar12 = iVar11;
  iVar4 = local_158;
  iVar5 = iStack_154;
  if ((dVar14 <= dVar13) || (dVar14 <= dVar15)) {
    if ((dVar14 < dVar13) && (dVar15 < dVar13)) {
      dVar14 = (double)local_158 * dVar17 - dVar14;
      iVar4 = local_158 + 1;
      if ((double)CONCAT44((uint)((ulonglong)dVar14 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(dVar14,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
          __real_3e45798ee2308c3a) {
        iVar4 = local_158;
      }
      goto LAB_1491d25b5;
    }
    if ((dVar14 < dVar15) && (dVar13 < dVar15)) {
      dVar14 = (double)local_158 * dVar17 - dVar14;
      iVar4 = local_158 + 1;
      if ((double)CONCAT44((uint)((ulonglong)dVar14 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(dVar14,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
          __real_3e45798ee2308c3a) {
        iVar4 = local_158;
      }
      local_158 = iVar4;
      dVar13 = (double)iStack_154 * dVar17 - dVar13;
      if (__real_3e45798ee2308c3a <
          (double)CONCAT44((uint)((ulonglong)dVar13 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(dVar13,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
        iStack_154 = iStack_154 + 1;
      }
    }
  }
  else {
    dVar13 = (double)iStack_154 * dVar17 - dVar13;
    iVar5 = iStack_154 + 1;
    if ((double)CONCAT44((uint)((ulonglong)dVar13 >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84(dVar13,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
        __real_3e45798ee2308c3a) {
      iVar5 = iStack_154;
    }
LAB_1491d25b5:
    iStack_154 = iVar5;
    local_158 = iVar4;
    dVar15 = (double)iVar11 * dVar17 - dVar15;
    iVar12 = iVar11 + 1;
    if ((double)CONCAT44((uint)((ulonglong)dVar15 >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84(dVar15,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
        __real_3e45798ee2308c3a) {
      iVar12 = iVar11;
    }
  }
  local_128 = (code *)((double)local_158 * dVar17);
  pcVar16 = (code *)((double)iVar12 * dVar17);
  pcStack_120 = (code *)((double)iStack_154 * dVar17);
LAB_1491d2678:
  *(code **)((longlong)param_1 + 0x18) = local_128;
  *(code **)((longlong)param_1 + 0x20) = pcStack_120;
  *(uint *)((longlong)param_1 + 0x10) = uStack_fc;
  *(code **)((longlong)param_1 + 0x28) = pcVar16;
  iStack_108 = 1;
  if (1 < local_158) {
    iStack_108 = local_158;
  }
  iStack_104 = 1;
  if (1 < iStack_154) {
    iStack_104 = iStack_154;
  }
  _local_158 = CONCAT44(iStack_104,iStack_108);
  local_150 = 1;
  if (1 < iVar12) {
    local_150 = iVar12;
  }
  *(float *)((longlong)param_1 + 0xc) = (float)dVar17;
  *(int *)param_1 = iStack_108;
  *(int *)((longlong)param_1 + 4) = iStack_104;
  *(int *)((longlong)param_1 + 8) = local_150;
  TVar3 = GRHIGlobals.MaxViewDimensionForTypedBuffer;
  local_178 = local_150 * iStack_104 * iStack_108 * uStack_fc;
  local_168 = (FScriptContainerElement *)L"";
  local_180 = uStack_fc;
  local_118 = pcVar16;
  if ((local_178 == 0) || ((ulonglong)(longlong)GMaxNiagaraNeighborGridCells < (ulonglong)local_178)
     ) {
    if ((byte)LogNiagara._0_1_ < 2) {
      return false;
    }
    if (this->_padding_ == 0) {
      ::FString::FString(&local_138,L"None");
    }
    else {
      UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this,&local_138,(UObject *)0x0,None);
    }
    if (local_138.Data.ArrayNum != 0) {
      local_168 = local_138.Data.AllocatorInstance.Data;
    }
    local_170 = CONCAT44(local_170._4_4_,GMaxNiagaraNeighborGridCells);
    local_188 = local_150;
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
    local_148.Data.AllocatorInstance.Data = local_138.Data.AllocatorInstance.Data;
  }
  else {
    if (local_178 <= GRHIGlobals.MaxViewDimensionForTypedBuffer.Value) {
      local_e0 = (code *)param_2->ID;
      local_d8[0] = (code *)0x0;
      local_110 = pcVar2;
      local_100 = local_150;
      pcStack_f8 = local_128;
      pcStack_f0 = pcStack_120;
      local_b0 = FMemory::Malloc(0x40,8);
      *local_b0 = (code *)&UE::Core::Private::Function::
                           TFunction_OwnedObject<`UNiagaraDataInterfaceNeighborGrid3D::InitPerInstanceData'::`2'::<lambda_1>,1,1>
                           ::_vftable_;
      local_b0[1] = local_110;
      local_b0[2] = (code *)CONCAT44(iStack_104,iStack_108);
      local_b0[3] = (code *)CONCAT44(uStack_fc,local_100);
      local_b0[4] = pcStack_f8;
      local_b0[5] = pcStack_f0;
      local_b0[6] = pcVar16;
      local_b0[7] = local_e0;
      if (local_b0 + 1 != (code **)0x0) {
        local_d8[0] = UE::Core::Private::Function::
                      TFunctionRefCaller<`UNiagaraDataInterfaceNeighborGrid3D::InitPerInstanceData'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                      ::Call;
      }
      pcStack_e8 = pcVar16;
      this_00 = FRenderCommandList::GetInstanceTLS();
      if (this_00 == (FRenderCommandList *)0x0) {
        FRenderThreadCommandPipe::
        Enqueue<TRenderCommandTag<_UNiagaraDataInterfaceNeighborGrid3D::InitPerInstanceData_::__l2::TSTR_FUpdateData586>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                  ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_d8);
      }
      else {
        this_01 = FRenderCommandList::GetRenderThread(this_00);
        local_a8[0] = local_d8[0];
        local_80 = local_b0;
        local_b0 = (code **)0x0;
        local_98[0] = local_c8[0];
        local_98[1] = local_c8[1];
        local_98[2] = local_c8[2];
        local_d8[0] = (code *)0x0;
        local_78 = 2;
        pFVar8 = (FRenderCommandTag *)
                 TRenderCommandTag<`UNiagaraDataInterfaceNeighborGrid3D::InitPerInstanceData'::__l2::TSTR_FUpdateData586>
                 ::Get();
        UE::RenderCommandPipe::FCommandList::Enqueue
                  (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                            *)local_a8,pFVar8);
        uVar10 = (ulonglong)local_78;
        if ((2 < uVar10) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0xd4,L""), bVar6)) {
          pcVar2 = (code *)swi(3);
          uVar7 = (*pcVar2)();
          return (bool)uVar7;
        }
        if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar10] ==
            UE::Core::Private::
            TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct)
        {
          if (local_a8[0] != (code *)0x0) {
            ppcVar9 = local_a8 + 2;
            if (local_80 != (code **)0x0) {
              ppcVar9 = local_80;
            }
            (**(code **)(*ppcVar9 + 0x10))();
          }
        }
        else {
          (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar10])
                    ((TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                      *)local_a8);
        }
      }
      if (local_d8[0] != (code *)0x0) {
        ppcVar9 = local_d8 + 2;
        if (local_b0 != (code **)0x0) {
          ppcVar9 = local_b0;
        }
        (**(code **)(*ppcVar9 + 0x10))();
      }
      return true;
    }
    if ((byte)LogNiagara._0_1_ < 2) {
      return false;
    }
    if (this->_padding_ == 0) {
      ::FString::FString(&local_148,L"None");
    }
    else {
      UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this,&local_148,(UObject *)0x0,None);
    }
    if (local_148.Data.ArrayNum != 0) {
      local_168 = local_148.Data.AllocatorInstance.Data;
    }
    local_170 = TVar3.Value;
    local_188 = local_150;
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
  }
  if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_148.Data.AllocatorInstance.Data);
  }
  return false;
}

// PerInstanceDataSize @ 1491d53a0

int __thiscall
UNiagaraDataInterfaceNeighborGrid3D::PerInstanceDataSize(UNiagaraDataInterfaceNeighborGrid3D *this)

{
  return 0x38;
}

// PerInstanceTick @ 1491d54a0

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
UNiagaraDataInterfaceNeighborGrid3D::PerInstanceTick
          (UNiagaraDataInterfaceNeighborGrid3D *this,void *param_1,FNiagaraSystemInstance *param_2,
          float param_3)

{
  return false;
}

// PerInstanceTickPostSimulate @ 1491d58a0

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

bool __thiscall
UNiagaraDataInterfaceNeighborGrid3D::PerInstanceTickPostSimulate
          (UNiagaraDataInterfaceNeighborGrid3D *this,void *param_1,FNiagaraSystemInstance *param_2,
          float param_3)

{
  undefined4 uVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar5;
  code **ppcVar6;
  ulonglong uVar7;
  undefined1 auStack_f8 [32];
  FNiagaraDataInterfaceProxyNeighborGrid3D *local_d8;
  code *pcStack_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  code *local_b8;
  code *local_a8 [2];
  code *local_98 [3];
  code **local_80;
  undefined1 local_78 [40];
  code **local_50;
  byte local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_f8;
  if ((((*(char *)((longlong)param_1 + 0x30) != '\0') && (0 < *(int *)param_1)) &&
      (0 < *(int *)((longlong)param_1 + 4))) &&
     ((0 < *(int *)((longlong)param_1 + 8) && (*(int *)((longlong)param_1 + 0x10) != 0)))) {
    *(undefined1 *)((longlong)param_1 + 0x30) = 0;
    *(float *)((longlong)param_1 + 0xc) =
         (float)(*(double *)((longlong)param_1 + 0x18) / (double)*(int *)param_1);
    local_d8 = UNiagaraDataInterface::GetProxyAs<FNiagaraDataInterfaceProxyNeighborGrid3D>
                         ((UNiagaraDataInterface *)this);
    pcVar2 = *(code **)param_1;
    uVar1 = *(undefined4 *)((longlong)param_1 + 0xc);
    local_c8 = *(undefined4 *)((longlong)param_1 + 8);
    uStack_c4 = *(undefined4 *)((longlong)param_1 + 0x10);
    local_b8 = (code *)param_2->ID;
    local_a8[0] = (code *)0x0;
    local_80 = FMemory::Malloc(0x30,8);
    *local_80 = (code *)&UE::Core::Private::Function::
                         TFunction_OwnedObject<`UNiagaraDataInterfaceNeighborGrid3D::PerInstanceTickPostSimulate'::`5'::<lambda_1>,1,1>
                         ::_vftable_;
    local_80[1] = (code *)local_d8;
    local_80[2] = pcVar2;
    *(undefined4 *)(local_80 + 3) = local_c8;
    *(undefined4 *)((longlong)local_80 + 0x1c) = uStack_c4;
    *(undefined4 *)(local_80 + 4) = uVar1;
    *(undefined4 *)((longlong)local_80 + 0x24) = uStack_bc;
    local_80[5] = local_b8;
    if (local_80 + 1 != (code **)0x0) {
      local_a8[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`UNiagaraDataInterfaceNeighborGrid3D::PerInstanceTickPostSimulate'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
                    ::Call;
    }
    pcStack_d0 = pcVar2;
    uStack_c0 = uVar1;
    this_00 = FRenderCommandList::GetInstanceTLS();
    if (this_00 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_UNiagaraDataInterfaceNeighborGrid3D::PerInstanceTickPostSimulate_::__l5::TSTR_FUpdateData662>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_a8);
    }
    else {
      this_01 = FRenderCommandList::GetRenderThread(this_00);
      local_78._0_8_ = local_a8[0];
      local_50 = local_80;
      local_80 = (code **)0x0;
      local_78._16_8_ = local_98[0];
      local_78._24_8_ = local_98[1];
      local_78._32_8_ = local_98[2];
      local_a8[0] = (code *)0x0;
      local_48 = 2;
      pFVar5 = (FRenderCommandTag *)
               TRenderCommandTag<`UNiagaraDataInterfaceNeighborGrid3D::PerInstanceTickPostSimulate'::__l5::TSTR_FUpdateData662>
               ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)local_78,pFVar5);
      uVar7 = (ulonglong)local_48;
      if (2 < uVar7) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar7] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)local_78._0_8_ != (code *)0x0) {
          ppcVar6 = (code **)(local_78 + 0x10);
          if (local_50 != (code **)0x0) {
            ppcVar6 = local_50;
          }
          (**(code **)(*ppcVar6 + 0x10))();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar7])(local_78);
      }
    }
    if (local_a8[0] != (code *)0x0) {
      ppcVar6 = local_a8 + 2;
      if (local_80 != (code **)0x0) {
        ppcVar6 = local_80;
      }
      (**(code **)(*ppcVar6 + 0x10))();
    }
  }
  return false;
}

// PostInitProperties @ 1491d7730

void __thiscall
UNiagaraDataInterfaceNeighborGrid3D::PostInitProperties(UNiagaraDataInterfaceNeighborGrid3D *this)

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

// ProvidePerInstanceDataForRenderThread @ 1491d92c0

void __thiscall
UNiagaraDataInterfaceNeighborGrid3D::ProvidePerInstanceDataForRenderThread
          (UNiagaraDataInterfaceNeighborGrid3D *this,void *param_1,void *param_2,ulong64 *param_3)

{
  return;
}

// SetNumCells @ 1491df8b0

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UNiagaraDataInterfaceNeighborGrid3D::SetNumCells
          (UNiagaraDataInterfaceNeighborGrid3D *this,FVectorVMExternalFunctionContext *param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float *pfVar7;
  bool bVar8;
  int iVar9;
  float *pfVar10;
  float *pfVar11;
  int iVar12;
  ForAnyElementType FVar13;
  float *pfVar14;
  uint uVar15;
  longlong lVar16;
  longlong lVar17;
  float fVar18;
  longlong lVar19;
  longlong lVar20;
  int local_res20;
  FString local_c8;
  int local_b8 [2];
  longlong local_b0;
  ForAnyElementType local_a8;
  int local_a0;
  int iStack_9c;
  float *local_98;
  float *local_90;
  float *local_88;
  longlong local_80;
  ulong64 local_78;
  longlong local_70;
  longlong local_68;
  longlong local_60;
  float *local_58;
  undefined8 local_50;
  
  VectorVM::FUserPtrHandler<FNDINeighborGrid3DInstanceData_GT>::
  FUserPtrHandler<FNDINeighborGrid3DInstanceData_GT>
            ((FUserPtrHandler<FNDINeighborGrid3DInstanceData_GT> *)&local_a8,param_1);
  local_b8[0] = 0;
  pfVar10 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_b8);
  iVar9 = local_b8[0];
  lVar16 = (longlong)local_b8[0];
  local_b8[0] = 0;
  iVar1 = param_1->PerInstanceFnInstanceIdx;
  local_98 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_b8);
  iVar12 = local_b8[0];
  lVar17 = (longlong)local_b8[0];
  local_b8[0] = 0;
  local_98 = local_98 + iVar12 * param_1->PerInstanceFnInstanceIdx;
  local_90 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_b8);
  iVar12 = local_b8[0];
  lVar19 = (longlong)local_b8[0];
  local_b8[0] = 0;
  local_90 = local_90 + iVar12 * param_1->PerInstanceFnInstanceIdx;
  local_88 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_b8);
  lVar20 = (longlong)local_b8[0];
  local_c8.Data.ArrayNum = 0;
  local_88 = local_88 + local_b8[0] * param_1->PerInstanceFnInstanceIdx;
  pfVar11 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,&local_c8.Data.ArrayNum);
  local_res20 = 0;
  iVar12 = param_1->NumInstances;
  if (0 < iVar12) {
    pfVar7 = (float *)CONCAT44(iStack_9c,local_a0);
    local_80 = lVar20 << 2;
    local_70 = lVar16 << 2;
    local_68 = lVar17 << 2;
    local_60 = lVar19 << 2;
    lVar16 = (longlong)local_c8.Data.ArrayNum << 2;
    pfVar11 = pfVar11 + local_c8.Data.ArrayNum * param_1->PerInstanceFnInstanceIdx;
    local_58 = pfVar10 + iVar9 * iVar1;
    local_b0 = lVar16;
    do {
      pfVar10 = (float *)(local_70 + (longlong)local_58);
      fVar2 = *local_58;
      fVar3 = *local_98;
      local_98 = (float *)(local_68 + (longlong)local_98);
      fVar18 = *local_90;
      local_90 = (float *)(local_60 + (longlong)local_90);
      pfVar14 = (float *)(local_80 + (longlong)local_88);
      fVar4 = *local_88;
      if ((((pfVar7 == (float *)0x0) || (iVar12 != 1)) ||
          (*(int *)((longlong)&this->_padding_ + 4) < 0)) ||
         (((int)this->_padding_ < 0 || (*(int *)((longlong)&this->_padding_ + 4) < 0)))) {
        bVar8 = false;
      }
      else {
        bVar8 = true;
      }
      local_78 = GRHIGlobals.MaxViewDimensionForTypedBuffer.Value;
      uVar15 = (int)fVar4 * (int)fVar18 * (int)fVar3 * (int)fVar2;
      local_58 = pfVar10;
      local_88 = pfVar14;
      if ((uVar15 == 0) || ((ulonglong)(longlong)GMaxNiagaraNeighborGridCells < (ulonglong)uVar15))
      {
        if (1 < (byte)LogNiagara._0_1_) {
          if ((this == (UNiagaraDataInterfaceNeighborGrid3D *)0x0) || (this->_padding_ == 0)) {
            ::FString::FString(&local_c8,L"None");
          }
          else {
            UObjectBaseUtility::GetFullName
                      ((UObjectBaseUtility *)this,&local_c8,(UObject *)0x0,None);
          }
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
          FVar13.Data = local_c8.Data.AllocatorInstance.Data;
LAB_1491dfc2f:
          if (FVar13.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FVar13.Data);
          }
        }
LAB_1491dfc39:
        *pfVar11 = 0.0;
        pfVar10 = (float *)(local_b0 + (longlong)pfVar11);
        lVar16 = local_b0;
      }
      else {
        if (GRHIGlobals.MaxViewDimensionForTypedBuffer.Value < uVar15) {
          if (1 < (byte)LogNiagara._0_1_) {
            if ((this == (UNiagaraDataInterfaceNeighborGrid3D *)0x0) || (this->_padding_ == 0)) {
              ::FString::FString((FString *)&local_a8,L"None");
            }
            else {
              UObjectBaseUtility::GetFullName
                        ((UObjectBaseUtility *)this,(FString *)&local_a8,(UObject *)0x0,None);
            }
            UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
            FVar13.Data = local_a8.Data;
            goto LAB_1491dfc2f;
          }
          goto LAB_1491dfc39;
        }
        pfVar10 = (float *)((longlong)pfVar11 + lVar16);
        *pfVar11 = (float)-(uint)bVar8;
        if (bVar8) {
          local_50 = *(undefined8 *)pfVar7;
          fVar5 = pfVar7[2];
          fVar6 = pfVar7[4];
          if ((int)fVar2 < 1) {
            fVar2 = 1.4013e-45;
          }
          *pfVar7 = fVar2;
          if ((int)fVar3 < 1) {
            fVar3 = 1.4013e-45;
          }
          pfVar7[1] = fVar3;
          if ((int)fVar18 < 1) {
            fVar18 = 1.4013e-45;
          }
          pfVar7[2] = fVar18;
          pfVar7[4] = fVar4;
          if (((((float)local_50 == *pfVar7) && ((float)((ulonglong)local_50 >> 0x20) == fVar3)) &&
              (fVar5 == fVar18)) && (fVar6 == fVar4)) {
            *(undefined1 *)(pfVar7 + 0xc) = 0;
          }
          else {
            *(undefined1 *)(pfVar7 + 0xc) = 1;
          }
        }
      }
      local_res20 = local_res20 + 1;
      iVar12 = param_1->NumInstances;
      pfVar11 = pfVar10;
    } while (local_res20 < iVar12);
  }
  return;
}

// SetShaderParameters @ 1491dfe90

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
UNiagaraDataInterfaceNeighborGrid3D::SetShaderParameters
          (UNiagaraDataInterfaceNeighborGrid3D *this,
          FNiagaraDataInterfaceSetShaderParametersContext *param_1)

{
  uchar *puVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  int iVar5;
  FNiagaraDataInterfaceProxy *pFVar6;
  FRDGBuilder *pFVar7;
  uchar *puVar8;
  code *pcVar9;
  float fVar10;
  bool bVar11;
  ulong64 uVar12;
  FNDINeighborGrid3DInstanceData_RT *pFVar13;
  FShaderParametersMetadata *pFVar14;
  FRDGBufferSRV *pFVar15;
  FRDGBufferUAV *pFVar16;
  uint uVar17;
  int local_28;
  
  if (param_1->DataInterfaceProxy == (FNiagaraDataInterfaceProxy *)0x0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("DataInterfaceProxy",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterface.h"
                        ,0x1c1,L"");
    if (bVar11) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  pFVar6 = param_1->DataInterfaceProxy;
  uVar12 = FNiagaraDataInterfaceSetShaderParametersContext::GetSystemInstanceID(param_1);
  pFVar13 = TMapBase<unsigned___int64,FNDINeighborGrid3DInstanceData_RT,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDINeighborGrid3DInstanceData_RT,0>_>
            ::Find((TMapBase<unsigned___int64,FNDINeighborGrid3DInstanceData_RT,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDINeighborGrid3DInstanceData_RT,0>_>
                    *)(pFVar6 + 1),uVar12);
  pFVar7 = param_1->GraphBuilder;
  uVar17 = param_1->ParametersOffset + 0xf & 0xfffffff0;
  pFVar14 = TShaderParameterStructTypeInfo<UNiagaraDataInterfaceNeighborGrid3D::FShaderParameters>::
            GetStructMetadata();
  puVar8 = param_1->BaseParameters;
  param_1->ParametersOffset = pFVar14->Size + uVar17;
  fVar10 = __real_3f800000;
  if ((pFVar13 == (FNDINeighborGrid3DInstanceData_RT *)0x0) ||
     ((pFVar13->NeighborhoodBuffer).Buffer.Reference == (FRDGPooledBuffer *)0x0)) {
    *(undefined8 *)(puVar8 + uVar17) = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_;
    *(int *)(puVar8 + (ulonglong)uVar17 + 8) =
         UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
    *(undefined8 *)(puVar8 + (ulonglong)uVar17 + 0x10) =
         UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
    *(float *)(puVar8 + (ulonglong)uVar17 + 0x18) =
         UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
    *(undefined8 *)(puVar8 + (ulonglong)uVar17 + 0x20) =
         UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
    *(float *)(puVar8 + (ulonglong)uVar17 + 0x28) =
         UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
    *(undefined8 *)(puVar8 + (ulonglong)uVar17 + 0x30) =
         UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
    *(float *)(puVar8 + (ulonglong)uVar17 + 0x38) =
         UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
    puVar1 = puVar8 + (ulonglong)uVar17 + 0x3c;
    puVar1[0] = '\0';
    puVar1[1] = '\0';
    puVar1[2] = '\0';
    puVar1[3] = '\0';
    pFVar15 = FNiagaraGpuComputeDispatchInterface::GetEmptyBufferSRV
                        (param_1->ComputeDispatchInterface,pFVar7,PF_R32_SINT);
    *(FRDGBufferSRV **)(puVar8 + (ulonglong)uVar17 + 0x40) = pFVar15;
    pFVar15 = FNiagaraGpuComputeDispatchInterface::GetEmptyBufferSRV
                        (param_1->ComputeDispatchInterface,pFVar7,PF_R32_SINT);
  }
  else {
    *(undefined8 *)(puVar8 + uVar17) = *(undefined8 *)&(pFVar13->NumCells).field0_0x0;
    *(int *)(puVar8 + (ulonglong)uVar17 + 8) = (pFVar13->NumCells).field0_0x0._s_0.Z;
    uVar2 = *(undefined8 *)&(pFVar13->NumCells).field0_0x0;
    iVar5 = (pFVar13->NumCells).field0_0x0._s_0.Z;
    local_28 = (int)uVar2;
    *(float *)(puVar8 + (ulonglong)uVar17 + 0x10) = fVar10 / (float)local_28;
    *(float *)(puVar8 + (ulonglong)uVar17 + 0x14) = fVar10 / (float)(int)((ulonglong)uVar2 >> 0x20);
    *(float *)(puVar8 + (ulonglong)uVar17 + 0x18) = fVar10 / (float)iVar5;
    *(float *)(puVar8 + (ulonglong)uVar17 + 0x20) =
         (float)((pFVar13->WorldBBoxSize).field0_0x0._s_0.X /
                (double)(pFVar13->NumCells).field0_0x0._s_0.X);
    *(float *)(puVar8 + (ulonglong)uVar17 + 0x24) =
         (float)((pFVar13->WorldBBoxSize).field0_0x0._s_0.Y /
                (double)(pFVar13->NumCells).field0_0x0._s_0.Y);
    *(float *)(puVar8 + (ulonglong)uVar17 + 0x28) =
         (float)((pFVar13->WorldBBoxSize).field0_0x0._s_0.Z /
                (double)(pFVar13->NumCells).field0_0x0._s_0.Z);
    dVar3 = (pFVar13->WorldBBoxSize).field0_0x0._s_0.Y;
    dVar4 = (pFVar13->WorldBBoxSize).field0_0x0._s_0.Z;
    *(float *)(puVar8 + (ulonglong)uVar17 + 0x30) =
         (float)(pFVar13->WorldBBoxSize).field0_0x0._s_0.X;
    *(float *)(puVar8 + (ulonglong)uVar17 + 0x34) = (float)dVar3;
    *(float *)(puVar8 + (ulonglong)uVar17 + 0x38) = (float)dVar4;
    *(uint *)(puVar8 + (ulonglong)uVar17 + 0x3c) = pFVar13->MaxNeighborsPerCell;
    bVar11 = FNiagaraDataInterfaceSetShaderParametersContext::IsOutputStage(param_1);
    if (bVar11) {
      pFVar15 = FNiagaraGpuComputeDispatchInterface::GetEmptyBufferSRV
                          (param_1->ComputeDispatchInterface,pFVar7,PF_R32_SINT);
      *(FRDGBufferSRV **)(puVar8 + (ulonglong)uVar17 + 0x40) = pFVar15;
      pFVar15 = FNiagaraGpuComputeDispatchInterface::GetEmptyBufferSRV
                          (param_1->ComputeDispatchInterface,pFVar7,PF_R32_SINT);
      *(FRDGBufferSRV **)(puVar8 + (ulonglong)uVar17 + 0x48) = pFVar15;
      pFVar16 = FNiagaraPooledRWBuffer::GetOrCreateUAV(&pFVar13->NeighborhoodBuffer,pFVar7);
      *(FRDGBufferUAV **)(puVar8 + (ulonglong)uVar17 + 0x50) = pFVar16;
      pFVar16 = FNiagaraPooledRWBuffer::GetOrCreateUAV(&pFVar13->NeighborhoodCountBuffer,pFVar7);
      goto LAB_1491e014b;
    }
    pFVar15 = FNiagaraPooledRWBuffer::GetOrCreateSRV(&pFVar13->NeighborhoodBuffer,pFVar7);
    *(FRDGBufferSRV **)(puVar8 + (ulonglong)uVar17 + 0x40) = pFVar15;
    pFVar15 = FNiagaraPooledRWBuffer::GetOrCreateSRV(&pFVar13->NeighborhoodCountBuffer,pFVar7);
  }
  *(FRDGBufferSRV **)(puVar8 + (ulonglong)uVar17 + 0x48) = pFVar15;
  pFVar16 = FNiagaraGpuComputeDispatchInterface::GetEmptyBufferUAV
                      (param_1->ComputeDispatchInterface,pFVar7,PF_R32_SINT);
  *(FRDGBufferUAV **)(puVar8 + (ulonglong)uVar17 + 0x50) = pFVar16;
  pFVar16 = FNiagaraGpuComputeDispatchInterface::GetEmptyBufferUAV
                      (param_1->ComputeDispatchInterface,pFVar7,PF_R32_SINT);
LAB_1491e014b:
  *(FRDGBufferUAV **)(puVar8 + (ulonglong)uVar17 + 0x58) = pFVar16;
  return;
}

// StaticRegisterNativesUNiagaraDataInterfaceNeighborGrid3D @ 1491e35b0

void __cdecl
UNiagaraDataInterfaceNeighborGrid3D::StaticRegisterNativesUNiagaraDataInterfaceNeighborGrid3D(void)

{
  return;
}

