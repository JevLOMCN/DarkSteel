// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 25

// StaticClass @ 1491ee830

UClass * __cdecl UNiagaraDataInterfaceVectorField::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceVectorField.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataInterfaceVectorField",
               &Z_Registration_Info_UClass_UNiagaraDataInterfaceVectorField.InnerSingleton,
               StaticRegisterNativesUNiagaraDataInterfaceVectorField,0x48,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraDataInterfaceVectorField>,
               InternalVTableHelperCtorCaller<UNiagaraDataInterfaceVectorField>,local_res8,
               UNiagaraDataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceVectorField.InnerSingleton;
}

// UNiagaraDataInterfaceVectorField @ 149214350

UNiagaraDataInterfaceVectorField * __thiscall
UNiagaraDataInterfaceVectorField::UNiagaraDataInterfaceVectorField
          (UNiagaraDataInterfaceVectorField *this,FVTableHelper *param_1)

{
  UNiagaraDataInterface::UNiagaraDataInterface((UNiagaraDataInterface *)this,param_1);
  this->_padding_ = (longlong)&___7UNiagaraDataInterfaceVectorField__6B_;
  (this->Field).field0_0x0.DebugPtr = (UVectorField *)0x0;
  return this;
}

// UNiagaraDataInterfaceVectorField @ 149214380

UNiagaraDataInterfaceVectorField * __thiscall
UNiagaraDataInterfaceVectorField::UNiagaraDataInterfaceVectorField
          (UNiagaraDataInterfaceVectorField *this,FObjectInitializer *param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  UNiagaraDataInterface::UNiagaraDataInterface((UNiagaraDataInterface *)this,param_1);
  puVar3 = (undefined8 *)0x0;
  this->_padding_ = (longlong)&___7UNiagaraDataInterfaceVectorField__6B_;
  (this->Field).field0_0x0.DebugPtr = (UVectorField *)0x0;
  this->bTileX = false;
  this->bTileY = false;
  this->bTileZ = false;
  puVar2 = ::operator_new(0x68);
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[6] = 0;
    puVar2[7] = 0;
    puVar2[8] = 0;
    puVar2[9] = 0;
    puVar2[10] = 0;
    puVar2[0xb] = 0;
    puVar2[1] = 0;
    *puVar2 = &___7FNiagaraDataInterfaceProxyVectorField__6B_;
    puVar2[0xc] = 0;
    puVar3 = puVar2;
  }
  puVar2 = (undefined8 *)this->_padding_;
  if ((puVar2 != puVar3) && (this->_padding_ = (longlong)puVar3, puVar2 != (undefined8 *)0x0)) {
    (**(code **)*puVar2)(puVar2,1);
  }
  *(uint *)&this->_padding_ = (uint)this->_padding_ | 1;
  if ((this->_padding_ & 4) != 0) {
    pcVar1 = *(code **)(this->_padding_ + 0x448);
    if (pcVar1 == PushToRenderThreadImpl) {
      PushToRenderThreadImpl(this);
      *(uint *)&this->_padding_ = (uint)this->_padding_ & 0xfffffffe;
      return this;
    }
    (*pcVar1)();
    *(uint *)&this->_padding_ = (uint)this->_padding_ & 0xfffffffe;
  }
  return this;
}

// ~UNiagaraDataInterfaceVectorField @ 149216410

void __thiscall
UNiagaraDataInterfaceVectorField::~UNiagaraDataInterfaceVectorField
          (UNiagaraDataInterfaceVectorField *this)

{
  this->_padding_ = (longlong)&___7UNiagaraDataInterfaceVectorField__6B_;
  UNiagaraDataInterface::~UNiagaraDataInterface((UNiagaraDataInterface *)this);
  return;
}

// operator() @ 1492188d0

void __thiscall
`UNiagaraDataInterfaceVectorField::PushToRenderThreadImpl'::__l2::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  longlong lVar1;
  FRHITexture *this_00;
  undefined8 uVar2;
  FRHITexture *this_01;
  
  *(undefined1 *)(*(longlong *)this + 0x58) = *(undefined1 *)((longlong)this + 0x50);
  *(undefined1 *)(*(longlong *)this + 0x59) = *(undefined1 *)((longlong)this + 0x51);
  *(undefined1 *)(*(longlong *)this + 0x5a) = *(undefined1 *)((longlong)this + 0x52);
  lVar1 = *(longlong *)this;
  uVar2 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(lVar1 + 0x10) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(lVar1 + 0x18) = uVar2;
  *(undefined8 *)(lVar1 + 0x20) = *(undefined8 *)((longlong)this + 0x18);
  lVar1 = *(longlong *)this;
  uVar2 = *(undefined8 *)((longlong)this + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = *(undefined8 *)((longlong)this + 0x20);
  *(undefined8 *)(lVar1 + 0x30) = uVar2;
  *(undefined8 *)(lVar1 + 0x38) = *(undefined8 *)((longlong)this + 0x30);
  lVar1 = *(longlong *)this;
  uVar2 = *(undefined8 *)((longlong)this + 0x40);
  *(undefined8 *)(lVar1 + 0x40) = *(undefined8 *)((longlong)this + 0x38);
  *(undefined8 *)(lVar1 + 0x48) = uVar2;
  *(undefined8 *)(lVar1 + 0x50) = *(undefined8 *)((longlong)this + 0x48);
  this_01 = FVectorFieldTextureAccessor::GetTexture
                      ((FVectorFieldTextureAccessor *)((longlong)this + 0x58));
  this_00 = *(FRHITexture **)(*(longlong *)this + 0x60);
  if (this_00 != this_01) {
    *(FRHITexture **)(*(longlong *)this + 0x60) = this_01;
    if (this_01 != (FRHITexture *)0x0) {
      FRHIResource::AddRef((FRHIResource *)this_01);
    }
    if (this_00 != (FRHITexture *)0x0) {
      FRHIResource::Release((FRHIResource *)this_00);
      return;
    }
  }
  return;
}

// BuildShaderParameters @ 149220a30

void __thiscall
UNiagaraDataInterfaceVectorField::BuildShaderParameters
          (UNiagaraDataInterfaceVectorField *this,FNiagaraShaderParametersBuilder *param_1)

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
  pFVar5 = TShaderParameterStructTypeInfo<UNiagaraDataInterfaceVectorField::FShaderParameters>::
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
  pFVar3->NextMemberOffset = pFVar3->NextMemberOffset + 0x50;
  return;
}

// CanExecuteOnTarget @ 149221ba0

bool __thiscall
UNiagaraDataInterfaceVectorField::CanExecuteOnTarget
          (UNiagaraDataInterfaceVectorField *this,ENiagaraSimTarget param_1)

{
  return true;
}

// CopyToInternal @ 149223670

bool __thiscall
UNiagaraDataInterfaceVectorField::CopyToInternal
          (UNiagaraDataInterfaceVectorField *this,UNiagaraDataInterface *param_1)

{
  int iVar1;
  UVectorField *pUVar2;
  bool bVar3;
  UClass *pUVar4;
  FString *pFVar5;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  FString local_28;
  FString local_18;
  
  bVar3 = UNiagaraDataInterface::CopyToInternal((UNiagaraDataInterface *)this,param_1);
  if (!bVar3) {
    return false;
  }
  if (param_1 != (UNiagaraDataInterface *)0x0) {
    pUVar4 = StaticClass();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar4->_padding_)) {
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar2 = (this->Field).field0_0x0.DebugPtr, pUVar2 != (UVectorField *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar2);
      }
      *(TObjectPtr<UVectorField>_u_0 *)(param_1 + 1) = (this->Field).field0_0x0;
      *(bool *)&param_1[1]._padding_ = this->bTileX;
      *(bool *)((longlong)&param_1[1]._padding_ + 1) = this->bTileY;
      bVar3 = this->bTileZ;
      param_1->bRenderDataDirty = 1;
      *(bool *)((longlong)&param_1[1]._padding_ + 2) = bVar3;
      if (param_1->bRenderDataDirty == 1 && param_1->bUsedWithGPUScript == 1) {
        (**(code **)(param_1->_padding_ + 0x448))(param_1);
        param_1->bRenderDataDirty = 0;
      }
      return true;
    }
    pFVar5 = GetTypeName<UNiagaraDataInterfaceVectorField>(&local_28);
    pwVar7 = L"";
    if ((pFVar5->Data).ArrayNum == 0) {
      pwVar6 = L"";
    }
    else {
      pwVar6 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
    }
    pFVar5 = GetFullNameForCastLogError<UNiagaraDataInterface>(&local_18,param_1);
    if ((pFVar5->Data).ArrayNum != 0) {
      pwVar7 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(pwVar7,pwVar6);
  }
  pFVar5 = GetTypeName<UNiagaraDataInterfaceVectorField>(&local_28);
  if ((pFVar5->Data).ArrayNum == 0) {
    pwVar7 = L"";
  }
  else {
    pwVar7 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar7);
}

// Equals @ 14922de90

bool __thiscall
UNiagaraDataInterfaceVectorField::Equals
          (UNiagaraDataInterfaceVectorField *this,UNiagaraDataInterface *param_1)

{
  int iVar1;
  bool bVar2;
  UClass *pUVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  FString local_28;
  FString local_18;
  
  bVar2 = UNiagaraDataInterface::Equals((UNiagaraDataInterface *)this,param_1);
  if (bVar2) {
    if (param_1 == (UNiagaraDataInterface *)0x0) {
      pFVar4 = GetTypeName<UNiagaraDataInterfaceVectorField_const_>(&local_28);
      if ((pFVar4->Data).ArrayNum == 0) {
        pwVar6 = L"";
      }
      else {
        pwVar6 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(L"nullptr",pwVar6);
    }
    pUVar3 = StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((*(int *)(param_1->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar3->_padding_)) {
      pFVar4 = GetTypeName<UNiagaraDataInterfaceVectorField_const_>(&local_28);
      pwVar6 = L"";
      if ((pFVar4->Data).ArrayNum == 0) {
        pwVar5 = L"";
      }
      else {
        pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
      }
      pFVar4 = GetFullNameForCastLogError<UNiagaraDataInterface_const_>(&local_18,param_1);
      if ((pFVar4->Data).ArrayNum != 0) {
        pwVar6 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar6,pwVar5);
    }
    if (((((UVectorField *)param_1[1]._padding_ == (this->Field).field0_0x0.DebugPtr) &&
         ((bool)(char)param_1[1]._padding_ == this->bTileX)) &&
        ((bool)*(char *)((longlong)&param_1[1]._padding_ + 1) == this->bTileY)) &&
       ((bool)*(char *)((longlong)&param_1[1]._padding_ + 2) == this->bTileZ)) {
      return true;
    }
  }
  return false;
}

// GetDimensions @ 1492359a0

TVector<double> * __thiscall
UNiagaraDataInterfaceVectorField::GetDimensions
          (UNiagaraDataInterfaceVectorField *this,TVector<double> *__return_storage_ptr__)

{
  int iVar1;
  UVectorField *pUVar2;
  longlong lVar3;
  bool bVar4;
  UClass *pUVar5;
  
  if ((this->Field).field0_0x0.DebugPtr != (UVectorField *)0x0) {
    pUVar5 = Z_Construct_UClass_UVectorFieldStatic_NoRegister();
    bVar4 = FObjectPtr::IsA((FObjectPtr *)&this->Field,pUVar5);
    if ((bVar4) && (pUVar2 = (this->Field).field0_0x0.DebugPtr, pUVar2 != (UVectorField *)0x0)) {
      iVar1 = *(int *)((longlong)&pUVar2[1]._padding_ + 4);
      (__return_storage_ptr__->field0_0x0)._s_0.X = (double)(int)pUVar2[1]._padding_;
      lVar3 = pUVar2[1]._padding_;
      (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)iVar1;
      (__return_storage_ptr__->field0_0x0)._s_0.Z = (double)(int)lVar3;
      return __return_storage_ptr__;
    }
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X = 1.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = 1.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = 1.0;
  return __return_storage_ptr__;
}

// GetFieldBounds @ 149235ab0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UNiagaraDataInterfaceVectorField::GetFieldBounds
          (UNiagaraDataInterfaceVectorField *this,FVectorVMExternalFunctionContext *param_1)

{
  UVectorField *pUVar1;
  bool bVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  UClass *pUVar9;
  UVectorField *pUVar10;
  int iVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  int local_e0 [4];
  int local_d0 [4];
  int local_c0 [4];
  int local_b0 [4];
  int local_a0 [4];
  int local_90 [4];
  double dStack_80;
  double local_78;
  
  iVar11 = 0;
  local_e0[0] = 0;
  pfVar3 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_e0);
  local_d0[0] = 0;
  pfVar3 = pfVar3 + local_e0[0] * param_1->PerInstanceFnInstanceIdx;
  pfVar4 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_d0);
  local_c0[0] = 0;
  pfVar4 = pfVar4 + local_d0[0] * param_1->PerInstanceFnInstanceIdx;
  pfVar5 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_c0);
  local_b0[0] = 0;
  pfVar5 = pfVar5 + local_c0[0] * param_1->PerInstanceFnInstanceIdx;
  pfVar6 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_b0);
  local_a0[0] = 0;
  pfVar6 = pfVar6 + local_b0[0] * param_1->PerInstanceFnInstanceIdx;
  pfVar7 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_a0);
  local_90[0] = 0;
  pfVar7 = pfVar7 + local_a0[0] * param_1->PerInstanceFnInstanceIdx;
  pfVar8 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_90);
  pfVar8 = pfVar8 + local_90[0] * param_1->PerInstanceFnInstanceIdx;
  if ((this->Field).field0_0x0.DebugPtr == (UVectorField *)0x0) {
LAB_149235bf1:
    pUVar10 = (this->Field).field0_0x0.DebugPtr;
LAB_149235bf5:
    fVar15 = (float)___xmm_bff0000000000000bff0000000000000;
    fVar16 = (float)_UNK_15076c718;
    fVar14 = (float)__real_bff0000000000000;
    if (pUVar10 != (UVectorField *)0x0) goto LAB_149235c22;
  }
  else {
    pUVar9 = Z_Construct_UClass_UVectorFieldStatic_NoRegister();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)&this->Field,pUVar9);
    if (!bVar2) goto LAB_149235bf1;
    pUVar1 = (this->Field).field0_0x0.DebugPtr;
    pUVar10 = (UVectorField *)0x0;
    if (pUVar1 == (UVectorField *)0x0) goto LAB_149235bf5;
    local_78 = (pUVar1->Bounds).Min.field0_0x0._s_0.Z;
    fVar14 = (float)(pUVar1->Bounds).Min.field0_0x0._s_0.X;
    fVar15 = (float)(pUVar1->Bounds).Min.field0_0x0._s_0.Y;
    fVar16 = (float)local_78;
LAB_149235c22:
    pUVar9 = Z_Construct_UClass_UVectorFieldStatic_NoRegister();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)&this->Field,pUVar9);
    if ((bVar2) && (pUVar10 = (this->Field).field0_0x0.DebugPtr, pUVar10 != (UVectorField *)0x0)) {
      uVar12 = *(undefined4 *)&(pUVar10->Bounds).Max.field0_0x0;
      uVar13 = *(undefined4 *)((longlong)&(pUVar10->Bounds).Max.field0_0x0 + 4);
      dStack_80 = (pUVar10->Bounds).Max.field0_0x0._s_0.Y;
      local_78 = (pUVar10->Bounds).Max.field0_0x0._s_0.Z;
      goto LAB_149235c68;
    }
  }
  uVar12 = (undefined4)__real_3ff0000000000000;
  uVar13 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
  dStack_80 = ___xmm_3ff00000000000003ff0000000000000;
  local_78 = _UNK_150689688;
LAB_149235c68:
  if (0 < param_1->NumInstances) {
    do {
      *pfVar3 = fVar14;
      iVar11 = iVar11 + 1;
      *pfVar4 = fVar15;
      pfVar3 = pfVar3 + local_e0[0];
      *pfVar5 = fVar16;
      pfVar4 = pfVar4 + local_d0[0];
      *pfVar6 = (float)(double)CONCAT44(uVar13,uVar12);
      pfVar5 = pfVar5 + local_c0[0];
      *pfVar7 = (float)dStack_80;
      pfVar6 = pfVar6 + local_b0[0];
      *pfVar8 = (float)local_78;
      pfVar7 = pfVar7 + local_a0[0];
      pfVar8 = pfVar8 + local_90[0];
    } while (iVar11 < param_1->NumInstances);
  }
  return;
}

// GetFieldDimensions @ 149235d30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UNiagaraDataInterfaceVectorField::GetFieldDimensions
          (UNiagaraDataInterfaceVectorField *this,FVectorVMExternalFunctionContext *param_1)

{
  UVectorField *pUVar1;
  undefined1 auVar2 [12];
  bool bVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  UClass *pUVar7;
  int iVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined1 in_XMM2 [16];
  undefined8 uVar13;
  undefined1 auVar12 [16];
  int local_40 [4];
  int local_30 [4];
  int local_20 [2];
  
  iVar8 = 0;
  local_40[0] = 0;
  pfVar4 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_40);
  local_30[0] = 0;
  pfVar4 = pfVar4 + local_40[0] * param_1->PerInstanceFnInstanceIdx;
  pfVar5 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_30);
  local_20[0] = 0;
  pfVar5 = pfVar5 + local_30[0] * param_1->PerInstanceFnInstanceIdx;
  pfVar6 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_20);
  uVar13 = in_XMM2._8_8_;
  pfVar6 = pfVar6 + local_20[0] * param_1->PerInstanceFnInstanceIdx;
  if ((this->Field).field0_0x0.DebugPtr != (UVectorField *)0x0) {
    pUVar7 = Z_Construct_UClass_UVectorFieldStatic_NoRegister();
    bVar3 = FObjectPtr::IsA((FObjectPtr *)&this->Field,pUVar7);
    uVar13 = in_XMM2._8_8_;
    if ((bVar3) && (pUVar1 = (this->Field).field0_0x0.DebugPtr, pUVar1 != (UVectorField *)0x0)) {
      dVar10 = (double)*(int *)((longlong)&pUVar1[1]._padding_ + 4);
      dVar11 = (double)(int)pUVar1[1]._padding_;
      dVar9 = (double)(int)pUVar1[1]._padding_;
      goto LAB_149235e0c;
    }
  }
  dVar10 = (double)__xmm_3ff00000000000003ff0000000000000;
  auVar2._4_8_ = uVar13;
  auVar2._0_4_ = __xmm_3ff00000000000003ff0000000000000._4_4_;
  auVar12._0_8_ = auVar2._0_8_ << 0x20;
  auVar12._8_4_ = __xmm_3ff00000000000003ff0000000000000._8_4_;
  auVar12._12_4_ = __xmm_3ff00000000000003ff0000000000000._12_4_;
  dVar11 = auVar12._8_8_;
  dVar9 = __real_3ff0000000000000;
LAB_149235e0c:
  if (0 < param_1->NumInstances) {
    do {
      *pfVar4 = (float)dVar9;
      iVar8 = iVar8 + 1;
      *pfVar5 = (float)dVar10;
      pfVar4 = pfVar4 + local_40[0];
      *pfVar6 = (float)dVar11;
      pfVar5 = pfVar5 + local_30[0];
      pfVar6 = pfVar6 + local_20[0];
    } while (iVar8 < param_1->NumInstances);
  }
  return;
}

// GetFieldTilingAxes @ 149235e90

void __thiscall
UNiagaraDataInterfaceVectorField::GetFieldTilingAxes
          (UNiagaraDataInterfaceVectorField *this,FVectorVMExternalFunctionContext *param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  int iVar7;
  int local_30 [4];
  int local_20 [4];
  int local_10 [2];
  
  iVar7 = 0;
  local_30[0] = 0;
  pfVar4 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_30);
  local_20[0] = 0;
  pfVar4 = pfVar4 + local_30[0] * param_1->PerInstanceFnInstanceIdx;
  pfVar5 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_20);
  local_10[0] = 0;
  pfVar5 = pfVar5 + local_20[0] * param_1->PerInstanceFnInstanceIdx;
  pfVar6 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_10);
  pfVar6 = pfVar6 + local_10[0] * param_1->PerInstanceFnInstanceIdx;
  bVar1 = this->bTileX;
  bVar2 = this->bTileY;
  bVar3 = this->bTileZ;
  if (0 < param_1->NumInstances) {
    do {
      *pfVar4 = (float)bVar1;
      iVar7 = iVar7 + 1;
      *pfVar5 = (float)bVar2;
      pfVar4 = pfVar4 + local_30[0];
      *pfVar6 = (float)bVar3;
      pfVar5 = pfVar5 + local_20[0];
      pfVar6 = pfVar6 + local_10[0];
    } while (iVar7 < param_1->NumInstances);
  }
  return;
}

// GetMaxBounds @ 149236360

/* WARNING: Type propagation algorithm not settling */

TVector<double> * __thiscall
UNiagaraDataInterfaceVectorField::GetMaxBounds
          (UNiagaraDataInterfaceVectorField *this,TVector<double> *__return_storage_ptr__)

{
  double dVar1;
  UVectorField *pUVar2;
  double dVar3;
  bool bVar4;
  UClass *pUVar5;
  
  if ((this->Field).field0_0x0.DebugPtr != (UVectorField *)0x0) {
    pUVar5 = Z_Construct_UClass_UVectorFieldStatic_NoRegister();
    bVar4 = FObjectPtr::IsA((FObjectPtr *)&this->Field,pUVar5);
    if ((bVar4) && (pUVar2 = (this->Field).field0_0x0.DebugPtr, pUVar2 != (UVectorField *)0x0)) {
      dVar3 = (pUVar2->Bounds).Max.field0_0x0._s_0.Y;
      dVar1 = (pUVar2->Bounds).Max.field0_0x0._s_0.Z;
      (__return_storage_ptr__->field0_0x0)._s_0.X = (pUVar2->Bounds).Max.field0_0x0._s_0.X;
      (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar3;
      (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
      return __return_storage_ptr__;
    }
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X = 1.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = 1.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = 1.0;
  return __return_storage_ptr__;
}

// GetMinBounds @ 149236430

/* WARNING: Type propagation algorithm not settling */

TVector<double> * __thiscall
UNiagaraDataInterfaceVectorField::GetMinBounds
          (UNiagaraDataInterfaceVectorField *this,TVector<double> *__return_storage_ptr__)

{
  double dVar1;
  UVectorField *pUVar2;
  double dVar3;
  bool bVar4;
  UClass *pUVar5;
  
  if ((this->Field).field0_0x0.DebugPtr != (UVectorField *)0x0) {
    pUVar5 = Z_Construct_UClass_UVectorFieldStatic_NoRegister();
    bVar4 = FObjectPtr::IsA((FObjectPtr *)&this->Field,pUVar5);
    if ((bVar4) && (pUVar2 = (this->Field).field0_0x0.DebugPtr, pUVar2 != (UVectorField *)0x0)) {
      dVar3 = (pUVar2->Bounds).Min.field0_0x0._s_0.Y;
      dVar1 = (pUVar2->Bounds).Min.field0_0x0._s_0.Z;
      (__return_storage_ptr__->field0_0x0)._s_0.X = (pUVar2->Bounds).Min.field0_0x0._s_0.X;
      (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar3;
      (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
      return __return_storage_ptr__;
    }
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X = -1.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = -1.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = -1.0;
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 1492373c0

UClass * __cdecl UNiagaraDataInterfaceVectorField::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceVectorField.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataInterfaceVectorField",
               &Z_Registration_Info_UClass_UNiagaraDataInterfaceVectorField.InnerSingleton,
               StaticRegisterNativesUNiagaraDataInterfaceVectorField,0x48,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraDataInterfaceVectorField>,
               InternalVTableHelperCtorCaller<UNiagaraDataInterfaceVectorField>,local_res8,
               UNiagaraDataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceVectorField.InnerSingleton;
}

// GetTilingAxes @ 149238b60

TVector<double> * __thiscall
UNiagaraDataInterfaceVectorField::GetTilingAxes
          (UNiagaraDataInterfaceVectorField *this,TVector<double> *__return_storage_ptr__)

{
  bool bVar1;
  ushort uVar2;
  
  uVar2._0_1_ = this->bTileX;
  uVar2._1_1_ = this->bTileY;
  bVar1 = this->bTileZ;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (double)(uVar2 & 0xff);
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)(byte)uVar2._1_1_;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = (double)bVar1;
  return __return_storage_ptr__;
}

// GetVMExternalFunction @ 14923afb0

void __thiscall
UNiagaraDataInterfaceVectorField::GetVMExternalFunction
          (UNiagaraDataInterfaceVectorField *this,FVMExternalFunctionBindingInfo *param_1,
          void *param_2,
          TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
          *param_3)

{
  FName FVar1;
  undefined8 *puVar2;
  ulong64 uVar3;
  UNiagaraDataInterfaceVectorField *local_res10;
  undefined1 local_68 [8];
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDelegateAllocation *local_38;
  
  if (((param_1->Name == SampleVectorFieldName) && ((param_1->InputParamLocations).ArrayNum == 3))
     && (param_1->NumOutputs == 3)) {
    local_68 = (undefined1  [8])0x0;
    local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_60.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
               (FWriteAccessScope *)&local_50);
    local_38 = &local_60;
    puVar2 = UE::Core::Private::DelegateAllocate(0x20,&local_60);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar3 = FDelegateHandle::GenerateNewID();
      puVar2[2] = uVar3;
      *puVar2 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceVectorField_SampleVectorFieldBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar2[3] = this;
    }
    if (local_50.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_68);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
               (FWriteAccessScope *)&local_50);
    if ((local_60.DelegateSize != 0) &&
       (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_60.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_60,0,0,0x10);
      local_60.DelegateSize = 0;
    }
    if (local_50.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
    }
    if (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_60.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_68);
  }
  FVar1 = param_1->Name;
  if (((FVar1 == LoadVectorFieldName) && ((param_1->InputParamLocations).ArrayNum == 3)) &&
     (param_1->NumOutputs == 3)) {
    local_68 = (undefined1  [8])0x0;
    local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_60.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
               (FWriteAccessScope *)&local_50);
    local_38 = &local_60;
    puVar2 = UE::Core::Private::DelegateAllocate(0x20,&local_60);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar3 = FDelegateHandle::GenerateNewID();
      puVar2[2] = uVar3;
      *puVar2 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceVectorField_LoadVectorFieldBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar2[3] = this;
    }
    if (local_50.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_68);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
               (FWriteAccessScope *)&local_50);
  }
  else if (((FVar1 == GetVectorFieldDimensionsName) &&
           ((param_1->InputParamLocations).ArrayNum == 0)) && (param_1->NumOutputs == 3)) {
    local_68 = (undefined1  [8])0x0;
    local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_60.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
               (FWriteAccessScope *)&local_50);
    local_38 = &local_60;
    puVar2 = UE::Core::Private::DelegateAllocate(0x28,&local_60);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar3 = FDelegateHandle::GenerateNewID();
      puVar2[2] = uVar3;
      *puVar2 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUNiagaraDataInterfaceVectorField____A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UNiagaraDataInterfaceVectorField *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar2[3] = 0;
      local_res10 = this;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UNiagaraDataInterfaceVectorField *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar2 + 3),(FObjectPtr)&local_res10);
      puVar2[4] = GetFieldDimensions;
    }
    if (local_50.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_68);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
               (FWriteAccessScope *)&local_50);
  }
  else if (((FVar1 == GetVectorFieldBoundsName) && ((param_1->InputParamLocations).ArrayNum == 0))
          && (param_1->NumOutputs == 6)) {
    local_68 = (undefined1  [8])0x0;
    local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_60.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
               (FWriteAccessScope *)&local_50);
    local_38 = &local_60;
    puVar2 = UE::Core::Private::DelegateAllocate(0x28,&local_60);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar3 = FDelegateHandle::GenerateNewID();
      puVar2[2] = uVar3;
      *puVar2 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUNiagaraDataInterfaceVectorField____A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UNiagaraDataInterfaceVectorField *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar2[3] = 0;
      local_res10 = this;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UNiagaraDataInterfaceVectorField *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar2 + 3),(FObjectPtr)&local_res10);
      puVar2[4] = GetFieldBounds;
    }
    if (local_50.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_68);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
               (FWriteAccessScope *)&local_50);
  }
  else {
    if (FVar1 != GetVectorFieldTilingAxesName) {
      return;
    }
    if ((param_1->InputParamLocations).ArrayNum != 0) {
      return;
    }
    if (param_1->NumOutputs != 3) {
      return;
    }
    local_68 = (undefined1  [8])0x0;
    local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_60.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
               (FWriteAccessScope *)&local_50);
    local_38 = &local_60;
    puVar2 = UE::Core::Private::DelegateAllocate(0x28,&local_60);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar3 = FDelegateHandle::GenerateNewID();
      puVar2[2] = uVar3;
      *puVar2 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUNiagaraDataInterfaceVectorField____A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UNiagaraDataInterfaceVectorField *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar2[3] = 0;
      local_res10 = this;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UNiagaraDataInterfaceVectorField *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar2 + 3),(FObjectPtr)&local_res10);
      puVar2[4] = GetFieldTilingAxes;
    }
    if (local_50.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_68);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
               (FWriteAccessScope *)&local_50);
  }
  if ((local_60.DelegateSize != 0) &&
     (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_60.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_60,0,0,0x10);
    local_60.DelegateSize = 0;
  }
  if (local_50.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
  }
  if (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_60.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_68);
  return;
}

// LoadVectorField @ 149243130

void __thiscall
UNiagaraDataInterfaceVectorField::LoadVectorField
          (UNiagaraDataInterfaceVectorField *this,FVectorVMExternalFunctionContext *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  code *pcVar4;
  bool bVar5;
  float fVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  UClass *pUVar13;
  TVector<double> *pTVar14;
  float fVar15;
  int iVar16;
  int iVar17;
  float fVar18;
  float fVar19;
  UVectorFieldStatic *this_00;
  float fVar20;
  float fVar21;
  float fVar22;
  int local_118 [2];
  float *local_110;
  int local_108 [2];
  float *local_100;
  int local_f8 [2];
  float *local_f0;
  TIntVector3<int>_u_0 local_e8;
  longlong local_d8;
  longlong local_d0;
  longlong local_c8;
  longlong local_c0;
  longlong local_b8;
  longlong local_b0;
  float *local_a8;
  float *local_a0;
  int local_98 [2];
  float *local_90;
  float *local_88;
  int local_80 [2];
  float *local_78;
  float *local_70;
  int local_68 [2];
  TVector<double> local_60;
  
  this_00 = (UVectorFieldStatic *)0x0;
  local_98[0] = 0;
  pfVar7 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_98);
  local_80[0] = 0;
  pfVar7 = pfVar7 + local_98[0] * param_1->PerInstanceFnInstanceIdx;
  local_f0 = pfVar7;
  local_a8 = pfVar7;
  local_a0 = pfVar7;
  pfVar8 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_80);
  local_68[0] = 0;
  pfVar8 = pfVar8 + local_80[0] * param_1->PerInstanceFnInstanceIdx;
  local_90 = pfVar8;
  local_88 = pfVar8;
  pfVar9 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_68);
  local_118[0] = 0;
  pfVar9 = pfVar9 + local_68[0] * param_1->PerInstanceFnInstanceIdx;
  local_78 = pfVar9;
  local_70 = pfVar9;
  pfVar10 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_118);
  local_108[0] = 0;
  pfVar10 = pfVar10 + local_118[0] * param_1->PerInstanceFnInstanceIdx;
  pfVar11 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_108);
  local_f8[0] = 0;
  pfVar11 = pfVar11 + local_108[0] * param_1->PerInstanceFnInstanceIdx;
  local_110 = pfVar11;
  pfVar12 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_f8);
  pfVar12 = pfVar12 + local_f8[0] * param_1->PerInstanceFnInstanceIdx;
  local_100 = pfVar12;
  if ((this->Field).field0_0x0.DebugPtr != (UVectorField *)0x0) {
    pUVar13 = Z_Construct_UClass_UVectorFieldStatic_NoRegister();
    bVar5 = FObjectPtr::IsA((FObjectPtr *)&this->Field,pUVar13);
    if (bVar5) {
      this_00 = (UVectorFieldStatic *)(this->Field).field0_0x0.DebugPtr;
    }
  }
  if ((this->Field).field0_0x0.DebugPtr != (UVectorField *)0x0) {
    pUVar13 = Z_Construct_UClass_UVectorFieldAnimated_NoRegister();
    FObjectPtr::IsA((FObjectPtr *)&this->Field,pUVar13);
  }
  if ((this_00 != (UVectorFieldStatic *)0x0) && (this_00->bAllowCPUAccess != false)) {
    fVar1 = (float)(this_00->SizeX + -1);
    fVar2 = (float)(this_00->SizeY + -1);
    fVar3 = (float)(this_00->SizeZ + -1);
    if ((this_00->CPUData).ArrayNum != 0) {
      iVar17 = this_00->SizeY;
      if ((int)fVar1 < (int)fVar2) {
        iVar17 = this_00->SizeX;
      }
      iVar16 = this_00->SizeZ;
      if (iVar17 + -1 < (int)fVar3) {
        iVar16 = iVar17;
      }
      if (-1 < iVar16 + -1) {
        iVar17 = 0;
        if (0 < param_1->NumInstances) {
          local_d8 = (longlong)local_98[0] << 2;
          local_d0 = (longlong)local_80[0] << 2;
          local_c8 = (longlong)local_68[0] << 2;
          local_c0 = (longlong)local_118[0] << 2;
          local_b8 = (longlong)local_108[0] << 2;
          local_b0 = (longlong)local_f8[0] << 2;
          do {
            local_e8._s_0.Y = (int)*pfVar8;
            fVar20 = 0.0;
            local_e8._s_0.X = (int)*pfVar7;
            fVar21 = 0.0;
            local_e8._s_0.Z = (int)*pfVar9;
            fVar22 = 0.0;
            fVar6 = fVar3;
            if (local_e8._s_0.Z < (int)fVar3) {
              fVar6 = (float)local_e8._s_0.Z;
            }
            fVar19 = fVar2;
            if (local_e8._s_0.Y < (int)fVar2) {
              fVar19 = (float)local_e8._s_0.Y;
            }
            fVar15 = fVar1;
            if (local_e8._s_0.X < (int)fVar1) {
              fVar15 = (float)local_e8._s_0.X;
            }
            fVar18 = 0.0;
            if (0 < (int)fVar19) {
              fVar18 = fVar19;
            }
            fVar19 = 0.0;
            if (0 < (int)fVar6) {
              fVar19 = fVar6;
            }
            fVar6 = 0.0;
            if (0 < (int)fVar15) {
              fVar6 = fVar15;
            }
            if (((fVar6 == (float)local_e8._s_0.X) && (fVar18 == (float)local_e8._s_0.Y)) &&
               (fVar19 == (float)local_e8._s_0.Z)) {
              pTVar14 = UVectorFieldStatic::Sample
                                  (this_00,&local_60,(TIntVector3<int> *)&local_e8._s_0);
              fVar20 = (float)(pTVar14->field0_0x0)._s_0.X;
              fVar21 = (float)(pTVar14->field0_0x0)._s_0.Y;
              fVar22 = (float)(pTVar14->field0_0x0)._s_0.Z;
            }
            iVar17 = iVar17 + 1;
            pfVar7 = (float *)((longlong)local_f0 + local_d8);
            pfVar8 = (float *)((longlong)pfVar8 + local_d0);
            pfVar9 = (float *)((longlong)pfVar9 + local_c8);
            *pfVar10 = fVar20;
            pfVar10 = (float *)((longlong)pfVar10 + local_c0);
            *pfVar11 = fVar21;
            pfVar11 = (float *)((longlong)pfVar11 + local_b8);
            *pfVar12 = fVar22;
            pfVar12 = (float *)((longlong)pfVar12 + local_b0);
            local_f0 = pfVar7;
          } while (iVar17 < param_1->NumInstances);
        }
        goto LAB_149243462;
      }
    }
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5755453212559671996>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceVectorField.cpp"
                       ,700,"StaticVectorField->HasCPUData() && MaxSampleIndex.GetMin() >= 0");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
LAB_149243462:
  iVar17 = 0;
  if (0 < param_1->NumInstances) {
    do {
      *pfVar10 = 0.0;
      iVar17 = iVar17 + 1;
      *pfVar11 = 0.0;
      pfVar10 = pfVar10 + local_118[0];
      *pfVar12 = 0.0;
      pfVar11 = pfVar11 + local_108[0];
      pfVar12 = pfVar12 + local_f8[0];
    } while (iVar17 < param_1->NumInstances);
  }
  return;
}

// PostInitProperties @ 149246d60

void __thiscall
UNiagaraDataInterfaceVectorField::PostInitProperties(UNiagaraDataInterfaceVectorField *this)

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

// PostLoad @ 149246ff0

void __thiscall UNiagaraDataInterfaceVectorField::PostLoad(UNiagaraDataInterfaceVectorField *this)

{
  UVectorField *this_00;
  
  UNiagaraDataInterface::PostLoad((UNiagaraDataInterface *)this);
  this_00 = (this->Field).field0_0x0.DebugPtr;
  if (this_00 != (UVectorField *)0x0) {
    UObject::ConditionalPostLoad((UObject *)this_00);
  }
  *(uint *)&this->_padding_ = (uint)this->_padding_ | 1;
  if ((this->_padding_ & 4) != 0) {
    (**(code **)(this->_padding_ + 0x448))(this);
    *(uint *)&this->_padding_ = (uint)this->_padding_ & 0xfffffffe;
  }
  return;
}

// PushToRenderThreadImpl @ 149248430

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UNiagaraDataInterfaceVectorField::PushToRenderThreadImpl(UNiagaraDataInterfaceVectorField *this)

{
  undefined8 uVar1;
  bool bVar2;
  bool bVar3;
  double dVar4;
  UVectorField *pUVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  bool bVar9;
  UClass *pUVar10;
  UVectorField *pUVar11;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar12;
  double *pdVar13;
  ulonglong uVar14;
  double dVar15;
  double dVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  double dVar21;
  double dVar22;
  undefined1 auStack_188 [32];
  FVectorFieldTextureAccessor local_168;
  double local_160;
  undefined1 local_158 [16];
  double local_148;
  double local_140;
  double dStack_138;
  double local_130;
  double local_128;
  double dStack_120;
  double local_118;
  undefined1 local_110;
  undefined1 local_10f;
  undefined1 local_10e;
  FVectorFieldTextureAccessor local_108 [3];
  double local_f0;
  code *local_e8 [2];
  double local_d8 [3];
  double *local_c0;
  undefined1 local_b8 [16];
  double local_a8 [3];
  double *local_90;
  byte local_88;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStack_188;
  dVar4 = (double)this->_padding_;
  if ((dVar4 == 0.0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypedProxy != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterface.h"
                         ,0x3a0,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  dVar15 = __real_3ff0000000000000;
  uVar17 = SUB84(__real_3ff0000000000000,0);
  uVar18 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
  if ((this->Field).field0_0x0.DebugPtr == (UVectorField *)0x0) {
LAB_1492484e5:
    pUVar11 = (this->Field).field0_0x0.DebugPtr;
LAB_1492484e9:
    local_d8[0] = dVar15;
    dVar7 = ___xmm_3ff00000000000003ff0000000000000;
    dVar8 = _UNK_150689688;
    if (pUVar11 != (UVectorField *)0x0) goto LAB_1492484ff;
LAB_149248540:
    pUVar11 = (this->Field).field0_0x0.DebugPtr;
LAB_149248544:
    local_f0 = __real_bff0000000000000;
    uVar19 = SUB84(__real_bff0000000000000,0);
    uVar20 = (undefined4)((ulonglong)__real_bff0000000000000 >> 0x20);
    dVar21 = ___xmm_bff0000000000000bff0000000000000;
    dVar22 = _UNK_15076c718;
    if (pUVar11 != (UVectorField *)0x0) goto LAB_149248569;
LAB_1492485a2:
    pUVar11 = (this->Field).field0_0x0.DebugPtr;
  }
  else {
    pUVar10 = Z_Construct_UClass_UVectorFieldStatic_NoRegister();
    bVar9 = FObjectPtr::IsA((FObjectPtr *)&this->Field,pUVar10);
    if (!bVar9) goto LAB_1492484e5;
    pUVar5 = (this->Field).field0_0x0.DebugPtr;
    pUVar11 = (UVectorField *)0x0;
    if (pUVar5 == (UVectorField *)0x0) goto LAB_1492484e9;
    local_d8[0] = (double)(int)pUVar5[1]._padding_;
    dVar7 = (double)(int)pUVar5[1]._padding_;
    dVar8 = (double)(int)((ulonglong)pUVar5[1]._padding_ >> 0x20);
LAB_1492484ff:
    pUVar10 = Z_Construct_UClass_UVectorFieldStatic_NoRegister();
    bVar9 = FObjectPtr::IsA((FObjectPtr *)&this->Field,pUVar10);
    if (!bVar9) goto LAB_149248540;
    pUVar11 = (this->Field).field0_0x0.DebugPtr;
    if (pUVar11 == (UVectorField *)0x0) {
      pUVar11 = (UVectorField *)0x0;
      goto LAB_149248544;
    }
    uVar1 = *(undefined8 *)((longlong)&(pUVar11->Bounds).Min.field0_0x0 + 0x10);
    uVar19 = (undefined4)uVar1;
    uVar20 = (undefined4)((ulonglong)uVar1 >> 0x20);
    dVar21 = (pUVar11->Bounds).Min.field0_0x0._s_0.X;
    dVar22 = (pUVar11->Bounds).Min.field0_0x0._s_0.Y;
LAB_149248569:
    pUVar10 = Z_Construct_UClass_UVectorFieldStatic_NoRegister();
    bVar9 = FObjectPtr::IsA((FObjectPtr *)&this->Field,pUVar10);
    if (!bVar9) goto LAB_1492485a2;
    pUVar11 = (this->Field).field0_0x0.DebugPtr;
    if (pUVar11 != (UVectorField *)0x0) {
      uVar1 = *(undefined8 *)((longlong)&(pUVar11->Bounds).Max.field0_0x0 + 0x10);
      uVar17 = (undefined4)uVar1;
      uVar18 = (undefined4)((ulonglong)uVar1 >> 0x20);
      dVar15 = (pUVar11->Bounds).Max.field0_0x0._s_0.X;
      dVar16 = (pUVar11->Bounds).Max.field0_0x0._s_0.Y;
      goto LAB_1492485ab;
    }
  }
  local_f0 = dVar15;
  dVar15 = ___xmm_3ff00000000000003ff0000000000000;
  dVar16 = _UNK_150689688;
LAB_1492485ab:
  bVar9 = this->bTileX;
  bVar2 = this->bTileY;
  bVar3 = this->bTileZ;
  FVectorFieldTextureAccessor::FVectorFieldTextureAccessor(&local_168,pUVar11);
  local_148 = local_d8[0];
  local_158._8_4_ = SUB84(dVar8,0);
  local_158._0_8_ = dVar7;
  local_158._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
  local_130 = (double)CONCAT44(uVar20,uVar19);
  local_118 = (double)CONCAT44(uVar18,uVar17);
  local_160 = dVar4;
  local_140 = dVar21;
  dStack_138 = dVar22;
  local_128 = dVar15;
  dStack_120 = dVar16;
  local_110 = bVar9;
  local_10f = bVar2;
  local_10e = bVar3;
  FVectorFieldTextureAccessor::FVectorFieldTextureAccessor(local_108,&local_168);
  local_e8[0] = (code *)0x0;
  local_c0 = FMemory::Malloc(0x68,8);
  *local_c0 = (double)&UE::Core::Private::Function::
                       TFunction_OwnedObject<`UNiagaraDataInterfaceVectorField::PushToRenderThreadImpl'::`2'::<lambda_1>,1,1>
                       ::_vftable_;
  pdVar13 = local_c0 + 1;
  *pdVar13 = local_160;
  local_c0[2] = (double)local_158._0_8_;
  local_c0[3] = (double)local_158._8_8_;
  local_c0[4] = local_148;
  local_c0[5] = local_140;
  local_c0[6] = dStack_138;
  local_c0[7] = local_130;
  local_c0[8] = local_128;
  local_c0[9] = dStack_120;
  local_c0[10] = local_118;
  *(undefined1 *)(local_c0 + 0xb) = local_110;
  *(undefined1 *)((longlong)local_c0 + 0x59) = local_10f;
  *(undefined1 *)((longlong)local_c0 + 0x5a) = local_10e;
  FVectorFieldTextureAccessor::FVectorFieldTextureAccessor
            ((FVectorFieldTextureAccessor *)(local_c0 + 0xc),local_108);
  if (pdVar13 != (double *)0x0) {
    local_e8[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`UNiagaraDataInterfaceVectorField::PushToRenderThreadImpl'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                  ::Call;
  }
  this_00 = FRenderCommandList::GetInstanceTLS();
  if (this_00 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_UNiagaraDataInterfaceVectorField::PushToRenderThreadImpl_::__l2::TSTR_FUpdateDIVectorField836>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_e8);
  }
  else {
    this_01 = FRenderCommandList::GetRenderThread(this_00);
    local_b8._0_8_ = local_e8[0];
    local_90 = local_c0;
    local_c0 = (double *)0x0;
    local_a8[0] = local_d8[0];
    local_a8[1] = local_d8[1];
    local_a8[2] = local_d8[2];
    local_e8[0] = (code *)0x0;
    local_88 = 2;
    pFVar12 = (FRenderCommandTag *)
              TRenderCommandTag<`UNiagaraDataInterfaceVectorField::PushToRenderThreadImpl'::__l2::TSTR_FUpdateDIVectorField836>
              ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_b8,pFVar12);
    uVar14 = (ulonglong)local_88;
    if ((2 < uVar14) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar9)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar14] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if ((code *)local_b8._0_8_ != (code *)0x0) {
        pdVar13 = local_a8;
        if (local_90 != (double *)0x0) {
          pdVar13 = local_90;
        }
        (**(code **)((longlong)*pdVar13 + 0x10))();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar14])(local_b8);
    }
  }
  if (local_e8[0] != (code *)0x0) {
    pdVar13 = local_d8;
    if (local_c0 != (double *)0x0) {
      pdVar13 = local_c0;
    }
    (**(code **)((longlong)*pdVar13 + 0x10))();
  }
  FVectorFieldTextureAccessor::~FVectorFieldTextureAccessor(local_108);
  FVectorFieldTextureAccessor::~FVectorFieldTextureAccessor(&local_168);
  return;
}

// SampleVectorField @ 14924c700

/* WARNING: Type propagation algorithm not settling */

void __thiscall
UNiagaraDataInterfaceVectorField::SampleVectorField
          (UNiagaraDataInterfaceVectorField *this,FVectorVMExternalFunctionContext *param_1)

{
  double dVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  double dVar4;
  int iVar5;
  bool bVar6;
  uint uVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  UClass *pUVar13;
  longlong lVar14;
  longlong lVar15;
  TVector<double> *pTVar16;
  UVectorFieldStatic *pUVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  UVectorFieldStatic *this_00;
  longlong lVar21;
  float *pfVar22;
  double dVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  int local_1c0 [2];
  float *local_1b8;
  int local_1b0 [2];
  float *local_1a8;
  float *local_1a0;
  int local_198 [2];
  float *local_190;
  float *local_188;
  int local_180 [2];
  float *local_178;
  float *local_170;
  int local_168 [2];
  float *local_160;
  float *local_158;
  int local_150 [2];
  double local_148;
  double local_140;
  double local_138;
  double local_130;
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  double local_108;
  longlong local_100;
  longlong local_f8;
  TVector<double>_u_0 local_f0;
  TVector<double>_u_0 local_d8;
  TVector<double> local_c0 [5];
  
  pUVar17 = (UVectorFieldStatic *)0x0;
  local_180[0] = 0;
  local_1a8 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_180);
  local_168[0] = 0;
  local_1a8 = local_1a8 + local_180[0] * param_1->PerInstanceFnInstanceIdx;
  local_190 = local_1a8;
  local_188 = local_1a8;
  pfVar8 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_168);
  local_150[0] = 0;
  pfVar8 = pfVar8 + local_168[0] * param_1->PerInstanceFnInstanceIdx;
  local_178 = pfVar8;
  local_170 = pfVar8;
  pfVar9 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_150);
  local_1b0[0] = 0;
  pfVar9 = pfVar9 + local_150[0] * param_1->PerInstanceFnInstanceIdx;
  local_160 = pfVar9;
  local_158 = pfVar9;
  pfVar10 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_1b0);
  iVar5 = local_1b0[0];
  lVar21 = (longlong)local_1b0[0];
  local_1c0[0] = 0;
  pfVar10 = pfVar10 + local_1b0[0] * param_1->PerInstanceFnInstanceIdx;
  local_1b8 = pfVar10;
  pfVar11 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_1c0);
  local_198[0] = 0;
  pfVar11 = pfVar11 + local_1c0[0] * param_1->PerInstanceFnInstanceIdx;
  pfVar12 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_198);
  pfVar12 = pfVar12 + local_198[0] * param_1->PerInstanceFnInstanceIdx;
  this_00 = pUVar17;
  local_1a0 = pfVar12;
  if ((this->Field).field0_0x0.DebugPtr != (UVectorField *)0x0) {
    pUVar13 = Z_Construct_UClass_UVectorFieldStatic_NoRegister();
    bVar6 = FObjectPtr::IsA((FObjectPtr *)&this->Field,pUVar13);
    if (bVar6) {
      this_00 = (UVectorFieldStatic *)(this->Field).field0_0x0.DebugPtr;
    }
  }
  if ((this->Field).field0_0x0.DebugPtr != (UVectorField *)0x0) {
    pUVar13 = Z_Construct_UClass_UVectorFieldAnimated_NoRegister();
    FObjectPtr::IsA((FObjectPtr *)&this->Field,pUVar13);
  }
  dVar4 = __real_3fe0000000000000;
  if ((this_00 != (UVectorFieldStatic *)0x0) && (this_00->bAllowCPUAccess != false)) {
    local_f0._s_0.Z = __real_3ff0000000000000;
    if (this->bTileZ == false) {
      local_f0._s_0.Z = 0.0;
    }
    local_f0._s_0.Y = __real_3ff0000000000000;
    if (this->bTileY == false) {
      local_f0._s_0.Y = 0.0;
    }
    local_f0._s_0.X = __real_3ff0000000000000;
    if (this->bTileX == false) {
      local_f0._s_0.X = 0.0;
    }
    local_130 = (double)this_00->_padding_;
    uVar24 = SUB84(local_130,0);
    uVar25 = (undefined4)((ulonglong)local_130 >> 0x20);
    local_120 = (double)this_00->_padding_;
    uVar26 = SUB84(local_120,0);
    uVar27 = (undefined4)((ulonglong)local_120 >> 0x20);
    uVar19 = this_00->SizeX;
    uVar7 = this_00->SizeY;
    uVar18 = this_00->SizeZ;
    iVar20 = (this_00->CPUData).ArrayNum;
    local_108 = (double)this_00->_padding_ - local_120;
    local_118 = (double)this_00->_padding_ - local_130;
    local_128 = (double)this_00->_padding_;
    local_110 = (double)this_00->_padding_ - local_128;
    local_148 = (double)uVar19;
    local_140 = (double)uVar7;
    local_138 = (double)uVar18;
    if (iVar20 != 0) {
      if (uVar19 < uVar7) {
        uVar7 = uVar19;
      }
      if (uVar7 < uVar18) {
        uVar18 = uVar7;
      }
      if (uVar18 != 0) {
        dVar23 = local_118;
        if (local_110 <= local_118) {
          dVar23 = local_110;
        }
        if (local_108 <= dVar23) {
          dVar23 = local_108;
        }
        if (__real_3e45798ee0000000 < dVar23) {
          local_110 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y / local_110;
          local_108 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z / local_108;
          local_118 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X / local_118;
          if (GNiagaraVectorFieldUseIspc == false) {
            if (param_1->NumInstances < 1) {
              return;
            }
            lVar14 = (longlong)local_180[0];
            lVar15 = (longlong)local_168[0];
            local_100 = (longlong)local_150[0] << 2;
            local_f8 = lVar21 << 2;
            lVar21 = (longlong)local_1c0[0];
            local_1b8 = (float *)((longlong)local_198[0] << 2);
            pfVar22 = local_1a8;
            while( true ) {
              local_d8._s_0.X =
                   ((double)*pfVar22 - (double)CONCAT44(uVar25,uVar24)) * local_118 * local_148 -
                   dVar4;
              local_d8._s_0.Y = local_110 * ((double)*pfVar8 - local_128) * local_140 - dVar4;
              local_d8._s_0.Z =
                   local_108 * ((double)*pfVar9 - (double)CONCAT44(uVar27,uVar26)) * local_138 -
                   dVar4;
              pTVar16 = UVectorFieldStatic::FilteredSample
                                  (this_00,local_c0,(TVector<double> *)&local_d8._s_0,
                                   (TVector<double> *)&local_f0._s_0);
              uVar19 = (int)pUVar17 + 1;
              pUVar17 = (UVectorFieldStatic *)(ulonglong)uVar19;
              pfVar9 = (float *)((longlong)pfVar9 + local_100);
              pfVar22 = pfVar22 + lVar14;
              dVar23 = (pTVar16->field0_0x0)._s_0.Y;
              dVar1 = (pTVar16->field0_0x0)._s_0.Z;
              pfVar8 = pfVar8 + lVar15;
              *pfVar10 = (float)(pTVar16->field0_0x0)._s_0.X;
              pfVar10 = (float *)((longlong)pfVar10 + local_f8);
              *pfVar11 = (float)dVar23;
              pfVar11 = pfVar11 + lVar21;
              *pfVar12 = (float)dVar1;
              pfVar12 = (float *)((longlong)pfVar12 + (longlong)local_1b8);
              if (param_1->NumInstances <= (int)uVar19) break;
              uVar26 = SUB84(local_120,0);
              uVar27 = (undefined4)((ulonglong)local_120 >> 0x20);
              uVar24 = SUB84(local_130,0);
              uVar25 = (undefined4)((ulonglong)local_130 >> 0x20);
            }
            return;
          }
          pFVar2 = (this_00->CPUData).AllocatorInstance.Data;
          iVar20 = (int)((ulonglong)(longlong)iVar20 >> 1);
          if ((iVar20 < 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("ArrayNum >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xfe,L""), bVar6)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          iVar20 = iVar20 / 3 + (iVar20 >> 0x1f) +
                   (int)(((longlong)iVar20 / 3 + ((longlong)iVar20 >> 0x3f) & 0xffffffffU) >> 0x1f);
          if ((iVar20 < 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("ArrayNum >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xfe,L""), bVar6)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          ::SampleVectorField(local_1a8,pfVar8,pfVar9,local_180[0] < 1,local_168[0] < 1,
                              local_150[0] < 1,pfVar10,pfVar11,pfVar12,0 < iVar5,0 < local_1c0[0],
                              0 < local_198[0],pFVar2,iVar20 + -1,&local_130,&local_118,&local_148,
                              &local_f0,param_1->NumInstances);
          return;
        }
      }
    }
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5755453212559671884>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceVectorField.cpp"
                       ,0x24c,
                       "StaticVectorField->HasCPUData() && FMath::Min3(SizeX, SizeY, SizeZ) > 0 && BoundSize.GetMin() > (1.e-8f)"
                      );
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (0 < param_1->NumInstances) {
    do {
      *pfVar10 = 0.0;
      uVar19 = (int)pUVar17 + 1;
      pUVar17 = (UVectorFieldStatic *)(ulonglong)uVar19;
      *pfVar11 = 0.0;
      pfVar10 = pfVar10 + iVar5;
      *pfVar12 = 0.0;
      pfVar11 = pfVar11 + local_1c0[0];
      pfVar12 = pfVar12 + local_198[0];
    } while ((int)uVar19 < param_1->NumInstances);
  }
  return;
}

// SetShaderParameters @ 14924eb20

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
UNiagaraDataInterfaceVectorField::SetShaderParameters
          (UNiagaraDataInterfaceVectorField *this,
          FNiagaraDataInterfaceSetShaderParametersContext *param_1)

{
  FName FVar1;
  double dVar2;
  byte bVar3;
  byte bVar4;
  FNiagaraDataInterfaceProxy *pFVar5;
  uchar *puVar6;
  code *pcVar7;
  bool bVar8;
  FShaderParametersMetadata *pFVar9;
  FRHITexture *pFVar10;
  uint uVar11;
  
  if (SamplerStates[0] == (FRHISamplerState *)0x0) {
    SamplerStates[0] =
         TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
         ::StaticResource.StateRHI.Reference;
    SamplerStates[1] =
         TStaticStateRHI<TStaticSamplerState<1,0,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
         ::StaticResource.StateRHI.Reference;
    SamplerStates[2] =
         TStaticStateRHI<TStaticSamplerState<1,1,0,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
         ::StaticResource.StateRHI.Reference;
    SamplerStates[3] =
         TStaticStateRHI<TStaticSamplerState<1,0,0,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
         ::StaticResource.StateRHI.Reference;
    SamplerStates[4] =
         TStaticStateRHI<TStaticSamplerState<1,1,1,0,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
         ::StaticResource.StateRHI.Reference;
    SamplerStates[5] =
         TStaticStateRHI<TStaticSamplerState<1,0,1,0,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
         ::StaticResource.StateRHI.Reference;
    SamplerStates[6] =
         TStaticStateRHI<TStaticSamplerState<1,1,0,0,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
         ::StaticResource.StateRHI.Reference;
    SamplerStates[7] =
         TStaticStateRHI<TStaticSamplerState<1,0,0,0,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
         ::StaticResource.StateRHI.Reference;
  }
  if (param_1->DataInterfaceProxy == (FNiagaraDataInterfaceProxy *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataInterfaceProxy",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterface.h"
                       ,0x1c1,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  pFVar5 = param_1->DataInterfaceProxy;
  uVar11 = param_1->ParametersOffset + 0xf & 0xfffffff0;
  pFVar9 = TShaderParameterStructTypeInfo<UNiagaraDataInterfaceVectorField::FShaderParameters>::
           GetStructMetadata();
  puVar6 = param_1->BaseParameters;
  param_1->ParametersOffset = pFVar9->Size + uVar11;
  bVar3 = *(byte *)((longlong)&pFVar5[5].SourceDIName.ComparisonIndex.Value + 1);
  bVar4 = *(byte *)((longlong)&pFVar5[5].SourceDIName.ComparisonIndex.Value + 2);
  *(float *)(puVar6 + uVar11) = (float)(byte)pFVar5[5].SourceDIName.ComparisonIndex.Value;
  *(float *)(puVar6 + (ulonglong)uVar11 + 4) = (float)bVar3;
  *(float *)(puVar6 + (ulonglong)uVar11 + 8) = (float)bVar4;
  FVar1 = pFVar5[1].SourceDIName;
  dVar2 = (double)pFVar5[2]._padding_;
  *(float *)(puVar6 + (ulonglong)uVar11 + 0x10) = (float)(double)pFVar5[1]._padding_;
  *(float *)(puVar6 + (ulonglong)uVar11 + 0x14) = (float)(double)FVar1;
  *(float *)(puVar6 + (ulonglong)uVar11 + 0x18) = (float)dVar2;
  dVar2 = (double)pFVar5[3]._padding_;
  FVar1 = pFVar5[3].SourceDIName;
  *(float *)(puVar6 + (ulonglong)uVar11 + 0x20) = (float)(double)pFVar5[2].SourceDIName;
  *(float *)(puVar6 + (ulonglong)uVar11 + 0x24) = (float)dVar2;
  *(float *)(puVar6 + (ulonglong)uVar11 + 0x28) = (float)(double)FVar1;
  FVar1 = pFVar5[4].SourceDIName;
  dVar2 = (double)pFVar5[5]._padding_;
  *(float *)(puVar6 + (ulonglong)uVar11 + 0x30) = (float)(double)pFVar5[4]._padding_;
  *(float *)(puVar6 + (ulonglong)uVar11 + 0x34) = (float)(double)FVar1;
  *(float *)(puVar6 + (ulonglong)uVar11 + 0x38) = (float)dVar2;
  pFVar10 = (FRHITexture *)pFVar5[6]._padding_;
  if (pFVar10 == (FRHITexture *)0x0) {
    pFVar10 = (GBlackVolumeTexture->TextureRHI).Reference;
  }
  *(FRHITexture **)(puVar6 + (ulonglong)uVar11 + 0x40) = pFVar10;
  *(FRHISamplerState **)(puVar6 + (ulonglong)uVar11 + 0x48) =
       SamplerStates
       [(ulonglong)(byte)pFVar5[5].SourceDIName.ComparisonIndex.Value +
        ((ulonglong)*(byte *)((longlong)&pFVar5[5].SourceDIName.ComparisonIndex.Value + 1) +
        (ulonglong)*(byte *)((longlong)&pFVar5[5].SourceDIName.ComparisonIndex.Value + 2) * 2) * 2];
  return;
}

// StaticRegisterNativesUNiagaraDataInterfaceVectorField @ 14924f570

void __cdecl
UNiagaraDataInterfaceVectorField::StaticRegisterNativesUNiagaraDataInterfaceVectorField(void)

{
  return;
}

