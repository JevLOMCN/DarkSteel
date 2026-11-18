// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 26

// StaticClass @ 149198990

UClass * __cdecl UNiagaraDataInterfaceRasterizationGrid3D::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceRasterizationGrid3D.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataInterfaceRasterizationGrid3D",
               &Z_Registration_Info_UClass_UNiagaraDataInterfaceRasterizationGrid3D.InnerSingleton,
               StaticRegisterNativesUNiagaraDataInterfaceRasterizationGrid3D,0x80,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",
               InternalConstructor<UNiagaraDataInterfaceRasterizationGrid3D>,
               InternalVTableHelperCtorCaller<UNiagaraDataInterfaceRasterizationGrid3D>,local_res8,
               UNiagaraDataInterfaceGrid3D::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceRasterizationGrid3D.InnerSingleton;
}

// UNiagaraDataInterfaceRasterizationGrid3D @ 1491ac220

UNiagaraDataInterfaceRasterizationGrid3D * __thiscall
UNiagaraDataInterfaceRasterizationGrid3D::UNiagaraDataInterfaceRasterizationGrid3D
          (UNiagaraDataInterfaceRasterizationGrid3D *this,FVTableHelper *param_1)

{
  UNiagaraDataInterfaceGrid3D::UNiagaraDataInterfaceGrid3D
            ((UNiagaraDataInterfaceGrid3D *)this,param_1);
  this->_padding_ = (longlong)&___7UNiagaraDataInterfaceRasterizationGrid3D__6B_;
  return this;
}

// UNiagaraDataInterfaceRasterizationGrid3D @ 1491ac250

UNiagaraDataInterfaceRasterizationGrid3D * __thiscall
UNiagaraDataInterfaceRasterizationGrid3D::UNiagaraDataInterfaceRasterizationGrid3D
          (UNiagaraDataInterfaceRasterizationGrid3D *this,FObjectInitializer *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  UNiagaraDataInterfaceGrid3D::UNiagaraDataInterfaceGrid3D
            ((UNiagaraDataInterfaceGrid3D *)this,param_1);
  this->NumAttributes = 1;
  this->_padding_ = (longlong)&___7UNiagaraDataInterfaceRasterizationGrid3D__6B_;
  this->Precision = 1.0;
  this->ResetValue = 0;
  puVar2 = (undefined8 *)0x0;
  puVar1 = ::operator_new(0x60);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[9] = 0;
    puVar1[0xb] = 0;
    *puVar1 = &___7FNiagaraDataInterfaceProxyRasterizationGrid3D__6B_;
    puVar1[1] = 0;
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

// ~UNiagaraDataInterfaceRasterizationGrid3D @ 1491ad640

void __thiscall
UNiagaraDataInterfaceRasterizationGrid3D::~UNiagaraDataInterfaceRasterizationGrid3D
          (UNiagaraDataInterfaceRasterizationGrid3D *this)

{
  this->_padding_ = (longlong)&___7UNiagaraDataInterfaceRasterizationGrid3D__6B_;
  UNiagaraDataInterfaceGrid3D::~UNiagaraDataInterfaceGrid3D((UNiagaraDataInterfaceGrid3D *)this);
  return;
}

// operator() @ 1491b1010

void __thiscall
`UNiagaraDataInterfaceRasterizationGrid3D::InitPerInstanceData'::__l2::<lambda_1>::operator()
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
        if (*(ulonglong *)((longlong)iVar5 * 0x80 + *(longlong *)(lVar1 + 0x10)) == uVar2) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("!RT_Proxy->SystemInstancesToProxyData.Contains(InstanceID)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceRasterizationGrid3D.cpp"
                             ,0x38e,L"");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          break;
        }
        iVar5 = *(int *)((longlong)iVar5 * 0x80 + 0x78 + *(longlong *)(lVar1 + 0x10));
      } while (iVar5 != -1);
    }
  }
  lVar1 = *(longlong *)this;
  local_res18 = (ulonglong *)((longlong)this + 0x20);
  TSet<TTuple<unsigned___int64,RasterizationGrid3DRWInstanceData>,TDefaultMapHashableKeyFuncs<unsigned___int64,RasterizationGrid3DRWInstanceData,0>,FDefaultSetAllocator>
  ::Emplace<TKeyInitializer<unsigned___int64_const_&>_>
            ((TSet<TTuple<unsigned___int64,RasterizationGrid3DRWInstanceData>,TDefaultMapHashableKeyFuncs<unsigned___int64,RasterizationGrid3DRWInstanceData,0>,FDefaultSetAllocator>
              *)(lVar1 + 0x10),&local_res8,(bool *)&local_res18);
  lVar1 = *(longlong *)(lVar1 + 0x10);
  lVar6 = (longlong)(int)local_res8.Key * 0x80;
  *(undefined1 *)(lVar6 + 8 + lVar1) = *(undefined1 *)((longlong)this + 0x28);
  *(undefined4 *)(lVar6 + 0xc + lVar1) = *(undefined4 *)((longlong)this + 8);
  *(undefined8 *)(lVar6 + 0x10 + lVar1) = *(undefined8 *)((longlong)this + 0xc);
  *(undefined4 *)(lVar6 + 0x18 + lVar1) = *(undefined4 *)((longlong)this + 0x14);
  *(undefined8 *)(lVar6 + 0x1c + lVar1) = *(undefined8 *)((longlong)this + 0x3c);
  *(undefined4 *)(lVar6 + 0x24 + lVar1) = *(undefined4 *)((longlong)this + 0x44);
  *(undefined4 *)(lVar6 + 0x28 + lVar1) = *(undefined4 *)((longlong)this + 0x18);
  *(undefined4 *)(lVar6 + 0x2c + lVar1) = *(undefined4 *)((longlong)this + 0x1c);
  *(undefined1 *)(lVar6 + 0x30 + lVar1) = 1;
  return;
}

// operator() @ 1491b17c0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
`UNiagaraDataInterfaceRasterizationGrid3D::PerInstanceTickPostSimulate'::__l5::<lambda_1>::
operator()(void *this,FRHICommandListImmediate *param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  FRHIBuffer *this_00;
  FRHIShaderResourceView *this_01;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  RasterizationGrid3DRWInstanceData *pRVar6;
  longlong lVar7;
  
  lVar1 = *(longlong *)this;
  uVar2 = *(ulonglong *)((longlong)this + 0x20);
  if (*(int *)(lVar1 + 0x18) != *(int *)(lVar1 + 0x44)) {
    lVar7 = *(longlong *)(lVar1 + 0x50);
    if (*(longlong *)(lVar1 + 0x50) == 0) {
      lVar7 = lVar1 + 0x48;
    }
    iVar5 = *(int *)(lVar7 + ((uVar2 >> 0x20) * 0x17 + uVar2 &
                             (ulonglong)(*(int *)(lVar1 + 0x58) - 1)) * 4);
    if (iVar5 != -1) {
      do {
        if (*(ulonglong *)((longlong)iVar5 * 0x80 + *(longlong *)(lVar1 + 0x10)) == uVar2)
        goto LAB_1491b184c;
        iVar5 = *(int *)((longlong)iVar5 * 0x80 + 0x78 + *(longlong *)(lVar1 + 0x10));
      } while (iVar5 != -1);
    }
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("RT_Proxy->SystemInstancesToProxyData.Contains(InstanceID)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceRasterizationGrid3D.cpp"
                     ,0x40c,L"");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
LAB_1491b184c:
  pRVar6 = TMapBase<unsigned___int64,RasterizationGrid3DRWInstanceData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,RasterizationGrid3DRWInstanceData,0>_>
           ::Find((TMapBase<unsigned___int64,RasterizationGrid3DRWInstanceData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,RasterizationGrid3DRWInstanceData,0>_>
                   *)(*(longlong *)this + 0x10),*(ulong64 *)((longlong)this + 0x20));
  *(undefined8 *)&(pRVar6->NumTiles).field0_0x0 = *(undefined8 *)((longlong)this + 0x3c);
  (pRVar6->NumTiles).field0_0x0._s_0.Z = *(int *)((longlong)this + 0x44);
  *(undefined8 *)&(pRVar6->NumCells).field0_0x0 = *(undefined8 *)((longlong)this + 8);
  (pRVar6->NumCells).field0_0x0._s_0.Z = *(int *)((longlong)this + 0x10);
  pRVar6->Precision = *(float *)((longlong)this + 0x14);
  pRVar6->TotalNumAttributes = *(int *)((longlong)this + 0x2c);
  iVar5 = *(int *)((longlong)this + 0x18);
  (pRVar6->PerAttributeData).NumBytes = 0;
  pRVar6->ResetValue = iVar5;
  pRVar6->NeedsRealloc = true;
  this_00 = (pRVar6->PerAttributeData).Buffer.Reference;
  if (this_00 != (FRHIBuffer *)0x0) {
    (pRVar6->PerAttributeData).Buffer.Reference = (FRHIBuffer *)0x0;
    FRHIResource::Release((FRHIResource *)this_00);
  }
  this_01 = (pRVar6->PerAttributeData).SRV.Reference;
  if (this_01 != (FRHIShaderResourceView *)0x0) {
    (pRVar6->PerAttributeData).SRV.Reference = (FRHIShaderResourceView *)0x0;
    FRHIResource::Release((FRHIResource *)this_01);
  }
  return;
}

// BuildShaderParameters @ 1491b5e10

void __thiscall
UNiagaraDataInterfaceRasterizationGrid3D::BuildShaderParameters
          (UNiagaraDataInterfaceRasterizationGrid3D *this,FNiagaraShaderParametersBuilder *param_1)

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
  pFVar5 = TShaderParameterStructTypeInfo<NDIRasterizationGrid3DLocal::FShaderParameters>::
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
  pFVar3->NextMemberOffset = pFVar3->NextMemberOffset + 0x40;
  return;
}

// CopyToInternal @ 1491b7f70

bool __thiscall
UNiagaraDataInterfaceRasterizationGrid3D::CopyToInternal
          (UNiagaraDataInterfaceRasterizationGrid3D *this,UNiagaraDataInterface *param_1)

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
      *(int *)&param_1[2]._padding_ = this->NumAttributes;
      *(float *)((longlong)&param_1[2]._padding_ + 4) = this->Precision;
      *(int *)&param_1[2]._padding_ = this->ResetValue;
      return true;
    }
    pFVar4 = GetTypeName<UNiagaraDataInterfaceRasterizationGrid3D>(&local_28);
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
  pFVar4 = GetTypeName<UNiagaraDataInterfaceRasterizationGrid3D>(&local_28);
  if ((pFVar4->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar5);
}

// DestroyPerInstanceData @ 1491be6a0

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
UNiagaraDataInterfaceRasterizationGrid3D::DestroyPerInstanceData
          (UNiagaraDataInterfaceRasterizationGrid3D *this,void *param_1,
          FNiagaraSystemInstance *param_2)

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
  if (*(FRHIResource **)((longlong)param_1 + 0x60) != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)((longlong)param_1 + 0x60));
  }
  if (*(FRHIResource **)((longlong)param_1 + 0x58) != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)((longlong)param_1 + 0x58));
  }
  FNiagaraPooledRWTexture::Release((FNiagaraPooledRWTexture *)((longlong)param_1 + 0x30));
  if (*(longlong **)((longlong)param_1 + 0x30) != (longlong *)0x0) {
    (**(code **)(**(longlong **)((longlong)param_1 + 0x30) + 0x38))();
  }
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
                  TFunctionRefCaller<`UNiagaraDataInterfaceRasterizationGrid3D::DestroyPerInstanceData'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                  ::Call;
    local_60 = (undefined ***)0x0;
    local_78 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`UNiagaraDataInterfaceRasterizationGrid3D::DestroyPerInstanceData'::`2'::<lambda_1>,1,0>
                ::_vftable_;
    this_00 = FRenderCommandList::GetInstanceTLS();
    if (this_00 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_UNiagaraDataInterfaceRasterizationGrid3D::DestroyPerInstanceData_::__l2::TSTR_FNiagaraDIDestroyInstanceData1062>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
               TRenderCommandTag<`UNiagaraDataInterfaceRasterizationGrid3D::DestroyPerInstanceData'::__l2::TSTR_FNiagaraDIDestroyInstanceData1062>
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

// Equals @ 1491c13c0

bool __thiscall
UNiagaraDataInterfaceRasterizationGrid3D::Equals
          (UNiagaraDataInterfaceRasterizationGrid3D *this,UNiagaraDataInterface *param_1)

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
  if (bVar2) {
    if (param_1 == (UNiagaraDataInterface *)0x0) {
      pFVar4 = GetTypeName<UNiagaraDataInterfaceRasterizationGrid3D_const_>(&local_28);
      if ((pFVar4->Data).ArrayNum == 0) {
        pwVar5 = L"";
      }
      else {
        pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(L"nullptr",pwVar5);
    }
    pUVar3 = StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((*(int *)(param_1->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar3->_padding_)) {
      pFVar4 = GetTypeName<UNiagaraDataInterfaceRasterizationGrid3D_const_>(&local_28);
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
    if ((((int)param_1[2]._padding_ == this->NumAttributes) &&
        (this->Precision == *(float *)((longlong)&param_1[2]._padding_ + 4))) &&
       ((int)param_1[2]._padding_ == this->ResetValue)) {
      return true;
    }
  }
  return false;
}

// GetPrivateStaticClass @ 1491ca320

UClass * __cdecl UNiagaraDataInterfaceRasterizationGrid3D::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceRasterizationGrid3D.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataInterfaceRasterizationGrid3D",
               &Z_Registration_Info_UClass_UNiagaraDataInterfaceRasterizationGrid3D.InnerSingleton,
               StaticRegisterNativesUNiagaraDataInterfaceRasterizationGrid3D,0x80,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",
               InternalConstructor<UNiagaraDataInterfaceRasterizationGrid3D>,
               InternalVTableHelperCtorCaller<UNiagaraDataInterfaceRasterizationGrid3D>,local_res8,
               UNiagaraDataInterfaceGrid3D::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceRasterizationGrid3D.InnerSingleton;
}

// GetVMExternalFunction @ 1491cf510

void __thiscall
UNiagaraDataInterfaceRasterizationGrid3D::GetVMExternalFunction
          (UNiagaraDataInterfaceRasterizationGrid3D *this,FVMExternalFunctionBindingInfo *param_1,
          void *param_2,
          TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
          *param_3)

{
  FName FVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  code *pcVar5;
  UNiagaraDataInterfaceRasterizationGrid3D *local_res10;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  UNiagaraDataInterfaceGrid3D::GetVMExternalFunction
            ((UNiagaraDataInterfaceGrid3D *)this,param_1,param_2,param_3);
  FVar1 = param_1->Name;
  if (FVar1 == UNiagaraDataInterfaceRWBase::NumCellsFunctionName) {
    if ((((param_1->InputParamLocations).ArrayNum != 1) || (param_1->NumOutputs != 3)) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("BindingInfo.GetNumInputs() == 1 && BindingInfo.GetNumOutputs() == 3",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceRasterizationGrid3D.cpp"
                           ,0x19d,L""), bVar2)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_3,
               (FWriteAccessScope *)&local_28);
    local_10 = &param_3->field_0x8;
    puVar3 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)local_10);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUNiagaraDataInterfaceRasterizationGrid3D____A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UNiagaraDataInterfaceRasterizationGrid3D *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar3[3] = 0;
      local_res10 = this;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UNiagaraDataInterfaceRasterizationGrid3D *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar3 + 3),(FObjectPtr)&local_res10);
      puVar3[4] = VMGetNumCells;
    }
    if (local_28.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
      return;
    }
  }
  else {
    if (FVar1 == NDIRasterizationGrid3DLocal::SetNumCellsFunctionName) {
      if ((((param_1->InputParamLocations).ArrayNum != 4) || (param_1->NumOutputs != 1)) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("BindingInfo.GetNumInputs() == 4 && BindingInfo.GetNumOutputs() == 1",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceRasterizationGrid3D.cpp"
                             ,0x1a2,L""), bVar2)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pcVar5 = VMSetNumCells;
    }
    else if (FVar1 == NDIRasterizationGrid3DLocal::SetNumAttributesFunctionName) {
      if ((((param_1->InputParamLocations).ArrayNum != 2) || (param_1->NumOutputs != 1)) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("BindingInfo.GetNumInputs() == 2 && BindingInfo.GetNumOutputs() == 1",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceRasterizationGrid3D.cpp"
                             ,0x1a7,L""), bVar2)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pcVar5 = VMSetNumAttributes;
    }
    else {
      if (FVar1 != NDIRasterizationGrid3DLocal::SetFloatResetValueFunctionName) {
        return;
      }
      if ((((param_1->InputParamLocations).ArrayNum != 2) || (param_1->NumOutputs != 1)) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("BindingInfo.GetNumInputs() == 2 && BindingInfo.GetNumOutputs() == 1",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceRasterizationGrid3D.cpp"
                             ,0x1ac,L""), bVar2)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pcVar5 = VMSetFloatResetValue;
    }
    TDelegateRegistration<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
    ::BindUObject<UNiagaraDataInterfaceRasterizationGrid3D>
              ((TDelegateRegistration<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                *)param_3,this,(pmf_98d89113)pcVar5);
  }
  return;
}

// HasPostSimulateTick @ 1491d1180

bool __thiscall
UNiagaraDataInterfaceRasterizationGrid3D::HasPostSimulateTick
          (UNiagaraDataInterfaceRasterizationGrid3D *this)

{
  return true;
}

// HasPreSimulateTick @ 1491d1210

bool __thiscall
UNiagaraDataInterfaceRasterizationGrid3D::HasPreSimulateTick
          (UNiagaraDataInterfaceRasterizationGrid3D *this)

{
  return true;
}

// InitPerInstanceData @ 1491d2de0

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
UNiagaraDataInterfaceRasterizationGrid3D::InitPerInstanceData
          (UNiagaraDataInterfaceRasterizationGrid3D *this,void *param_1,
          FNiagaraSystemInstance *param_2)

{
  float fVar1;
  undefined8 uVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  bool bVar8;
  undefined1 uVar9;
  int iVar10;
  int iVar11;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar12;
  FName *this_02;
  code **ppcVar13;
  int iVar14;
  ulonglong uVar15;
  int iVar16;
  int iVar17;
  float fVar18;
  undefined1 auStack_1e8 [32];
  int local_1c8;
  int local_1c0;
  FScriptContainerElement *local_1b8;
  int local_1a8;
  FString local_1a0;
  code *local_190;
  FNiagaraSystemInstance *local_188;
  undefined8 local_180;
  code *local_170;
  int local_168;
  int local_164;
  int iStack_160;
  int local_15c;
  float local_158;
  int local_154;
  code *local_150;
  RasterizationGrid3DRWInstanceData local_148;
  FString local_d8;
  code *local_c8 [2];
  code *local_b8 [3];
  code **local_a0;
  undefined1 local_98 [40];
  code **local_70;
  byte local_68;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_1e8;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined1 *)param_1 = 1;
  *(undefined8 *)((longlong)param_1 + 8) = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_;
  *(int *)((longlong)param_1 + 0x10) = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
  *(undefined8 *)((longlong)param_1 + 0x14) = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_
  ;
  *(int *)((longlong)param_1 + 0x1c) = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0;
  local_190 = (code *)this->_padding_;
  local_188 = param_2;
  if ((local_190 == (code *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypedProxy != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterface.h"
                         ,0x3a0,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    uVar9 = (*pcVar4)();
    return (bool)uVar9;
  }
  uVar2 = *(undefined8 *)((longlong)&this->_padding_ + 4);
  local_1a8 = this->ResetValue;
  iVar3 = this->NumAttributes;
  fVar1 = this->Precision;
  local_180._0_4_ = (int)uVar2;
  iVar5 = 1;
  if (1 < (int)local_180) {
    iVar5 = (int)local_180;
  }
  local_180._4_4_ = (int)((ulonglong)uVar2 >> 0x20);
  iVar6 = 1;
  if (1 < local_180._4_4_) {
    iVar6 = local_180._4_4_;
  }
  iVar17 = 1;
  if (1 < *(int *)((longlong)&this->_padding_ + 4)) {
    iVar17 = *(int *)((longlong)&this->_padding_ + 4);
  }
  *(int *)((longlong)param_1 + 4) = iVar3;
  *(int *)((longlong)param_1 + 8) = iVar5;
  *(int *)((longlong)param_1 + 0xc) = iVar6;
  *(int *)((longlong)param_1 + 0x10) = iVar17;
  *(float *)((longlong)param_1 + 0x20) = fVar1;
  *(int *)((longlong)param_1 + 0x24) = local_1a8;
  fVar7 = __real_bf000000;
  local_180 = uVar2;
  if (NDIRasterizationGrid3DLocal::GMaxNiagaraRasterizationGridCells < iVar17 * iVar6 * iVar5) {
    if (2 < (byte)LogNiagara._0_1_) {
      if (this->_padding_ == 0) {
        ::FString::FString(&local_1a0,L"None");
      }
      else {
        UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this,&local_1a0,(UObject *)0x0,None);
      }
      local_1b8 = (FScriptContainerElement *)L"";
      if (local_1a0.Data.ArrayNum != 0) {
        local_1b8 = local_1a0.Data.AllocatorInstance.Data;
      }
      local_1c0 = NDIRasterizationGrid3DLocal::GMaxNiagaraRasterizationGridCells;
      local_1c8 = iVar17;
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
      if (local_1a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1a0.Data.AllocatorInstance.Data);
      }
    }
    bVar8 = false;
  }
  else {
    iVar10 = (int)ROUND(__real_45800000 / (float)*(int *)((longlong)param_1 + 8) - __real_3f000000)
             >> 1;
    fVar18 = (float)iVar3;
    iVar14 = (int)ROUND(__real_45800000 / (float)*(int *)((longlong)param_1 + 0xc) - __real_3f000000
                       ) >> 1;
    iVar16 = (int)ROUND(__real_45800000 / (float)*(int *)((longlong)param_1 + 0x10) -
                        __real_3f000000) >> 1;
    iVar11 = iVar3;
    if (iVar10 < iVar3) {
      iVar11 = iVar10;
    }
    *(int *)((longlong)param_1 + 0x14) = iVar11;
    iVar10 = -((int)ROUND(fVar7 - (fVar18 + fVar18) / (float)iVar11) >> 1);
    if (iVar14 < iVar10) {
      iVar10 = iVar14;
    }
    *(int *)((longlong)param_1 + 0x18) = iVar10;
    iVar11 = -((int)ROUND(fVar7 - (fVar18 + fVar18) / (float)(iVar10 * iVar11)) >> 1);
    if (iVar16 < iVar11) {
      iVar11 = iVar16;
    }
    *(int *)((longlong)param_1 + 0x1c) = iVar11;
    if (((iVar3 == 0) && (this_02 = (FName *)(this->_padding_ + 8), *this_02 != (FName)0x0)) &&
       (4 < (byte)LogNiagara._0_1_)) {
      ::FName::ToString(this_02,&local_d8);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
      if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d8.Data.AllocatorInstance.Data);
      }
    }
    local_148.ClearBeforeNonIterationStage = SUB81(this->_padding_,0);
    local_148.NumCells.field0_0x0._0_8_ = *(undefined8 *)((longlong)param_1 + 8);
    local_170 = local_190;
    local_154 = local_1a8;
    *(bool *)param_1 = local_148.ClearBeforeNonIterationStage;
    local_148.NumTiles.field0_0x0._0_8_ = *(undefined8 *)((longlong)param_1 + 0x14);
    local_150 = (code *)local_188->ID;
    local_148.TotalNumAttributes = *(int *)((longlong)param_1 + 4);
    local_148.NumCells.field0_0x0._s_0.Z = *(int *)((longlong)param_1 + 0x10);
    local_148.NumTiles.field0_0x0._s_0.Z = *(int *)((longlong)param_1 + 0x1c);
    local_148.ResetValue = *(int *)((longlong)param_1 + 0x24);
    local_148.RasterizationTexture.Texture.Reference =
         *(IPooledRenderTarget **)((longlong)param_1 + 0x30);
    local_148.NeedsRealloc = *(bool *)((longlong)param_1 + 0x28);
    local_148.Precision = *(float *)((longlong)param_1 + 0x20);
    local_168 = iVar3;
    local_164 = iVar5;
    iStack_160 = iVar6;
    local_15c = iVar17;
    local_158 = fVar1;
    if (local_148.RasterizationTexture.Texture.Reference != (IPooledRenderTarget *)0x0) {
      (**(code **)((local_148.RasterizationTexture.Texture.Reference)->_padding_ + 0x30))();
    }
    local_148.RasterizationTexture.TransientRDGTexture = *(FRDGTexture **)((longlong)param_1 + 0x38)
    ;
    local_148.PerAttributeData.Buffer.Reference = *(FRHIBuffer **)((longlong)param_1 + 0x58);
    local_148.RasterizationTexture.TransientRDGSRV = *(FRDGTextureSRV **)((longlong)param_1 + 0x40);
    local_148.RasterizationTexture.TransientRDGUAV = *(FRDGTextureUAV **)((longlong)param_1 + 0x48);
    local_148.RasterizationTexture.NumBytes = *(ulong64 *)((longlong)param_1 + 0x50);
    if (local_148.PerAttributeData.Buffer.Reference != (FRHIBuffer *)0x0) {
      FRHIResource::AddRef((FRHIResource *)local_148.PerAttributeData.Buffer.Reference);
    }
    local_148.PerAttributeData.SRV.Reference =
         *(FRHIShaderResourceView **)((longlong)param_1 + 0x60);
    if (local_148.PerAttributeData.SRV.Reference != (FRHIShaderResourceView *)0x0) {
      FRHIResource::AddRef((FRHIResource *)local_148.PerAttributeData.SRV.Reference);
    }
    local_148.PerAttributeData.NumBytes = *(uint *)((longlong)param_1 + 0x68);
    local_c8[0] = (code *)0x0;
    local_a0 = FMemory::Malloc(0xa0,8);
    *local_a0 = (code *)&UE::Core::Private::Function::
                         TFunction_OwnedObject<`UNiagaraDataInterfaceRasterizationGrid3D::InitPerInstanceData'::`2'::<lambda_1>,1,1>
                         ::_vftable_;
    ppcVar13 = local_a0 + 1;
    *ppcVar13 = local_170;
    *(int *)(local_a0 + 2) = local_168;
    *(ulonglong *)((longlong)local_a0 + 0x14) = CONCAT44(iStack_160,local_164);
    *(int *)((longlong)local_a0 + 0x1c) = local_15c;
    *(float *)(local_a0 + 4) = local_158;
    *(int *)((longlong)local_a0 + 0x24) = local_154;
    local_a0[5] = local_150;
    RasterizationGrid3DRWInstanceData::RasterizationGrid3DRWInstanceData
              ((RasterizationGrid3DRWInstanceData *)(local_a0 + 6),&local_148);
    if (ppcVar13 != (code **)0x0) {
      local_c8[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`UNiagaraDataInterfaceRasterizationGrid3D::InitPerInstanceData'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                    ::Call;
    }
    this_00 = FRenderCommandList::GetInstanceTLS();
    if (this_00 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_UNiagaraDataInterfaceRasterizationGrid3D::InitPerInstanceData_::__l2::TSTR_FUpdateData907>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_c8);
    }
    else {
      this_01 = FRenderCommandList::GetRenderThread(this_00);
      local_98._0_8_ = local_c8[0];
      local_70 = local_a0;
      local_a0 = (code **)0x0;
      local_98._16_8_ = local_b8[0];
      local_98._24_8_ = local_b8[1];
      local_98._32_8_ = local_b8[2];
      local_c8[0] = (code *)0x0;
      local_68 = 2;
      pFVar12 = (FRenderCommandTag *)
                TRenderCommandTag<`UNiagaraDataInterfaceRasterizationGrid3D::InitPerInstanceData'::__l2::TSTR_FUpdateData907>
                ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)local_98,pFVar12);
      uVar15 = (ulonglong)local_68;
      if ((2 < uVar15) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar8)) {
        pcVar4 = (code *)swi(3);
        uVar9 = (*pcVar4)();
        return (bool)uVar9;
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar15] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)local_98._0_8_ != (code *)0x0) {
          ppcVar13 = (code **)(local_98 + 0x10);
          if (local_70 != (code **)0x0) {
            ppcVar13 = local_70;
          }
          (**(code **)(*ppcVar13 + 0x10))();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar15])(local_98);
      }
    }
    if (local_c8[0] != (code *)0x0) {
      ppcVar13 = local_c8 + 2;
      if (local_a0 != (code **)0x0) {
        ppcVar13 = local_a0;
      }
      (**(code **)(*ppcVar13 + 0x10))();
    }
    if (local_148.PerAttributeData.SRV.Reference != (FRHIShaderResourceView *)0x0) {
      FRHIResource::Release((FRHIResource *)local_148.PerAttributeData.SRV.Reference);
    }
    if (local_148.PerAttributeData.Buffer.Reference != (FRHIBuffer *)0x0) {
      FRHIResource::Release((FRHIResource *)local_148.PerAttributeData.Buffer.Reference);
    }
    FNiagaraPooledRWTexture::Release(&local_148.RasterizationTexture);
    if (local_148.RasterizationTexture.Texture.Reference != (IPooledRenderTarget *)0x0) {
      (**(code **)((local_148.RasterizationTexture.Texture.Reference)->_padding_ + 0x38))();
    }
    bVar8 = true;
  }
  return bVar8;
}

// PerInstanceDataSize @ 1491d53c0

int __thiscall
UNiagaraDataInterfaceRasterizationGrid3D::PerInstanceDataSize
          (UNiagaraDataInterfaceRasterizationGrid3D *this)

{
  return 0x70;
}

// PerInstanceTick @ 1491d54b0

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
UNiagaraDataInterfaceRasterizationGrid3D::PerInstanceTick
          (UNiagaraDataInterfaceRasterizationGrid3D *this,void *param_1,
          FNiagaraSystemInstance *param_2,float param_3)

{
  return false;
}

// PerInstanceTickPostSimulate @ 1491d5ae0

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
UNiagaraDataInterfaceRasterizationGrid3D::PerInstanceTickPostSimulate
          (UNiagaraDataInterfaceRasterizationGrid3D *this,void *param_1,
          FNiagaraSystemInstance *param_2,float param_3)

{
  code *pcVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar8;
  code **ppcVar9;
  int iVar10;
  ulonglong uVar11;
  int iVar12;
  int iVar13;
  float fVar14;
  undefined1 auStack_158 [32];
  FNiagaraDataInterfaceProxyRasterizationGrid3D *local_138;
  code *local_130;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  code *local_118;
  RasterizationGrid3DRWInstanceData local_110;
  code *local_98 [2];
  code *local_88 [3];
  code **local_70;
  undefined1 local_68 [40];
  code **local_40;
  byte local_38;
  ulonglong local_28;
  
  fVar4 = __real_45800000;
  fVar3 = __real_3f000000;
  local_28 = __security_cookie.value ^ (ulonglong)auStack_158;
  if ((((*(char *)((longlong)param_1 + 0x28) != '\0') && (0 < *(int *)((longlong)param_1 + 8))) &&
      (0 < *(int *)((longlong)param_1 + 0xc))) &&
     ((0 < *(int *)((longlong)param_1 + 0x10) &&
      (iVar13 = *(int *)((longlong)param_1 + 4), 0 < iVar13)))) {
    *(undefined1 *)((longlong)param_1 + 0x28) = 0;
    fVar2 = __real_bf000000;
    iVar7 = (int)ROUND(fVar4 / (float)*(int *)((longlong)param_1 + 8) - fVar3) >> 1;
    fVar14 = (float)iVar13;
    iVar10 = (int)ROUND(fVar4 / (float)*(int *)((longlong)param_1 + 0xc) - fVar3) >> 1;
    iVar12 = (int)ROUND(fVar4 / (float)*(int *)((longlong)param_1 + 0x10) - fVar3) >> 1;
    if (iVar7 < iVar13) {
      iVar13 = iVar7;
    }
    *(int *)((longlong)param_1 + 0x14) = iVar13;
    iVar7 = -((int)ROUND(fVar2 - (fVar14 + fVar14) / (float)iVar13) >> 1);
    if (iVar10 < iVar7) {
      iVar7 = iVar10;
    }
    *(int *)((longlong)param_1 + 0x18) = iVar7;
    iVar7 = -((int)ROUND(fVar2 - (fVar14 + fVar14) / (float)(iVar7 * iVar13)) >> 1);
    if (iVar12 < iVar7) {
      iVar7 = iVar12;
    }
    *(int *)((longlong)param_1 + 0x1c) = iVar7;
    if (iVar13 < 1) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InstanceData->NumTiles.X > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceRasterizationGrid3D.cpp"
                         ,0x404,L"");
      if (bVar5) {
        pcVar1 = (code *)swi(3);
        uVar6 = (*pcVar1)();
        return (bool)uVar6;
      }
    }
    if (*(int *)((longlong)param_1 + 0x18) < 1) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InstanceData->NumTiles.Y > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceRasterizationGrid3D.cpp"
                         ,0x405,L"");
      if (bVar5) {
        pcVar1 = (code *)swi(3);
        uVar6 = (*pcVar1)();
        return (bool)uVar6;
      }
    }
    if (*(int *)((longlong)param_1 + 0x1c) < 1) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InstanceData->NumTiles.Z > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceRasterizationGrid3D.cpp"
                         ,0x406,L"");
      if (bVar5) {
        pcVar1 = (code *)swi(3);
        uVar6 = (*pcVar1)();
        return (bool)uVar6;
      }
    }
    local_138 = UNiagaraDataInterface::GetProxyAs<FNiagaraDataInterfaceProxyRasterizationGrid3D>
                          ((UNiagaraDataInterface *)this);
    local_130 = *(code **)((longlong)param_1 + 8);
    local_128 = *(undefined4 *)((longlong)param_1 + 0x10);
    local_120 = *(undefined4 *)((longlong)param_1 + 0x24);
    local_118 = (code *)param_2->ID;
    local_124 = *(undefined4 *)((longlong)param_1 + 0x20);
    RasterizationGrid3DRWInstanceData::RasterizationGrid3DRWInstanceData(&local_110,param_1);
    local_98[0] = (code *)0x0;
    local_70 = FMemory::Malloc(0xa0,8);
    *local_70 = (code *)&UE::Core::Private::Function::
                         TFunction_OwnedObject<`UNiagaraDataInterfaceRasterizationGrid3D::PerInstanceTickPostSimulate'::`5'::<lambda_1>,1,1>
                         ::_vftable_;
    ppcVar9 = local_70 + 1;
    *ppcVar9 = (code *)local_138;
    local_70[2] = local_130;
    *(undefined4 *)(local_70 + 3) = local_128;
    *(undefined4 *)((longlong)local_70 + 0x1c) = local_124;
    *(undefined4 *)(local_70 + 4) = local_120;
    local_70[5] = local_118;
    RasterizationGrid3DRWInstanceData::RasterizationGrid3DRWInstanceData
              ((RasterizationGrid3DRWInstanceData *)(local_70 + 6),&local_110);
    if (ppcVar9 != (code **)0x0) {
      local_98[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`UNiagaraDataInterfaceRasterizationGrid3D::PerInstanceTickPostSimulate'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
                    ::Call;
    }
    this_00 = FRenderCommandList::GetInstanceTLS();
    if (this_00 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_UNiagaraDataInterfaceRasterizationGrid3D::PerInstanceTickPostSimulate_::__l5::TSTR_FUpdateData1033>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_98);
    }
    else {
      this_01 = FRenderCommandList::GetRenderThread(this_00);
      local_68._0_8_ = local_98[0];
      local_40 = local_70;
      local_70 = (code **)0x0;
      local_68._16_8_ = local_88[0];
      local_68._24_8_ = local_88[1];
      local_68._32_8_ = local_88[2];
      local_98[0] = (code *)0x0;
      local_38 = 2;
      pFVar8 = (FRenderCommandTag *)
               TRenderCommandTag<`UNiagaraDataInterfaceRasterizationGrid3D::PerInstanceTickPostSimulate'::__l5::TSTR_FUpdateData1033>
               ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)local_68,pFVar8);
      uVar11 = (ulonglong)local_38;
      if (2 < uVar11) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L"");
        if (bVar5) {
          pcVar1 = (code *)swi(3);
          uVar6 = (*pcVar1)();
          return (bool)uVar6;
        }
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar11] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)local_68._0_8_ != (code *)0x0) {
          ppcVar9 = (code **)(local_68 + 0x10);
          if (local_40 != (code **)0x0) {
            ppcVar9 = local_40;
          }
          (**(code **)(*ppcVar9 + 0x10))();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar11])(local_68);
      }
    }
    if (local_98[0] != (code *)0x0) {
      ppcVar9 = local_98 + 2;
      if (local_70 != (code **)0x0) {
        ppcVar9 = local_70;
      }
      (**(code **)(*ppcVar9 + 0x10))();
    }
    if (local_110.PerAttributeData.SRV.Reference != (FRHIShaderResourceView *)0x0) {
      FRHIResource::Release((FRHIResource *)local_110.PerAttributeData.SRV.Reference);
    }
    if (local_110.PerAttributeData.Buffer.Reference != (FRHIBuffer *)0x0) {
      FRHIResource::Release((FRHIResource *)local_110.PerAttributeData.Buffer.Reference);
    }
    FNiagaraPooledRWTexture::Release(&local_110.RasterizationTexture);
    if (local_110.RasterizationTexture.Texture.Reference != (IPooledRenderTarget *)0x0) {
      (**(code **)((local_110.RasterizationTexture.Texture.Reference)->_padding_ + 0x38))();
    }
  }
  return false;
}

// PostInitProperties @ 1491d7930

void __thiscall
UNiagaraDataInterfaceRasterizationGrid3D::PostInitProperties
          (UNiagaraDataInterfaceRasterizationGrid3D *this)

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

// ProvidePerInstanceDataForRenderThread @ 1491d9300

void __thiscall
UNiagaraDataInterfaceRasterizationGrid3D::ProvidePerInstanceDataForRenderThread
          (UNiagaraDataInterfaceRasterizationGrid3D *this,void *param_1,void *param_2,
          ulong64 *param_3)

{
  return;
}

// SetShaderParameters @ 1491e08d0

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
UNiagaraDataInterfaceRasterizationGrid3D::SetShaderParameters
          (UNiagaraDataInterfaceRasterizationGrid3D *this,
          FNiagaraDataInterfaceSetShaderParametersContext *param_1)

{
  uchar *puVar1;
  undefined8 uVar2;
  int iVar3;
  FNiagaraDataInterfaceProxy *pFVar4;
  uchar *puVar5;
  FRDGBuilder *pFVar6;
  code *pcVar7;
  bool bVar8;
  float fVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  ulong64 uVar14;
  RasterizationGrid3DRWInstanceData *pRVar15;
  FShaderParametersMetadata *pFVar16;
  uchar *puVar17;
  uchar *puVar18;
  FRDGTextureUAV *pFVar19;
  FRHIShaderResourceView *pFVar20;
  FRDGTextureSRV *pFVar21;
  uint uVar22;
  int local_48;
  
  if ((param_1->DataInterfaceProxy == (FNiagaraDataInterfaceProxy *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("DataInterfaceProxy",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterface.h"
                          ,0x1c1,L""), bVar10)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pFVar4 = param_1->DataInterfaceProxy;
  uVar14 = FNiagaraDataInterfaceSetShaderParametersContext::GetSystemInstanceID(param_1);
  pRVar15 = TMapBase<unsigned___int64,RasterizationGrid3DRWInstanceData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,RasterizationGrid3DRWInstanceData,0>_>
            ::Find((TMapBase<unsigned___int64,RasterizationGrid3DRWInstanceData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,RasterizationGrid3DRWInstanceData,0>_>
                    *)(pFVar4 + 1),uVar14);
  uVar22 = param_1->ParametersOffset + 0xf & 0xfffffff0;
  pFVar16 = TShaderParameterStructTypeInfo<NDIRasterizationGrid3DLocal::FShaderParameters>::
            GetStructMetadata();
  puVar5 = param_1->BaseParameters;
  pFVar6 = param_1->GraphBuilder;
  puVar17 = puVar5 + (ulonglong)uVar22 + 0x28;
  param_1->ParametersOffset = pFVar16->Size + uVar22;
  bVar11 = FNiagaraDataInterfaceSetShaderParametersContext::IsResourceBound(param_1,puVar17);
  puVar18 = puVar5 + (ulonglong)uVar22 + 0x30;
  bVar12 = FNiagaraDataInterfaceSetShaderParametersContext::IsResourceBound(param_1,puVar18);
  fVar9 = __real_3f800000;
  bVar10 = false;
  bVar8 = false;
  if ((pRVar15 == (RasterizationGrid3DRWInstanceData *)0x0) ||
     ((pRVar15->RasterizationTexture).Texture.Reference == (IPooledRenderTarget *)0x0)) {
    *(undefined8 *)(puVar5 + uVar22) = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_;
    *(int *)(puVar5 + (ulonglong)uVar22 + 8) =
         UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
    *(undefined8 *)(puVar5 + (ulonglong)uVar22 + 0x10) =
         UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
    *(float *)(puVar5 + (ulonglong)uVar22 + 0x18) =
         UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
    puVar1 = puVar5 + (ulonglong)uVar22 + 0x1c;
    puVar1[0] = '\0';
    puVar1[1] = '\0';
    puVar1[2] = '\0';
    puVar1[3] = '\0';
    puVar1[4] = '\0';
    puVar1[5] = '\0';
    puVar1[6] = '\0';
    puVar1[7] = '\0';
    pFVar20 = FNiagaraRenderer::GetDummyFloat4Buffer();
    *(FRHIShaderResourceView **)(puVar5 + (ulonglong)uVar22 + 0x38) = pFVar20;
LAB_1491e0ae9:
    if (!bVar11) goto LAB_1491e0b19;
  }
  else {
    *(undefined8 *)(puVar5 + uVar22) = *(undefined8 *)&(pRVar15->NumCells).field0_0x0;
    *(int *)(puVar5 + (ulonglong)uVar22 + 8) = (pRVar15->NumCells).field0_0x0._s_0.Z;
    uVar2 = *(undefined8 *)&(pRVar15->NumCells).field0_0x0;
    iVar3 = (pRVar15->NumCells).field0_0x0._s_0.Z;
    local_48 = (int)uVar2;
    *(float *)(puVar5 + (ulonglong)uVar22 + 0x10) = fVar9 / (float)local_48;
    *(float *)(puVar5 + (ulonglong)uVar22 + 0x14) = fVar9 / (float)(int)((ulonglong)uVar2 >> 0x20);
    *(float *)(puVar5 + (ulonglong)uVar22 + 0x18) = fVar9 / (float)iVar3;
    *(float *)(puVar5 + (ulonglong)uVar22 + 0x1c) = pRVar15->Precision;
    *(int *)(puVar5 + (ulonglong)uVar22 + 0x20) = pRVar15->TotalNumAttributes;
    *(FRHIShaderResourceView **)(puVar5 + (ulonglong)uVar22 + 0x38) =
         (pRVar15->PerAttributeData).SRV.Reference;
    bVar13 = FNiagaraDataInterfaceSetShaderParametersContext::IsOutputStage(param_1);
    if (bVar13) {
      if (bVar12) {
        bVar8 = true;
        pFVar19 = FNiagaraPooledRWTexture::GetOrCreateUAV(&pRVar15->RasterizationTexture,pFVar6);
        *(FRDGTextureUAV **)puVar18 = pFVar19;
      }
      goto LAB_1491e0ae9;
    }
    if (!bVar11) goto LAB_1491e0b19;
    bVar10 = true;
    pFVar21 = FNiagaraPooledRWTexture::GetOrCreateSRV(&pRVar15->RasterizationTexture,pFVar6);
    *(FRDGTextureSRV **)puVar17 = pFVar21;
  }
  if (!bVar10) {
    pFVar21 = FNiagaraGpuComputeDispatchInterface::GetBlackTextureSRV
                        (param_1->ComputeDispatchInterface,pFVar6,Texture3D);
    *(FRDGTextureSRV **)puVar17 = pFVar21;
  }
LAB_1491e0b19:
  if ((bVar12) && (!bVar8)) {
    pFVar19 = FNiagaraGpuComputeDispatchInterface::GetEmptyTextureUAV
                        (param_1->ComputeDispatchInterface,pFVar6,PF_A32B32G32R32F,Texture3D);
    *(FRDGTextureUAV **)puVar18 = pFVar19;
  }
  return;
}

// StaticRegisterNativesUNiagaraDataInterfaceRasterizationGrid3D @ 1491e35f0

void __cdecl
UNiagaraDataInterfaceRasterizationGrid3D::
StaticRegisterNativesUNiagaraDataInterfaceRasterizationGrid3D(void)

{
  return;
}

// VMGetNumCells @ 1491e5ef0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
UNiagaraDataInterfaceRasterizationGrid3D::VMGetNumCells
          (UNiagaraDataInterfaceRasterizationGrid3D *this,FVectorVMExternalFunctionContext *param_1)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_40 [4];
  int local_30 [4];
  int local_20 [2];
  FUserPtrHandler<RasterizationGrid3DRWInstanceData> local_18;
  
  VectorVM::FUserPtrHandler<RasterizationGrid3DRWInstanceData>::
  FUserPtrHandler<RasterizationGrid3DRWInstanceData>(&local_18,param_1);
  iVar6 = 0;
  local_40[0] = 0;
  pfVar1 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_40);
  iVar4 = local_40[0] * param_1->PerInstanceFnInstanceIdx;
  local_30[0] = 0;
  pfVar2 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_30);
  iVar5 = local_30[0] * param_1->PerInstanceFnInstanceIdx;
  local_20[0] = 0;
  pfVar3 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_20);
  if (0 < param_1->NumInstances) {
    pfVar2 = pfVar2 + iVar5;
    pfVar1 = pfVar1 + iVar4;
    pfVar3 = pfVar3 + local_20[0] * param_1->PerInstanceFnInstanceIdx;
    do {
      iVar6 = iVar6 + 1;
      *pfVar1 = (float)((local_18.Ptr)->NumCells).field0_0x0._s_0.X;
      *pfVar2 = (float)((local_18.Ptr)->NumCells).field0_0x0._s_0.Y;
      *pfVar3 = (float)((local_18.Ptr)->NumCells).field0_0x0._s_0.Z;
      pfVar2 = pfVar2 + local_30[0];
      pfVar1 = pfVar1 + local_40[0];
      pfVar3 = pfVar3 + local_20[0];
    } while (iVar6 < param_1->NumInstances);
  }
  return;
}

// VMSetFloatResetValue @ 1491e67e0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
UNiagaraDataInterfaceRasterizationGrid3D::VMSetFloatResetValue
          (UNiagaraDataInterfaceRasterizationGrid3D *this,FVectorVMExternalFunctionContext *param_1)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  float *pfVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  int local_30 [2];
  int local_28 [2];
  FUserPtrHandler<RasterizationGrid3DRWInstanceData> local_20;
  
  VectorVM::FUserPtrHandler<RasterizationGrid3DRWInstanceData>::
  FUserPtrHandler<RasterizationGrid3DRWInstanceData>(&local_20,param_1);
  local_28[0] = 0;
  pfVar3 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_28);
  lVar6 = (longlong)local_28[0];
  local_30[0] = 0;
  pfVar3 = pfVar3 + local_28[0] * param_1->PerInstanceFnInstanceIdx;
  pfVar4 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_30);
  fVar2 = __real_3f000000;
  iVar7 = 0;
  iVar5 = param_1->NumInstances;
  pfVar4 = pfVar4 + local_30[0] * param_1->PerInstanceFnInstanceIdx;
  if (0 < iVar5) {
    do {
      fVar1 = *pfVar3;
      if ((local_20.Ptr == (RasterizationGrid3DRWInstanceData *)0x0) || (iVar5 != 1)) {
        *pfVar4 = 0.0;
      }
      else {
        *pfVar4 = -NAN;
        (local_20.Ptr)->ResetValue =
             (int)ROUND((fVar1 + fVar1) * (local_20.Ptr)->Precision - fVar2) >> 1;
      }
      iVar5 = param_1->NumInstances;
      pfVar4 = pfVar4 + local_30[0];
      iVar7 = iVar7 + 1;
      pfVar3 = pfVar3 + lVar6;
    } while (iVar7 < iVar5);
  }
  return;
}

// VMSetNumAttributes @ 1491e7080

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
UNiagaraDataInterfaceRasterizationGrid3D::VMSetNumAttributes
          (UNiagaraDataInterfaceRasterizationGrid3D *this,FVectorVMExternalFunctionContext *param_1)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  float *pfVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  int local_40 [2];
  int local_38 [2];
  FUserPtrHandler<RasterizationGrid3DRWInstanceData> local_30;
  
  VectorVM::FUserPtrHandler<RasterizationGrid3DRWInstanceData>::
  FUserPtrHandler<RasterizationGrid3DRWInstanceData>(&local_30,param_1);
  local_38[0] = 0;
  pfVar3 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_38);
  lVar5 = (longlong)local_38[0];
  local_40[0] = 0;
  pfVar3 = pfVar3 + local_38[0] * param_1->PerInstanceFnInstanceIdx;
  pfVar4 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_40);
  iVar7 = 0;
  iVar6 = param_1->NumInstances;
  pfVar4 = pfVar4 + local_40[0] * param_1->PerInstanceFnInstanceIdx;
  if (0 < iVar6) {
    do {
      fVar1 = *pfVar3;
      pfVar3 = pfVar3 + lVar5;
      if ((((local_30.Ptr == (RasterizationGrid3DRWInstanceData *)0x0) || (iVar6 != 1)) ||
          (*(int *)((longlong)&this->_padding_ + 4) < 0)) ||
         (((int)this->_padding_ < 0 || (*(int *)((longlong)&this->_padding_ + 4) < 0)))) {
        *pfVar4 = 0.0;
      }
      else {
        *pfVar4 = -NAN;
        fVar2 = (float)(local_30.Ptr)->TotalNumAttributes;
        (local_30.Ptr)->TotalNumAttributes = (int)fVar1;
        (local_30.Ptr)->NeedsRealloc = fVar2 != fVar1;
      }
      iVar6 = param_1->NumInstances;
      pfVar4 = pfVar4 + local_40[0];
      iVar7 = iVar7 + 1;
    } while (iVar7 < iVar6);
  }
  return;
}

// VMSetNumCells @ 1491e7190

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
UNiagaraDataInterfaceRasterizationGrid3D::VMSetNumCells
          (UNiagaraDataInterfaceRasterizationGrid3D *this,FVectorVMExternalFunctionContext *param_1)

{
  undefined8 uVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  int iVar15;
  int iVar16;
  int local_78;
  int local_70 [2];
  FUserPtrHandler<RasterizationGrid3DRWInstanceData> local_68 [2];
  int local_48 [4];
  
  VectorVM::FUserPtrHandler<RasterizationGrid3DRWInstanceData>::
  FUserPtrHandler<RasterizationGrid3DRWInstanceData>(local_68,param_1);
  local_48[0] = 0;
  pfVar8 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_48);
  iVar2 = local_48[0];
  lVar14 = (longlong)local_48[0];
  local_48[0] = 0;
  pfVar8 = pfVar8 + iVar2 * param_1->PerInstanceFnInstanceIdx;
  pfVar9 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_48);
  iVar7 = local_48[0];
  lVar13 = (longlong)local_48[0];
  local_48[0] = 0;
  iVar2 = param_1->PerInstanceFnInstanceIdx;
  pfVar10 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_48);
  iVar12 = local_48[0] * param_1->PerInstanceFnInstanceIdx;
  local_70[0] = 0;
  pfVar11 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_70);
  iVar16 = 0;
  iVar15 = param_1->NumInstances;
  pfVar11 = pfVar11 + local_70[0] * param_1->PerInstanceFnInstanceIdx;
  if (0 < iVar15) {
    pfVar10 = pfVar10 + iVar12;
    pfVar9 = pfVar9 + iVar7 * iVar2;
    do {
      fVar3 = *pfVar8;
      pfVar8 = pfVar8 + lVar14;
      fVar4 = *pfVar9;
      fVar5 = *pfVar10;
      if ((((local_68[0].Ptr == (RasterizationGrid3DRWInstanceData *)0x0) || (iVar15 != 1)) ||
          (*(int *)((longlong)&this->_padding_ + 4) < 0)) ||
         (((int)this->_padding_ < 0 || (*(int *)((longlong)&this->_padding_ + 4) < 0)))) {
        *pfVar11 = 0.0;
      }
      else {
        *pfVar11 = -NAN;
        uVar1 = *(undefined8 *)&((local_68[0].Ptr)->NumCells).field0_0x0;
        fVar6 = (float)((local_68[0].Ptr)->NumCells).field0_0x0._s_0.Z;
        ((local_68[0].Ptr)->NumCells).field0_0x0._s_0.X = (int)fVar3;
        ((local_68[0].Ptr)->NumCells).field0_0x0._s_0.Y = (int)fVar4;
        ((local_68[0].Ptr)->NumCells).field0_0x0._s_0.Z = (int)fVar5;
        local_78 = (int)uVar1;
        if (((local_78 == ((local_68[0].Ptr)->NumCells).field0_0x0._s_0.X) &&
            ((float)((ulonglong)uVar1 >> 0x20) == fVar4)) && (fVar6 == fVar5)) {
          (local_68[0].Ptr)->NeedsRealloc = false;
        }
        else {
          (local_68[0].Ptr)->NeedsRealloc = true;
        }
      }
      pfVar11 = pfVar11 + local_70[0];
      iVar15 = param_1->NumInstances;
      iVar16 = iVar16 + 1;
      pfVar10 = pfVar10 + local_48[0];
      pfVar9 = pfVar9 + lVar13;
    } while (iVar16 < iVar15);
  }
  return;
}

