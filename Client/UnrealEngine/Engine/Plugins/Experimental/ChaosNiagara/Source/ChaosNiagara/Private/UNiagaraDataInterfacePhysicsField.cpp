// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosNiagara
// Functions: 24

// StaticClass @ 14e9712e0

UClass * __cdecl UNiagaraDataInterfacePhysicsField::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataInterfacePhysicsField.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ChaosNiagara",L"NiagaraDataInterfacePhysicsField",
               &Z_Registration_Info_UClass_UNiagaraDataInterfacePhysicsField.InnerSingleton,
               StaticRegisterNativesUNiagaraDataInterfacePhysicsField,0x38,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraDataInterfacePhysicsField>,
               InternalVTableHelperCtorCaller<UNiagaraDataInterfacePhysicsField>,local_res8,
               UNiagaraDataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfacePhysicsField.InnerSingleton;
}

// UNiagaraDataInterfacePhysicsField @ 14e983d40

UNiagaraDataInterfacePhysicsField * __thiscall
UNiagaraDataInterfacePhysicsField::UNiagaraDataInterfacePhysicsField
          (UNiagaraDataInterfacePhysicsField *this,FVTableHelper *param_1)

{
  UNiagaraDataInterface::UNiagaraDataInterface((UNiagaraDataInterface *)this,param_1);
  *(undefined ***)this = &___7UNiagaraDataInterfacePhysicsField__6B_;
  return this;
}

// UNiagaraDataInterfacePhysicsField @ 14e983d70

UNiagaraDataInterfacePhysicsField * __thiscall
UNiagaraDataInterfacePhysicsField::UNiagaraDataInterfacePhysicsField
          (UNiagaraDataInterfacePhysicsField *this)

{
  FObjectInitializer *pFVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  pFVar1 = FObjectInitializer::Get();
  UNiagaraDataInterface::UNiagaraDataInterface((UNiagaraDataInterface *)this,pFVar1);
  *(undefined ***)this = &___7UNiagaraDataInterfacePhysicsField__6B_;
  puVar2 = ::operator_new(0x60);
  puVar3 = (undefined8 *)0x0;
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[9] = 0;
    puVar2[0xb] = 0;
    puVar2[1] = 0;
    *puVar2 = &___7FNDIPhysicsFieldProxy__6B_;
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
  puVar2 = *(undefined8 **)&this->field_0x28;
  if ((puVar2 != puVar3) &&
     (*(undefined8 **)&this->field_0x28 = puVar3, puVar2 != (undefined8 *)0x0)) {
    (**(code **)*puVar2)(puVar2,1);
  }
  return this;
}

// ~UNiagaraDataInterfacePhysicsField @ 14e9846b0

void __thiscall
UNiagaraDataInterfacePhysicsField::~UNiagaraDataInterfacePhysicsField
          (UNiagaraDataInterfacePhysicsField *this)

{
  *(undefined ***)this = &___7UNiagaraDataInterfacePhysicsField__6B_;
  UNiagaraDataInterface::~UNiagaraDataInterface((UNiagaraDataInterface *)this);
  return;
}

// BuildShaderParameters @ 14e98a9b0

void __thiscall
UNiagaraDataInterfacePhysicsField::BuildShaderParameters
          (UNiagaraDataInterfacePhysicsField *this,FNiagaraShaderParametersBuilder *param_1)

{
  int *piVar1;
  uint uVar2;
  FShaderParametersMetadataBuilder *pFVar3;
  TArray<FNiagaraDataInterfaceStructIncludeInfo,TSizedDefaultAllocator<32>_> *pTVar4;
  int iVar5;
  FShaderParametersMetadata *pFVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  wchar_t *pwVar9;
  undefined1 local_res10 [8];
  
  pFVar3 = param_1->MetadataBuilder;
  if ((param_1->GPUParamInfo->DataInterfaceHLSLSymbol).Data.ArrayNum == 0) {
    pwVar9 = L"";
  }
  else {
    pwVar9 = (wchar_t *)(param_1->GPUParamInfo->DataInterfaceHLSLSymbol).Data.AllocatorInstance.Data
    ;
  }
  pFVar3->NextMemberOffset = pFVar3->NextMemberOffset + 0xf & 0xfffffff0;
  pFVar6 = TShaderParameterStructTypeInfo<NDIPhysicsFieldLocal::FShaderInstanceParameters>::
           GetStructMetadata();
  piVar1 = &(pFVar3->Members).ArrayMax;
  iVar5 = (pFVar3->Members).ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,(ForAnyElementType *)pFVar3,piVar1);
  }
  (pFVar3->Members).ArrayNum = iVar5 + 1;
  uVar2 = pFVar3->NextMemberOffset;
  pFVar7 = (pFVar3->Members).AllocatorInstance.Data + (longlong)iVar5 * 0x30;
  *(wchar_t **)pFVar7 = pwVar9;
  *(wchar_t **)(pFVar7 + 8) = L"";
  *(undefined4 *)(pFVar7 + 0x10) = 0x7b;
  *(uint *)(pFVar7 + 0x14) = uVar2;
  *(undefined2 *)(pFVar7 + 0x18) = 0x14;
  *(undefined4 *)(pFVar7 + 0x1c) = 1;
  *(undefined8 *)(pFVar7 + 0x20) = 1;
  *(FShaderParametersMetadata **)(pFVar7 + 0x28) = pFVar6;
  pFVar3->NextMemberOffset = pFVar3->NextMemberOffset + 0x440;
  pFVar6 = TShaderParameterStructTypeInfo<NDIPhysicsFieldLocal::FShaderGlobalParameters>::
           GetStructMetadata();
  pTVar4 = param_1->StructIncludeInfos;
  iVar5 = pTVar4->ArrayNum;
  pFVar7 = (pTVar4->AllocatorInstance).Data;
  pFVar8 = pFVar7 + (longlong)iVar5 * 0x10;
  while( true ) {
    if (pTVar4->ArrayNum != iVar5) {
      `TCheckedPointerIterator<FNiagaraDataInterfaceStructIncludeInfo,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
    }
    if (pFVar7 == pFVar8) break;
    if (*(FShaderParametersMetadata **)pFVar7 == pFVar6) {
      return;
    }
    pFVar7 = pFVar7 + 0x10;
  }
  pTVar4 = param_1->StructIncludeInfos;
  iVar5 = pTVar4->ArrayNum;
  if (iVar5 == pTVar4->ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar4->AllocatorInstance,&pTVar4->ArrayMax);
  }
  pTVar4->ArrayNum = iVar5 + 1;
  pFVar7 = (pTVar4->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
  DefaultConstructItems<FNiagaraDataInterfaceStructIncludeInfo,int>(pFVar7,1);
  *(FShaderParametersMetadata **)pFVar7 = pFVar6;
  *(uint *)(pFVar7 + 8) = param_1->MetadataBuilder->NextMemberOffset + 0xf & 0xfffffff0;
  FShaderParametersMetadataBuilder::AddIncludedStruct(param_1->MetadataBuilder,pFVar6,Float);
  return;
}

// CanExecuteOnTarget @ 14e98ac10

bool __thiscall
UNiagaraDataInterfacePhysicsField::CanExecuteOnTarget
          (UNiagaraDataInterfacePhysicsField *this,ENiagaraSimTarget param_1)

{
  return param_1 == GPUComputeSim;
}

// CopyToInternal @ 14e98d080

bool __thiscall
UNiagaraDataInterfacePhysicsField::CopyToInternal
          (UNiagaraDataInterfacePhysicsField *this,UNiagaraDataInterface *param_1)

{
  bool bVar1;
  
  bVar1 = UNiagaraDataInterface::CopyToInternal((UNiagaraDataInterface *)this,param_1);
  return bVar1;
}

// DestroyPerInstanceData @ 14e991da0

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
UNiagaraDataInterfacePhysicsField::DestroyPerInstanceData
          (UNiagaraDataInterfacePhysicsField *this,void *param_1,FNiagaraSystemInstance *param_2)

{
  ForAnyElementType *pFVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar5;
  undefined ***pppuVar6;
  ulonglong uVar7;
  undefined1 auStackY_c8 [32];
  code *local_98 [2];
  undefined **local_88;
  longlong lStack_80;
  ulong64 local_78;
  undefined ***local_70;
  undefined1 local_68 [16];
  undefined **local_58;
  longlong lStack_50;
  ulong64 local_48;
  undefined ***local_40;
  byte local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  pFVar1 = (ForAnyElementType *)((longlong)param_1 + 8);
  *(undefined8 *)param_1 = 0;
  DestructItems<FFieldSystemCommand,int>
            ((FFieldSystemCommand *)pFVar1->Data,*(int *)((longlong)param_1 + 0x10));
  *(undefined4 *)((longlong)param_1 + 0x10) = 0;
  if (*(int *)((longlong)param_1 + 0x14) != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (200,8,0,pFVar1,0,(int *)((longlong)param_1 + 0x14));
  }
  DestructItems<FFieldSystemCommand,int>
            ((FFieldSystemCommand *)pFVar1->Data,*(int *)((longlong)param_1 + 0x10));
  if (pFVar1->Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1->Data);
  }
  lVar2 = *(longlong *)&this->field_0x28;
  if (lVar2 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypedProxy != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterface.h"
                       ,0x3a0,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_70 = (undefined ***)0x0;
  local_88 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UNiagaraDataInterfacePhysicsField::DestroyPerInstanceData'::`2'::<lambda_1>,1,0>
              ::_vftable_;
  local_78 = param_2->ID;
  local_98[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UNiagaraDataInterfacePhysicsField::DestroyPerInstanceData'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                ::Call;
  lStack_80 = lVar2;
  this_00 = FRenderCommandList::GetInstanceTLS();
  if (this_00 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_UNiagaraDataInterfacePhysicsField::DestroyPerInstanceData_::__l2::TSTR_FNiagaraDIDestroyInstanceData170>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_98);
  }
  else {
    this_01 = FRenderCommandList::GetRenderThread(this_00);
    local_68._0_8_ = local_98[0];
    local_40 = local_70;
    local_58 = local_88;
    lStack_50 = lStack_80;
    local_48 = local_78;
    local_98[0] = (code *)0x0;
    local_38 = 2;
    pFVar5 = (FRenderCommandTag *)
             TRenderCommandTag<`UNiagaraDataInterfacePhysicsField::DestroyPerInstanceData'::__l2::TSTR_FNiagaraDIDestroyInstanceData170>
             ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_68,pFVar5);
    uVar7 = (ulonglong)local_38;
    if (2 < uVar7) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar7] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if ((code *)local_68._0_8_ != (code *)0x0) {
        pppuVar6 = (undefined ***)(local_68 + 0x10);
        if (local_40 != (undefined ***)0x0) {
          pppuVar6 = local_40;
        }
        (*(code *)(*pppuVar6)[2])();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar7])(local_68);
    }
  }
  if (local_98[0] != (code *)0x0) {
    pppuVar6 = &local_88;
    if (local_70 != (undefined ***)0x0) {
      pppuVar6 = local_70;
    }
    (*(code *)(*pppuVar6)[2])();
  }
  return;
}

// Equals @ 14e992af0

bool __thiscall
UNiagaraDataInterfacePhysicsField::Equals
          (UNiagaraDataInterfacePhysicsField *this,UNiagaraDataInterface *param_1)

{
  bool bVar1;
  
  bVar1 = UNiagaraDataInterface::Equals((UNiagaraDataInterface *)this,param_1);
  return bVar1;
}

// GetPhysicsFieldBounds @ 14e99d630

void __thiscall
UNiagaraDataInterfacePhysicsField::GetPhysicsFieldBounds
          (UNiagaraDataInterfacePhysicsField *this,FVectorVMExternalFunctionContext *param_1)

{
  FPhysicsFieldResource *pFVar1;
  double dVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  int iVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  int local_90 [4];
  int local_80 [4];
  int local_70 [4];
  int local_60 [4];
  int local_50 [4];
  int local_40 [2];
  FUserPtrHandler<FNDIPhysicsFieldData> local_38 [2];
  
  VectorVM::FUserPtrHandler<FNDIPhysicsFieldData>::FUserPtrHandler<FNDIPhysicsFieldData>
            (local_38,param_1);
  iVar9 = 0;
  local_90[0] = 0;
  pfVar3 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_90);
  local_80[0] = 0;
  pfVar3 = pfVar3 + local_90[0] * param_1->PerInstanceFnInstanceIdx;
  pfVar4 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_80);
  local_70[0] = 0;
  pfVar4 = pfVar4 + local_80[0] * param_1->PerInstanceFnInstanceIdx;
  pfVar5 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_70);
  local_60[0] = 0;
  pfVar5 = pfVar5 + local_70[0] * param_1->PerInstanceFnInstanceIdx;
  pfVar6 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_60);
  local_50[0] = 0;
  pfVar6 = pfVar6 + local_60[0] * param_1->PerInstanceFnInstanceIdx;
  pfVar7 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_50);
  local_40[0] = 0;
  pfVar7 = pfVar7 + local_50[0] * param_1->PerInstanceFnInstanceIdx;
  pfVar8 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_40);
  dVar12 = 0.0;
  pfVar8 = pfVar8 + local_40[0] * param_1->PerInstanceFnInstanceIdx;
  if ((local_38[0].Ptr == (FNDIPhysicsFieldData *)0x0) ||
     (pFVar1 = (local_38[0].Ptr)->FieldResource, pFVar1 == (FPhysicsFieldResource *)0x0)) {
    dVar14 = 0.0;
    dVar13 = 0.0;
    dVar10 = 0.0;
  }
  else {
    dVar10 = (double)(pFVar1->FieldInfos).ClipmapDistance;
    dVar14 = (pFVar1->FieldInfos).ClipmapCenter.field0_0x0._s_0.Z - dVar10;
    dVar13 = (pFVar1->FieldInfos).ClipmapCenter.field0_0x0._s_0.Y - dVar10;
    dVar10 = (pFVar1->FieldInfos).ClipmapCenter.field0_0x0._s_0.X - dVar10;
  }
  if ((local_38[0].Ptr == (FNDIPhysicsFieldData *)0x0) ||
     (pFVar1 = (local_38[0].Ptr)->FieldResource, pFVar1 == (FPhysicsFieldResource *)0x0)) {
    dVar2 = 0.0;
    dVar11 = 0.0;
  }
  else {
    dVar11 = (double)(pFVar1->FieldInfos).ClipmapDistance;
    dVar12 = dVar11 + (pFVar1->FieldInfos).ClipmapCenter.field0_0x0._s_0.Z;
    dVar2 = dVar11 + (pFVar1->FieldInfos).ClipmapCenter.field0_0x0._s_0.Y;
    dVar11 = dVar11 + (pFVar1->FieldInfos).ClipmapCenter.field0_0x0._s_0.X;
  }
  if (0 < param_1->NumInstances) {
    do {
      *pfVar3 = (float)dVar10;
      iVar9 = iVar9 + 1;
      *pfVar4 = (float)dVar13;
      pfVar3 = pfVar3 + local_90[0];
      *pfVar5 = (float)dVar14;
      pfVar4 = pfVar4 + local_80[0];
      *pfVar6 = (float)dVar11;
      pfVar5 = pfVar5 + local_70[0];
      *pfVar7 = (float)dVar2;
      pfVar6 = pfVar6 + local_60[0];
      *pfVar8 = (float)dVar12;
      pfVar7 = pfVar7 + local_50[0];
      pfVar8 = pfVar8 + local_40[0];
    } while (iVar9 < param_1->NumInstances);
  }
  return;
}

// GetPhysicsFieldResolution @ 14e99d890

void __thiscall
UNiagaraDataInterfacePhysicsField::GetPhysicsFieldResolution
          (UNiagaraDataInterfacePhysicsField *this,FVectorVMExternalFunctionContext *param_1)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  int local_40 [4];
  int local_30 [4];
  int local_20 [2];
  FUserPtrHandler<FNDIPhysicsFieldData> local_18;
  
  VectorVM::FUserPtrHandler<FNDIPhysicsFieldData>::FUserPtrHandler<FNDIPhysicsFieldData>
            (&local_18,param_1);
  iVar5 = 0;
  local_40[0] = 0;
  pfVar1 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_40);
  local_30[0] = 0;
  pfVar1 = pfVar1 + local_40[0] * param_1->PerInstanceFnInstanceIdx;
  pfVar2 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_30);
  local_20[0] = 0;
  pfVar2 = pfVar2 + local_30[0] * param_1->PerInstanceFnInstanceIdx;
  pfVar3 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_20);
  pfVar3 = pfVar3 + local_20[0] * param_1->PerInstanceFnInstanceIdx;
  if ((local_18.Ptr == (FNDIPhysicsFieldData *)0x0) ||
     ((local_18.Ptr)->FieldResource == (FPhysicsFieldResource *)0x0)) {
    iVar4 = 1;
  }
  else {
    iVar4 = ((local_18.Ptr)->FieldResource->FieldInfos).ClipmapResolution;
  }
  if (0 < param_1->NumInstances) {
    fVar6 = (float)iVar4;
    do {
      *pfVar1 = fVar6;
      iVar5 = iVar5 + 1;
      *pfVar2 = fVar6;
      pfVar1 = pfVar1 + local_40[0];
      *pfVar3 = fVar6;
      pfVar2 = pfVar2 + local_30[0];
      pfVar3 = pfVar3 + local_20[0];
    } while (iVar5 < param_1->NumInstances);
  }
  return;
}

// GetPrivateStaticClass @ 14e99db20

UClass * __cdecl UNiagaraDataInterfacePhysicsField::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataInterfacePhysicsField.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ChaosNiagara",L"NiagaraDataInterfacePhysicsField",
               &Z_Registration_Info_UClass_UNiagaraDataInterfacePhysicsField.InnerSingleton,
               StaticRegisterNativesUNiagaraDataInterfacePhysicsField,0x38,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraDataInterfacePhysicsField>,
               InternalVTableHelperCtorCaller<UNiagaraDataInterfacePhysicsField>,local_res8,
               UNiagaraDataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfacePhysicsField.InnerSingleton;
}

// GetVMExternalFunction @ 14e99f0f0

void __thiscall
UNiagaraDataInterfacePhysicsField::GetVMExternalFunction
          (UNiagaraDataInterfacePhysicsField *this,FVMExternalFunctionBindingInfo *param_1,
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
  undefined1 local_a8 [8];
  FDelegateAllocation local_a0;
  undefined1 local_90 [8];
  FDelegateAllocation local_88;
  FDestructionSentinel local_78;
  FDestructionSentinel local_60;
  FDestructionSentinel local_48;
  FDelegateAllocation *local_30;
  FDestructionSentinel local_28;
  FDelegateAllocation *local_10;
  
  FVar1 = param_1->Name;
  if (FVar1 == NDIPhysicsFieldLocal::SamplePhysicsVectorFieldName) {
    if ((((param_1->InputParamLocations).ArrayNum != 5) || (param_1->NumOutputs != 3)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("BindingInfo.GetNumInputs() == 5 && BindingInfo.GetNumOutputs() == 3",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\ChaosNiagara\\Source\\ChaosNiagara\\Private\\NiagaraDataInterfacePhysicsField.cpp"
                           ,0x154,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    TUNiagaraDataInterfacePhysicsField_SamplePhysicsVectorFieldBinder::Bind
              ((UNiagaraDataInterface *)this,param_3);
  }
  else if (FVar1 == NDIPhysicsFieldLocal::SamplePhysicsScalarFieldName) {
    if ((((param_1->InputParamLocations).ArrayNum != 5) || (param_1->NumOutputs != 1)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("BindingInfo.GetNumInputs() == 5 && BindingInfo.GetNumOutputs() == 1",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\ChaosNiagara\\Source\\ChaosNiagara\\Private\\NiagaraDataInterfacePhysicsField.cpp"
                           ,0x159,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    TUNiagaraDataInterfacePhysicsField_SamplePhysicsScalarFieldBinder::Bind
              ((UNiagaraDataInterface *)this,param_3);
  }
  else if (FVar1 == NDIPhysicsFieldLocal::SamplePhysicsIntegerFieldName) {
    if ((((param_1->InputParamLocations).ArrayNum != 5) || (param_1->NumOutputs != 1)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("BindingInfo.GetNumInputs() == 5 && BindingInfo.GetNumOutputs() == 1",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\ChaosNiagara\\Source\\ChaosNiagara\\Private\\NiagaraDataInterfacePhysicsField.cpp"
                           ,0x15e,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    TUNiagaraDataInterfacePhysicsField_SamplePhysicsIntegerFieldBinder::Bind
              ((UNiagaraDataInterface *)this,param_3);
  }
  FVar1 = param_1->Name;
  if (FVar1 == NDIPhysicsFieldLocal::EvalPhysicsVectorFieldName) {
    if ((((param_1->InputParamLocations).ArrayNum != 5) || (param_1->NumOutputs != 3)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("BindingInfo.GetNumInputs() == 5 && BindingInfo.GetNumOutputs() == 3",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\ChaosNiagara\\Source\\ChaosNiagara\\Private\\NiagaraDataInterfacePhysicsField.cpp"
                           ,0x163,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    TUNiagaraDataInterfacePhysicsField_SamplePhysicsVectorFieldBinder::Bind
              ((UNiagaraDataInterface *)this,param_3);
  }
  else if (FVar1 == NDIPhysicsFieldLocal::EvalPhysicsScalarFieldName) {
    if ((((param_1->InputParamLocations).ArrayNum != 5) || (param_1->NumOutputs != 1)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("BindingInfo.GetNumInputs() == 5 && BindingInfo.GetNumOutputs() == 1",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\ChaosNiagara\\Source\\ChaosNiagara\\Private\\NiagaraDataInterfacePhysicsField.cpp"
                           ,0x168,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    TUNiagaraDataInterfacePhysicsField_SamplePhysicsScalarFieldBinder::Bind
              ((UNiagaraDataInterface *)this,param_3);
  }
  else if (FVar1 == NDIPhysicsFieldLocal::EvalPhysicsIntegerFieldName) {
    if ((((param_1->InputParamLocations).ArrayNum != 5) || (param_1->NumOutputs != 1)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("BindingInfo.GetNumInputs() == 5 && BindingInfo.GetNumOutputs() == 1",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\ChaosNiagara\\Source\\ChaosNiagara\\Private\\NiagaraDataInterfacePhysicsField.cpp"
                           ,0x16d,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    TUNiagaraDataInterfacePhysicsField_SamplePhysicsIntegerFieldBinder::Bind
              ((UNiagaraDataInterface *)this,param_3);
  }
  else {
    if (FVar1 == NDIPhysicsFieldLocal::GetPhysicsFieldResolutionName) {
      if ((((param_1->InputParamLocations).ArrayNum != 1) || (param_1->NumOutputs != 3)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("BindingInfo.GetNumInputs() == 1 && BindingInfo.GetNumOutputs() == 3",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\ChaosNiagara\\Source\\ChaosNiagara\\Private\\NiagaraDataInterfacePhysicsField.cpp"
                             ,0x172,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      local_a8 = (undefined1  [8])0x0;
      local_a0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_a0.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_a8,
                 (FWriteAccessScope *)&local_48);
      local_30 = &local_a0;
      puVar4 = UE::Core::Private::DelegateAllocate(0x20,&local_a0);
      if (puVar4 != (undefined8 *)0x0) {
        *puVar4 = &
                  ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar5 = FDelegateHandle::GenerateNewID();
        puVar4[2] = uVar5;
        *puVar4 = &
                  ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfacePhysicsField_GetPhysicsFieldResolutionBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
        ;
        puVar4[3] = this;
      }
      if (local_48.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
      }
      TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
                 (TDelegateBase<FNotThreadSafeDelegateMode> *)local_a8);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_a8,
                 (FWriteAccessScope *)&local_78);
      if ((local_a0.DelegateSize != 0) &&
         (local_a0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        (*(code *)**(undefined8 **)local_a0.DelegateAllocator)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&local_a0,0,0,0x10);
        local_a0.DelegateSize = 0;
      }
      if (local_78.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
      }
      if (local_a0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)local_a0.DelegateAllocator);
      }
      this_00 = (FMRSWRecursiveAccessDetector *)local_a8;
    }
    else {
      if (FVar1 != NDIPhysicsFieldLocal::GetPhysicsFieldBoundsName) {
        return;
      }
      if ((((param_1->InputParamLocations).ArrayNum != 1) || (param_1->NumOutputs != 6)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("BindingInfo.GetNumInputs() == 1 && BindingInfo.GetNumOutputs() == 6",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\ChaosNiagara\\Source\\ChaosNiagara\\Private\\NiagaraDataInterfacePhysicsField.cpp"
                             ,0x177,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      local_90 = (undefined1  [8])0x0;
      local_88.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_88.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_90,
                 (FWriteAccessScope *)&local_28);
      local_10 = &local_88;
      puVar4 = UE::Core::Private::DelegateAllocate(0x20,&local_88);
      if (puVar4 != (undefined8 *)0x0) {
        *puVar4 = &
                  ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar5 = FDelegateHandle::GenerateNewID();
        puVar4[2] = uVar5;
        *puVar4 = &
                  ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfacePhysicsField_GetPhysicsFieldBoundsBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
        ;
        puVar4[3] = this;
      }
      if (local_28.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
      }
      TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
                 (TDelegateBase<FNotThreadSafeDelegateMode> *)local_90);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_90,
                 (FWriteAccessScope *)&local_60);
      if ((local_88.DelegateSize != 0) &&
         (local_88.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        (*(code *)**(undefined8 **)local_88.DelegateAllocator)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&local_88,0,0,0x10);
        local_88.DelegateSize = 0;
      }
      if (local_60.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
      }
      if (local_88.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)local_88.DelegateAllocator);
      }
      this_00 = (FMRSWRecursiveAccessDetector *)local_90;
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(this_00);
  }
  return;
}

// HasPostSimulateTick @ 14e9a0950

bool __thiscall
UNiagaraDataInterfacePhysicsField::HasPostSimulateTick(UNiagaraDataInterfacePhysicsField *this)

{
  return true;
}

// InitPerInstanceData @ 14e9a1de0

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
UNiagaraDataInterfacePhysicsField::InitPerInstanceData
          (UNiagaraDataInterfacePhysicsField *this,void *param_1,FNiagaraSystemInstance *param_2)

{
  int *piVar1;
  UWorld *pUVar2;
  UPhysicsFieldComponent *pUVar3;
  FPhysicsFieldInstance *pFVar4;
  FPhysicsFieldResource *pFVar5;
  double dVar6;
  FNiagaraLWCConverter *pFVar7;
  TVector<double>_u_0 local_58;
  FNiagaraLWCConverter local_38;
  
  piVar1 = (int *)((longlong)param_1 + 0x14);
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x18) = 0;
  *piVar1 = 0;
  local_58._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_58._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_58._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  FNiagaraLWCConverter::FNiagaraLWCConverter
            ((FNiagaraLWCConverter *)((longlong)param_1 + 0x20),(TVector<double> *)&local_58._s_0);
  if (param_2 != (FNiagaraSystemInstance *)0x0) {
    *(undefined8 *)param_1 = 0;
    DestructItems<FFieldSystemCommand,int>
              (*(FFieldSystemCommand **)((longlong)param_1 + 8),*(int *)((longlong)param_1 + 0x10));
    *(undefined4 *)((longlong)param_1 + 0x10) = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (200,8,0,(ForAnyElementType *)((longlong)param_1 + 8),0,piVar1);
    }
    pUVar2 = param_2->World;
    if (pUVar2 != (UWorld *)0x0) {
      *(float *)((longlong)param_1 + 0x18) = (float)pUVar2->TimeSeconds;
      pUVar3 = (pUVar2->PhysicsField).field0_0x0.DebugPtr;
      if (((pUVar3 != (UPhysicsFieldComponent *)0x0) &&
          (pFVar4 = pUVar3->FieldInstance, pFVar4 != (FPhysicsFieldInstance *)0x0)) &&
         (pFVar5 = pFVar4->FieldResource, pFVar5 != (FPhysicsFieldResource *)0x0)) {
        *(FPhysicsFieldResource **)param_1 = pFVar5;
      }
    }
    pFVar7 = FNiagaraSystemInstance::GetLWCConverter(param_2,&local_38,false);
    dVar6 = (pFVar7->SystemWorldPos).field0_0x0._s_0.Y;
    *(double *)((longlong)param_1 + 0x20) = (pFVar7->SystemWorldPos).field0_0x0._s_0.X;
    *(double *)((longlong)param_1 + 0x28) = dVar6;
    *(double *)((longlong)param_1 + 0x30) = (pFVar7->SystemWorldPos).field0_0x0._s_0.Z;
  }
  return true;
}

// PerInstanceDataSize @ 14e9a2560

int __thiscall
UNiagaraDataInterfacePhysicsField::PerInstanceDataSize(UNiagaraDataInterfacePhysicsField *this)

{
  return 0x38;
}

// PerInstanceTickPostSimulate @ 14e9a2da0

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
UNiagaraDataInterfacePhysicsField::PerInstanceTickPostSimulate
          (UNiagaraDataInterfacePhysicsField *this,void *param_1,FNiagaraSystemInstance *param_2,
          float param_3)

{
  ForAnyElementType *pFVar1;
  int *piVar2;
  int iVar3;
  UWorld *pUVar4;
  UPhysicsFieldComponent *pUVar5;
  FPhysicsFieldInstance *pFVar6;
  FFieldSystemCommand *pFVar7;
  
  if (((param_1 != (void *)0x0) && (param_2 != (FNiagaraSystemInstance *)0x0)) &&
     (pUVar4 = param_2->World, pUVar4 != (UWorld *)0x0)) {
    *(float *)((longlong)param_1 + 0x18) = (float)pUVar4->TimeSeconds;
    pUVar5 = (pUVar4->PhysicsField).field0_0x0.DebugPtr;
    if ((pUVar5 != (UPhysicsFieldComponent *)0x0) &&
       (pFVar6 = pUVar5->FieldInstance, pFVar6 != (FPhysicsFieldInstance *)0x0)) {
      pFVar1 = (ForAnyElementType *)((longlong)param_1 + 8);
      if ((TArray<FFieldSystemCommand,TSizedDefaultAllocator<32>_> *)pFVar1 !=
          &pFVar6->FieldCommands) {
        DestructItems<FFieldSystemCommand,int>
                  ((FFieldSystemCommand *)pFVar1->Data,*(int *)((longlong)param_1 + 0x10));
        iVar3 = (pFVar6->FieldCommands).ArrayNum;
        piVar2 = (int *)((longlong)param_1 + 0x14);
        pFVar7 = (FFieldSystemCommand *)(pFVar6->FieldCommands).AllocatorInstance.Data;
        *(int *)((longlong)param_1 + 0x10) = iVar3;
        if ((iVar3 == 0) && (*piVar2 == 0)) {
          *piVar2 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (200,8,iVar3,*piVar2,pFVar1,iVar3,piVar2);
          ConstructItems<FFieldSystemCommand,FFieldSystemCommand,int>(pFVar1->Data,pFVar7,iVar3);
        }
      }
    }
  }
  return false;
}

// PostInitProperties @ 14e9a3080

void __thiscall
UNiagaraDataInterfacePhysicsField::PostInitProperties(UNiagaraDataInterfacePhysicsField *this)

{
  TObjectPtr<UObject>_u_0 local_28;
  undefined2 local_20;
  undefined1 local_1e;
  undefined8 local_1c;
  undefined4 local_14;
  
  UObject::PostInitProperties((UObject *)this);
  if ((*(uint *)&this->field_0x8 & 0x10) != 0) {
    local_28 = (TObjectPtr<UObject>_u_0)*(TObjectPtr<UObject>_u_0 *)&this->field_0x10;
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
    local_28.DebugPtr = (UObject *)StaticEnum<enum_EFieldVectorType>();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       ((UEnum *)local_28.DebugPtr != (UEnum *)0x0)) {
      UE::GC::MarkAsReachable(local_28.DebugPtr);
    }
    local_1e = 0;
    local_20 = 3;
    local_1c = 0xffffffffffffffff;
    local_14 = 0xffffffff;
    FNiagaraTypeDefinition::GeneratePathNameHash((FNiagaraTypeDefinition *)&local_28.ObjectPtr);
    FNiagaraTypeRegistry::Register
              ((FNiagaraTypeDefinition *)&local_28.ObjectPtr,AllowParameter|AllowAnyVariable);
    local_28.DebugPtr = (UObject *)StaticEnum<enum_EFieldScalarType>();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       ((UEnum *)local_28.DebugPtr != (UEnum *)0x0)) {
      UE::GC::MarkAsReachable(local_28.DebugPtr);
    }
    local_20 = 3;
    local_1e = 0;
    local_1c = 0xffffffffffffffff;
    local_14 = 0xffffffff;
    FNiagaraTypeDefinition::GeneratePathNameHash((FNiagaraTypeDefinition *)&local_28.ObjectPtr);
    FNiagaraTypeRegistry::Register
              ((FNiagaraTypeDefinition *)&local_28.ObjectPtr,AllowParameter|AllowAnyVariable);
    local_28.DebugPtr = (UObject *)StaticEnum<enum_EFieldIntegerType>();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       ((UEnum *)local_28.DebugPtr != (UEnum *)0x0)) {
      UE::GC::MarkAsReachable(local_28.DebugPtr);
    }
    local_20 = 3;
    local_1e = 0;
    local_1c = 0xffffffffffffffff;
    local_14 = 0xffffffff;
    FNiagaraTypeDefinition::GeneratePathNameHash((FNiagaraTypeDefinition *)&local_28.ObjectPtr);
    FNiagaraTypeRegistry::Register
              ((FNiagaraTypeDefinition *)&local_28.ObjectPtr,AllowParameter|AllowAnyVariable);
  }
  return;
}

// ProvidePerInstanceDataForRenderThread @ 14e9a4790

void __thiscall
UNiagaraDataInterfacePhysicsField::ProvidePerInstanceDataForRenderThread
          (UNiagaraDataInterfacePhysicsField *this,void *param_1,void *param_2,ulong64 *param_3)

{
  code *pcVar1;
  bool bVar2;
  
  if ((param_2 != (void *)0x0) && (param_1 != (void *)0x0)) {
    *(undefined8 *)param_1 = *(undefined8 *)param_2;
    *(undefined4 *)((longlong)param_1 + 8) = *(undefined4 *)((longlong)param_2 + 0x18);
  }
  if (*(longlong *)&this->field_0x28 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Proxy",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\ChaosNiagara\\Source\\ChaosNiagara\\Private\\NiagaraDataInterfacePhysicsField.cpp"
                       ,0x2f2,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// SamplePhysicsIntegerField @ 14e9a7270

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UNiagaraDataInterfacePhysicsField::SamplePhysicsIntegerField
          (UNiagaraDataInterfacePhysicsField *this,FVectorVMExternalFunctionContext *param_1)

{
  FScriptContainerElement *pFVar1;
  double dVar2;
  EFieldPhysicsType EVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ForAnyElementType FVar10;
  bool bVar11;
  uint uVar12;
  float *pfVar13;
  float *pfVar14;
  TVector<double> *pTVar15;
  int iVar16;
  longlong lVar17;
  uint uVar18;
  uint uVar19;
  float fVar20;
  undefined1 auStackY_3a8 [32];
  ForAnyElementType local_368;
  undefined8 local_360;
  float *local_358;
  int local_350 [2];
  int local_348 [2];
  TArray<int,TSizedDefaultAllocator<32>_> local_340;
  float local_328;
  float local_324;
  float local_320;
  float *local_318;
  float *local_310;
  int local_308 [2];
  FUserPtrHandler<FNDIPhysicsFieldData> local_300;
  FNDIInputParam<FNiagaraPosition> local_2e8;
  TVector<double>_u_0 local_298;
  TVector<double> local_280;
  undefined1 local_268 [24];
  undefined8 uStack_250;
  void *local_248;
  undefined4 local_240;
  uint local_23c;
  undefined4 local_238;
  undefined4 local_234;
  undefined8 local_230;
  void *local_228;
  ulonglong local_220;
  FFieldExecutionDatas local_218;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  undefined1 local_f8 [104];
  undefined4 local_90;
  TUniquePtr<FFieldSystemMetaDataCulling,TDefaultDelete<FFieldSystemMetaDataCulling>_> local_88;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_3a8;
  VectorVM::FUserPtrHandler<FNDIPhysicsFieldData>::FUserPtrHandler<FNDIPhysicsFieldData>
            (&local_300,param_1);
  FNDIInputParam<FNiagaraPosition>::FNDIInputParam<FNiagaraPosition>(&local_2e8,param_1);
  uVar18 = 0;
  local_308[0] = 0;
  pfVar13 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_308);
  iVar7 = local_308[0];
  local_350[0] = 0;
  pfVar13 = pfVar13 + local_308[0] * param_1->PerInstanceFnInstanceIdx;
  local_318 = pfVar13;
  local_310 = pfVar13;
  pfVar14 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_350);
  pfVar14 = pfVar14 + local_350[0] * param_1->PerInstanceFnInstanceIdx;
  if (local_300.Ptr == (FNDIPhysicsFieldData *)0x0) {
    if (0 < param_1->NumInstances) {
      do {
        uVar18 = uVar18 + 1;
        *pfVar14 = 0.0;
        pfVar14 = pfVar14 + local_350[0];
      } while ((int)uVar18 < param_1->NumInstances);
    }
  }
  else {
    local_298._s_0.Z = 0.0;
    local_298._s_0.X = 0.0;
    local_298._s_0.Y = 0.0;
    local_218.SamplePositions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_218.SamplePositions.ArrayNum = 0;
    local_218.SamplePositions.ArrayMax = 0;
    local_218.SampleIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_218.SampleIndices.ArrayNum = 0;
    local_218.SampleIndices.ArrayMax = 0;
    local_218.ParticleHandles[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_218.ParticleHandles[0].ArrayNum = 0;
    local_218.ParticleHandles[0].ArrayMax = 0;
    local_218.ParticleHandles[1].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_218.ParticleHandles[1].ArrayNum = 0;
    local_218.ParticleHandles[1].ArrayMax = 0;
    local_218.FieldOutputs[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_218.FieldOutputs[0].ArrayNum = 0;
    local_218.FieldOutputs[0].ArrayMax = 0;
    local_218.FieldOutputs[1].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_218.FieldOutputs[1].ArrayNum = 0;
    local_218.FieldOutputs[1].ArrayMax = 0;
    local_218.FieldOutputs[2].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_218.FieldOutputs[2].ArrayNum = 0;
    local_218.FieldOutputs[2].ArrayMax = 0;
    local_218.FieldOutputs[3].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_218.FieldOutputs[3].ArrayNum = 0;
    local_218.FieldOutputs[3].ArrayMax = 0;
    local_218.VectorResults[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_218.VectorResults[0].ArrayNum = 0;
    local_218.VectorResults[0].ArrayMax = 0;
    local_218.VectorResults[1].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_218.VectorResults[1].ArrayNum = 0;
    local_218.VectorResults[1].ArrayMax = 0;
    local_218.ScalarResults[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_218.ScalarResults[0].ArrayNum = 0;
    local_218.ScalarResults[0].ArrayMax = 0;
    local_218.ScalarResults[1].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_218.ScalarResults[1].ArrayNum = 0;
    local_218.ScalarResults[1].ArrayMax = 0;
    local_218.IntegerResults[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_218.IntegerResults[0].ArrayNum = 0;
    local_218.IntegerResults[0].ArrayMax = 0;
    local_218.IntegerResults[1].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_218.IntegerResults[1].ArrayNum = 0;
    local_218.IntegerResults[1].ArrayMax = 0;
    local_218.IndexResults[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_218.IndexResults[0].ArrayNum = 0;
    local_218.IndexResults[0].ArrayMax = 0;
    local_218.IndexResults[1].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_218.IndexResults[1].ArrayNum = 0;
    local_218.IndexResults[1].ArrayMax = 0;
    local_358 = pfVar14;
    TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::Init
              (&local_218.SamplePositions,(TVector<double> *)&local_298._s_0,param_1->NumInstances);
    iVar16 = param_1->NumInstances;
    fVar20 = 7.00649e-45;
    if (0 < iVar16) {
      lVar17 = 0;
      do {
        local_324 = *local_2e8.Y.InputPtr;
        local_328 = *local_2e8.X.InputPtr;
        local_320 = *local_2e8.Z.InputPtr;
        local_2e8.Y.InputPtr = local_2e8.Y.InputPtr + local_2e8.Y.AdvanceOffset;
        local_2e8.X.InputPtr = local_2e8.X.InputPtr + local_2e8.X.AdvanceOffset;
        local_2e8.Z.InputPtr = local_2e8.Z.InputPtr + local_2e8.Z.AdvanceOffset;
        pTVar15 = FNiagaraLWCConverter::ConvertSimulationPositionToWorld
                            (&(local_300.Ptr)->LWCConverter,&local_280,
                             (FNiagaraPosition *)&local_328);
        dVar5 = (pTVar15->field0_0x0)._s_0.X;
        dVar6 = (pTVar15->field0_0x0)._s_0.Y;
        dVar2 = (pTVar15->field0_0x0)._s_0.Z;
        uVar19 = 0;
        if ((int)uVar18 < local_218.SamplePositions.ArrayNum) {
          uVar19 = ~uVar18 >> 0x1f;
        }
        if ((uVar19 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar18 = uVar18 + 1;
        *(double *)(local_218.SamplePositions.AllocatorInstance.Data + lVar17) = dVar5;
        *(double *)(local_218.SamplePositions.AllocatorInstance.Data + lVar17 + 8) = dVar6;
        *(double *)(local_218.SamplePositions.AllocatorInstance.Data + lVar17 + 0x10) = dVar2;
        lVar17 = lVar17 + 0x18;
        fVar20 = *pfVar13;
        iVar16 = param_1->NumInstances;
        pfVar13 = pfVar13 + iVar7;
        pfVar14 = local_358;
        local_318 = pfVar13;
      } while ((int)uVar18 < iVar16);
    }
    FFieldContextIndex::ContiguousIndices(&local_218.SampleIndices,iVar16,true);
    uVar18 = 0;
    lVar17 = 0;
    local_348[0] = 0;
    TArray<int,TSizedDefaultAllocator<32>_>::Init
              (local_218.IntegerResults,local_348,param_1->NumInstances);
    local_340.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_340.ArrayNum = 0;
    local_340.ArrayMax = 0;
    local_348[1] = 0;
    TArray<int,TSizedDefaultAllocator<32>_>::Init(&local_340,local_348 + 1,param_1->NumInstances);
    local_230 = 0;
    local_268._16_8_ = 0;
    uStack_250 = 0;
    local_220 = 0;
    local_268._0_8_ = (FScriptContainerElement *)0x0;
    local_268._8_8_ = 0;
    local_248 = (void *)0x0;
    local_240 = 0;
    local_23c = 0x80;
    local_238 = 0xffffffff;
    local_234 = 0;
    local_228 = (void *)0x0;
    FFieldContext::FFieldContext
              ((FFieldContext *)local_f8,&local_218,
               (TMap<FFieldSystemMetaData::EMetaType,TUniquePtr<FFieldSystemMetaData,TDefaultDelete<FFieldSystemMetaData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FFieldSystemMetaData::EMetaType,TUniquePtr<FFieldSystemMetaData,TDefaultDelete<FFieldSystemMetaData>_>,0>_>
                *)local_268,(double)(local_300.Ptr)->TimeSeconds);
    local_220 = local_220 & 0xffffffff00000000;
    if (local_228 != (void *)0x0) {
      FMemory::Free(local_228);
    }
    TSparseArray<TSparseSetElement<TTuple<enum_FFieldSystemMetaData::EMetaType,TUniquePtr<FFieldSystemMetaData,TDefaultDelete<FFieldSystemMetaData>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements(local_268,0,local_268._8_4_);
    iVar7 = SUB84(local_268._8_8_,4);
    local_268._8_8_ = local_268._8_8_ & 0xffffffff00000000;
    if (iVar7 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,(ForAnyElementType *)local_268,0,(int *)(local_268 + 0xc));
    }
    local_238 = 0xffffffff;
    local_234 = 0;
    local_240 = 0;
    if (0x80 < local_23c) {
      local_23c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_268 + 0x10),0);
    }
    if (local_248 != (void *)0x0) {
      FMemory::Free(local_248);
    }
    if ((FScriptContainerElement *)local_268._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_268._0_8_);
    }
    uVar9 = _UNK_151aa2728;
    uVar8 = ___xmm_0000000c0000000f0000001000000001;
    local_368.Data = (FScriptContainerElement *)0x0;
    local_360 = 5;
    local_108 = 0xb;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,5,0,&local_368,5,(int *)((longlong)&local_360 + 4));
    FVar10.Data = local_368.Data;
    local_118 = uVar8;
    uStack_110 = uVar9;
    *(undefined8 *)local_368.Data = uVar8;
    *(undefined8 *)(local_368.Data + 8) = uVar9;
    *(undefined4 *)(local_368.Data + 0x10) = local_108;
    iVar7 = (int)local_360;
    local_368.Data = (FScriptContainerElement *)0x0;
    local_360 = 0;
    uVar19 = uVar18;
    if ((int)fVar20 < iVar7) {
      uVar19 = ~(uint)fVar20 >> 0x1f;
    }
    if ((uVar19 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    EVar3 = *(EFieldPhysicsType *)(FVar10.Data + (longlong)(int)fVar20 * 4);
    if (FVar10.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar10.Data);
    }
    EvaluateFieldIntegerNodes
              (&(local_300.Ptr)->FieldCommands,EVar3,(FFieldContext *)local_f8,
               local_218.IntegerResults,&local_340);
    uVar19 = uVar18;
    if (0 < param_1->NumInstances) {
      do {
        uVar12 = uVar18;
        if ((int)uVar19 < local_340.ArrayNum) {
          uVar12 = ~uVar19 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar19 = uVar19 + 1;
        local_358 = pfVar14 + local_350[0];
        pFVar1 = local_340.AllocatorInstance.Data + lVar17;
        lVar17 = lVar17 + 4;
        *pfVar14 = *(float *)pFVar1;
        pfVar14 = local_358;
      } while ((int)uVar19 < param_1->NumInstances);
    }
    if (local_88.Ptr != (FFieldSystemMetaDataCulling *)0x0) {
      (**(code **)(local_88.Ptr)->_padding_)(local_88.Ptr,1);
    }
    local_90 = 0;
    if ((void *)local_f8._96_8_ != (void *)0x0) {
      FMemory::Free((void *)local_f8._96_8_);
    }
    TSparseArray<TSparseSetElement<TTuple<enum_FFieldSystemMetaData::EMetaType,FFieldSystemMetaData_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<enum_FFieldSystemMetaData::EMetaType,FFieldSystemMetaData_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (local_f8 + 0x20);
    if (local_340.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_340.AllocatorInstance.Data);
    }
    FFieldExecutionDatas::~FFieldExecutionDatas(&local_218);
  }
  return;
}

// SamplePhysicsScalarField @ 14e9a78e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UNiagaraDataInterfacePhysicsField::SamplePhysicsScalarField
          (UNiagaraDataInterfacePhysicsField *this,FVectorVMExternalFunctionContext *param_1)

{
  FScriptContainerElement *pFVar1;
  double dVar2;
  EFieldPhysicsType EVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ForAnyElementType FVar10;
  bool bVar11;
  uint uVar12;
  float *pfVar13;
  float *pfVar14;
  TVector<double> *pTVar15;
  int iVar16;
  longlong lVar17;
  uint uVar18;
  uint uVar19;
  float fVar20;
  undefined1 auStackY_3a8 [32];
  ForAnyElementType local_368;
  undefined8 local_360;
  float *local_358;
  int local_350 [2];
  float local_348;
  float local_344;
  TArray<float,TSizedDefaultAllocator<32>_> local_340;
  float local_328;
  float local_324;
  float local_320;
  float *local_318;
  float *local_310;
  int local_308 [2];
  FUserPtrHandler<FNDIPhysicsFieldData> local_300;
  FNDIInputParam<FNiagaraPosition> local_2e8;
  TVector<double>_u_0 local_298;
  TVector<double> local_280;
  undefined1 local_268 [24];
  undefined8 uStack_250;
  void *local_248;
  undefined4 local_240;
  uint local_23c;
  undefined4 local_238;
  undefined4 local_234;
  undefined8 local_230;
  void *local_228;
  ulonglong local_220;
  FFieldExecutionDatas local_218;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined1 local_f8 [104];
  undefined4 local_90;
  TUniquePtr<FFieldSystemMetaDataCulling,TDefaultDelete<FFieldSystemMetaDataCulling>_> local_88;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_3a8;
  VectorVM::FUserPtrHandler<FNDIPhysicsFieldData>::FUserPtrHandler<FNDIPhysicsFieldData>
            (&local_300,param_1);
  FNDIInputParam<FNiagaraPosition>::FNDIInputParam<FNiagaraPosition>(&local_2e8,param_1);
  uVar18 = 0;
  local_308[0] = 0;
  pfVar13 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_308);
  iVar7 = local_308[0];
  local_350[0] = 0;
  pfVar13 = pfVar13 + local_308[0] * param_1->PerInstanceFnInstanceIdx;
  local_318 = pfVar13;
  local_310 = pfVar13;
  pfVar14 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_350);
  pfVar14 = pfVar14 + local_350[0] * param_1->PerInstanceFnInstanceIdx;
  if (local_300.Ptr == (FNDIPhysicsFieldData *)0x0) {
    if (0 < param_1->NumInstances) {
      do {
        uVar18 = uVar18 + 1;
        *pfVar14 = 0.0;
        pfVar14 = pfVar14 + local_350[0];
      } while ((int)uVar18 < param_1->NumInstances);
    }
  }
  else {
    local_298._s_0.Z = 0.0;
    local_298._s_0.X = 0.0;
    local_298._s_0.Y = 0.0;
    local_218.SamplePositions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_218.SamplePositions.ArrayNum = 0;
    local_218.SamplePositions.ArrayMax = 0;
    local_218.SampleIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_218.SampleIndices.ArrayNum = 0;
    local_218.SampleIndices.ArrayMax = 0;
    local_218.ParticleHandles[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_218.ParticleHandles[0].ArrayNum = 0;
    local_218.ParticleHandles[0].ArrayMax = 0;
    local_218.ParticleHandles[1].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_218.ParticleHandles[1].ArrayNum = 0;
    local_218.ParticleHandles[1].ArrayMax = 0;
    local_218.FieldOutputs[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_218.FieldOutputs[0].ArrayNum = 0;
    local_218.FieldOutputs[0].ArrayMax = 0;
    local_218.FieldOutputs[1].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_218.FieldOutputs[1].ArrayNum = 0;
    local_218.FieldOutputs[1].ArrayMax = 0;
    local_218.FieldOutputs[2].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_218.FieldOutputs[2].ArrayNum = 0;
    local_218.FieldOutputs[2].ArrayMax = 0;
    local_218.FieldOutputs[3].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_218.FieldOutputs[3].ArrayNum = 0;
    local_218.FieldOutputs[3].ArrayMax = 0;
    local_218.VectorResults[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_218.VectorResults[0].ArrayNum = 0;
    local_218.VectorResults[0].ArrayMax = 0;
    local_218.VectorResults[1].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_218.VectorResults[1].ArrayNum = 0;
    local_218.VectorResults[1].ArrayMax = 0;
    local_218.ScalarResults[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_218.ScalarResults[0].ArrayNum = 0;
    local_218.ScalarResults[0].ArrayMax = 0;
    local_218.ScalarResults[1].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_218.ScalarResults[1].ArrayNum = 0;
    local_218.ScalarResults[1].ArrayMax = 0;
    local_218.IntegerResults[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_218.IntegerResults[0].ArrayNum = 0;
    local_218.IntegerResults[0].ArrayMax = 0;
    local_218.IntegerResults[1].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_218.IntegerResults[1].ArrayNum = 0;
    local_218.IntegerResults[1].ArrayMax = 0;
    local_218.IndexResults[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_218.IndexResults[0].ArrayNum = 0;
    local_218.IndexResults[0].ArrayMax = 0;
    local_218.IndexResults[1].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_218.IndexResults[1].ArrayNum = 0;
    local_218.IndexResults[1].ArrayMax = 0;
    local_358 = pfVar14;
    TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::Init
              (&local_218.SamplePositions,(TVector<double> *)&local_298._s_0,param_1->NumInstances);
    iVar16 = param_1->NumInstances;
    fVar20 = 8.40779e-45;
    if (0 < iVar16) {
      lVar17 = 0;
      do {
        local_324 = *local_2e8.Y.InputPtr;
        local_328 = *local_2e8.X.InputPtr;
        local_320 = *local_2e8.Z.InputPtr;
        local_2e8.Y.InputPtr = local_2e8.Y.InputPtr + local_2e8.Y.AdvanceOffset;
        local_2e8.X.InputPtr = local_2e8.X.InputPtr + local_2e8.X.AdvanceOffset;
        local_2e8.Z.InputPtr = local_2e8.Z.InputPtr + local_2e8.Z.AdvanceOffset;
        pTVar15 = FNiagaraLWCConverter::ConvertSimulationPositionToWorld
                            (&(local_300.Ptr)->LWCConverter,&local_280,
                             (FNiagaraPosition *)&local_328);
        dVar5 = (pTVar15->field0_0x0)._s_0.X;
        dVar6 = (pTVar15->field0_0x0)._s_0.Y;
        dVar2 = (pTVar15->field0_0x0)._s_0.Z;
        uVar19 = 0;
        if ((int)uVar18 < local_218.SamplePositions.ArrayNum) {
          uVar19 = ~uVar18 >> 0x1f;
        }
        if ((uVar19 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar18 = uVar18 + 1;
        *(double *)(local_218.SamplePositions.AllocatorInstance.Data + lVar17) = dVar5;
        *(double *)(local_218.SamplePositions.AllocatorInstance.Data + lVar17 + 8) = dVar6;
        *(double *)(local_218.SamplePositions.AllocatorInstance.Data + lVar17 + 0x10) = dVar2;
        lVar17 = lVar17 + 0x18;
        fVar20 = *pfVar13;
        iVar16 = param_1->NumInstances;
        pfVar13 = pfVar13 + iVar7;
        pfVar14 = local_358;
        local_318 = pfVar13;
      } while ((int)uVar18 < iVar16);
    }
    FFieldContextIndex::ContiguousIndices(&local_218.SampleIndices,iVar16,true);
    local_348 = 0.0;
    TArray<float,TSizedDefaultAllocator<32>_>::Init
              (local_218.ScalarResults,&local_348,param_1->NumInstances);
    uVar18 = 0;
    lVar17 = 0;
    local_340.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_340.ArrayNum = 0;
    local_340.ArrayMax = 0;
    local_344 = 0.0;
    TArray<float,TSizedDefaultAllocator<32>_>::Init(&local_340,&local_344,param_1->NumInstances);
    local_230 = 0;
    local_268._16_8_ = 0;
    uStack_250 = 0;
    local_220 = 0;
    local_268._0_8_ = (FScriptContainerElement *)0x0;
    local_268._8_8_ = 0;
    local_248 = (void *)0x0;
    local_240 = 0;
    local_23c = 0x80;
    local_238 = 0xffffffff;
    local_234 = 0;
    local_228 = (void *)0x0;
    FFieldContext::FFieldContext
              ((FFieldContext *)local_f8,&local_218,
               (TMap<FFieldSystemMetaData::EMetaType,TUniquePtr<FFieldSystemMetaData,TDefaultDelete<FFieldSystemMetaData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FFieldSystemMetaData::EMetaType,TUniquePtr<FFieldSystemMetaData,TDefaultDelete<FFieldSystemMetaData>_>,0>_>
                *)local_268,(double)(local_300.Ptr)->TimeSeconds);
    local_220 = local_220 & 0xffffffff00000000;
    if (local_228 != (void *)0x0) {
      FMemory::Free(local_228);
    }
    TSparseArray<TSparseSetElement<TTuple<enum_FFieldSystemMetaData::EMetaType,TUniquePtr<FFieldSystemMetaData,TDefaultDelete<FFieldSystemMetaData>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements(local_268,0,local_268._8_4_);
    iVar7 = SUB84(local_268._8_8_,4);
    local_268._8_8_ = local_268._8_8_ & 0xffffffff00000000;
    if (iVar7 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,(ForAnyElementType *)local_268,0,(int *)(local_268 + 0xc));
    }
    local_238 = 0xffffffff;
    local_234 = 0;
    local_240 = 0;
    if (0x80 < local_23c) {
      local_23c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_268 + 0x10),0);
    }
    if (local_248 != (void *)0x0) {
      FMemory::Free(local_248);
    }
    if ((FScriptContainerElement *)local_268._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_268._0_8_);
    }
    uVar9 = _UNK_151aa2718;
    uVar8 = ___xmm_0000000a000000090000000400000003;
    local_368.Data = (FScriptContainerElement *)0x0;
    local_360 = 6;
    local_108 = 8;
    uStack_104 = 0xe;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,6,0,&local_368,6,(int *)((longlong)&local_360 + 4));
    FVar10.Data = local_368.Data;
    local_118 = uVar8;
    uStack_110 = uVar9;
    *(undefined8 *)local_368.Data = uVar8;
    *(undefined8 *)(local_368.Data + 8) = uVar9;
    *(ulonglong *)(local_368.Data + 0x10) = CONCAT44(uStack_104,local_108);
    local_368.Data = (FScriptContainerElement *)0x0;
    uVar19 = uVar18;
    if ((int)fVar20 < (int)local_360) {
      uVar19 = ~(uint)fVar20 >> 0x1f;
    }
    local_360 = 0;
    if ((uVar19 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    EVar3 = *(EFieldPhysicsType *)(FVar10.Data + (longlong)(int)fVar20 * 4);
    if (FVar10.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar10.Data);
    }
    EvaluateFieldScalarNodes
              (&(local_300.Ptr)->FieldCommands,EVar3,(FFieldContext *)local_f8,
               local_218.ScalarResults,&local_340);
    uVar19 = uVar18;
    if (0 < param_1->NumInstances) {
      do {
        uVar12 = uVar18;
        if ((int)uVar19 < local_340.ArrayNum) {
          uVar12 = ~uVar19 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar19 = uVar19 + 1;
        local_358 = pfVar14 + local_350[0];
        pFVar1 = local_340.AllocatorInstance.Data + lVar17;
        lVar17 = lVar17 + 4;
        *pfVar14 = *(float *)pFVar1;
        pfVar14 = local_358;
      } while ((int)uVar19 < param_1->NumInstances);
    }
    if (local_88.Ptr != (FFieldSystemMetaDataCulling *)0x0) {
      (**(code **)(local_88.Ptr)->_padding_)(local_88.Ptr,1);
    }
    local_90 = 0;
    if ((void *)local_f8._96_8_ != (void *)0x0) {
      FMemory::Free((void *)local_f8._96_8_);
    }
    TSparseArray<TSparseSetElement<TTuple<enum_FFieldSystemMetaData::EMetaType,FFieldSystemMetaData_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<enum_FFieldSystemMetaData::EMetaType,FFieldSystemMetaData_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (local_f8 + 0x20);
    if (local_340.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_340.AllocatorInstance.Data);
    }
    FFieldExecutionDatas::~FFieldExecutionDatas(&local_218);
  }
  return;
}

// SamplePhysicsVectorField @ 14e9a7f60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UNiagaraDataInterfacePhysicsField::SamplePhysicsVectorField
          (UNiagaraDataInterfacePhysicsField *this,FVectorVMExternalFunctionContext *param_1)

{
  FScriptContainerElement *pFVar1;
  float *pfVar2;
  double dVar3;
  double dVar4;
  EFieldPhysicsType EVar5;
  code *pcVar6;
  double dVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  ForAnyElementType FVar15;
  bool bVar16;
  float *pfVar17;
  TVector<double> *pTVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  float fVar24;
  ulonglong uVar25;
  undefined1 auStackY_3c8 [32];
  ForAnyElementType local_388;
  undefined8 local_380;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_370;
  float local_358;
  float local_354;
  float local_350;
  float *local_348;
  float *local_340;
  int local_338 [2];
  FNDIOutputParam<UE::Math::TVector<float>_> local_330;
  FUserPtrHandler<FNDIPhysicsFieldData> local_300;
  FNDIInputParam<FNiagaraPosition> local_2e8;
  TVector<double>_u_0 local_298;
  TVector<double> local_280;
  undefined1 local_268 [24];
  undefined8 uStack_250;
  void *local_248;
  undefined4 local_240;
  uint local_23c;
  undefined4 local_238;
  undefined4 local_234;
  undefined8 local_230;
  void *local_228;
  ulonglong local_220;
  FFieldExecutionDatas local_218;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined1 local_f8 [104];
  undefined4 local_90;
  TUniquePtr<FFieldSystemMetaDataCulling,TDefaultDelete<FFieldSystemMetaDataCulling>_> local_88;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_3c8;
  VectorVM::FUserPtrHandler<FNDIPhysicsFieldData>::FUserPtrHandler<FNDIPhysicsFieldData>
            (&local_300,param_1);
  FNDIInputParam<FNiagaraPosition>::FNDIInputParam<FNiagaraPosition>(&local_2e8,param_1);
  uVar23 = 0;
  local_338[0] = 0;
  pfVar17 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_338);
  iVar8 = local_338[0];
  pfVar17 = pfVar17 + local_338[0] * param_1->PerInstanceFnInstanceIdx;
  local_348 = pfVar17;
  local_340 = pfVar17;
  FNDIOutputParam<UE::Math::TVector<float>_>::FNDIOutputParam<UE::Math::TVector<float>_>
            (&local_330,param_1);
  if (local_300.Ptr == (FNDIPhysicsFieldData *)0x0) {
    if (0 < param_1->NumInstances) {
      do {
        uVar14 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
        uVar13 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y;
        uVar20 = (int)uVar23 + 1;
        uVar23 = (ulonglong)uVar20;
        *local_330.X.Register = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
        *local_330.Y.Register = (float)uVar13;
        *local_330.Z.Register = (float)uVar14;
        local_330.Z.Register = local_330.Z.Register + local_330.Z.AdvanceOffset;
        local_330.Y.Register = local_330.Y.Register + local_330.Y.AdvanceOffset;
        local_330.X.Register = local_330.X.Register + local_330.X.AdvanceOffset;
      } while ((int)uVar20 < param_1->NumInstances);
    }
  }
  else {
    local_298._s_0.Z = 0.0;
    local_218.SamplePositions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_218.SamplePositions.ArrayNum = 0;
    local_218.SamplePositions.ArrayMax = 0;
    local_218.SampleIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_218.SampleIndices.ArrayNum = 0;
    local_218.SampleIndices.ArrayMax = 0;
    local_218.ParticleHandles[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_218.ParticleHandles[0].ArrayNum = 0;
    local_218.ParticleHandles[0].ArrayMax = 0;
    local_218.ParticleHandles[1].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_218.ParticleHandles[1].ArrayNum = 0;
    local_218.ParticleHandles[1].ArrayMax = 0;
    local_218.FieldOutputs[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_218.FieldOutputs[0].ArrayNum = 0;
    local_218.FieldOutputs[0].ArrayMax = 0;
    local_218.FieldOutputs[1].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_218.FieldOutputs[1].ArrayNum = 0;
    local_218.FieldOutputs[1].ArrayMax = 0;
    local_218.FieldOutputs[2].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_218.FieldOutputs[2].ArrayNum = 0;
    local_218.FieldOutputs[2].ArrayMax = 0;
    local_218.FieldOutputs[3].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_218.FieldOutputs[3].ArrayNum = 0;
    local_218.FieldOutputs[3].ArrayMax = 0;
    local_218.VectorResults[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_218.VectorResults[0].ArrayNum = 0;
    local_218.VectorResults[0].ArrayMax = 0;
    local_218.VectorResults[1].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_218.VectorResults[1].ArrayNum = 0;
    local_218.VectorResults[1].ArrayMax = 0;
    local_218.ScalarResults[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_218.ScalarResults[0].ArrayNum = 0;
    local_218.ScalarResults[0].ArrayMax = 0;
    local_218.ScalarResults[1].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_218.ScalarResults[1].ArrayNum = 0;
    local_218.ScalarResults[1].ArrayMax = 0;
    local_218.IntegerResults[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_218.IntegerResults[0].ArrayNum = 0;
    local_218.IntegerResults[0].ArrayMax = 0;
    local_218.IntegerResults[1].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_218.IntegerResults[1].ArrayNum = 0;
    local_218.IntegerResults[1].ArrayMax = 0;
    local_218.IndexResults[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_218.IndexResults[0].ArrayNum = 0;
    local_218.IndexResults[0].ArrayMax = 0;
    local_218.IndexResults[1].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_218.IndexResults[1].ArrayNum = 0;
    local_218.IndexResults[1].ArrayMax = 0;
    local_298._s_0.X = 0.0;
    local_298._s_0.Y = 0.0;
    TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::Init
              (&local_218.SamplePositions,(TVector<double> *)&local_298._s_0,param_1->NumInstances);
    iVar19 = param_1->NumInstances;
    fVar24 = 1.12104e-44;
    uVar22 = uVar23;
    uVar25 = uVar23;
    if (0 < iVar19) {
      do {
        local_354 = *local_2e8.Y.InputPtr;
        local_358 = *local_2e8.X.InputPtr;
        local_350 = *local_2e8.Z.InputPtr;
        local_2e8.Y.InputPtr = local_2e8.Y.InputPtr + local_2e8.Y.AdvanceOffset;
        local_2e8.X.InputPtr = local_2e8.X.InputPtr + local_2e8.X.AdvanceOffset;
        local_2e8.Z.InputPtr = local_2e8.Z.InputPtr + local_2e8.Z.AdvanceOffset;
        pTVar18 = FNiagaraLWCConverter::ConvertSimulationPositionToWorld
                            (&(local_300.Ptr)->LWCConverter,&local_280,
                             (FNiagaraPosition *)&local_358);
        uVar21 = (uint)uVar22;
        dVar4 = (pTVar18->field0_0x0)._s_0.X;
        dVar7 = (pTVar18->field0_0x0)._s_0.Y;
        dVar3 = (pTVar18->field0_0x0)._s_0.Z;
        uVar20 = 0;
        if ((int)uVar21 < local_218.SamplePositions.ArrayNum) {
          uVar20 = ~uVar21 >> 0x1f;
        }
        if ((uVar20 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        *(double *)(local_218.SamplePositions.AllocatorInstance.Data + uVar25) = dVar4;
        *(double *)(local_218.SamplePositions.AllocatorInstance.Data + uVar25 + 8) = dVar7;
        *(double *)(local_218.SamplePositions.AllocatorInstance.Data + uVar25 + 0x10) = dVar3;
        iVar19 = param_1->NumInstances;
        local_348 = pfVar17 + iVar8;
        fVar24 = *pfVar17;
        uVar22 = (ulonglong)(uVar21 + 1);
        pfVar17 = local_348;
        uVar25 = uVar25 + 0x18;
      } while ((int)(uVar21 + 1) < iVar19);
    }
    FFieldContextIndex::ContiguousIndices(&local_218.SampleIndices,iVar19,true);
    TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::Init
              (local_218.VectorResults,&UE::Math::TVector<double>::ZeroVector,param_1->NumInstances)
    ;
    local_370.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_370.ArrayNum = 0;
    local_370.ArrayMax = 0;
    TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::Init
              (&local_370,&UE::Math::TVector<double>::ZeroVector,param_1->NumInstances);
    local_230 = 0;
    local_268._16_8_ = 0;
    uStack_250 = 0;
    local_220 = 0;
    local_268._0_8_ = (FScriptContainerElement *)0x0;
    local_268._8_8_ = 0;
    local_248 = (void *)0x0;
    local_240 = 0;
    local_23c = 0x80;
    local_238 = 0xffffffff;
    local_234 = 0;
    local_228 = (void *)0x0;
    FFieldContext::FFieldContext
              ((FFieldContext *)local_f8,&local_218,
               (TMap<FFieldSystemMetaData::EMetaType,TUniquePtr<FFieldSystemMetaData,TDefaultDelete<FFieldSystemMetaData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FFieldSystemMetaData::EMetaType,TUniquePtr<FFieldSystemMetaData,TDefaultDelete<FFieldSystemMetaData>_>,0>_>
                *)local_268,(double)(local_300.Ptr)->TimeSeconds);
    local_220 = local_220 & 0xffffffff00000000;
    if (local_228 != (void *)0x0) {
      FMemory::Free(local_228);
    }
    TSparseArray<TSparseSetElement<TTuple<enum_FFieldSystemMetaData::EMetaType,TUniquePtr<FFieldSystemMetaData,TDefaultDelete<FFieldSystemMetaData>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements(local_268,0,local_268._8_4_);
    iVar8 = SUB84(local_268._8_8_,4);
    local_268._8_8_ = local_268._8_8_ & 0xffffffff00000000;
    if (iVar8 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,(ForAnyElementType *)local_268,0,(int *)(local_268 + 0xc));
    }
    local_238 = 0xffffffff;
    local_234 = 0;
    local_240 = 0;
    if (0x80 < local_23c) {
      local_23c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_268 + 0x10),0);
    }
    if (local_248 != (void *)0x0) {
      FMemory::Free(local_248);
    }
    if ((FScriptContainerElement *)local_268._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_268._0_8_);
    }
    uVar12 = _UNK_151aa2748;
    uVar11 = ___xmm_0000001300000012000000110000000d;
    uVar10 = _UNK_151aa2708;
    uVar9 = ___xmm_00000007000000060000000500000002;
    local_388.Data = (FScriptContainerElement *)0x0;
    local_380 = 8;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,8,0,&local_388,8,(int *)((longlong)&local_380 + 4));
    FVar15.Data = local_388.Data;
    local_118 = uVar9;
    uStack_110 = uVar10;
    *(undefined8 *)local_388.Data = uVar9;
    *(undefined8 *)(local_388.Data + 8) = uVar10;
    *(undefined8 *)(local_388.Data + 0x10) = uVar11;
    *(undefined8 *)(local_388.Data + 0x18) = uVar12;
    local_108 = uVar11;
    uStack_100 = uVar12;
    uVar20 = 0;
    if ((int)fVar24 < (int)local_380) {
      uVar20 = ~(uint)fVar24 >> 0x1f;
    }
    local_388.Data = (FScriptContainerElement *)0x0;
    local_380 = 0;
    if ((uVar20 == 0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar16)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    EVar5 = *(EFieldPhysicsType *)(FVar15.Data + (longlong)(int)fVar24 * 4);
    if (FVar15.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar15.Data);
    }
    EvaluateFieldVectorNodes
              (&(local_300.Ptr)->FieldCommands,EVar5,(FFieldContext *)local_f8,
               local_218.VectorResults,&local_370);
    uVar22 = uVar23;
    if (0 < param_1->NumInstances) {
      do {
        uVar21 = (uint)uVar22;
        uVar20 = 0;
        if ((int)uVar21 < local_370.ArrayNum) {
          uVar20 = ~uVar21 >> 0x1f;
        }
        if ((uVar20 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar1 = local_370.AllocatorInstance.Data + uVar23;
        dVar3 = *(double *)(local_370.AllocatorInstance.Data + uVar23 + 8);
        dVar4 = *(double *)(local_370.AllocatorInstance.Data + uVar23 + 0x10);
        pfVar17 = local_330.X.Register + local_330.X.AdvanceOffset;
        uVar23 = uVar23 + 0x18;
        *local_330.X.Register = (float)*(double *)pFVar1;
        pfVar2 = local_330.Y.Register + local_330.Y.AdvanceOffset;
        *local_330.Y.Register = (float)dVar3;
        *local_330.Z.Register = (float)dVar4;
        local_330.Z.Register = local_330.Z.Register + local_330.Z.AdvanceOffset;
        uVar22 = (ulonglong)(uVar21 + 1);
        local_330.X.Register = pfVar17;
        local_330.Y.Register = pfVar2;
      } while ((int)(uVar21 + 1) < param_1->NumInstances);
    }
    if (local_88.Ptr != (FFieldSystemMetaDataCulling *)0x0) {
      (**(code **)(local_88.Ptr)->_padding_)(local_88.Ptr,1);
    }
    local_90 = 0;
    if ((void *)local_f8._96_8_ != (void *)0x0) {
      FMemory::Free((void *)local_f8._96_8_);
    }
    TSparseArray<TSparseSetElement<TTuple<enum_FFieldSystemMetaData::EMetaType,FFieldSystemMetaData_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<enum_FFieldSystemMetaData::EMetaType,FFieldSystemMetaData_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (local_f8 + 0x20);
    if (local_370.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_370.AllocatorInstance.Data);
    }
    FFieldExecutionDatas::~FFieldExecutionDatas(&local_218);
  }
  return;
}

// SetShaderParameters @ 14e9aa950

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
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
UNiagaraDataInterfacePhysicsField::SetShaderParameters
          (UNiagaraDataInterfacePhysicsField *this,
          FNiagaraDataInterfaceSetShaderParametersContext *param_1)

{
  double dVar1;
  double dVar2;
  FNiagaraDataInterfaceProxy *pFVar3;
  uchar *puVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ForAnyElementType FVar10;
  ForAnyElementType FVar11;
  bool bVar12;
  ushort uVar13;
  ulong64 uVar14;
  FShaderParametersMetadata *pFVar15;
  FRHIShaderResourceView *pFVar16;
  uint *puVar17;
  ulong64 *puVar18;
  int iVar19;
  uint uVar20;
  uint *puVar21;
  ulonglong uVar22;
  FName *pFVar23;
  ForAnyElementType FVar24;
  longlong lVar25;
  ulong64 *puVar26;
  ulong64 *puVar27;
  undefined1 auStackY_118 [32];
  ForAnyElementType local_d8;
  undefined8 local_d0;
  ForAnyElementType local_c8;
  undefined8 local_c0;
  ForAnyElementType local_b8;
  undefined8 local_b0;
  FScriptContainerElement *local_a8;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 local_78;
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStackY_118;
  if ((param_1->DataInterfaceProxy == (FNiagaraDataInterfaceProxy *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("DataInterfaceProxy",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterface.h"
                          ,0x1c1,L""), bVar12)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar3 = param_1->DataInterfaceProxy;
  uVar14 = FNiagaraDataInterfaceSetShaderParametersContext::GetSystemInstanceID(param_1);
  puVar26 = (ulong64 *)0x0;
  puVar18 = puVar26;
  if (pFVar3[1].SourceDIName.ComparisonIndex.Value != *(uint *)((longlong)&pFVar3[4]._padding_ + 4))
  {
    pFVar23 = (FName *)pFVar3[5]._padding_;
    if ((FName *)pFVar3[5]._padding_ == (FName *)0x0) {
      pFVar23 = &pFVar3[4].SourceDIName;
    }
    uVar20 = (&pFVar23->ComparisonIndex)
             [(uVar14 >> 0x20) * 0x17 + uVar14 &
              (ulonglong)(pFVar3[5].SourceDIName.ComparisonIndex.Value - 1)].Value;
    if (uVar20 != 0xffffffff) {
      do {
        puVar18 = (ulong64 *)((longlong)(int)uVar20 * 0x20 + pFVar3[1]._padding_);
        if (*puVar18 == uVar14) break;
        uVar20 = (uint)puVar18[3];
        puVar18 = puVar26;
      } while (uVar20 != 0xffffffff);
    }
  }
  puVar27 = puVar18 + 1;
  if (puVar18 == (ulong64 *)0x0) {
    puVar27 = puVar26;
  }
  uVar20 = param_1->ParametersOffset + 0xf & 0xfffffff0;
  pFVar15 = TShaderParameterStructTypeInfo<NDIPhysicsFieldLocal::FShaderInstanceParameters>::
            GetStructMetadata();
  puVar21 = (uint *)(param_1->BaseParameters + uVar20);
  param_1->ParametersOffset = pFVar15->Size + uVar20;
  pFVar15 = TShaderParameterStructTypeInfo<NDIPhysicsFieldLocal::FShaderGlobalParameters>::
            GetStructMetadata();
  uVar13 = FNiagaraDataInterfaceSetShaderParametersContext::GetParameterIncludedStructInternal
                     (param_1,pFVar15);
  puVar4 = param_1->BaseParameters;
  uVar22 = (ulonglong)uVar13;
  if ((puVar27 == (ulong64 *)0x0) || (uVar14 = *puVar27, uVar14 == 0)) {
    pFVar16 = FNiagaraRenderer::GetDummyFloatBuffer();
    *(FRHIShaderResourceView **)(puVar4 + uVar22) = pFVar16;
    pFVar16 = FNiagaraRenderer::GetDummyIntBuffer();
    *(FRHIShaderResourceView **)(puVar4 + uVar22 + 8) = pFVar16;
    pFVar16 = FNiagaraRenderer::GetDummyIntBuffer();
    *(FRHIShaderResourceView **)(puVar4 + uVar22 + 0x10) = pFVar16;
    puVar4 = puVar4 + uVar22 + 0x18;
    puVar4[0] = '\0';
    puVar4[1] = '\0';
    puVar4[2] = '\0';
    puVar4[3] = '\0';
    *puVar21 = 0;
    pFVar16 = FNiagaraRenderer::GetDummyFloatBuffer();
    *(FRHIShaderResourceView **)(puVar21 + 0x84) = pFVar16;
    lVar25 = 0x20;
    *(undefined8 *)(puVar21 + 0x88) = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
    puVar21[0x8a] = (uint)UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
    puVar17 = puVar21 + 0x90;
    puVar21[0x8b] = 0x3f800000;
    puVar21[0x8c] = 2;
    puVar21[0x8d] = 1;
    puVar21[0x8e] = 1;
    puVar21[0x8f] = 0;
    do {
      puVar17[-0x8c] = 0;
      puVar17[-0x8b] = 0;
      puVar17[-0x8a] = 0;
      puVar17[-0x89] = 0;
      puVar17[0] = 0;
      puVar17[1] = 0;
      puVar17[2] = 0;
      puVar17[3] = 0;
      puVar17 = puVar17 + 4;
      lVar25 = lVar25 + -1;
    } while (lVar25 != 0);
  }
  else {
    *(undefined8 *)(puVar4 + uVar22) = *(undefined8 *)(uVar14 + 0x60);
    *(undefined8 *)(puVar4 + uVar22 + 8) = *(undefined8 *)(uVar14 + 0x90);
    *(undefined8 *)(puVar4 + uVar22 + 0x10) = *(undefined8 *)(uVar14 + 0xc0);
    *(int *)(puVar4 + uVar22 + 0x18) = (int)puVar27[1];
    uVar9 = _UNK_151aa2748;
    uVar8 = ___xmm_0000001300000012000000110000000d;
    uVar7 = _UNK_151aa2708;
    uVar6 = ___xmm_00000007000000060000000500000002;
    local_d8.Data = (FScriptContainerElement *)0x0;
    local_d0 = 8;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,8,0,&local_d8,8,(int *)((longlong)&local_d0 + 4));
    FVar10.Data = local_d8.Data;
    local_b8.Data = (FScriptContainerElement *)0x0;
    local_b0 = 6;
    local_90 = 8;
    *(undefined8 *)local_d8.Data = uVar6;
    *(undefined8 *)(local_d8.Data + 8) = uVar7;
    uVar7 = _UNK_151aa2718;
    uVar6 = ___xmm_0000000a000000090000000400000003;
    uStack_8c = 0xe;
    *(undefined8 *)(local_d8.Data + 0x10) = uVar8;
    *(undefined8 *)(local_d8.Data + 0x18) = uVar9;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,6,0,&local_b8,6,(int *)((longlong)&local_b0 + 4));
    FVar11.Data = local_b8.Data;
    iVar19 = 0;
    local_c8.Data = (FScriptContainerElement *)0x0;
    local_c0 = 5;
    *(undefined8 *)local_b8.Data = uVar6;
    *(undefined8 *)(local_b8.Data + 8) = uVar7;
    uVar7 = _UNK_151aa2728;
    uVar6 = ___xmm_0000000c0000000f0000001000000001;
    local_78 = 0xb;
    *(ulonglong *)(local_b8.Data + 0x10) = CONCAT44(uStack_8c,local_90);
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,5,0,&local_c8,5,(int *)((longlong)&local_c0 + 4));
    lVar25 = uVar14 - (longlong)puVar21;
    *(undefined8 *)local_c8.Data = uVar6;
    *(undefined8 *)(local_c8.Data + 8) = uVar7;
    *(undefined4 *)(local_c8.Data + 0x10) = local_78;
    puVar17 = puVar21 + 5;
    local_a8 = local_c8.Data;
    FVar24.Data = FVar11.Data;
    do {
      if (iVar19 < (int)local_d0) {
        uVar20 = *(uint *)(FVar24.Data + ((longlong)FVar10.Data - (longlong)FVar11.Data));
      }
      else {
        uVar20 = 0;
      }
      puVar17[-1] = uVar20;
      if (iVar19 < (int)local_b0) {
        uVar20 = *(uint *)FVar24.Data;
      }
      else {
        uVar20 = 0;
      }
      *puVar17 = uVar20;
      if (iVar19 < (int)local_c0) {
        uVar20 = *(uint *)(FVar24.Data + ((longlong)local_c8.Data - (longlong)FVar11.Data));
      }
      else {
        uVar20 = 0;
      }
      puVar17[1] = uVar20;
      iVar19 = iVar19 + 1;
      puVar17[2] = 0;
      FVar24.Data = FVar24.Data + 4;
      puVar17[0x8b] = *(uint *)((longlong)puVar17 + lVar25 + 0x1dc);
      puVar17[0x8c] = *(uint *)((longlong)puVar17 + lVar25 + 0x3dc);
      puVar17[0x8d] = *(uint *)((longlong)puVar17 + lVar25 + 0x5dc);
      puVar17[0x8e] = 0;
      puVar17 = puVar17 + 4;
    } while (iVar19 < 0x20);
    *puVar21 = (uint)*(byte *)(uVar14 + 0x1074);
    if (*(char *)(uVar14 + 0x1074) == '\0') {
      pFVar16 = FNiagaraRenderer::GetDummyFloatBuffer();
    }
    else {
      pFVar16 = *(FRHIShaderResourceView **)(uVar14 + 0x30);
    }
    *(FRHIShaderResourceView **)(puVar21 + 0x84) = pFVar16;
    dVar1 = *(double *)(uVar14 + 0xdf8);
    dVar2 = *(double *)(uVar14 + 0xe00);
    puVar21[0x88] = (uint)(float)*(double *)(uVar14 + 0xdf0);
    puVar21[0x89] = (uint)(float)dVar1;
    puVar21[0x8a] = (uint)(float)dVar2;
    puVar21[0x8b] = *(uint *)(uVar14 + 0xe08);
    puVar21[0x8c] = *(uint *)(uVar14 + 0xe18);
    puVar21[0x8d] = *(uint *)(uVar14 + 0xe14);
    puVar21[0x8e] = *(uint *)(uVar14 + 0xe10);
    puVar21[0x8f] = *(uint *)(uVar14 + 0x1d0);
    if (local_a8 != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8);
    }
    if (FVar11.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar11.Data);
    }
    if (FVar10.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar10.Data);
    }
  }
  return;
}

// StaticRegisterNativesUNiagaraDataInterfacePhysicsField @ 14e9af9d0

void __cdecl
UNiagaraDataInterfacePhysicsField::StaticRegisterNativesUNiagaraDataInterfacePhysicsField(void)

{
  return;
}

