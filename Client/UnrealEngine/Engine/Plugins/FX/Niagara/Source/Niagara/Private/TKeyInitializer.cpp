// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 47

// operator<unsigned___int64,FNiagaraDataInterfaceProxy_DataChannelRead::FInstanceData>_TTuple<unsigned___int64,FNiagaraDataInterfaceProxy_DataChannelRead::FInstanceData> @ 148e43d00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TTuple<unsigned___int64,FNiagaraDataInterfaceProxy_DataChannelRead::FInstanceData> * __thiscall
TKeyInitializer<unsigned___int64_const_&>::
operator<unsigned___int64,FNiagaraDataInterfaceProxy_DataChannelRead::FInstanceData>_TTuple<unsigned___int64,FNiagaraDataInterfaceProxy_DataChannelRead::FInstanceData>
          (TKeyInitializer<unsigned___int64_const_&> *this,
          TTuple<unsigned___int64,FNiagaraDataInterfaceProxy_DataChannelRead::FInstanceData>
          *__return_storage_ptr__)

{
  code *pcVar1;
  int iVar2;
  TRefCountPtr<FNiagaraDataBuffer> TVar3;
  bool bVar4;
  TTuple<unsigned___int64,FNiagaraDataInterfaceProxy_DataChannelRead::FInstanceData> *pTVar5;
  undefined1 auStackY_118 [32];
  undefined1 local_e8 [80];
  undefined1 local_98 [32];
  void *local_78;
  undefined4 local_70;
  uint local_6c;
  undefined4 local_68;
  undefined4 local_64;
  void *local_58;
  undefined4 local_50;
  ForAnyElementType local_48;
  undefined8 local_40;
  uint local_30;
  TRefCountPtr<FNiagaraDataBuffer> local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_118;
  memset(local_e8,0,200);
  local_e8[0x48] = false;
  local_98._0_8_ = (FScriptContainerElement *)0x0;
  local_e8._48_8_ = &___7__TResourceArray_I_0A___6B_;
  local_98._8_8_ = 0;
  local_78 = (void *)0x0;
  local_70 = 0;
  local_6c = 0x80;
  local_68 = 0xffffffff;
  local_64 = 0;
  local_58 = (void *)0x0;
  local_50 = 0;
  local_48.Data = (FScriptContainerElement *)0x0;
  local_40._0_4_ = 0;
  local_40._4_4_ = 0;
  local_30 = 0xffffffff;
  local_28.Reference = (FNiagaraDataBuffer *)0x0;
  *(ulong64 *)__return_storage_ptr__ = *this->Key;
  FNiagaraDataInterfaceProxy_DataChannelRead::FInstanceData::FInstanceData
            ((FInstanceData *)&__return_storage_ptr__->field_0x8,(FInstanceData *)local_e8);
  TVar3.Reference = local_28.Reference;
  if (local_28.Reference != (FNiagaraDataBuffer *)0x0) {
    if ((int)(local_28.Reference)->_padding_ < 1) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsBeingRead()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                         ,0x2c,L"");
      if (bVar4) {
        pcVar1 = (code *)swi(3);
        pTVar5 = (TTuple<unsigned___int64,FNiagaraDataInterfaceProxy_DataChannelRead::FInstanceData>
                  *)(*pcVar1)();
        return pTVar5;
      }
    }
    LOCK();
    *(int *)&(TVar3.Reference)->_padding_ = (int)(TVar3.Reference)->_padding_ + -1;
    UNLOCK();
  }
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data);
  }
  local_50 = 0;
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  TSparseArray<TSparseSetElement<TTuple<FNiagaraCompileHash,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FNiagaraCompileHash,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_98,0,local_98._8_4_);
  iVar2 = SUB84(local_98._8_8_,4);
  local_98._8_8_ = local_98._8_8_ & 0xffffffff00000000;
  if (iVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)local_98,0,(int *)(local_98 + 0xc));
  }
  local_68 = 0xffffffff;
  local_64 = 0;
  local_70 = 0;
  if (0x80 < local_6c) {
    local_6c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10),0);
  }
  if (local_78 != (void *)0x0) {
    FMemory::Free(local_78);
  }
  if ((FScriptContainerElement *)local_98._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_98._0_8_);
  }
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)(local_e8 + 0x38));
  local_e8._48_8_ = &___7FResourceArrayUploadInterface__6B_;
  if ((FRHIShaderResourceView *)local_e8._32_8_ != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)local_e8._32_8_);
  }
  if ((FRHIBuffer *)local_e8._24_8_ != (FRHIBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)local_e8._24_8_);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_e8._8_8_);
  return __return_storage_ptr__;
}

// operator<unsigned___int64,FNiagaraDataInterfaceProxy_DataChannelWrite::FInstanceData>_TTuple<unsigned___int64,FNiagaraDataInterfaceProxy_DataChannelWrite::FInstanceData> @ 148e43ef0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TTuple<unsigned___int64,FNiagaraDataInterfaceProxy_DataChannelWrite::FInstanceData> * __thiscall
TKeyInitializer<unsigned___int64_const_&>::
operator<unsigned___int64,FNiagaraDataInterfaceProxy_DataChannelWrite::FInstanceData>_TTuple<unsigned___int64,FNiagaraDataInterfaceProxy_DataChannelWrite::FInstanceData>
          (TKeyInitializer<unsigned___int64_const_&> *this,
          TTuple<unsigned___int64,FNiagaraDataInterfaceProxy_DataChannelWrite::FInstanceData>
          *__return_storage_ptr__)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  TRefCountPtr<FNiagaraDataBuffer> TVar4;
  bool bVar5;
  TTuple<unsigned___int64,FNiagaraDataInterfaceProxy_DataChannelWrite::FInstanceData> *pTVar6;
  undefined1 auStackY_118 [32];
  undefined1 local_e8 [72];
  undefined1 local_a0 [32];
  void *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  void *local_60;
  undefined4 local_58;
  TRefCountPtr<FNiagaraDataBuffer> local_50;
  TRefCountPtr<FNiagaraDataBuffer> local_48;
  undefined2 local_40;
  bool local_3e;
  int local_3c;
  bool local_2c;
  ForAnyElementType local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_118;
  memset(local_e8,0,0xd0);
  local_e8._40_8_ = &___7__TResourceArray_I_0A___6B_;
  local_e8[0x40] = false;
  local_a0._0_8_ = (FScriptContainerElement *)0x0;
  local_a0._8_8_ = 0;
  local_80 = (void *)0x0;
  local_78 = ___xmm_00000000ffffffff0000008000000000;
  uStack_70 = _UNK_150631d98;
  local_60 = (void *)0x0;
  local_58 = 0;
  local_50.Reference = (FNiagaraDataBuffer *)0x0;
  local_48.Reference = (FNiagaraDataBuffer *)0x0;
  local_40._0_1_ = false;
  local_40._1_1_ = false;
  local_3e = false;
  local_3c = 0;
  local_2c = false;
  local_28.Data = (FScriptContainerElement *)0x0;
  local_20._0_4_ = 0;
  local_20._4_4_ = 0;
  *(ulong64 *)__return_storage_ptr__ = *this->Key;
  FNiagaraDataInterfaceProxy_DataChannelWrite::FInstanceData::FInstanceData
            ((FInstanceData *)&__return_storage_ptr__->field_0x8,(FInstanceData *)local_e8);
  DestructItems<TRefCountPtr<FNiagaraDataBuffer>,int>
            ((TRefCountPtr<FNiagaraDataBuffer> *)local_28.Data,(int)local_20);
  if (local_28.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data);
  }
  TVar4.Reference = local_48.Reference;
  if (local_48.Reference != (FNiagaraDataBuffer *)0x0) {
    if ((int)(local_48.Reference)->_padding_ < 1) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsBeingRead()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                         ,0x2c,L"");
      if (bVar5) {
        pcVar1 = (code *)swi(3);
        pTVar6 = (TTuple<unsigned___int64,FNiagaraDataInterfaceProxy_DataChannelWrite::FInstanceData>
                  *)(*pcVar1)();
        return pTVar6;
      }
    }
    LOCK();
    *(int *)&(TVar4.Reference)->_padding_ = (int)(TVar4.Reference)->_padding_ + -1;
    UNLOCK();
  }
  TVar4.Reference = local_50.Reference;
  if (local_50.Reference != (FNiagaraDataBuffer *)0x0) {
    if ((int)(local_50.Reference)->_padding_ < 1) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsBeingRead()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                         ,0x2c,L"");
      if (bVar5) {
        pcVar1 = (code *)swi(3);
        pTVar6 = (TTuple<unsigned___int64,FNiagaraDataInterfaceProxy_DataChannelWrite::FInstanceData>
                  *)(*pcVar1)();
        return pTVar6;
      }
    }
    LOCK();
    *(int *)&(TVar4.Reference)->_padding_ = (int)(TVar4.Reference)->_padding_ + -1;
    UNLOCK();
  }
  local_58 = 0;
  if (local_60 != (void *)0x0) {
    FMemory::Free(local_60);
  }
  TSparseArray<TSparseSetElement<TTuple<FNiagaraCompileHash,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FNiagaraCompileHash,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_a0,0,local_a0._8_4_);
  iVar2 = SUB84(local_a0._8_8_,4);
  local_a0._8_8_ = local_a0._8_8_ & 0xffffffff00000000;
  if (iVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)local_a0,0,(int *)(local_a0 + 0xc));
  }
  uVar3 = local_78._4_4_;
  uStack_70 = 0xffffffff;
  local_78 = (ulonglong)local_78._4_4_ << 0x20;
  if (0x80 < uVar3) {
    local_78 = 0x8000000000;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_a0 + 0x10),0);
  }
  if (local_80 != (void *)0x0) {
    FMemory::Free(local_80);
  }
  if ((FScriptContainerElement *)local_a0._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_a0._0_8_);
  }
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)(local_e8 + 0x30));
  local_e8._40_8_ = &___7FResourceArrayUploadInterface__6B_;
  if ((FRHIShaderResourceView *)local_e8._24_8_ != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)local_e8._24_8_);
  }
  if ((FRHIBuffer *)local_e8._16_8_ != (FRHIBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)local_e8._16_8_);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_e8._8_8_);
  return __return_storage_ptr__;
}

// operator<unsigned___int64,NDIActorComponentLocal::FInstanceData_RenderThread>_TTuple<unsigned___int64,NDIActorComponentLocal::FInstanceData_RenderThread> @ 148e44130

TTuple<unsigned___int64,NDIActorComponentLocal::FInstanceData_RenderThread> * __thiscall
TKeyInitializer<unsigned___int64_const_&>::
operator<unsigned___int64,NDIActorComponentLocal::FInstanceData_RenderThread>_TTuple<unsigned___int64,NDIActorComponentLocal::FInstanceData_RenderThread>
          (TKeyInitializer<unsigned___int64_const_&> *this,
          TTuple<unsigned___int64,NDIActorComponentLocal::FInstanceData_RenderThread>
          *__return_storage_ptr__)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  double dVar4;
  __m128d _Var5;
  __m128d _Var6;
  __m128d _Var7;
  __m128d _Var8;
  __m128d _Var9;
  __m128d _Var10;
  __m128d _Var11;
  
  _Var9.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  _Var8.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  _Var7.m128d_f64 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  _Var6.m128d_f64 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  _Var5.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  _Var11.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  uVar3 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  uVar2 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y;
  uVar1 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
  *(ulong64 *)__return_storage_ptr__ = *this->Key;
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x18 = 0;
  _Var10 = UE::Math::TTransform<double>::Identity.Rotation.XY;
  UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0] = _Var11.m128d_f64[0];
  UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1] = _Var11.m128d_f64[1];
  dVar4 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1];
  *(double *)&__return_storage_ptr__->field_0x20 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0];
  UE::Math::TTransform<double>::Identity.Rotation.XY = _Var10;
  _Var11 = UE::Math::TTransform<double>::Identity.Rotation.ZW;
  *(double *)&__return_storage_ptr__->field_0x28 = dVar4;
  UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0] = _Var5.m128d_f64[0];
  UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1] = _Var5.m128d_f64[1];
  dVar4 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1];
  *(double *)&__return_storage_ptr__->field_0x30 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0];
  UE::Math::TTransform<double>::Identity.Rotation.ZW = _Var11;
  _Var11 = UE::Math::TTransform<double>::Identity.Translation.XY;
  *(double *)&__return_storage_ptr__->field_0x38 = dVar4;
  UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0] = _Var6.m128d_f64[0];
  UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1] = _Var6.m128d_f64[1];
  dVar4 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1];
  *(double *)&__return_storage_ptr__->field_0x40 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0];
  UE::Math::TTransform<double>::Identity.Translation.XY = _Var11;
  _Var11 = UE::Math::TTransform<double>::Identity.Translation.ZW;
  *(double *)&__return_storage_ptr__->field_0x48 = dVar4;
  UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0] = _Var7.m128d_f64[0];
  UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1] = _Var7.m128d_f64[1];
  dVar4 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1];
  *(double *)&__return_storage_ptr__->field_0x50 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0];
  UE::Math::TTransform<double>::Identity.Translation.ZW = _Var11;
  _Var11 = UE::Math::TTransform<double>::Identity.Scale3D.XY;
  *(double *)&__return_storage_ptr__->field_0x58 = dVar4;
  UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0] = _Var8.m128d_f64[0];
  UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1] = _Var8.m128d_f64[1];
  dVar4 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1];
  *(double *)&__return_storage_ptr__->field_0x60 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0];
  UE::Math::TTransform<double>::Identity.Scale3D.XY = _Var11;
  _Var11 = UE::Math::TTransform<double>::Identity.Scale3D.ZW;
  *(double *)&__return_storage_ptr__->field_0x68 = dVar4;
  UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0] = _Var9.m128d_f64[0];
  UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1] = _Var9.m128d_f64[1];
  dVar4 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1];
  *(double *)&__return_storage_ptr__->field_0x70 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0];
  UE::Math::TTransform<double>::Identity.Scale3D.ZW = _Var11;
  *(double *)&__return_storage_ptr__->field_0x78 = dVar4;
  *(undefined4 *)&__return_storage_ptr__->field_0x80 = uVar1;
  *(undefined4 *)&__return_storage_ptr__->field_0x84 = uVar2;
  *(undefined4 *)&__return_storage_ptr__->field_0x88 = uVar3;
  *(undefined4 *)&__return_storage_ptr__->field_0x8c = 0;
  return __return_storage_ptr__;
}

// operator<unsigned___int64,NDIDataTableLocal::FInstanceData_RenderThread>_TTuple<unsigned___int64,NDIDataTableLocal::FInstanceData_RenderThread> @ 148e8b470

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000148e8b5ab) */
/* WARNING: Removing unreachable block (ram,0x000148e8b5b9) */

TTuple<unsigned___int64,NDIDataTableLocal::FInstanceData_RenderThread> * __thiscall
TKeyInitializer<unsigned___int64_const_&>::
operator<unsigned___int64,NDIDataTableLocal::FInstanceData_RenderThread>_TTuple<unsigned___int64,NDIDataTableLocal::FInstanceData_RenderThread>
          (TKeyInitializer<unsigned___int64_const_&> *this,
          TTuple<unsigned___int64,NDIDataTableLocal::FInstanceData_RenderThread>
          *__return_storage_ptr__)

{
  int iVar1;
  undefined1 auStackY_c8 [32];
  undefined1 local_68 [24];
  undefined8 uStack_50;
  void *local_48;
  undefined4 local_40;
  uint local_3c;
  undefined4 local_38;
  undefined4 local_34;
  ForElementType<FSetElementId> local_30;
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  local_3c = 0x80;
  local_68._0_8_ = (FScriptContainerElement *)0x0;
  local_30.InlineData[0] = '\0';
  local_30.InlineData[1] = '\0';
  local_30.InlineData[2] = '\0';
  local_30.InlineData[3] = '\0';
  local_30._padding_ = 0;
  local_20 = 0;
  local_68._16_8_ = 0;
  uStack_50 = 0;
  local_68._8_8_ = 0;
  local_48 = (void *)0x0;
  local_40 = 0;
  local_38 = 0xffffffff;
  local_34 = 0;
  local_30.SecondaryData = (ForElementType<FSetElementId>)0x0;
  *(ulong64 *)__return_storage_ptr__ = *this->Key;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x18 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x28 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x30 = 0;
  TSet<TTuple<unsigned___int64,TArray<unsigned_int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TArray<unsigned_int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>,0>,FDefaultSetAllocator>
  ::
  TSet<TTuple<unsigned___int64,TArray<unsigned_int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TArray<unsigned_int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>,0>,FDefaultSetAllocator>
            ((TSet<TTuple<unsigned___int64,TArray<unsigned_int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TArray<unsigned_int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>,0>,FDefaultSetAllocator>
              *)&__return_storage_ptr__->field_0x38,
             (TSet<TTuple<unsigned___int64,TArray<unsigned_int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TArray<unsigned_int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>,0>,FDefaultSetAllocator>
              *)local_68);
  local_20 = local_20 & 0xffffffff00000000;
  if (local_30.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_30.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TArray<unsigned_int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TArray<unsigned_int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_68,0,local_68._8_4_);
  iVar1 = SUB84(local_68._8_8_,4);
  local_68._8_8_ = local_68._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,8,0,(ForAnyElementType *)local_68,0,(int *)(local_68 + 0xc));
  }
  local_38 = 0xffffffff;
  local_34 = 0;
  local_40 = 0;
  if (0x80 < local_3c) {
    local_3c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_68 + 0x10),0);
  }
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  if ((FScriptContainerElement *)local_68._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_68._0_8_);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// operator<unsigned___int64,NDISimCacheReaderLocal::FInstanceData_RenderThread>_TTuple<unsigned___int64,NDISimCacheReaderLocal::FInstanceData_RenderThread> @ 148e8b600

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TTuple<unsigned___int64,NDISimCacheReaderLocal::FInstanceData_RenderThread> * __thiscall
TKeyInitializer<unsigned___int64_const_&>::
operator<unsigned___int64,NDISimCacheReaderLocal::FInstanceData_RenderThread>_TTuple<unsigned___int64,NDISimCacheReaderLocal::FInstanceData_RenderThread>
          (TKeyInitializer<unsigned___int64_const_&> *this,
          TTuple<unsigned___int64,NDISimCacheReaderLocal::FInstanceData_RenderThread>
          *__return_storage_ptr__)

{
  int iVar1;
  uint uVar2;
  undefined1 auStackY_b8 [32];
  undefined1 local_70 [24];
  undefined8 uStack_58;
  void *local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ForElementType<FSetElementId> local_38;
  ulonglong local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_b8;
  local_70._0_8_ = (FScriptContainerElement *)0x0;
  local_38.InlineData[0] = '\0';
  local_38.InlineData[1] = '\0';
  local_38.InlineData[2] = '\0';
  local_38.InlineData[3] = '\0';
  local_38._padding_ = 0;
  local_28 = 0;
  local_70._16_8_ = 0;
  uStack_58 = 0;
  local_70._8_8_ = 0;
  local_50 = (void *)0x0;
  local_48 = ___xmm_00000000ffffffff0000008000000000;
  uStack_40 = _UNK_150631d98;
  local_38.SecondaryData = (ForElementType<FSetElementId>)0x0;
  *(ulong64 *)__return_storage_ptr__ = *this->Key;
  *(undefined4 *)&__return_storage_ptr__->field_0x8 = 0xffffffff;
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x18 = 0;
  TSet<TTuple<unsigned___int64,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::
  TSet<TTuple<unsigned___int64,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
            ((TSet<TTuple<unsigned___int64,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
              *)&__return_storage_ptr__->field_0x20,
             (TSet<TTuple<unsigned___int64,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
              *)local_70);
  local_28 = local_28 & 0xffffffff00000000;
  if (local_38.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_38.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_70,0,local_70._8_4_);
  iVar1 = SUB84(local_70._8_8_,4);
  local_70._8_8_ = local_70._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)local_70,0,(int *)(local_70 + 0xc));
  }
  uVar2 = local_48._4_4_;
  uStack_40 = 0xffffffff;
  local_48 = (ulonglong)local_48._4_4_ << 0x20;
  if (0x80 < uVar2) {
    local_48 = 0x8000000000;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_70 + 0x10),0);
  }
  if (local_50 != (void *)0x0) {
    FMemory::Free(local_50);
  }
  if ((FScriptContainerElement *)local_70._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_70._0_8_);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// operator<unsigned___int64,NDIDynamicMeshLocal::FNDIInstanceData_RenderThread>_TTuple<unsigned___int64,NDIDynamicMeshLocal::FNDIInstanceData_RenderThread> @ 148e8b760

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

TTuple<unsigned___int64,NDIDynamicMeshLocal::FNDIInstanceData_RenderThread> * __thiscall
TKeyInitializer<unsigned___int64_const_&>::
operator<unsigned___int64,NDIDynamicMeshLocal::FNDIInstanceData_RenderThread>_TTuple<unsigned___int64,NDIDynamicMeshLocal::FNDIInstanceData_RenderThread>
          (TKeyInitializer<unsigned___int64_const_&> *this,
          TTuple<unsigned___int64,NDIDynamicMeshLocal::FNDIInstanceData_RenderThread>
          *__return_storage_ptr__)

{
  int *piVar1;
  undefined1 *puVar2;
  int iVar3;
  ulong64 uVar4;
  FName FVar5;
  FRHIResource *pFVar6;
  void *_Src;
  uchar auVar7 [8];
  uchar auVar8 [8];
  FName *pFVar9;
  FThreadSafeStaticStat<FStat_STAT_NiagaraGPUDataInterfaceMemory> FVar10;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  longlong lVar11;
  undefined1 auStackY_208 [32];
  FName local_1a8;
  FStatMessage local_1a0;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 local_180;
  undefined4 uStack_17c;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined1 local_148;
  undefined4 uStack_147;
  undefined2 uStack_143;
  undefined1 uStack_141;
  undefined4 local_140;
  undefined8 local_13c;
  undefined8 local_134;
  undefined4 local_12c;
  undefined8 *local_128;
  undefined8 *puStack_120;
  undefined8 *local_118;
  undefined8 *puStack_110;
  FIndexBuffer local_108;
  FRHIResource *local_e0;
  FVertexBuffer local_d8;
  FRHIResource *local_b0;
  FRHIResource *local_a8;
  FRHIResource *pFStack_a0;
  FRHIResource *local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined2 local_60;
  undefined1 local_5e;
  void *local_58;
  undefined8 local_50;
  uchar local_48 [8];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_208;
  uStack_147 = 0;
  uStack_143 = 0;
  uStack_141 = 0;
  local_12c = 0;
  memset(&local_108,0,200);
  local_178 = ___xmm_c059000000000000c059000000000000;
  uStack_170 = _UNK_1518ecdd8;
  local_158 = ___xmm_40590000000000004059000000000000;
  uStack_150 = _UNK_1512468d8;
  local_168 = ___xmm_4059000000000000c059000000000000;
  uStack_160 = _UNK_151d21688;
  local_128 = (undefined8 *)0x0;
  puStack_120 = (undefined8 *)0x0;
  local_188 = 0;
  uStack_184 = 0;
  local_180 = 0;
  uStack_17c = 0;
  local_148 = 1;
  local_140 = 0;
  local_13c = 0xffffffffffffffff;
  local_134 = 0xffffffffffffffff;
  local_118 = (undefined8 *)0x0;
  puStack_110 = (undefined8 *)0x0;
  FIndexBuffer::FIndexBuffer(&local_108);
  local_e0 = (FRHIResource *)0x0;
  FVertexBuffer::FVertexBuffer(&local_d8);
  local_a8 = (FRHIResource *)0x0;
  pFStack_a0 = (FRHIResource *)0x0;
  local_98 = (FRHIResource *)0x0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_b0 = (FRHIResource *)0x0;
  local_68 = 0;
  local_60 = 0x101;
  local_5e = 0;
  local_58 = (void *)0x0;
  local_50 = 0;
  local_48[0] = '\0';
  local_48[1] = '\0';
  local_48[2] = '\0';
  local_48[3] = '\0';
  local_48[4] = '\0';
  local_48[5] = '\0';
  local_48[6] = '\0';
  local_48[7] = '\0';
  uVar4 = *this->Key;
  *(undefined4 *)&__return_storage_ptr__->field_0x8 = local_188;
  *(ulong64 *)__return_storage_ptr__ = uVar4;
  *(undefined4 *)&__return_storage_ptr__->field_0xc = uStack_184;
  *(undefined4 *)&__return_storage_ptr__->field_0x10 = local_180;
  *(undefined4 *)&__return_storage_ptr__->field_0x14 = uStack_17c;
  *(undefined4 *)&__return_storage_ptr__->field_0x50 = local_140;
  *(undefined4 *)&__return_storage_ptr__->field_0x54 = (undefined4)local_13c;
  *(undefined8 *)&__return_storage_ptr__->field_0x18 = local_178;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = uStack_170;
  *(undefined4 *)&__return_storage_ptr__->field_0x58 = local_13c._4_4_;
  *(undefined8 *)&__return_storage_ptr__->field_0x28 = local_168;
  *(undefined8 *)&__return_storage_ptr__->field_0x30 = uStack_160;
  *(undefined4 *)&__return_storage_ptr__->field_0x5c = (undefined4)local_134;
  *(undefined4 *)&__return_storage_ptr__->field_0x60 = local_134._4_4_;
  *(undefined8 *)&__return_storage_ptr__->field_0x38 = local_158;
  *(undefined8 *)&__return_storage_ptr__->field_0x40 = uStack_150;
  *(ulonglong *)&__return_storage_ptr__->field_0x48 =
       CONCAT17(uStack_141,CONCAT25(uStack_143,CONCAT41(uStack_147,local_148)));
  *(undefined8 **)&__return_storage_ptr__->field_0x68 = local_128;
  if (local_128 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(local_128 + 1) = *(int *)(local_128 + 1) + 1;
    UNLOCK();
  }
  *(undefined8 **)&__return_storage_ptr__->field_0x70 = puStack_120;
  if (puStack_120 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puStack_120 + 1) = *(int *)(puStack_120 + 1) + 1;
    UNLOCK();
  }
  *(undefined8 **)&__return_storage_ptr__->field_0x78 = local_118;
  if (local_118 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(local_118 + 1) = *(int *)(local_118 + 1) + 1;
    UNLOCK();
  }
  *(undefined8 **)&__return_storage_ptr__->field_0x80 = puStack_110;
  if (puStack_110 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puStack_110 + 1) = *(int *)(puStack_110 + 1) + 1;
    UNLOCK();
  }
  FIndexBuffer::FIndexBuffer((FIndexBuffer *)&__return_storage_ptr__->field_0x88,&local_108);
  *(FRHIResource **)&__return_storage_ptr__->field_0xb0 = local_e0;
  if (local_e0 != (FRHIResource *)0x0) {
    FRHIResource::AddRef(local_e0);
  }
  FVertexBuffer::FVertexBuffer((FVertexBuffer *)&__return_storage_ptr__->field_0xb8,&local_d8);
  *(FRHIResource **)&__return_storage_ptr__->field_0xe0 = local_b0;
  if (local_b0 != (FRHIResource *)0x0) {
    FRHIResource::AddRef(local_b0);
  }
  *(FRHIResource **)&__return_storage_ptr__->field_0xe8 = local_a8;
  if (local_a8 != (FRHIResource *)0x0) {
    FRHIResource::AddRef(local_a8);
  }
  *(FRHIResource **)&__return_storage_ptr__->field_0xf0 = pFStack_a0;
  if (pFStack_a0 != (FRHIResource *)0x0) {
    FRHIResource::AddRef(pFStack_a0);
  }
  *(FRHIResource **)&__return_storage_ptr__->field_0xf8 = local_98;
  if (local_98 != (FRHIResource *)0x0) {
    FRHIResource::AddRef(local_98);
  }
  _Src = local_58;
  puVar2 = &__return_storage_ptr__->field_0x138;
  lVar11 = (longlong)(int)local_50;
  *(undefined8 *)&__return_storage_ptr__->field_0x100 = uStack_90;
  *(undefined8 *)&__return_storage_ptr__->field_0x108 = local_88;
  *(undefined8 *)&__return_storage_ptr__->field_0x110 = uStack_80;
  *(undefined8 *)&__return_storage_ptr__->field_0x118 = local_78;
  *(undefined8 *)&__return_storage_ptr__->field_0x120 = uStack_70;
  *(undefined8 *)&__return_storage_ptr__->field_0x128 = local_68;
  __return_storage_ptr__->field_0x130 = (undefined1)local_60;
  __return_storage_ptr__->field_0x131 = local_60._1_1_;
  __return_storage_ptr__->field_0x132 = local_5e;
  *(undefined8 *)puVar2 = 0;
  *(int *)&__return_storage_ptr__->field_0x140 = (int)local_50;
  if ((int)local_50 == 0) {
    *(undefined4 *)&__return_storage_ptr__->field_0x144 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x1c,4,(int)local_50,0,(ForAnyElementType *)puVar2,(int)local_50,
               (int *)&__return_storage_ptr__->field_0x144);
    memcpy(*(void **)puVar2,_Src,lVar11 * 0x1c);
  }
  auVar7 = local_48;
  __return_storage_ptr__->field_0x148 = local_48[0];
  __return_storage_ptr__->field_0x149 = local_48[1];
  __return_storage_ptr__->field_0x14a = local_48[2];
  __return_storage_ptr__->field_0x14b = local_48[3];
  __return_storage_ptr__->field_0x14c = local_48[4];
  __return_storage_ptr__->field_0x14d = local_48[5];
  __return_storage_ptr__->field_0x14e = local_48[6];
  __return_storage_ptr__->field_0x14f = local_48[7];
  if (local_48 != (uchar  [8])0x0) {
    FVar10 = StatPtr_STAT_NiagaraGPUDataInterfaceMemory;
    if (StatPtr_STAT_NiagaraGPUDataInterfaceMemory ==
        (FThreadSafeStaticStat<FStat_STAT_NiagaraGPUDataInterfaceMemory>)0x0) {
      pFVar9 = ::FName::FName(&local_1a8,"STAT_NiagaraGPUDataInterfaceMemory");
      FVar10 = (FThreadSafeStaticStat<FStat_STAT_NiagaraGPUDataInterfaceMemory>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraGPUDataInterfaceMemory,
                          *pFVar9,L"Niagara GPU data interface memory","STATGROUP_Niagara",
                          "STATCAT_Niagara",L"Niagara",true,false,ST_int64,false,false,MCR_Physical)
      ;
    }
    FVar5 = *(FName *)FVar10;
    local_1a8 = FVar5;
    if (((FVar5 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      this_00 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_00 == (FThreadStats *)0x0) {
        this_01 = FThreadStatsPool::Get();
        this_00 = FThreadStatsPool::GetFromPool(this_01);
      }
      auVar8 = local_48;
      local_1a0.NameAndInfo.Number = FVar5.Number & 0xffffbfff | 0xb000;
      local_48[0] = auVar7[0];
      local_48[1] = auVar7[1];
      local_48[2] = auVar7[2];
      local_48[3] = auVar7[3];
      local_48[4] = auVar7[4];
      local_48[5] = auVar7[5];
      local_48[6] = auVar7[6];
      local_48[7] = auVar7[7];
      local_1a0.StatData.Pad[0] = local_48[0];
      local_1a0.StatData.Pad[1] = local_48[1];
      local_1a0.StatData.Pad[2] = local_48[2];
      local_1a0.StatData.Pad[3] = local_48[3];
      local_1a0.StatData.Pad[4] = local_48[4];
      local_1a0.StatData.Pad[5] = local_48[5];
      local_1a0.StatData.Pad[6] = local_48[6];
      local_1a0.StatData.Pad[7] = local_48[7];
      local_1a8 = FVar5;
      local_1a0.NameAndInfo.Index.Value = FVar5.ComparisonIndex.Value.Value;
      local_48 = auVar8;
      FThreadStats::AddStatMessage(this_00,&local_1a0);
      FStatsTrace::Add(&local_1a8,-(longlong)auVar7);
      if (this_00->ScopeCount == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  local_48[0] = '\0';
  local_48[1] = '\0';
  local_48[2] = '\0';
  local_48[3] = '\0';
  local_48[4] = '\0';
  local_48[5] = '\0';
  local_48[6] = '\0';
  local_48[7] = '\0';
  (**(code **)(local_108._padding_ + 0x20))(&local_108);
  pFVar6 = local_e0;
  if (local_e0 != (FRHIResource *)0x0) {
    local_e0 = (FRHIResource *)0x0;
    FRHIResource::Release(pFVar6);
  }
  (**(code **)(local_d8._padding_ + 0x20))(&local_d8);
  pFVar6 = local_b0;
  if (local_b0 != (FRHIResource *)0x0) {
    local_b0 = (FRHIResource *)0x0;
    FRHIResource::Release(pFVar6);
  }
  pFVar6 = local_a8;
  if (local_a8 != (FRHIResource *)0x0) {
    local_a8 = (FRHIResource *)0x0;
    FRHIResource::Release(pFVar6);
  }
  pFVar6 = pFStack_a0;
  if (pFStack_a0 != (FRHIResource *)0x0) {
    pFStack_a0 = (FRHIResource *)0x0;
    FRHIResource::Release(pFVar6);
  }
  pFVar6 = local_98;
  if (local_98 != (FRHIResource *)0x0) {
    local_98 = (FRHIResource *)0x0;
    FRHIResource::Release(pFVar6);
  }
  uStack_184 = 0;
  local_180 = 0;
  uStack_17c = 0;
  local_140 = 0;
  local_13c = 0xffffffffffffffff;
  local_134 = 0xffffffffffffffff;
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  if (local_98 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_98);
  }
  if (pFStack_a0 != (FRHIResource *)0x0) {
    FRHIResource::Release(pFStack_a0);
  }
  if (local_a8 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_a8);
  }
  if (local_b0 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_b0);
  }
  FVertexBuffer::~FVertexBuffer(&local_d8);
  if (local_e0 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_e0);
  }
  FIndexBuffer::~FIndexBuffer(&local_108);
  if (puStack_110 != (undefined8 *)0x0) {
    piVar1 = (int *)(puStack_110 + 1);
    LOCK();
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar3 == 1) && (piVar1 != (int *)0x0)) {
      (**(code **)*puStack_110)(puStack_110,1);
    }
  }
  if (local_118 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_118 + 1);
    LOCK();
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar3 == 1) && (piVar1 != (int *)0x0)) {
      (**(code **)*local_118)(local_118,1);
    }
  }
  if (puStack_120 != (undefined8 *)0x0) {
    piVar1 = (int *)(puStack_120 + 1);
    LOCK();
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar3 == 1) && (piVar1 != (int *)0x0)) {
      (**(code **)*puStack_120)(puStack_120,1);
    }
  }
  if (local_128 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_128 + 1);
    LOCK();
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar3 == 1) && (piVar1 != (int *)0x0)) {
      (**(code **)*local_128)(local_128,1);
    }
  }
  return __return_storage_ptr__;
}

// operator<unsigned___int64,FNDIPhysicsAssetData>_TTuple<unsigned___int64,FNDIPhysicsAssetData> @ 148e8bdc0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTuple<unsigned___int64,FNDIPhysicsAssetData> * __thiscall
TKeyInitializer<unsigned___int64_const_&>::
operator<unsigned___int64,FNDIPhysicsAssetData>_TTuple<unsigned___int64,FNDIPhysicsAssetData>
          (TKeyInitializer<unsigned___int64_const_&> *this,
          TTuple<unsigned___int64,FNDIPhysicsAssetData> *__return_storage_ptr__)

{
  undefined1 auStack_e968 [32];
  undefined1 local_e948 [64];
  FNDIPhysicsAssetArrays local_e908;
  ulonglong local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x148e8bdd0;
  local_18 = __security_cookie.value ^ (ulonglong)auStack_e968;
  memset(local_e948,0,0xe930);
  FNDIPhysicsAssetArrays::FNDIPhysicsAssetArrays(&local_e908);
  *(ulong64 *)__return_storage_ptr__ = *this->Key;
  memcpy(&__return_storage_ptr__->field_0x10,local_e948,0xe930);
  return __return_storage_ptr__;
}

// operator<unsigned___int64,NDISceneCapture2DLocal::FNDInstanceData_RenderThread>_TTuple<unsigned___int64,NDISceneCapture2DLocal::FNDInstanceData_RenderThread> @ 148e8be50

TTuple<unsigned___int64,NDISceneCapture2DLocal::FNDInstanceData_RenderThread> * __thiscall
TKeyInitializer<unsigned___int64_const_&>::
operator<unsigned___int64,NDISceneCapture2DLocal::FNDInstanceData_RenderThread>_TTuple<unsigned___int64,NDISceneCapture2DLocal::FNDInstanceData_RenderThread>
          (TKeyInitializer<unsigned___int64_const_&> *this,
          TTuple<unsigned___int64,NDISceneCapture2DLocal::FNDInstanceData_RenderThread>
          *__return_storage_ptr__)

{
  undefined1 local_f8 [24];
  float afStack_e0 [2];
  float local_d8 [2];
  float afStack_d0 [2];
  float local_c8 [2];
  float afStack_c0 [2];
  float local_b8 [2];
  float afStack_b0 [2];
  float local_a8 [2];
  float afStack_a0 [2];
  float local_98 [2];
  float afStack_90 [2];
  float local_88 [2];
  float afStack_80 [2];
  float local_78 [2];
  float afStack_70 [2];
  float local_68 [2];
  float afStack_60 [2];
  float local_58 [2];
  float afStack_50 [2];
  float local_48 [2];
  float afStack_40 [2];
  float local_38 [2];
  float afStack_30 [2];
  undefined8 local_28;
  TRefCountPtr<FRHITextureReference> local_20;
  TRefCountPtr<FRHISamplerState> local_18;
  undefined8 local_10;
  
  afStack_b0 = (float  [2])UE::Math::TMatrix<float>::Identity.M[3]._8_8_;
  local_b8 = (float  [2])UE::Math::TMatrix<float>::Identity.M[3]._0_8_;
  afStack_80 = (float  [2])UE::Math::TMatrix<float>::Identity.M[2]._8_8_;
  local_88 = (float  [2])UE::Math::TMatrix<float>::Identity.M[2]._0_8_;
  afStack_90 = (float  [2])UE::Math::TMatrix<float>::Identity.M[1]._8_8_;
  local_98 = (float  [2])UE::Math::TMatrix<float>::Identity.M[1]._0_8_;
  afStack_a0 = (float  [2])UE::Math::TMatrix<float>::Identity.M[0]._8_8_;
  local_a8 = (float  [2])UE::Math::TMatrix<float>::Identity.M[0]._0_8_;
  local_f8._8_8_ = 0;
  local_28 = 0;
  local_10 = 0;
  local_f8._0_8_ = 0;
  local_20.Reference = (FRHITextureReference *)0x0;
  local_18.Reference = (FRHISamplerState *)0x0;
  local_f8._16_8_ = UE::Math::TMatrix<float>::Identity.M[0]._0_8_;
  afStack_e0 = (float  [2])UE::Math::TMatrix<float>::Identity.M[0]._8_8_;
  local_d8 = (float  [2])UE::Math::TMatrix<float>::Identity.M[1]._0_8_;
  afStack_d0 = (float  [2])UE::Math::TMatrix<float>::Identity.M[1]._8_8_;
  local_c8 = (float  [2])UE::Math::TMatrix<float>::Identity.M[2]._0_8_;
  afStack_c0 = (float  [2])UE::Math::TMatrix<float>::Identity.M[2]._8_8_;
  *(ulong64 *)__return_storage_ptr__ = *this->Key;
  local_78 = local_b8;
  afStack_70 = afStack_b0;
  local_68 = local_a8;
  afStack_60 = afStack_a0;
  local_58 = local_98;
  afStack_50 = afStack_90;
  local_48 = local_88;
  afStack_40 = afStack_80;
  local_38 = local_b8;
  afStack_30 = afStack_b0;
  NDISceneCapture2DLocal::FNDInstanceData_RenderThread::FNDInstanceData_RenderThread
            ((FNDInstanceData_RenderThread *)&__return_storage_ptr__->field_0x10,
             (FNDInstanceData_RenderThread *)local_f8);
  if ((FRHIResource *)local_18.Reference != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)local_18.Reference);
  }
  if (local_20.Reference != (FRHITextureReference *)0x0) {
    FRHIResource::Release((FRHIResource *)local_20.Reference);
  }
  return __return_storage_ptr__;
}

// operator<unsigned___int64,TArray<unsigned_int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>_>_TTuple<unsigned___int64,TArray<unsigned_int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>_> @ 148e8bf20

TTuple<unsigned___int64,TArray<unsigned_int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>_>
* __thiscall
TKeyInitializer<unsigned___int64_&&>::
operator<unsigned___int64,TArray<unsigned_int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>_>_TTuple<unsigned___int64,TArray<unsigned_int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>_>
          (TKeyInitializer<unsigned___int64_&&> *this,
          TTuple<unsigned___int64,TArray<unsigned_int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>_>
          *__return_storage_ptr__)

{
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  
  *(ulong64 *)__return_storage_ptr__ = *this->Key;
  *(undefined8 *)&__return_storage_ptr__->field_0x48 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = local_58;
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = uStack_50;
  *(undefined8 *)&__return_storage_ptr__->field_0x18 = local_48;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = uStack_40;
  *(undefined8 *)&__return_storage_ptr__->field_0x28 = local_38;
  *(undefined8 *)&__return_storage_ptr__->field_0x30 = uStack_30;
  *(undefined8 *)&__return_storage_ptr__->field_0x38 = local_28;
  *(undefined8 *)&__return_storage_ptr__->field_0x40 = uStack_20;
  if (*(void **)&__return_storage_ptr__->field_0x48 != (void *)0x0) {
    FMemory::Free(*(void **)&__return_storage_ptr__->field_0x48);
  }
  *(undefined8 *)&__return_storage_ptr__->field_0x48 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x50 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x54 = 0x10;
  return __return_storage_ptr__;
}

// operator<unsigned___int64,NDISocketReaderLocal::FInstanceData_RenderThread>_TTuple<unsigned___int64,NDISocketReaderLocal::FInstanceData_RenderThread> @ 148ee5e50

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TTuple<unsigned___int64,NDISocketReaderLocal::FInstanceData_RenderThread> * __thiscall
TKeyInitializer<unsigned___int64_const_&>::
operator<unsigned___int64,NDISocketReaderLocal::FInstanceData_RenderThread>_TTuple<unsigned___int64,NDISocketReaderLocal::FInstanceData_RenderThread>
          (TKeyInitializer<unsigned___int64_const_&> *this,
          TTuple<unsigned___int64,NDISocketReaderLocal::FInstanceData_RenderThread>
          *__return_storage_ptr__)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 local_a8 [48];
  __m128 local_78;
  __m128 local_68;
  __m128 local_58;
  __m128 local_48;
  __m128 local_38;
  longlong local_28;
  ForAnyElementType local_20;
  undefined8 local_18;
  TRefCountPtr<FRDGPooledBuffer> local_10;
  
  local_38 = UE::Math::TTransform<float>::Identity.Scale3D;
  local_48 = UE::Math::TTransform<float>::Identity.Translation;
  local_58 = UE::Math::TTransform<float>::Identity.Rotation;
  local_a8._1_2_ = 0;
  local_a8[3] = 0;
  local_a8._20_8_ = 0;
  local_a8._28_4_ = 0;
  local_a8[0] = 0;
  local_a8._4_8_ = 0;
  local_a8._12_8_ = 0;
  local_28 = 0;
  local_20.Data = (FScriptContainerElement *)0x0;
  local_18._0_4_ = 0;
  local_18._4_4_ = 0;
  local_10.Reference = (FRDGPooledBuffer *)0x0;
  local_a8._32_16_ = (undefined1  [16])UE::Math::TTransform<float>::Identity.Rotation;
  local_78 = UE::Math::TTransform<float>::Identity.Translation;
  local_68 = UE::Math::TTransform<float>::Identity.Scale3D;
  *(ulong64 *)__return_storage_ptr__ = *this->Key;
  NDISocketReaderLocal::FInstanceData_RenderThread::FInstanceData_RenderThread
            ((FInstanceData_RenderThread *)&__return_storage_ptr__->field_0x10,
             (FInstanceData_RenderThread *)local_a8);
  if (local_10.Reference != (FRDGPooledBuffer *)0x0) {
    plVar1 = &(local_10.Reference)->_padding_;
    LOCK();
    lVar2 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar2 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)(local_10.Reference)->_padding_)(local_10.Reference,1);
    }
  }
  if (local_20.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_20.Data);
  }
  return __return_storage_ptr__;
}

// operator<unsigned___int64,NDIStaticMeshLocal::FInstanceData_RenderThread>_TTuple<unsigned___int64,NDIStaticMeshLocal::FInstanceData_RenderThread> @ 148ee5f30

/* WARNING: Removing unreachable block (ram,0x000148ee642c) */
/* WARNING: Removing unreachable block (ram,0x000148ee6412) */
/* WARNING: Removing unreachable block (ram,0x000148ee63a2) */
/* WARNING: Removing unreachable block (ram,0x000148ee6395) */
/* WARNING: Removing unreachable block (ram,0x000148ee63af) */
/* WARNING: Removing unreachable block (ram,0x000148ee641f) */
/* WARNING: Removing unreachable block (ram,0x000148ee6439) */
/* WARNING: Enum "Type": Some values do not have unique names */

TTuple<unsigned___int64,NDIStaticMeshLocal::FInstanceData_RenderThread> * __thiscall
TKeyInitializer<unsigned___int64_const_&>::
operator<unsigned___int64,NDIStaticMeshLocal::FInstanceData_RenderThread>_TTuple<unsigned___int64,NDIStaticMeshLocal::FInstanceData_RenderThread>
          (TKeyInitializer<unsigned___int64_const_&> *this,
          TTuple<unsigned___int64,NDIStaticMeshLocal::FInstanceData_RenderThread>
          *__return_storage_ptr__)

{
  FName FVar1;
  long64 lVar2;
  long64 lVar3;
  FName *pFVar4;
  FThreadSafeStaticStat<FStat_STAT_NiagaraGPUDataInterfaceMemory> FVar5;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FRHIBuffer *local_238;
  FName local_228 [2];
  FStatMessage local_218;
  FRHIBuffer *local_208;
  FRHIBuffer *local_200;
  FRHIShaderResourceView *local_1f8;
  TTuple<unsigned___int64,NDIStaticMeshLocal::FInstanceData_RenderThread> *local_1f0;
  FInstanceData_RenderThread local_1e8;
  
  local_1e8.NumTriangles.field0_0x0._0_8_ = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_;
  local_1e8.Rotation = UE::Math::TQuat<float>::Identity;
  local_1e8.Transform.M[0]._8_8_ = UE::Math::TMatrix<float>::Identity.M[0]._8_8_;
  local_1e8.Transform.M[0]._0_8_ = UE::Math::TMatrix<float>::Identity.M[0]._0_8_;
  local_1e8.PreSkinnedLocalBoundsCenter.field0_0x0._0_8_ =
       UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  local_1e8._2_8_ = 0;
  local_1e8._10_4_ = 0;
  local_1e8._14_2_ = 0;
  local_1e8._300_4_ = 0;
  local_1e8.SectionInfos._20_4_ = 0;
  local_1e8.FilteredAndUnfilteredSections._20_4_ = 0;
  local_1e8._364_4_ = 0;
  local_1e8.SocketTransforms._20_4_ = 0;
  local_1e8.FilteredAndUnfilteredSockets._20_4_ = 0;
  local_1e8._436_8_ = 0;
  local_1e8._444_4_ = 0;
  local_1e8.bIsValid = false;
  local_1e8.bGpuUniformDistribution = false;
  local_1e8.DeltaSeconds = 0.0;
  local_1e8.PreSkinnedLocalBoundsCenter.field0_0x0._s_0.Z =
       UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  local_1e8.PreSkinnedLocalBoundsExtents.field0_0x0._s_0.Z =
       UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  local_1e8.OwnerToMeshVector.field0_0x0._s_0.Z =
       UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  local_1e8.Transform.M[2]._0_8_ = UE::Math::TMatrix<float>::Identity.M[2]._0_8_;
  local_1e8.Transform.M[2]._8_8_ = UE::Math::TMatrix<float>::Identity.M[2]._8_8_;
  local_1e8.Transform.M[3]._0_8_ = UE::Math::TMatrix<float>::Identity.M[3]._0_8_;
  local_1e8.Transform.M[3]._8_8_ = UE::Math::TMatrix<float>::Identity.M[3]._8_8_;
  local_1e8.PrevTransform.M[2]._0_8_ = UE::Math::TMatrix<float>::Identity.M[2]._0_8_;
  local_1e8.PrevTransform.M[2]._8_8_ = UE::Math::TMatrix<float>::Identity.M[2]._8_8_;
  local_1e8.PrevTransform.M[3]._0_8_ = UE::Math::TMatrix<float>::Identity.M[3]._0_8_;
  local_1e8.PrevTransform.M[3]._8_8_ = UE::Math::TMatrix<float>::Identity.M[3]._8_8_;
  local_1e8.NumTriangles.field0_0x0._s_0.Z = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z
  ;
  local_1e8.SectionCounts.field0_0x0._s_0.Z =
       UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
  local_1e8.SocketCounts.field0_0x0._s_0.Z = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z
  ;
  local_1e8.Transform.M[1]._0_8_ = UE::Math::TMatrix<float>::Identity.M[1]._0_8_;
  local_1e8.Transform.M[1]._8_8_ = UE::Math::TMatrix<float>::Identity.M[1]._8_8_;
  local_1e8.PrevTransform.M[1]._0_8_ = UE::Math::TMatrix<float>::Identity.M[1]._0_8_;
  local_1e8.PrevTransform.M[1]._8_8_ = UE::Math::TMatrix<float>::Identity.M[1]._8_8_;
  *(ulong64 *)__return_storage_ptr__ = *this->Key;
  local_1e8.PrevRotation = local_1e8.Rotation;
  local_1e8.PreSkinnedLocalBoundsExtents.field0_0x0._0_8_ =
       local_1e8.PreSkinnedLocalBoundsCenter.field0_0x0._0_8_;
  local_1e8.OwnerToMeshVector.field0_0x0._0_8_ =
       local_1e8.PreSkinnedLocalBoundsCenter.field0_0x0._0_8_;
  local_1e8.PrevTransform.M[0]._0_8_ = local_1e8.Transform.M[0]._0_8_;
  local_1e8.PrevTransform.M[0]._8_8_ = local_1e8.Transform.M[0]._8_8_;
  local_1e8.DistanceFieldPrimitiveId.PrimIDValue = 0;
  local_1e8.NumVertices = 0;
  local_1e8.NumUVs = 0;
  local_1e8.MeshIndexBufferSRV.Reference = (FRHIShaderResourceView *)0x0;
  local_1e8.MeshPositionBufferSRV.Reference = (FRHIShaderResourceView *)0x0;
  local_1e8.MeshTangentBufferSRV.Reference = (FRHIShaderResourceView *)0x0;
  local_1e8.MeshUVBufferSRV.Reference = (FRHIShaderResourceView *)0x0;
  local_1e8.MeshColorBufferSRV.Reference = (FRHIShaderResourceView *)0x0;
  local_1e8.MeshUniformSamplingTriangleSRV.Reference = (FRHIShaderResourceView *)0x0;
  local_1e8.SectionCounts.field0_0x0._0_8_ = local_1e8.NumTriangles.field0_0x0._0_8_;
  local_1e8.SectionInfos.Buffer.Reference = (FRHIBuffer *)0x0;
  local_1e8.SectionInfos.SRV.Reference = (FRHIShaderResourceView *)0x0;
  local_1e8.SectionInfos.NumBytes = 0;
  local_1e8.FilteredAndUnfilteredSections.Buffer.Reference = (FRHIBuffer *)0x0;
  local_1e8.FilteredAndUnfilteredSections.SRV.Reference = (FRHIShaderResourceView *)0x0;
  local_1e8.FilteredAndUnfilteredSections.NumBytes = 0;
  local_1e8.SocketCounts.field0_0x0._0_8_ = local_1e8.NumTriangles.field0_0x0._0_8_;
  local_1e8.SocketTransforms.Buffer.Reference = (FRHIBuffer *)0x0;
  local_1e8.SocketTransforms.SRV.Reference = (FRHIShaderResourceView *)0x0;
  local_1e8.SocketTransforms.NumBytes = 0;
  local_1e8.FilteredAndUnfilteredSockets.Buffer.Reference = (FRHIBuffer *)0x0;
  local_1e8.FilteredAndUnfilteredSockets.SRV.Reference = (FRHIShaderResourceView *)0x0;
  local_1e8.FilteredAndUnfilteredSockets.NumBytes = 0;
  local_1e8.GPUMemoryUsage._0_1_ = '\0';
  local_1e8.GPUMemoryUsage._1_1_ = '\0';
  local_1e8.GPUMemoryUsage._2_1_ = '\0';
  local_1e8.GPUMemoryUsage._3_1_ = '\0';
  local_1e8.GPUMemoryUsage._4_1_ = '\0';
  local_1e8.GPUMemoryUsage._5_1_ = '\0';
  local_1e8.GPUMemoryUsage._6_1_ = '\0';
  local_1e8.GPUMemoryUsage._7_1_ = '\0';
  local_1e8.UvMappingBuffer = (FMeshUvMappingBufferProxy *)0x0;
  local_1e8.UvMappingSet = 0;
  local_1f0 = __return_storage_ptr__;
  NDIStaticMeshLocal::FInstanceData_RenderThread::FInstanceData_RenderThread
            ((FInstanceData_RenderThread *)&__return_storage_ptr__->field_0x10,&local_1e8);
  lVar2 = local_1e8.GPUMemoryUsage;
  if ((uchar  [8])local_1e8.GPUMemoryUsage != (uchar  [8])0x0) {
    FVar5 = StatPtr_STAT_NiagaraGPUDataInterfaceMemory;
    if (StatPtr_STAT_NiagaraGPUDataInterfaceMemory ==
        (FThreadSafeStaticStat<FStat_STAT_NiagaraGPUDataInterfaceMemory>)0x0) {
      pFVar4 = ::FName::FName(local_228,"STAT_NiagaraGPUDataInterfaceMemory");
      FVar5 = (FThreadSafeStaticStat<FStat_STAT_NiagaraGPUDataInterfaceMemory>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraGPUDataInterfaceMemory,
                         *pFVar4,L"Niagara GPU data interface memory","STATGROUP_Niagara",
                         "STATCAT_Niagara",L"Niagara",true,false,ST_int64,false,false,MCR_Physical);
    }
    FVar1 = *(FName *)FVar5;
    if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      this_00 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_00 == (FThreadStats *)0x0) {
        this_01 = FThreadStatsPool::Get();
        this_00 = FThreadStatsPool::GetFromPool(this_01);
      }
      lVar3 = local_1e8.GPUMemoryUsage;
      local_218.NameAndInfo.Number = FVar1.Number & 0xffffafff | 0xa000;
      local_1e8.GPUMemoryUsage._0_1_ = (undefined1)lVar2;
      local_1e8.GPUMemoryUsage._1_1_ = SUB81(lVar2,1);
      local_1e8.GPUMemoryUsage._2_1_ = SUB81(lVar2,2);
      local_1e8.GPUMemoryUsage._3_1_ = SUB81(lVar2,3);
      local_1e8.GPUMemoryUsage._4_1_ = SUB81(lVar2,4);
      local_1e8.GPUMemoryUsage._5_1_ = SUB81(lVar2,5);
      local_1e8.GPUMemoryUsage._6_1_ = SUB81(lVar2,6);
      local_1e8.GPUMemoryUsage._7_1_ = SUB81(lVar2,7);
      local_218.StatData.Pad[0] = (undefined1)local_1e8.GPUMemoryUsage;
      local_218.StatData.Pad[1] = local_1e8.GPUMemoryUsage._1_1_;
      local_218.StatData.Pad[2] = local_1e8.GPUMemoryUsage._2_1_;
      local_218.StatData.Pad[3] = local_1e8.GPUMemoryUsage._3_1_;
      local_218.StatData.Pad[4] = local_1e8.GPUMemoryUsage._4_1_;
      local_218.StatData.Pad[5] = local_1e8.GPUMemoryUsage._5_1_;
      local_218.StatData.Pad[6] = local_1e8.GPUMemoryUsage._6_1_;
      local_218.StatData.Pad[7] = local_1e8.GPUMemoryUsage._7_1_;
      local_228[0] = FVar1;
      local_218.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
      local_1e8.GPUMemoryUsage = lVar3;
      FThreadStats::AddStatMessage(this_00,&local_218);
      FStatsTrace::Add(local_228,lVar2);
      if (this_00->ScopeCount == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  if (local_1e8.MeshIndexBufferSRV.Reference != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)local_1e8.MeshIndexBufferSRV.Reference);
  }
  if (local_1e8.MeshPositionBufferSRV.Reference != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)local_1e8.MeshPositionBufferSRV.Reference);
  }
  if (local_1e8.MeshTangentBufferSRV.Reference != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)local_1e8.MeshTangentBufferSRV.Reference);
  }
  if (local_1e8.MeshUVBufferSRV.Reference != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)local_1e8.MeshUVBufferSRV.Reference);
  }
  local_228[0] = (FName)local_1e8.MeshColorBufferSRV.Reference;
  if ((FName)local_1e8.MeshColorBufferSRV.Reference != (FName)0x0) {
    local_228[0].ComparisonIndex.Value = 0;
    local_228[0].Number = 0;
    FRHIResource::Release((FRHIResource *)local_1e8.MeshColorBufferSRV.Reference);
  }
  local_218.StatData.Pad = (uchar  [8])local_1e8.SectionInfos.Buffer.Reference;
  if (local_1e8.SectionInfos.Buffer.Reference != (FRHIBuffer *)0x0) {
    local_218.StatData.Pad[0] = '\0';
    local_218.StatData.Pad[1] = '\0';
    local_218.StatData.Pad[2] = '\0';
    local_218.StatData.Pad[3] = '\0';
    local_218.StatData.Pad[4] = '\0';
    local_218.StatData.Pad[5] = '\0';
    local_218.StatData.Pad[6] = '\0';
    local_218.StatData.Pad[7] = '\0';
    FRHIResource::Release((FRHIResource *)local_1e8.SectionInfos.Buffer.Reference);
  }
  local_1f8 = local_1e8.SectionInfos.SRV.Reference;
  if (local_1e8.SectionInfos.SRV.Reference != (FRHIShaderResourceView *)0x0) {
    local_1f8 = (FRHIShaderResourceView *)0x0;
    FRHIResource::Release((FRHIResource *)local_1e8.SectionInfos.SRV.Reference);
  }
  local_200 = local_1e8.FilteredAndUnfilteredSections.Buffer.Reference;
  if (local_1e8.FilteredAndUnfilteredSections.Buffer.Reference != (FRHIBuffer *)0x0) {
    local_200 = (FRHIBuffer *)0x0;
    FRHIResource::Release((FRHIResource *)local_1e8.FilteredAndUnfilteredSections.Buffer.Reference);
  }
  if (local_1e8.FilteredAndUnfilteredSections.SRV.Reference != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)local_1e8.FilteredAndUnfilteredSections.SRV.Reference);
  }
  if (local_1e8.SocketTransforms.Buffer.Reference != (FRHIBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)local_1e8.SocketTransforms.Buffer.Reference);
  }
  if (local_1e8.SocketTransforms.SRV.Reference != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)local_1e8.SocketTransforms.SRV.Reference);
  }
  local_208 = local_1e8.FilteredAndUnfilteredSockets.Buffer.Reference;
  local_238 = local_1e8.FilteredAndUnfilteredSockets.Buffer.Reference;
  if (local_1e8.FilteredAndUnfilteredSockets.Buffer.Reference != (FRHIBuffer *)0x0) {
    local_208 = (FRHIBuffer *)0x0;
    FRHIResource::Release((FRHIResource *)local_1e8.FilteredAndUnfilteredSockets.Buffer.Reference);
    local_238 = (FRHIBuffer *)0x0;
  }
  if (local_1e8.FilteredAndUnfilteredSockets.SRV.Reference != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)local_1e8.FilteredAndUnfilteredSockets.SRV.Reference);
  }
  if (local_238 != (FRHIBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)local_208);
  }
  if (local_200 != (FRHIBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)local_200);
  }
  if (local_1f8 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)local_1f8);
  }
  if (local_218.StatData.Pad != (uchar  [8])0x0) {
    FRHIResource::Release((FRHIResource *)local_218.StatData.Pad);
  }
  if (local_1e8.MeshUniformSamplingTriangleSRV.Reference != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)local_1e8.MeshUniformSamplingTriangleSRV.Reference);
  }
  if (local_228[0] != (FName)0x0) {
    FRHIResource::Release((FRHIResource *)local_228[0]);
  }
  return local_1f0;
}

// operator<unsigned___int64,NDIUObjectPropertyReaderLocal::FInstanceData_RenderThread>_TTuple<unsigned___int64,NDIUObjectPropertyReaderLocal::FInstanceData_RenderThread> @ 148ee6470

TTuple<unsigned___int64,NDIUObjectPropertyReaderLocal::FInstanceData_RenderThread> * __thiscall
TKeyInitializer<unsigned___int64_const_&>::
operator<unsigned___int64,NDIUObjectPropertyReaderLocal::FInstanceData_RenderThread>_TTuple<unsigned___int64,NDIUObjectPropertyReaderLocal::FInstanceData_RenderThread>
          (TKeyInitializer<unsigned___int64_const_&> *this,
          TTuple<unsigned___int64,NDIUObjectPropertyReaderLocal::FInstanceData_RenderThread>
          *__return_storage_ptr__)

{
  FInstanceData_RenderThread local_128;
  
  memset(&local_128,0,0x120);
  *(ulong64 *)__return_storage_ptr__ = *this->Key;
  NDIUObjectPropertyReaderLocal::FInstanceData_RenderThread::FInstanceData_RenderThread
            ((FInstanceData_RenderThread *)&__return_storage_ptr__->field_0x10,&local_128);
  if (local_128.GpuFunctionToPropertyRemap.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
  {
    FMemory::Free(local_128.GpuFunctionToPropertyRemap.AllocatorInstance.Data);
  }
  if (local_128.PropertyOffsets.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.PropertyOffsets.AllocatorInstance.Data);
  }
  if (local_128.PropertyData.SRV.Reference != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)local_128.PropertyData.SRV.Reference);
  }
  if (local_128.PropertyData.Buffer.Reference != (FRHIBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)local_128.PropertyData.Buffer.Reference);
  }
  return __return_storage_ptr__;
}

// operator<unsigned___int64,NDIVirtualTextureLocal::FNDInstanceData_RenderThread>_TTuple<unsigned___int64,NDIVirtualTextureLocal::FNDInstanceData_RenderThread> @ 148ee6510

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

TTuple<unsigned___int64,NDIVirtualTextureLocal::FNDInstanceData_RenderThread> * __thiscall
TKeyInitializer<unsigned___int64_const_&>::
operator<unsigned___int64,NDIVirtualTextureLocal::FNDInstanceData_RenderThread>_TTuple<unsigned___int64,NDIVirtualTextureLocal::FNDInstanceData_RenderThread>
          (TKeyInitializer<unsigned___int64_const_&> *this,
          TTuple<unsigned___int64,NDIVirtualTextureLocal::FNDInstanceData_RenderThread>
          *__return_storage_ptr__)

{
  FRHITexture *this_00;
  FRHIShaderResourceView *this_01;
  TRefCountPtr<FRHITexture> this_02;
  FNDInstanceData_RenderThread *pFVar1;
  FLayerTexture *pFVar2;
  longlong lVar3;
  undefined1 auStack_148 [32];
  FNDInstanceData_RenderThread local_128;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_148;
  pFVar1 = NDIVirtualTextureLocal::FNDInstanceData_RenderThread::FNDInstanceData_RenderThread
                     (&local_128);
  *(ulong64 *)__return_storage_ptr__ = *this->Key;
  NDIVirtualTextureLocal::FNDInstanceData_RenderThread::FNDInstanceData_RenderThread
            ((FNDInstanceData_RenderThread *)&__return_storage_ptr__->field_0x10,pFVar1);
  if ((FRHIResource *)local_128.SharedSampler.Reference != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)local_128.SharedSampler.Reference);
  }
  lVar3 = 3;
  pFVar2 = (FLayerTexture *)&local_128.MaterialType;
  do {
    this_00 = pFVar2[-1].PageTable.Reference;
    lVar3 = lVar3 + -1;
    if (this_00 != (FRHITexture *)0x0) {
      FRHIResource::Release((FRHIResource *)this_00);
    }
    this_01 = pFVar2[-1].TextureSRV.Reference;
    if (this_01 != (FRHIShaderResourceView *)0x0) {
      FRHIResource::Release((FRHIResource *)this_01);
    }
    this_02.Reference = pFVar2[-1].Texture.Reference;
    if (this_02.Reference != (FRHITexture *)0x0) {
      FRHIResource::Release((FRHIResource *)this_02.Reference);
    }
    pFVar2 = pFVar2 + -1;
  } while (lVar3 != 0);
  return __return_storage_ptr__;
}

// operator<TStatIdData_const_*,FStatExecutionTimer>_TTuple<TStatIdData_const_*,FStatExecutionTimer> @ 148fe8ac0

TTuple<TStatIdData_const_*,FStatExecutionTimer> * __thiscall
TKeyInitializer<TStatIdData_const_*_const_&>::
operator<TStatIdData_const_*,FStatExecutionTimer>_TTuple<TStatIdData_const_*,FStatExecutionTimer>
          (TKeyInitializer<TStatIdData_const_*_const_&> *this,
          TTuple<TStatIdData_const_*,FStatExecutionTimer> *__return_storage_ptr__)

{
  ForAnyElementType FVar1;
  undefined4 uVar2;
  ForAnyElementType local_28;
  undefined8 local_20;
  undefined4 local_18;
  
  local_28.Data = (FScriptContainerElement *)0x0;
  local_20._0_4_ = 0;
  local_20 = 0;
  local_20._4_4_ = 0;
  local_18 = 0;
  if (-1 < GbMaxStatRecordedFrames) {
    FVar1.Data = (FScriptContainerElement *)0x0;
    uVar2 = local_20._4_4_;
    if (0 < GbMaxStatRecordedFrames) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,GbMaxStatRecordedFrames,&local_28,0,(int *)((longlong)&local_20 + 4));
      FVar1.Data = local_28.Data;
      uVar2 = local_18;
    }
    *(TStatIdData **)__return_storage_ptr__ = *this->Key;
    *(FScriptContainerElement **)&__return_storage_ptr__->field_0x8 = FVar1.Data;
    *(undefined4 *)&__return_storage_ptr__->field_0x10 = (undefined4)local_20;
    *(undefined4 *)&__return_storage_ptr__->field_0x14 = local_20._4_4_;
    *(undefined4 *)&__return_storage_ptr__->field_0x18 = uVar2;
    return __return_storage_ptr__;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)GbMaxStatRecordedFrames);
}

// operator<TTuple<unsigned___int64,enum_ENiagaraScriptUsage>,TMap<TStatIdData_const_*,FStatExecutionTimer,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TStatIdData_const_*,FStatExecutionTimer,0>_>_>_TTuple<TTuple<unsigned___int64,enum_ENiagaraScriptUsage>,TMap<TStatIdData_const_*,FStatExecutionTimer,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TStatIdData_const_*,FStatExecutionTimer,0>_>_> @ 148fe8b60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTuple<TTuple<unsigned___int64,ENiagaraScriptUsage>,TMap<TStatIdData_const_*,FStatExecutionTimer,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TStatIdData_const_*,FStatExecutionTimer,0>_>_>
* __thiscall
TKeyInitializer<TTuple<unsigned___int64,enum_ENiagaraScriptUsage>_const_&>::
operator<TTuple<unsigned___int64,enum_ENiagaraScriptUsage>,TMap<TStatIdData_const_*,FStatExecutionTimer,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TStatIdData_const_*,FStatExecutionTimer,0>_>_>_TTuple<TTuple<unsigned___int64,enum_ENiagaraScriptUsage>,TMap<TStatIdData_const_*,FStatExecutionTimer,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TStatIdData_const_*,FStatExecutionTimer,0>_>_>
          (void *this,
          TTuple<TTuple<unsigned___int64,ENiagaraScriptUsage>,TMap<TStatIdData_const_*,FStatExecutionTimer,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TStatIdData_const_*,FStatExecutionTimer,0>_>_>
          *__return_storage_ptr__)

{
  undefined8 uVar1;
  int iVar2;
  undefined1 auStackY_98 [32];
  undefined1 local_68 [24];
  undefined8 uStack_50;
  void *local_48;
  undefined4 local_40;
  uint local_3c;
  undefined4 local_38;
  undefined4 local_34;
  ForElementType<FSetElementId> local_30;
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_98;
  local_30.InlineData[0] = '\0';
  local_30.InlineData[1] = '\0';
  local_30.InlineData[2] = '\0';
  local_30.InlineData[3] = '\0';
  local_30._padding_ = 0;
  local_68._16_8_ = 0;
  uStack_50 = 0;
  local_20 = 0;
  local_68._0_8_ = (FScriptContainerElement *)0x0;
  local_68._8_8_ = 0;
  local_48 = (void *)0x0;
  local_40 = 0;
  local_3c = 0x80;
  local_38 = 0xffffffff;
  local_34 = 0;
  local_30.SecondaryData = (ForElementType<FSetElementId>)0x0;
  uVar1 = (*(undefined8 **)this)[1];
  *(undefined8 *)__return_storage_ptr__ = **(undefined8 **)this;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = uVar1;
  TSet<TTuple<TStatIdData_const_*,FStatExecutionTimer>,TDefaultMapHashableKeyFuncs<TStatIdData_const_*,FStatExecutionTimer,0>,FDefaultSetAllocator>
  ::
  TSet<TTuple<TStatIdData_const_*,FStatExecutionTimer>,TDefaultMapHashableKeyFuncs<TStatIdData_const_*,FStatExecutionTimer,0>,FDefaultSetAllocator>
            ((TSet<TTuple<TStatIdData_const_*,FStatExecutionTimer>,TDefaultMapHashableKeyFuncs<TStatIdData_const_*,FStatExecutionTimer,0>,FDefaultSetAllocator>
              *)&__return_storage_ptr__->field_0x10,
             (TSet<TTuple<TStatIdData_const_*,FStatExecutionTimer>,TDefaultMapHashableKeyFuncs<TStatIdData_const_*,FStatExecutionTimer,0>,FDefaultSetAllocator>
              *)local_68);
  local_20 = local_20 & 0xffffffff00000000;
  if (local_30.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_30.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<TStatIdData_const_*,FStatExecutionTimer>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<TStatIdData_const_*,FStatExecutionTimer>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_68,0,local_68._8_4_);
  iVar2 = SUB84(local_68._8_8_,4);
  local_68._8_8_ = local_68._8_8_ & 0xffffffff00000000;
  if (iVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,(ForAnyElementType *)local_68,0,(int *)(local_68 + 0xc));
  }
  local_38 = 0xffffffff;
  local_34 = 0;
  local_40 = 0;
  if (0x80 < local_3c) {
    local_3c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_68 + 0x10),0);
  }
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  if ((FScriptContainerElement *)local_68._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_68._0_8_);
  }
  return __return_storage_ptr__;
}

// operator<enum_ENiagaraScriptUsage,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_>_TTuple<enum_ENiagaraScriptUsage,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_> @ 148fe8c90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTuple<ENiagaraScriptUsage,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_> * __thiscall
TKeyInitializer<enum_ENiagaraScriptUsage_const_&>::
operator<enum_ENiagaraScriptUsage,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_>_TTuple<enum_ENiagaraScriptUsage,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_>
          (void *this,
          TTuple<ENiagaraScriptUsage,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_>
          *__return_storage_ptr__)

{
  int iVar1;
  undefined1 auStackY_98 [32];
  undefined1 local_68 [24];
  undefined8 uStack_50;
  void *local_48;
  undefined4 local_40;
  uint local_3c;
  undefined4 local_38;
  undefined4 local_34;
  ForElementType<FSetElementId> local_30;
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_98;
  local_30.InlineData[0] = '\0';
  local_30.InlineData[1] = '\0';
  local_30.InlineData[2] = '\0';
  local_30.InlineData[3] = '\0';
  local_30._padding_ = 0;
  local_68._16_8_ = 0;
  uStack_50 = 0;
  local_20 = 0;
  local_68._0_8_ = (FScriptContainerElement *)0x0;
  local_68._8_8_ = 0;
  local_48 = (void *)0x0;
  local_40 = 0;
  local_3c = 0x80;
  local_38 = 0xffffffff;
  local_34 = 0;
  local_30.SecondaryData = (ForElementType<FSetElementId>)0x0;
  *(undefined1 *)__return_storage_ptr__ = **(undefined1 **)this;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>
            ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)
             &__return_storage_ptr__->field_0x8,
             (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_68);
  local_20 = local_20 & 0xffffffff00000000;
  if (local_30.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_30.SecondaryData);
  }
  iVar1 = SUB84(local_68._8_8_,4);
  local_68._8_8_ = local_68._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,(ForAnyElementType *)local_68,0,(int *)(local_68 + 0xc));
  }
  local_38 = 0xffffffff;
  local_34 = 0;
  local_40 = 0;
  if (0x80 < local_3c) {
    local_3c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_68 + 0x10),0);
  }
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  if ((FScriptContainerElement *)local_68._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_68._0_8_);
  }
  return __return_storage_ptr__;
}

// operator<FNDCMapKey,int>_TTuple<FNDCMapKey,int> @ 14907f4e0

TTuple<FNDCMapKey,int> * __thiscall
TKeyInitializer<FNDCMapKey_const_&>::operator<FNDCMapKey,int>_TTuple<FNDCMapKey,int>
          (TKeyInitializer<FNDCMapKey_const_&> *this,TTuple<FNDCMapKey,int> *__return_storage_ptr__)

{
  int iVar1;
  FNDCMapKey *pFVar2;
  TTuple<FNDCMapKey,int> *_Dst;
  FNDCMapKey *_Src;
  
  pFVar2 = this->Key;
  *(undefined8 *)&__return_storage_ptr__->field_0x40 = 0;
  _Src = *(FNDCMapKey **)&(pFVar2->KeyData).AllocatorInstance.SecondaryData.field_0x0;
  iVar1 = (pFVar2->KeyData).ArrayNum;
  *(int *)&__return_storage_ptr__->field_0x48 = iVar1;
  if (_Src == (FNDCMapKey *)0x0) {
    _Src = pFVar2;
  }
  if (iVar1 == 0) {
    *(undefined4 *)&__return_storage_ptr__->field_0x4c = 0x40;
    *(undefined4 *)&__return_storage_ptr__->field_0x50 = 0;
    return __return_storage_ptr__;
  }
  UE::Core::Private::
  ReallocForCopy<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_char>_>
            (1,1,iVar1,0,(ForElementType<unsigned_char> *)__return_storage_ptr__,iVar1,
             (int *)&__return_storage_ptr__->field_0x4c);
  _Dst = __return_storage_ptr__;
  if (*(TTuple<FNDCMapKey,int> **)&__return_storage_ptr__->field_0x40 !=
      (TTuple<FNDCMapKey,int> *)0x0) {
    _Dst = *(TTuple<FNDCMapKey,int> **)&__return_storage_ptr__->field_0x40;
  }
  memcpy(_Dst,_Src,(longlong)iVar1);
  *(undefined4 *)&__return_storage_ptr__->field_0x50 = 0;
  return __return_storage_ptr__;
}

// operator<unsigned___int64,FNDIArrayInstanceData_RenderThread<unsigned_char>_>_TTuple<unsigned___int64,FNDIArrayInstanceData_RenderThread<unsigned_char>_> @ 14907f590

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TTuple<unsigned___int64,FNDIArrayInstanceData_RenderThread<unsigned_char>_> * __thiscall
TKeyInitializer<unsigned___int64_const_&>::
operator<unsigned___int64,FNDIArrayInstanceData_RenderThread<unsigned_char>_>_TTuple<unsigned___int64,FNDIArrayInstanceData_RenderThread<unsigned_char>_>
          (TKeyInitializer<unsigned___int64_const_&> *this,
          TTuple<unsigned___int64,FNDIArrayInstanceData_RenderThread<unsigned_char>_>
          *__return_storage_ptr__)

{
  FNDIArrayInstanceData_RenderThreadBase local_38;
  
  local_38.NumElements = -1;
  local_38.CountOffset = 0xffffffff;
  local_38.ArrayNumBytes = 0;
  local_38.DefaultElements = 0;
  local_38.ComputeInterface = (FNiagaraGpuComputeDispatchInterface *)0x0;
  local_38.ArrayBuffer.Reference = (FRHIBuffer *)0x0;
  local_38.ArrayUAV.Reference = (FRHIUnorderedAccessView *)0x0;
  local_38.ArraySRV.Reference = (FRHIShaderResourceView *)0x0;
  *(ulong64 *)__return_storage_ptr__ = *this->Key;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x18 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x28 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x30 = 0xffffffffffffffff;
  FNDIArrayInstanceData_RenderThreadBase::ReleaseData(&local_38);
  if (local_38.ArraySRV.Reference != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)local_38.ArraySRV.Reference);
  }
  if (local_38.ArrayUAV.Reference != (FRHIUnorderedAccessView *)0x0) {
    FRHIResource::Release((FRHIResource *)local_38.ArrayUAV.Reference);
  }
  if (local_38.ArrayBuffer.Reference != (FRHIBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)local_38.ArrayBuffer.Reference);
  }
  return __return_storage_ptr__;
}

// operator<unsigned___int64,FNDIArrayInstanceData_RenderThread<int>_>_TTuple<unsigned___int64,FNDIArrayInstanceData_RenderThread<int>_> @ 14907f630

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TTuple<unsigned___int64,FNDIArrayInstanceData_RenderThread<int>_> * __thiscall
TKeyInitializer<unsigned___int64_const_&>::
operator<unsigned___int64,FNDIArrayInstanceData_RenderThread<int>_>_TTuple<unsigned___int64,FNDIArrayInstanceData_RenderThread<int>_>
          (TKeyInitializer<unsigned___int64_const_&> *this,
          TTuple<unsigned___int64,FNDIArrayInstanceData_RenderThread<int>_> *__return_storage_ptr__)

{
  FNDIArrayInstanceData_RenderThreadBase local_38;
  
  local_38.NumElements = -1;
  local_38.CountOffset = 0xffffffff;
  local_38.ArrayNumBytes = 0;
  local_38.DefaultElements = 0;
  local_38.ComputeInterface = (FNiagaraGpuComputeDispatchInterface *)0x0;
  local_38.ArrayBuffer.Reference = (FRHIBuffer *)0x0;
  local_38.ArrayUAV.Reference = (FRHIUnorderedAccessView *)0x0;
  local_38.ArraySRV.Reference = (FRHIShaderResourceView *)0x0;
  *(ulong64 *)__return_storage_ptr__ = *this->Key;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x18 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x28 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x30 = 0xffffffffffffffff;
  FNDIArrayInstanceData_RenderThreadBase::ReleaseData(&local_38);
  if (local_38.ArraySRV.Reference != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)local_38.ArraySRV.Reference);
  }
  if (local_38.ArrayUAV.Reference != (FRHIUnorderedAccessView *)0x0) {
    FRHIResource::Release((FRHIResource *)local_38.ArrayUAV.Reference);
  }
  if (local_38.ArrayBuffer.Reference != (FRHIBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)local_38.ArrayBuffer.Reference);
  }
  return __return_storage_ptr__;
}

// operator<unsigned___int64,FNDIArrayInstanceData_RenderThread<float>_>_TTuple<unsigned___int64,FNDIArrayInstanceData_RenderThread<float>_> @ 14907f6d0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TTuple<unsigned___int64,FNDIArrayInstanceData_RenderThread<float>_> * __thiscall
TKeyInitializer<unsigned___int64_const_&>::
operator<unsigned___int64,FNDIArrayInstanceData_RenderThread<float>_>_TTuple<unsigned___int64,FNDIArrayInstanceData_RenderThread<float>_>
          (TKeyInitializer<unsigned___int64_const_&> *this,
          TTuple<unsigned___int64,FNDIArrayInstanceData_RenderThread<float>_>
          *__return_storage_ptr__)

{
  FNDIArrayInstanceData_RenderThreadBase local_38;
  
  local_38.NumElements = -1;
  local_38.CountOffset = 0xffffffff;
  local_38.ArrayNumBytes = 0;
  local_38.DefaultElements = 0;
  local_38.ComputeInterface = (FNiagaraGpuComputeDispatchInterface *)0x0;
  local_38.ArrayBuffer.Reference = (FRHIBuffer *)0x0;
  local_38.ArrayUAV.Reference = (FRHIUnorderedAccessView *)0x0;
  local_38.ArraySRV.Reference = (FRHIShaderResourceView *)0x0;
  *(ulong64 *)__return_storage_ptr__ = *this->Key;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x18 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x28 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x30 = 0xffffffffffffffff;
  FNDIArrayInstanceData_RenderThreadBase::ReleaseData(&local_38);
  if (local_38.ArraySRV.Reference != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)local_38.ArraySRV.Reference);
  }
  if (local_38.ArrayUAV.Reference != (FRHIUnorderedAccessView *)0x0) {
    FRHIResource::Release((FRHIResource *)local_38.ArrayUAV.Reference);
  }
  if (local_38.ArrayBuffer.Reference != (FRHIBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)local_38.ArrayBuffer.Reference);
  }
  return __return_storage_ptr__;
}

// operator<unsigned___int64,FNDIArrayInstanceData_RenderThread<UE::Math::TMatrix<float>_>_>_TTuple<unsigned___int64,FNDIArrayInstanceData_RenderThread<UE::Math::TMatrix<float>_>_> @ 14907f770

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TTuple<unsigned___int64,FNDIArrayInstanceData_RenderThread<UE::Math::TMatrix<float>_>_> * __thiscall
TKeyInitializer<unsigned___int64_const_&>::
operator<unsigned___int64,FNDIArrayInstanceData_RenderThread<UE::Math::TMatrix<float>_>_>_TTuple<unsigned___int64,FNDIArrayInstanceData_RenderThread<UE::Math::TMatrix<float>_>_>
          (TKeyInitializer<unsigned___int64_const_&> *this,
          TTuple<unsigned___int64,FNDIArrayInstanceData_RenderThread<UE::Math::TMatrix<float>_>_>
          *__return_storage_ptr__)

{
  FNDIArrayInstanceData_RenderThreadBase local_38;
  
  local_38.NumElements = -1;
  local_38.CountOffset = 0xffffffff;
  local_38.ArrayNumBytes = 0;
  local_38.DefaultElements = 0;
  local_38.ComputeInterface = (FNiagaraGpuComputeDispatchInterface *)0x0;
  local_38.ArrayBuffer.Reference = (FRHIBuffer *)0x0;
  local_38.ArrayUAV.Reference = (FRHIUnorderedAccessView *)0x0;
  local_38.ArraySRV.Reference = (FRHIShaderResourceView *)0x0;
  *(ulong64 *)__return_storage_ptr__ = *this->Key;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x18 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x28 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x30 = 0xffffffffffffffff;
  FNDIArrayInstanceData_RenderThreadBase::ReleaseData(&local_38);
  if (local_38.ArraySRV.Reference != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)local_38.ArraySRV.Reference);
  }
  if (local_38.ArrayUAV.Reference != (FRHIUnorderedAccessView *)0x0) {
    FRHIResource::Release((FRHIResource *)local_38.ArrayUAV.Reference);
  }
  if (local_38.ArrayBuffer.Reference != (FRHIBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)local_38.ArrayBuffer.Reference);
  }
  return __return_storage_ptr__;
}

// operator<unsigned___int64,FNDIArrayInstanceData_RenderThread<UE::Math::TQuat<float>_>_>_TTuple<unsigned___int64,FNDIArrayInstanceData_RenderThread<UE::Math::TQuat<float>_>_> @ 14907f810

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TTuple<unsigned___int64,FNDIArrayInstanceData_RenderThread<UE::Math::TQuat<float>_>_> * __thiscall
TKeyInitializer<unsigned___int64_const_&>::
operator<unsigned___int64,FNDIArrayInstanceData_RenderThread<UE::Math::TQuat<float>_>_>_TTuple<unsigned___int64,FNDIArrayInstanceData_RenderThread<UE::Math::TQuat<float>_>_>
          (TKeyInitializer<unsigned___int64_const_&> *this,
          TTuple<unsigned___int64,FNDIArrayInstanceData_RenderThread<UE::Math::TQuat<float>_>_>
          *__return_storage_ptr__)

{
  FNDIArrayInstanceData_RenderThreadBase local_38;
  
  local_38.NumElements = -1;
  local_38.CountOffset = 0xffffffff;
  local_38.ArrayNumBytes = 0;
  local_38.DefaultElements = 0;
  local_38.ComputeInterface = (FNiagaraGpuComputeDispatchInterface *)0x0;
  local_38.ArrayBuffer.Reference = (FRHIBuffer *)0x0;
  local_38.ArrayUAV.Reference = (FRHIUnorderedAccessView *)0x0;
  local_38.ArraySRV.Reference = (FRHIShaderResourceView *)0x0;
  *(ulong64 *)__return_storage_ptr__ = *this->Key;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x18 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x28 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x30 = 0xffffffffffffffff;
  FNDIArrayInstanceData_RenderThreadBase::ReleaseData(&local_38);
  if (local_38.ArraySRV.Reference != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)local_38.ArraySRV.Reference);
  }
  if (local_38.ArrayUAV.Reference != (FRHIUnorderedAccessView *)0x0) {
    FRHIResource::Release((FRHIResource *)local_38.ArrayUAV.Reference);
  }
  if (local_38.ArrayBuffer.Reference != (FRHIBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)local_38.ArrayBuffer.Reference);
  }
  return __return_storage_ptr__;
}

// operator<unsigned___int64,FNDIArrayInstanceData_RenderThread<UE::Math::TVector2<float>_>_>_TTuple<unsigned___int64,FNDIArrayInstanceData_RenderThread<UE::Math::TVector2<float>_>_> @ 14907f8b0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TTuple<unsigned___int64,FNDIArrayInstanceData_RenderThread<UE::Math::TVector2<float>_>_> *
__thiscall
TKeyInitializer<unsigned___int64_const_&>::
operator<unsigned___int64,FNDIArrayInstanceData_RenderThread<UE::Math::TVector2<float>_>_>_TTuple<unsigned___int64,FNDIArrayInstanceData_RenderThread<UE::Math::TVector2<float>_>_>
          (TKeyInitializer<unsigned___int64_const_&> *this,
          TTuple<unsigned___int64,FNDIArrayInstanceData_RenderThread<UE::Math::TVector2<float>_>_>
          *__return_storage_ptr__)

{
  FNDIArrayInstanceData_RenderThreadBase local_38;
  
  local_38.NumElements = -1;
  local_38.CountOffset = 0xffffffff;
  local_38.ArrayNumBytes = 0;
  local_38.DefaultElements = 0;
  local_38.ComputeInterface = (FNiagaraGpuComputeDispatchInterface *)0x0;
  local_38.ArrayBuffer.Reference = (FRHIBuffer *)0x0;
  local_38.ArrayUAV.Reference = (FRHIUnorderedAccessView *)0x0;
  local_38.ArraySRV.Reference = (FRHIShaderResourceView *)0x0;
  *(ulong64 *)__return_storage_ptr__ = *this->Key;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x18 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x28 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x30 = 0xffffffffffffffff;
  FNDIArrayInstanceData_RenderThreadBase::ReleaseData(&local_38);
  if (local_38.ArraySRV.Reference != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)local_38.ArraySRV.Reference);
  }
  if (local_38.ArrayUAV.Reference != (FRHIUnorderedAccessView *)0x0) {
    FRHIResource::Release((FRHIResource *)local_38.ArrayUAV.Reference);
  }
  if (local_38.ArrayBuffer.Reference != (FRHIBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)local_38.ArrayBuffer.Reference);
  }
  return __return_storage_ptr__;
}

// operator<unsigned___int64,FNDIArrayInstanceData_RenderThread<UE::Math::TVector4<float>_>_>_TTuple<unsigned___int64,FNDIArrayInstanceData_RenderThread<UE::Math::TVector4<float>_>_> @ 14907f950

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TTuple<unsigned___int64,FNDIArrayInstanceData_RenderThread<UE::Math::TVector4<float>_>_> *
__thiscall
TKeyInitializer<unsigned___int64_const_&>::
operator<unsigned___int64,FNDIArrayInstanceData_RenderThread<UE::Math::TVector4<float>_>_>_TTuple<unsigned___int64,FNDIArrayInstanceData_RenderThread<UE::Math::TVector4<float>_>_>
          (TKeyInitializer<unsigned___int64_const_&> *this,
          TTuple<unsigned___int64,FNDIArrayInstanceData_RenderThread<UE::Math::TVector4<float>_>_>
          *__return_storage_ptr__)

{
  FNDIArrayInstanceData_RenderThreadBase local_38;
  
  local_38.NumElements = -1;
  local_38.CountOffset = 0xffffffff;
  local_38.ArrayNumBytes = 0;
  local_38.DefaultElements = 0;
  local_38.ComputeInterface = (FNiagaraGpuComputeDispatchInterface *)0x0;
  local_38.ArrayBuffer.Reference = (FRHIBuffer *)0x0;
  local_38.ArrayUAV.Reference = (FRHIUnorderedAccessView *)0x0;
  local_38.ArraySRV.Reference = (FRHIShaderResourceView *)0x0;
  *(ulong64 *)__return_storage_ptr__ = *this->Key;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x18 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x28 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x30 = 0xffffffffffffffff;
  FNDIArrayInstanceData_RenderThreadBase::ReleaseData(&local_38);
  if (local_38.ArraySRV.Reference != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)local_38.ArraySRV.Reference);
  }
  if (local_38.ArrayUAV.Reference != (FRHIUnorderedAccessView *)0x0) {
    FRHIResource::Release((FRHIResource *)local_38.ArrayUAV.Reference);
  }
  if (local_38.ArrayBuffer.Reference != (FRHIBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)local_38.ArrayBuffer.Reference);
  }
  return __return_storage_ptr__;
}

// operator<unsigned___int64,FNDIArrayInstanceData_RenderThread<UE::Math::TVector<float>_>_>_TTuple<unsigned___int64,FNDIArrayInstanceData_RenderThread<UE::Math::TVector<float>_>_> @ 14907f9f0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TTuple<unsigned___int64,FNDIArrayInstanceData_RenderThread<UE::Math::TVector<float>_>_> * __thiscall
TKeyInitializer<unsigned___int64_const_&>::
operator<unsigned___int64,FNDIArrayInstanceData_RenderThread<UE::Math::TVector<float>_>_>_TTuple<unsigned___int64,FNDIArrayInstanceData_RenderThread<UE::Math::TVector<float>_>_>
          (TKeyInitializer<unsigned___int64_const_&> *this,
          TTuple<unsigned___int64,FNDIArrayInstanceData_RenderThread<UE::Math::TVector<float>_>_>
          *__return_storage_ptr__)

{
  FNDIArrayInstanceData_RenderThreadBase local_38;
  
  local_38.NumElements = -1;
  local_38.CountOffset = 0xffffffff;
  local_38.ArrayNumBytes = 0;
  local_38.DefaultElements = 0;
  local_38.ComputeInterface = (FNiagaraGpuComputeDispatchInterface *)0x0;
  local_38.ArrayBuffer.Reference = (FRHIBuffer *)0x0;
  local_38.ArrayUAV.Reference = (FRHIUnorderedAccessView *)0x0;
  local_38.ArraySRV.Reference = (FRHIShaderResourceView *)0x0;
  *(ulong64 *)__return_storage_ptr__ = *this->Key;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x18 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x28 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x30 = 0xffffffffffffffff;
  FNDIArrayInstanceData_RenderThreadBase::ReleaseData(&local_38);
  if (local_38.ArraySRV.Reference != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)local_38.ArraySRV.Reference);
  }
  if (local_38.ArrayUAV.Reference != (FRHIUnorderedAccessView *)0x0) {
    FRHIResource::Release((FRHIResource *)local_38.ArrayUAV.Reference);
  }
  if (local_38.ArrayBuffer.Reference != (FRHIBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)local_38.ArrayBuffer.Reference);
  }
  return __return_storage_ptr__;
}

// operator<unsigned___int64,FNDIArrayInstanceData_RenderThread<FLinearColor>_>_TTuple<unsigned___int64,FNDIArrayInstanceData_RenderThread<FLinearColor>_> @ 14907fa90

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TTuple<unsigned___int64,FNDIArrayInstanceData_RenderThread<FLinearColor>_> * __thiscall
TKeyInitializer<unsigned___int64_const_&>::
operator<unsigned___int64,FNDIArrayInstanceData_RenderThread<FLinearColor>_>_TTuple<unsigned___int64,FNDIArrayInstanceData_RenderThread<FLinearColor>_>
          (TKeyInitializer<unsigned___int64_const_&> *this,
          TTuple<unsigned___int64,FNDIArrayInstanceData_RenderThread<FLinearColor>_>
          *__return_storage_ptr__)

{
  FNDIArrayInstanceData_RenderThreadBase local_38;
  
  local_38.NumElements = -1;
  local_38.CountOffset = 0xffffffff;
  local_38.ArrayNumBytes = 0;
  local_38.DefaultElements = 0;
  local_38.ComputeInterface = (FNiagaraGpuComputeDispatchInterface *)0x0;
  local_38.ArrayBuffer.Reference = (FRHIBuffer *)0x0;
  local_38.ArrayUAV.Reference = (FRHIUnorderedAccessView *)0x0;
  local_38.ArraySRV.Reference = (FRHIShaderResourceView *)0x0;
  *(ulong64 *)__return_storage_ptr__ = *this->Key;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x18 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x28 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x30 = 0xffffffffffffffff;
  FNDIArrayInstanceData_RenderThreadBase::ReleaseData(&local_38);
  if (local_38.ArraySRV.Reference != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)local_38.ArraySRV.Reference);
  }
  if (local_38.ArrayUAV.Reference != (FRHIUnorderedAccessView *)0x0) {
    FRHIResource::Release((FRHIResource *)local_38.ArrayUAV.Reference);
  }
  if (local_38.ArrayBuffer.Reference != (FRHIBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)local_38.ArrayBuffer.Reference);
  }
  return __return_storage_ptr__;
}

// operator<unsigned___int64,FNDIArrayInstanceData_RenderThread<FNiagaraID>_>_TTuple<unsigned___int64,FNDIArrayInstanceData_RenderThread<FNiagaraID>_> @ 14907fb30

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TTuple<unsigned___int64,FNDIArrayInstanceData_RenderThread<FNiagaraID>_> * __thiscall
TKeyInitializer<unsigned___int64_const_&>::
operator<unsigned___int64,FNDIArrayInstanceData_RenderThread<FNiagaraID>_>_TTuple<unsigned___int64,FNDIArrayInstanceData_RenderThread<FNiagaraID>_>
          (TKeyInitializer<unsigned___int64_const_&> *this,
          TTuple<unsigned___int64,FNDIArrayInstanceData_RenderThread<FNiagaraID>_>
          *__return_storage_ptr__)

{
  FNDIArrayInstanceData_RenderThreadBase local_38;
  
  local_38.NumElements = -1;
  local_38.CountOffset = 0xffffffff;
  local_38.ArrayNumBytes = 0;
  local_38.DefaultElements = 0;
  local_38.ComputeInterface = (FNiagaraGpuComputeDispatchInterface *)0x0;
  local_38.ArrayBuffer.Reference = (FRHIBuffer *)0x0;
  local_38.ArrayUAV.Reference = (FRHIUnorderedAccessView *)0x0;
  local_38.ArraySRV.Reference = (FRHIShaderResourceView *)0x0;
  *(ulong64 *)__return_storage_ptr__ = *this->Key;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x18 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x28 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x30 = 0xffffffffffffffff;
  FNDIArrayInstanceData_RenderThreadBase::ReleaseData(&local_38);
  if (local_38.ArraySRV.Reference != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)local_38.ArraySRV.Reference);
  }
  if (local_38.ArrayUAV.Reference != (FRHIUnorderedAccessView *)0x0) {
    FRHIResource::Release((FRHIResource *)local_38.ArrayUAV.Reference);
  }
  if (local_38.ArrayBuffer.Reference != (FRHIBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)local_38.ArrayBuffer.Reference);
  }
  return __return_storage_ptr__;
}

// operator<unsigned___int64,FNDIArrayInstanceData_RenderThread<FNiagaraPosition>_>_TTuple<unsigned___int64,FNDIArrayInstanceData_RenderThread<FNiagaraPosition>_> @ 14907fbd0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TTuple<unsigned___int64,FNDIArrayInstanceData_RenderThread<FNiagaraPosition>_> * __thiscall
TKeyInitializer<unsigned___int64_const_&>::
operator<unsigned___int64,FNDIArrayInstanceData_RenderThread<FNiagaraPosition>_>_TTuple<unsigned___int64,FNDIArrayInstanceData_RenderThread<FNiagaraPosition>_>
          (TKeyInitializer<unsigned___int64_const_&> *this,
          TTuple<unsigned___int64,FNDIArrayInstanceData_RenderThread<FNiagaraPosition>_>
          *__return_storage_ptr__)

{
  FNDIArrayInstanceData_RenderThreadBase local_38;
  
  local_38.NumElements = -1;
  local_38.CountOffset = 0xffffffff;
  local_38.ArrayNumBytes = 0;
  local_38.DefaultElements = 0;
  local_38.ComputeInterface = (FNiagaraGpuComputeDispatchInterface *)0x0;
  local_38.ArrayBuffer.Reference = (FRHIBuffer *)0x0;
  local_38.ArrayUAV.Reference = (FRHIUnorderedAccessView *)0x0;
  local_38.ArraySRV.Reference = (FRHIShaderResourceView *)0x0;
  *(ulong64 *)__return_storage_ptr__ = *this->Key;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x18 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x28 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x30 = 0xffffffffffffffff;
  FNDIArrayInstanceData_RenderThreadBase::ReleaseData(&local_38);
  if (local_38.ArraySRV.Reference != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)local_38.ArraySRV.Reference);
  }
  if (local_38.ArrayUAV.Reference != (FRHIUnorderedAccessView *)0x0) {
    FRHIResource::Release((FRHIResource *)local_38.ArrayUAV.Reference);
  }
  if (local_38.ArrayBuffer.Reference != (FRHIBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)local_38.ArrayBuffer.Reference);
  }
  return __return_storage_ptr__;
}

// operator<unsigned___int64,FNDIArrayInstanceData_RenderThread<bool>_>_TTuple<unsigned___int64,FNDIArrayInstanceData_RenderThread<bool>_> @ 14907fc70

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TTuple<unsigned___int64,FNDIArrayInstanceData_RenderThread<bool>_> * __thiscall
TKeyInitializer<unsigned___int64_const_&>::
operator<unsigned___int64,FNDIArrayInstanceData_RenderThread<bool>_>_TTuple<unsigned___int64,FNDIArrayInstanceData_RenderThread<bool>_>
          (TKeyInitializer<unsigned___int64_const_&> *this,
          TTuple<unsigned___int64,FNDIArrayInstanceData_RenderThread<bool>_> *__return_storage_ptr__
          )

{
  FNDIArrayInstanceData_RenderThreadBase local_38;
  
  local_38.NumElements = -1;
  local_38.CountOffset = 0xffffffff;
  local_38.ArrayNumBytes = 0;
  local_38.DefaultElements = 0;
  local_38.ComputeInterface = (FNiagaraGpuComputeDispatchInterface *)0x0;
  local_38.ArrayBuffer.Reference = (FRHIBuffer *)0x0;
  local_38.ArrayUAV.Reference = (FRHIUnorderedAccessView *)0x0;
  local_38.ArraySRV.Reference = (FRHIShaderResourceView *)0x0;
  *(ulong64 *)__return_storage_ptr__ = *this->Key;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x18 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x28 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x30 = 0xffffffffffffffff;
  FNDIArrayInstanceData_RenderThreadBase::ReleaseData(&local_38);
  if (local_38.ArraySRV.Reference != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)local_38.ArraySRV.Reference);
  }
  if (local_38.ArrayUAV.Reference != (FRHIUnorderedAccessView *)0x0) {
    FRHIResource::Release((FRHIResource *)local_38.ArrayUAV.Reference);
  }
  if (local_38.ArrayBuffer.Reference != (FRHIBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)local_38.ArrayBuffer.Reference);
  }
  return __return_storage_ptr__;
}

// operator<unsigned___int64,FGrid2DCollectionRWInstanceData_RenderThread>_TTuple<unsigned___int64,FGrid2DCollectionRWInstanceData_RenderThread> @ 14915ccc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

TTuple<unsigned___int64,FGrid2DCollectionRWInstanceData_RenderThread> * __thiscall
TKeyInitializer<unsigned___int64_const_&>::
operator<unsigned___int64,FGrid2DCollectionRWInstanceData_RenderThread>_TTuple<unsigned___int64,FGrid2DCollectionRWInstanceData_RenderThread>
          (TKeyInitializer<unsigned___int64_const_&> *this,
          TTuple<unsigned___int64,FGrid2DCollectionRWInstanceData_RenderThread>
          *__return_storage_ptr__)

{
  ForElementType<TUniquePtr<FNiagaraPooledRWTexture,TDefaultDelete<FNiagaraPooledRWTexture>_>_>
  FVar1;
  undefined1 auStack_f8 [32];
  FGrid2DCollectionRWInstanceData_RenderThread local_d8;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_f8;
  local_d8.ClearBeforeNonIterationStage = true;
  local_d8._9_2_ = 0;
  local_d8._58_2_ = 0;
  local_d8._padding_ = 0;
  local_d8.Buffers.AllocatorInstance.InlineData[0] = '\0';
  local_d8.Buffers.AllocatorInstance.InlineData[1] = '\0';
  local_d8.Buffers.AllocatorInstance.InlineData[2] = '\0';
  local_d8.Buffers.AllocatorInstance.InlineData[3] = '\0';
  local_d8.Buffers.AllocatorInstance.InlineData[4] = '\0';
  local_d8.Buffers.AllocatorInstance.InlineData[5] = '\0';
  local_d8.Buffers.AllocatorInstance.InlineData[6] = '\0';
  local_d8.Buffers.AllocatorInstance.InlineData[7] = '\0';
  local_d8.Buffers.AllocatorInstance.InlineData[8] = '\0';
  local_d8.Buffers.AllocatorInstance.InlineData[9] = '\0';
  local_d8._11_1_ = 0;
  local_d8.PixelFormat.TypedValue = PF_Unknown;
  local_d8.PixelFormat.bIsSet = false;
  local_d8.Buffers.AllocatorInstance.InlineData[10] = '\0';
  local_d8.Buffers.AllocatorInstance.InlineData[0xb] = '\0';
  local_d8.Buffers.AllocatorInstance.InlineData[0xc] = '\0';
  local_d8.Buffers.AllocatorInstance.InlineData[0xd] = '\0';
  local_d8.Buffers.AllocatorInstance.InlineData[0xe] = '\0';
  local_d8.Buffers.AllocatorInstance.InlineData[0xf] = '\0';
  local_d8.SourceDIName.ComparisonIndex.Value = 0;
  local_d8.SourceDIName.Number = 0;
  local_d8.NumCells.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  local_d8.NumAttributes = 0;
  local_d8.Buffers.AllocatorInstance.SecondaryData =
       (ForElementType<TUniquePtr<FNiagaraPooledRWTexture,TDefaultDelete<FNiagaraPooledRWTexture>_>_>
        )0x0;
  local_d8.Buffers.ArrayNum = 0;
  local_d8.AttributeIndices.ArrayNum = 0;
  local_d8.AttributeIndices.ArrayMax = 0;
  local_d8.Vars.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d8.Vars.ArrayNum = 0;
  local_d8.Vars.ArrayMax = 0;
  local_d8.VarComponents.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d8.VarComponents.ArrayNum = 0;
  local_d8.VarComponents.ArrayMax = 0;
  local_d8.Offsets.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d8.Offsets.ArrayNum = 0;
  local_d8.Offsets.ArrayMax = 0;
  local_d8.OtherProxy = (FNiagaraDataInterfaceProxy *)0x0;
  local_d8.CellSize.field0_0x0._s_0 = UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  local_d8.Buffers.ArrayMax = 2;
  local_d8.WorldBBoxSize.field0_0x0._s_0 = UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  *(ulong64 *)__return_storage_ptr__ = *this->Key;
  local_d8.CurrentData = (FNiagaraPooledRWTexture *)0x0;
  local_d8.DestinationData = (FNiagaraPooledRWTexture *)0x0;
  local_d8.RenderTargetToCopyTo.Reference = (FRHITexture *)0x0;
  local_d8.AttributeIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FGrid2DCollectionRWInstanceData_RenderThread::FGrid2DCollectionRWInstanceData_RenderThread
            ((FGrid2DCollectionRWInstanceData_RenderThread *)&__return_storage_ptr__->field_0x8,
             &local_d8);
  if (local_d8.Offsets.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Offsets.AllocatorInstance.Data);
  }
  if (local_d8.VarComponents.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.VarComponents.AllocatorInstance.Data);
  }
  if (local_d8.Vars.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Vars.AllocatorInstance.Data);
  }
  if (local_d8.AttributeIndices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.AttributeIndices.AllocatorInstance.Data);
  }
  if (local_d8.RenderTargetToCopyTo.Reference != (FRHITexture *)0x0) {
    FRHIResource::Release((FRHIResource *)local_d8.RenderTargetToCopyTo.Reference);
  }
  FVar1 = (ForElementType<TUniquePtr<FNiagaraPooledRWTexture,TDefaultDelete<FNiagaraPooledRWTexture>_>_>
           )&local_d8.Buffers;
  if (local_d8.Buffers.AllocatorInstance.SecondaryData !=
      (ForElementType<TUniquePtr<FNiagaraPooledRWTexture,TDefaultDelete<FNiagaraPooledRWTexture>_>_>
      )0x0) {
    FVar1 = local_d8.Buffers.AllocatorInstance.SecondaryData;
  }
  DestructItems<TUniquePtr<FNiagaraPooledRWTexture,TDefaultDelete<FNiagaraPooledRWTexture>_>,int>
            ((TUniquePtr<FNiagaraPooledRWTexture,TDefaultDelete<FNiagaraPooledRWTexture>_> *)FVar1,
             local_d8.Buffers.ArrayNum);
  if (local_d8.Buffers.AllocatorInstance.SecondaryData !=
      (ForElementType<TUniquePtr<FNiagaraPooledRWTexture,TDefaultDelete<FNiagaraPooledRWTexture>_>_>
      )0x0) {
    FMemory::Free((void *)local_d8.Buffers.AllocatorInstance.SecondaryData);
  }
  return __return_storage_ptr__;
}

// operator<unsigned___int64,FGrid3DCollectionRWInstanceData_RenderThread>_TTuple<unsigned___int64,FGrid3DCollectionRWInstanceData_RenderThread> @ 14915ce10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

TTuple<unsigned___int64,FGrid3DCollectionRWInstanceData_RenderThread> * __thiscall
TKeyInitializer<unsigned___int64_const_&>::
operator<unsigned___int64,FGrid3DCollectionRWInstanceData_RenderThread>_TTuple<unsigned___int64,FGrid3DCollectionRWInstanceData_RenderThread>
          (TKeyInitializer<unsigned___int64_const_&> *this,
          TTuple<unsigned___int64,FGrid3DCollectionRWInstanceData_RenderThread>
          *__return_storage_ptr__)

{
  ForElementType<TUniquePtr<FNiagaraPooledRWTexture,TDefaultDelete<FNiagaraPooledRWTexture>_>_>
  FVar1;
  undefined1 auStack_148 [32];
  FGrid3DCollectionRWInstanceData_RenderThread local_128;
  ulonglong local_18;
  
  local_128.WorldBBoxSize.field0_0x0._16_8_ =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_128.CellSize.field0_0x0._8_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_128.CellSize.field0_0x0._0_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_18 = __security_cookie.value ^ (ulonglong)auStack_148;
  local_128.Buffers.AllocatorInstance.InlineData[0] = '\0';
  local_128.Buffers.AllocatorInstance.InlineData[1] = '\0';
  local_128.Buffers.AllocatorInstance.InlineData[2] = '\0';
  local_128.Buffers.AllocatorInstance.InlineData[3] = '\0';
  local_128.Buffers.AllocatorInstance.InlineData[4] = '\0';
  local_128.Buffers.AllocatorInstance.InlineData[5] = '\0';
  local_128.Buffers.AllocatorInstance.InlineData[6] = '\0';
  local_128.Buffers.AllocatorInstance.InlineData[7] = '\0';
  local_128.Buffers.AllocatorInstance.InlineData[8] = '\0';
  local_128.Buffers.AllocatorInstance.InlineData[9] = '\0';
  local_128.Buffers.AllocatorInstance.InlineData[10] = '\0';
  local_128.Buffers.AllocatorInstance.InlineData[0xb] = '\0';
  local_128.Buffers.AllocatorInstance.InlineData[0xc] = '\0';
  local_128.Buffers.AllocatorInstance.InlineData[0xd] = '\0';
  local_128.Buffers.AllocatorInstance.InlineData[0xe] = '\0';
  local_128.Buffers.AllocatorInstance.InlineData[0xf] = '\0';
  local_128._9_2_ = 0;
  local_128.NumCells.field0_0x0._0_8_ = ___xmm_00000001000000010000000100000001;
  local_128._20_8_ = _UNK_150631da8;
  local_128._11_1_ = 0;
  local_128._44_4_ = 0;
  local_128.PixelFormat.TypedValue = PF_Unknown;
  local_128.PixelFormat.bIsSet = false;
  local_128._99_4_ = 0;
  local_128._103_1_ = 0;
  local_128.PerAttributeData.NumBytes = 0;
  local_128.PerAttributeData._20_4_ = 0;
  local_128.SourceDIName.ComparisonIndex.Value = 0;
  local_128.SourceDIName.Number = 0;
  local_128.UseRGBATexture = false;
  local_128.AttributeIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_128.AttributeIndices.ArrayNum = 0;
  local_128.AttributeIndices.ArrayMax = 0;
  local_128.Vars.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_128.Vars.ArrayNum = 0;
  local_128.Vars.ArrayMax = 0;
  local_128.VarComponents.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_128.VarComponents.ArrayNum = 0;
  local_128.VarComponents.ArrayMax = 0;
  local_128.Offsets.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_128.Offsets.ArrayNum = 0;
  local_128.Offsets.ArrayMax = 0;
  local_128.Buffers.AllocatorInstance.SecondaryData =
       (ForElementType<TUniquePtr<FNiagaraPooledRWTexture,TDefaultDelete<FNiagaraPooledRWTexture>_>_>
        )0x0;
  local_128.Buffers.ArrayNum = 0;
  local_128.AttributeNames.ArrayNum = 0;
  local_128.AttributeNames.ArrayMax = 0;
  local_128.OtherProxy = (FNiagaraDataInterfaceProxy *)0x0;
  local_128.NumTiles.field0_0x0._4_8_ = ___xmm_00000000000000000000000100000001;
  local_128._36_8_ = _UNK_150744118;
  local_128.ClearBeforeNonIterationStage = true;
  local_128.CellSize.field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  *(ulong64 *)__return_storage_ptr__ = *this->Key;
  local_128.Buffers.ArrayMax = 2;
  local_128.WorldBBoxSize.field0_0x0._s_0.X = local_128.CellSize.field0_0x0._s_0.X;
  local_128.WorldBBoxSize.field0_0x0._s_0.Y = local_128.CellSize.field0_0x0._s_0.Y;
  local_128.CurrentData = (FNiagaraPooledRWTexture *)0x0;
  local_128.DestinationData = (FNiagaraPooledRWTexture *)0x0;
  local_128.PerAttributeData.Buffer.Reference = (FRHIBuffer *)0x0;
  local_128.PerAttributeData.SRV.Reference = (FRHIShaderResourceView *)0x0;
  local_128.RenderTargetToCopyTo.Reference = (FRHITexture *)0x0;
  local_128.AttributeNames.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FGrid3DCollectionRWInstanceData_RenderThread::FGrid3DCollectionRWInstanceData_RenderThread
            ((FGrid3DCollectionRWInstanceData_RenderThread *)&__return_storage_ptr__->field_0x8,
             &local_128);
  if (local_128.AttributeNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.AttributeNames.AllocatorInstance.Data);
  }
  if (local_128.RenderTargetToCopyTo.Reference != (FRHITexture *)0x0) {
    FRHIResource::Release((FRHIResource *)local_128.RenderTargetToCopyTo.Reference);
  }
  if (local_128.PerAttributeData.SRV.Reference != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)local_128.PerAttributeData.SRV.Reference);
  }
  if (local_128.PerAttributeData.Buffer.Reference != (FRHIBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)local_128.PerAttributeData.Buffer.Reference);
  }
  FVar1 = (ForElementType<TUniquePtr<FNiagaraPooledRWTexture,TDefaultDelete<FNiagaraPooledRWTexture>_>_>
           )&local_128.Buffers;
  if (local_128.Buffers.AllocatorInstance.SecondaryData !=
      (ForElementType<TUniquePtr<FNiagaraPooledRWTexture,TDefaultDelete<FNiagaraPooledRWTexture>_>_>
      )0x0) {
    FVar1 = local_128.Buffers.AllocatorInstance.SecondaryData;
  }
  DestructItems<TUniquePtr<FNiagaraPooledRWTexture,TDefaultDelete<FNiagaraPooledRWTexture>_>,int>
            ((TUniquePtr<FNiagaraPooledRWTexture,TDefaultDelete<FNiagaraPooledRWTexture>_> *)FVar1,
             local_128.Buffers.ArrayNum);
  if (local_128.Buffers.AllocatorInstance.SecondaryData !=
      (ForElementType<TUniquePtr<FNiagaraPooledRWTexture,TDefaultDelete<FNiagaraPooledRWTexture>_>_>
      )0x0) {
    FMemory::Free((void *)local_128.Buffers.AllocatorInstance.SecondaryData);
  }
  if (local_128.Offsets.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.Offsets.AllocatorInstance.Data);
  }
  if (local_128.VarComponents.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.VarComponents.AllocatorInstance.Data);
  }
  if (local_128.Vars.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.Vars.AllocatorInstance.Data);
  }
  if (local_128.AttributeIndices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.AttributeIndices.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// operator<unsigned___int64,FNDILandscapeData_RenderThread>_TTuple<unsigned___int64,FNDILandscapeData_RenderThread> @ 14915cfd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TTuple<unsigned___int64,FNDILandscapeData_RenderThread> * __thiscall
TKeyInitializer<unsigned___int64_const_&>::
operator<unsigned___int64,FNDILandscapeData_RenderThread>_TTuple<unsigned___int64,FNDILandscapeData_RenderThread>
          (TKeyInitializer<unsigned___int64_const_&> *this,
          TTuple<unsigned___int64,FNDILandscapeData_RenderThread> *__return_storage_ptr__)

{
  undefined1 auStack_468 [32];
  FNDILandscapeData_RenderThread local_448;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_468;
  local_448.BaseColorVirtualPage._padding_ = 0;
  local_448._padding_ = 0;
  local_448.HeightVirtualPage._padding_ = 0;
  local_448._padding_ = 0;
  local_448.NormalVirtualPage._padding_ = 0;
  local_448.BaseColorVirtualPage.PageTableUniforms[0].field0_0x0._0_8_ = 0;
  local_448.BaseColorVirtualPage.PageTableUniforms[0].field0_0x0._8_8_ = 0;
  local_448.BaseColorVirtualPage.PageTableUniforms[1].field0_0x0._0_8_ = 0;
  local_448.BaseColorVirtualPage.PageTableUniforms[1].field0_0x0._8_8_ = 0;
  local_448.HeightVirtualPage.PageTableUniforms[0].field0_0x0._0_8_ = 0;
  local_448.HeightVirtualPage.PageTableUniforms[0].field0_0x0._8_8_ = 0;
  local_448.HeightVirtualPage.PageTableUniforms[1].field0_0x0._0_8_ = 0;
  local_448.HeightVirtualPage.PageTableUniforms[1].field0_0x0._8_8_ = 0;
  local_448.NormalVirtualPage.PageTableUniforms[0].field0_0x0._0_8_ = 0;
  local_448.NormalVirtualPage.PageTableUniforms[0].field0_0x0._8_8_ = 0;
  local_448.NormalVirtualPage.PageTableUniforms[1].field0_0x0._0_8_ = 0;
  local_448.NormalVirtualPage.PageTableUniforms[1].field0_0x0._8_8_ = 0;
  memset(&local_448.NormalUnpackMode,0,0x180);
  local_448.BaseColorVirtualPage.WorldToUvParameters[0].field0_0x0._s_0.Z =
       ___xmm_3ff00000000000000000000000000000;
  local_448.BaseColorVirtualPage.WorldToUvParameters[0].field0_0x0._s_0.W = _UNK_15061cbc8;
  local_448.BaseColorVirtualPage.PageTableRef.Reference = (FRHITexture *)0x0;
  local_448.BaseColorVirtualPage.WorldToUvParameters[0].field0_0x0._s_0.X = 0.0;
  local_448.BaseColorVirtualPage.WorldToUvParameters[0].field0_0x0._s_0.Y = 0.0;
  local_448.BaseColorVirtualPage.WorldToUvParameters[1].field0_0x0._s_0.X = 0.0;
  local_448.BaseColorVirtualPage.WorldToUvParameters[1].field0_0x0._s_0.Y = 0.0;
  local_448.BaseColorVirtualPage.WorldToUvParameters[1].field0_0x0._s_0.Z =
       ___xmm_3ff00000000000000000000000000000;
  local_448.BaseColorVirtualPage.WorldToUvParameters[1].field0_0x0._s_0.W = _UNK_15061cbc8;
  local_448.BaseColorVirtualPage.WorldToUvParameters[2].field0_0x0._s_0.X = 0.0;
  local_448.BaseColorVirtualPage.WorldToUvParameters[2].field0_0x0._s_0.Y = 0.0;
  local_448.BaseColorVirtualPage.WorldToUvParameters[2].field0_0x0._s_0.Z =
       ___xmm_3ff00000000000000000000000000000;
  local_448.BaseColorVirtualPage.WorldToUvParameters[2].field0_0x0._s_0.W = _UNK_15061cbc8;
  local_448.BaseColorVirtualPage.WorldToUvParameters[3].field0_0x0._s_0.X = 0.0;
  local_448.BaseColorVirtualPage.WorldToUvParameters[3].field0_0x0._s_0.Y = 0.0;
  local_448.BaseColorVirtualPage.WorldToUvParameters[3].field0_0x0._s_0.Z =
       ___xmm_3ff00000000000000000000000000000;
  local_448.BaseColorVirtualPage.WorldToUvParameters[3].field0_0x0._s_0.W = _UNK_15061cbc8;
  local_448.BaseColorVirtualPage.AllocatedTexture = (IAllocatedVirtualTexture *)0x0;
  local_448.BaseColorVirtualPage.SizeInPages.field0_0x0 = (TIntPoint<unsigned_int>_u_0)0x0;
  local_448.BaseColorVirtualLayer.TextureSRV.Reference = (FRHIShaderResourceView *)0x0;
  local_448.BaseColorVirtualLayer.TextureUniforms.field0_0x0._0_8_ = 0;
  local_448.BaseColorVirtualLayer.TextureUniforms.field0_0x0._8_8_ = 0;
  local_448.HeightVirtualPage.PageTableRef.Reference = (FRHITexture *)0x0;
  local_448.HeightVirtualPage.WorldToUvParameters[0].field0_0x0._s_0.X = 0.0;
  local_448.HeightVirtualPage.WorldToUvParameters[0].field0_0x0._s_0.Y = 0.0;
  local_448.HeightVirtualPage.WorldToUvParameters[0].field0_0x0._s_0.Z =
       ___xmm_3ff00000000000000000000000000000;
  local_448.HeightVirtualPage.WorldToUvParameters[0].field0_0x0._s_0.W = _UNK_15061cbc8;
  local_448.HeightVirtualPage.WorldToUvParameters[1].field0_0x0._s_0.X = 0.0;
  local_448.HeightVirtualPage.WorldToUvParameters[1].field0_0x0._s_0.Y = 0.0;
  local_448.HeightVirtualPage.WorldToUvParameters[1].field0_0x0._s_0.Z =
       ___xmm_3ff00000000000000000000000000000;
  local_448.HeightVirtualPage.WorldToUvParameters[1].field0_0x0._s_0.W = _UNK_15061cbc8;
  local_448.HeightVirtualPage.WorldToUvParameters[2].field0_0x0._s_0.X = 0.0;
  local_448.HeightVirtualPage.WorldToUvParameters[2].field0_0x0._s_0.Y = 0.0;
  local_448.HeightVirtualPage.WorldToUvParameters[2].field0_0x0._s_0.Z =
       ___xmm_3ff00000000000000000000000000000;
  local_448.HeightVirtualPage.WorldToUvParameters[2].field0_0x0._s_0.W = _UNK_15061cbc8;
  local_448.HeightVirtualPage.WorldToUvParameters[3].field0_0x0._s_0.X = 0.0;
  local_448.HeightVirtualPage.WorldToUvParameters[3].field0_0x0._s_0.Y = 0.0;
  local_448.HeightVirtualPage.WorldToUvParameters[3].field0_0x0._s_0.Z =
       ___xmm_3ff00000000000000000000000000000;
  local_448.HeightVirtualPage.WorldToUvParameters[3].field0_0x0._s_0.W = _UNK_15061cbc8;
  local_448.HeightVirtualPage.AllocatedTexture = (IAllocatedVirtualTexture *)0x0;
  local_448.HeightVirtualPage.SizeInPages.field0_0x0 = (TIntPoint<unsigned_int>_u_0)0x0;
  local_448.HeightVirtualLayer.TextureSRV.Reference = (FRHIShaderResourceView *)0x0;
  local_448.HeightVirtualLayer.TextureUniforms.field0_0x0._0_8_ = 0;
  local_448.HeightVirtualLayer.TextureUniforms.field0_0x0._8_8_ = 0;
  local_448.NormalVirtualPage.PageTableRef.Reference = (FRHITexture *)0x0;
  local_448.NormalVirtualPage.WorldToUvParameters[0].field0_0x0._s_0.X = 0.0;
  local_448.NormalVirtualPage.WorldToUvParameters[0].field0_0x0._s_0.Y = 0.0;
  local_448.NormalVirtualPage.WorldToUvParameters[0].field0_0x0._s_0.Z =
       ___xmm_3ff00000000000000000000000000000;
  local_448.NormalVirtualPage.WorldToUvParameters[0].field0_0x0._s_0.W = _UNK_15061cbc8;
  local_448.NormalVirtualPage.WorldToUvParameters[1].field0_0x0._s_0.X = 0.0;
  local_448.NormalVirtualPage.WorldToUvParameters[1].field0_0x0._s_0.Y = 0.0;
  local_448.NormalVirtualPage.WorldToUvParameters[1].field0_0x0._s_0.Z =
       ___xmm_3ff00000000000000000000000000000;
  local_448.NormalVirtualPage.WorldToUvParameters[1].field0_0x0._s_0.W = _UNK_15061cbc8;
  local_448.NormalVirtualPage.WorldToUvParameters[2].field0_0x0._s_0.X = 0.0;
  local_448.NormalVirtualPage.WorldToUvParameters[2].field0_0x0._s_0.Y = 0.0;
  local_448.NormalVirtualPage.WorldToUvParameters[2].field0_0x0._s_0.Z =
       ___xmm_3ff00000000000000000000000000000;
  local_448.NormalVirtualPage.WorldToUvParameters[2].field0_0x0._s_0.W = _UNK_15061cbc8;
  local_448.NormalVirtualPage.WorldToUvParameters[3].field0_0x0._s_0.X = 0.0;
  local_448.NormalVirtualPage.WorldToUvParameters[3].field0_0x0._s_0.Y = 0.0;
  local_448.NormalVirtualPage.WorldToUvParameters[3].field0_0x0._s_0.Z =
       ___xmm_3ff00000000000000000000000000000;
  local_448.NormalVirtualPage.WorldToUvParameters[3].field0_0x0._s_0.W = _UNK_15061cbc8;
  local_448.NormalVirtualPage.AllocatedTexture = (IAllocatedVirtualTexture *)0x0;
  local_448.NormalVirtualPage.SizeInPages.field0_0x0 = (TIntPoint<unsigned_int>_u_0)0x0;
  local_448.NormalVirtualLayer0.TextureSRV.Reference = (FRHIShaderResourceView *)0x0;
  local_448.NormalVirtualLayer0.TextureUniforms.field0_0x0._0_8_ = 0;
  local_448.NormalVirtualLayer0.TextureUniforms.field0_0x0._8_8_ = 0;
  local_448.NormalVirtualLayer1.TextureSRV.Reference = (FRHIShaderResourceView *)0x0;
  local_448.NormalVirtualLayer1.TextureUniforms.field0_0x0._0_8_ = 0;
  local_448.NormalVirtualLayer1.TextureUniforms.field0_0x0._8_8_ = 0;
  FNDILandscapeData_GameToRenderThread::FNDILandscapeData_GameToRenderThread
            (&local_448.LandscapeData);
  *(ulong64 *)__return_storage_ptr__ = *this->Key;
  FNDILandscapeData_RenderThread::FNDILandscapeData_RenderThread
            ((FNDILandscapeData_RenderThread *)&__return_storage_ptr__->field_0x10,&local_448);
  if (local_448.LandscapeData.RegionRequests.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_448.LandscapeData.RegionRequests.AllocatorInstance.Data);
  }
  if (local_448.NormalVirtualLayer1.TextureSRV.Reference != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)local_448.NormalVirtualLayer1.TextureSRV.Reference);
  }
  if (local_448.NormalVirtualLayer0.TextureSRV.Reference != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)local_448.NormalVirtualLayer0.TextureSRV.Reference);
  }
  if (local_448.NormalVirtualPage.PageTableRef.Reference != (FRHITexture *)0x0) {
    FRHIResource::Release((FRHIResource *)local_448.NormalVirtualPage.PageTableRef.Reference);
  }
  if (local_448.HeightVirtualLayer.TextureSRV.Reference != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)local_448.HeightVirtualLayer.TextureSRV.Reference);
  }
  if (local_448.HeightVirtualPage.PageTableRef.Reference != (FRHITexture *)0x0) {
    FRHIResource::Release((FRHIResource *)local_448.HeightVirtualPage.PageTableRef.Reference);
  }
  if (local_448.BaseColorVirtualLayer.TextureSRV.Reference != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)local_448.BaseColorVirtualLayer.TextureSRV.Reference);
  }
  if (local_448.BaseColorVirtualPage.PageTableRef.Reference != (FRHITexture *)0x0) {
    FRHIResource::Release((FRHIResource *)local_448.BaseColorVirtualPage.PageTableRef.Reference);
  }
  return __return_storage_ptr__;
}

// operator<unsigned___int64,FNDINeighborGrid3DInstanceData_RT>_TTuple<unsigned___int64,FNDINeighborGrid3DInstanceData_RT> @ 149199b00

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

TTuple<unsigned___int64,FNDINeighborGrid3DInstanceData_RT> * __thiscall
TKeyInitializer<unsigned___int64_const_&>::
operator<unsigned___int64,FNDINeighborGrid3DInstanceData_RT>_TTuple<unsigned___int64,FNDINeighborGrid3DInstanceData_RT>
          (TKeyInitializer<unsigned___int64_const_&> *this,
          TTuple<unsigned___int64,FNDINeighborGrid3DInstanceData_RT> *__return_storage_ptr__)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  FNiagaraPooledRWBuffer FStack_70;
  FNiagaraPooledRWBuffer FStack_40;
  
  uVar7 = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
  uVar6 = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_;
  uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  FStack_70.PixelFormat = PF_Unknown;
  FStack_70._9_7_ = 0;
  FStack_40.PixelFormat = PF_Unknown;
  FStack_40._9_7_ = 0;
  FStack_70.Buffer.Reference = (FRDGPooledBuffer *)0x0;
  FStack_40.Buffer.Reference = (FRDGPooledBuffer *)0x0;
  FStack_70.TransientRDGBuffer = (FRDGBuffer *)0x0;
  FStack_70.TransientRDGSRV = (FRDGBufferSRV *)0x0;
  FStack_70.TransientRDGUAV = (FRDGBufferUAV *)0x0;
  FStack_70.NumBytes = 0;
  FStack_40.TransientRDGBuffer = (FRDGBuffer *)0x0;
  FStack_40.TransientRDGSRV = (FRDGBufferSRV *)0x0;
  FStack_40.TransientRDGUAV = (FRDGBufferUAV *)0x0;
  FStack_40.NumBytes = 0;
  *(ulong64 *)__return_storage_ptr__ = *this->Key;
  *(undefined8 *)&__return_storage_ptr__->field_0xc = uVar6;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = uVar3;
  *(undefined8 *)&__return_storage_ptr__->field_0x28 = uVar4;
  *(undefined4 *)&__return_storage_ptr__->field_0x14 = uVar7;
  *(undefined8 *)&__return_storage_ptr__->field_0x30 = uVar5;
  __return_storage_ptr__->field_0x8 = 1;
  *(undefined8 *)&__return_storage_ptr__->field_0x18 = 0;
  __return_storage_ptr__->field_0x38 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x40 = 0;
  __return_storage_ptr__->field_0x48 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x50 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x58 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x60 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x68 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x70 = 0;
  __return_storage_ptr__->field_0x78 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x80 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x88 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x90 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x98 = 0;
  FNiagaraPooledRWBuffer::Release(&FStack_40);
  if (FStack_40.Buffer.Reference != (FRDGPooledBuffer *)0x0) {
    plVar1 = &(FStack_40.Buffer.Reference)->_padding_;
    LOCK();
    lVar2 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar2 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)(FStack_40.Buffer.Reference)->_padding_)(FStack_40.Buffer.Reference,1);
    }
  }
  FNiagaraPooledRWBuffer::Release(&FStack_70);
  if (FStack_70.Buffer.Reference != (FRDGPooledBuffer *)0x0) {
    plVar1 = &(FStack_70.Buffer.Reference)->_padding_;
    LOCK();
    lVar2 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar2 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)(FStack_70.Buffer.Reference)->_padding_)(FStack_70.Buffer.Reference,1);
    }
  }
  return __return_storage_ptr__;
}

// operator<unsigned___int64,FNDIParticleRead_RenderInstanceData>_TTuple<unsigned___int64,FNDIParticleRead_RenderInstanceData> @ 149199c90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

TTuple<unsigned___int64,FNDIParticleRead_RenderInstanceData> * __thiscall
TKeyInitializer<unsigned___int64_const_&>::
operator<unsigned___int64,FNDIParticleRead_RenderInstanceData>_TTuple<unsigned___int64,FNDIParticleRead_RenderInstanceData>
          (TKeyInitializer<unsigned___int64_const_&> *this,
          TTuple<unsigned___int64,FNDIParticleRead_RenderInstanceData> *__return_storage_ptr__)

{
  FNDIParticleRead_RenderInstanceData local_58;
  
  local_58.AcquireTagRegisterIndex = -1;
  local_58.DebugSourceName.Data.ArrayNum = 0;
  local_58.DebugSourceName.Data.ArrayMax = 0;
  local_58.AttributeIndices.ArrayNum = 0;
  local_58.AttributeIndices.ArrayMax = 0;
  local_58.AttributeCompressed.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.AttributeCompressed.ArrayNum = 0;
  local_58.AttributeCompressed.ArrayMax = 0;
  local_58.IsLocalSpace = 0;
  local_58.bWarnFailedToFindAcquireTag = 1;
  local_58.bSourceEmitterNotGPUErrorShown = 0;
  local_58.SourceEmitterGPUContext = (FNiagaraComputeExecutionContext *)0x0;
  local_58.DebugSourceName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.CachedDataSet = (FNiagaraDataSet *)0x0;
  local_58.AttributeIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(ulong64 *)__return_storage_ptr__ = *this->Key;
  FNDIParticleRead_RenderInstanceData::FNDIParticleRead_RenderInstanceData
            ((FNDIParticleRead_RenderInstanceData *)&__return_storage_ptr__->field_0x8,&local_58);
  if (local_58.AttributeCompressed.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.AttributeCompressed.AllocatorInstance.Data);
  }
  if (local_58.AttributeIndices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.AttributeIndices.AllocatorInstance.Data);
  }
  if (local_58.DebugSourceName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.DebugSourceName.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// operator<unsigned___int64,FNDIRigidMeshCollisionProxy::FRenderThreadData>_TTuple<unsigned___int64,FNDIRigidMeshCollisionProxy::FRenderThreadData> @ 149199d30

TTuple<unsigned___int64,FNDIRigidMeshCollisionProxy::FRenderThreadData> * __thiscall
TKeyInitializer<unsigned___int64_const_&>::
operator<unsigned___int64,FNDIRigidMeshCollisionProxy::FRenderThreadData>_TTuple<unsigned___int64,FNDIRigidMeshCollisionProxy::FRenderThreadData>
          (TKeyInitializer<unsigned___int64_const_&> *this,
          TTuple<unsigned___int64,FNDIRigidMeshCollisionProxy::FRenderThreadData>
          *__return_storage_ptr__)

{
  FRenderThreadData local_b8;
  
  local_b8.MaxPrimitiveCount = 0;
  local_b8._116_4_ = 0;
  local_b8.CombinedBBoxWorldMax.field0_0x0._4_8_ = 0;
  local_b8.ElementOffsets.BoxOffset = 0;
  local_b8.ElementOffsets.SphereOffset = 0;
  local_b8.ElementOffsets.CapsuleOffset = 0;
  local_b8.ElementOffsets.NumElements = 0;
  local_b8.WorldTransform.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.WorldTransform.ArrayNum = 0;
  local_b8.WorldTransform.ArrayMax = 0;
  local_b8.InverseTransform.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.InverseTransform.ArrayNum = 0;
  local_b8.InverseTransform.ArrayMax = 0;
  local_b8.ElementExtent.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.ElementExtent.ArrayNum = 0;
  local_b8.ElementExtent.ArrayMax = 0;
  local_b8.MeshScale.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.MeshScale.ArrayNum = 0;
  local_b8.MeshScale.ArrayMax = 0;
  local_b8.PhysicsType.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.PhysicsType.ArrayNum = 0;
  local_b8.PhysicsType.ArrayMax = 0;
  local_b8.ComponentIdIndex.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.ComponentIdIndex.ArrayNum = 0;
  local_b8.ComponentIdIndex.ArrayMax = 0;
  local_b8.UniqueComponentIds.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.UniqueComponentIds.ArrayNum = 0;
  local_b8.UniqueComponentIds.ArrayMax = 0;
  local_b8.AssetBuffer = (FNDIRigidMeshCollisionBuffer *)0x0;
  local_b8.CombinedBBoxWorldMin.field0_0x0._0_8_ = 0;
  local_b8._152_8_ = 0;
  *(ulong64 *)__return_storage_ptr__ = *this->Key;
  FNDIRigidMeshCollisionProxy::FRenderThreadData::FRenderThreadData
            ((FRenderThreadData *)&__return_storage_ptr__->field_0x8,&local_b8);
  if (local_b8.UniqueComponentIds.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.UniqueComponentIds.AllocatorInstance.Data);
  }
  if (local_b8.ComponentIdIndex.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.ComponentIdIndex.AllocatorInstance.Data);
  }
  if (local_b8.PhysicsType.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.PhysicsType.AllocatorInstance.Data);
  }
  if (local_b8.MeshScale.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.MeshScale.AllocatorInstance.Data);
  }
  if (local_b8.ElementExtent.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.ElementExtent.AllocatorInstance.Data);
  }
  if (local_b8.InverseTransform.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.InverseTransform.AllocatorInstance.Data);
  }
  if (local_b8.WorldTransform.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.WorldTransform.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// operator<unsigned___int64,RasterizationGrid3DRWInstanceData>_TTuple<unsigned___int64,RasterizationGrid3DRWInstanceData> @ 149199e30

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

TTuple<unsigned___int64,RasterizationGrid3DRWInstanceData> * __thiscall
TKeyInitializer<unsigned___int64_const_&>::
operator<unsigned___int64,RasterizationGrid3DRWInstanceData>_TTuple<unsigned___int64,RasterizationGrid3DRWInstanceData>
          (TKeyInitializer<unsigned___int64_const_&> *this,
          TTuple<unsigned___int64,RasterizationGrid3DRWInstanceData> *__return_storage_ptr__)

{
  RasterizationGrid3DRWInstanceData local_78;
  
  local_78._1_2_ = 0;
  local_78._3_1_ = 0;
  local_78._41_4_ = 0;
  local_78._45_2_ = 0;
  local_78._47_1_ = 0;
  local_78.PerAttributeData.NumBytes = 0;
  local_78.PerAttributeData._20_4_ = 0;
  local_78.NumCells.field0_0x0._s_0.Z = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
  local_78.NumTiles.field0_0x0._s_0.Z = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
  local_78.NumCells.field0_0x0._0_8_ = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_;
  local_78.NumTiles.field0_0x0._0_8_ = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_;
  local_78.TotalNumAttributes = 0;
  local_78.Precision = 0.0;
  local_78.ResetValue = 0;
  local_78.NeedsRealloc = false;
  local_78.PerAttributeData.SRV.Reference = (FRHIShaderResourceView *)0x0;
  local_78.ClearBeforeNonIterationStage = true;
  local_78.RasterizationTexture.Texture.Reference = (IPooledRenderTarget *)0x0;
  local_78.RasterizationTexture.TransientRDGTexture = (FRDGTexture *)0x0;
  local_78.RasterizationTexture.TransientRDGSRV = (FRDGTextureSRV *)0x0;
  local_78.RasterizationTexture.TransientRDGUAV = (FRDGTextureUAV *)0x0;
  local_78.RasterizationTexture.NumBytes = 0;
  local_78.PerAttributeData.Buffer.Reference = (FRHIBuffer *)0x0;
  *(ulong64 *)__return_storage_ptr__ = *this->Key;
  RasterizationGrid3DRWInstanceData::RasterizationGrid3DRWInstanceData
            ((RasterizationGrid3DRWInstanceData *)&__return_storage_ptr__->field_0x8,&local_78);
  if (local_78.PerAttributeData.SRV.Reference != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)local_78.PerAttributeData.SRV.Reference);
  }
  if (local_78.PerAttributeData.Buffer.Reference != (FRHIBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)local_78.PerAttributeData.Buffer.Reference);
  }
  FNiagaraPooledRWTexture::Release(&local_78.RasterizationTexture);
  if (local_78.RasterizationTexture.Texture.Reference != (IPooledRenderTarget *)0x0) {
    (**(code **)((local_78.RasterizationTexture.Texture.Reference)->_padding_ + 0x38))();
  }
  return __return_storage_ptr__;
}

// operator<unsigned___int64,FNDISpline_InstanceData_RenderThread>_TTuple<unsigned___int64,FNDISpline_InstanceData_RenderThread> @ 1491eedf0

TTuple<unsigned___int64,FNDISpline_InstanceData_RenderThread> * __thiscall
TKeyInitializer<unsigned___int64_const_&>::
operator<unsigned___int64,FNDISpline_InstanceData_RenderThread>_TTuple<unsigned___int64,FNDISpline_InstanceData_RenderThread>
          (TKeyInitializer<unsigned___int64_const_&> *this,
          TTuple<unsigned___int64,FNDISpline_InstanceData_RenderThread> *__return_storage_ptr__)

{
  FNDISpline_InstanceData_RenderThread local_188;
  
  memset(&local_188,0,0x130);
  local_188.SplinePositionsLUT.NumBytes = 0;
  local_188.SplinePositionsLUT._20_4_ = 0;
  local_188.SplineScalesLUT.NumBytes = 0;
  local_188.SplineScalesLUT._20_4_ = 0;
  local_188.SplineRotationsLUT._20_4_ = 0;
  local_188._376_4_ = 0;
  local_188._380_4_ = 0;
  local_188.SplineScalesLUT.Buffer.Reference = (FRHIBuffer *)0x0;
  local_188.SplineScalesLUT.SRV.Reference = (FRHIShaderResourceView *)0x0;
  local_188.SplineRotationsLUT.NumBytes = 0;
  local_188.SplinePositionsLUT.Buffer.Reference = (FRHIBuffer *)0x0;
  local_188.SplinePositionsLUT.SRV.Reference = (FRHIShaderResourceView *)0x0;
  local_188.SplineRotationsLUT.Buffer.Reference = (FRHIBuffer *)0x0;
  local_188.SplineRotationsLUT.SRV.Reference = (FRHIShaderResourceView *)0x0;
  *(ulong64 *)__return_storage_ptr__ = *this->Key;
  FNDISpline_InstanceData_RenderThread::FNDISpline_InstanceData_RenderThread
            ((FNDISpline_InstanceData_RenderThread *)&__return_storage_ptr__->field_0x10,&local_188)
  ;
  FNDISpline_InstanceData_RenderThread::Reset(&local_188);
  if (local_188.SplineRotationsLUT.SRV.Reference != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)local_188.SplineRotationsLUT.SRV.Reference);
  }
  if (local_188.SplineRotationsLUT.Buffer.Reference != (FRHIBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)local_188.SplineRotationsLUT.Buffer.Reference);
  }
  if (local_188.SplineScalesLUT.SRV.Reference != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)local_188.SplineScalesLUT.SRV.Reference);
  }
  if (local_188.SplineScalesLUT.Buffer.Reference != (FRHIBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)local_188.SplineScalesLUT.Buffer.Reference);
  }
  if (local_188.SplinePositionsLUT.SRV.Reference != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)local_188.SplinePositionsLUT.SRV.Reference);
  }
  if (local_188.SplinePositionsLUT.Buffer.Reference != (FRHIBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)local_188.SplinePositionsLUT.Buffer.Reference);
  }
  return __return_storage_ptr__;
}

// operator<unsigned___int64,FNiagaraDISkeletalMeshPassedDataToRT>_TTuple<unsigned___int64,FNiagaraDISkeletalMeshPassedDataToRT> @ 1491eef10

TTuple<unsigned___int64,FNiagaraDISkeletalMeshPassedDataToRT> * __thiscall
TKeyInitializer<unsigned___int64_const_&>::
operator<unsigned___int64,FNiagaraDISkeletalMeshPassedDataToRT>_TTuple<unsigned___int64,FNiagaraDISkeletalMeshPassedDataToRT>
          (TKeyInitializer<unsigned___int64_const_&> *this,
          TTuple<unsigned___int64,FNiagaraDISkeletalMeshPassedDataToRT> *__return_storage_ptr__)

{
  undefined8 uVar1;
  undefined4 uVar2;
  float fVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  uVar10 = UE::Math::TMatrix<float>::Identity.M[3]._8_8_;
  uVar9 = UE::Math::TMatrix<float>::Identity.M[3]._0_8_;
  uVar8 = UE::Math::TMatrix<float>::Identity.M[2]._8_8_;
  uVar7 = UE::Math::TMatrix<float>::Identity.M[2]._0_8_;
  uVar6 = UE::Math::TMatrix<float>::Identity.M[1]._8_8_;
  uVar5 = UE::Math::TMatrix<float>::Identity.M[1]._0_8_;
  uVar4 = UE::Math::TMatrix<float>::Identity.M[0]._8_8_;
  uVar12 = UE::Math::TMatrix<float>::Identity.M[0]._0_8_;
  uVar2 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  *(ulong64 *)__return_storage_ptr__ = *this->Key;
  uStack_14 = (undefined4)uVar1;
  uStack_10 = (undefined4)((ulonglong)uVar1 >> 0x20);
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x18 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x28 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x30 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x38 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x40 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x48 = 0;
  uVar11 = UE::Math::TMatrix<float>::Identity.M[0]._0_8_;
  UE::Math::TMatrix<float>::Identity.M[0][0] = (float)uVar12;
  UE::Math::TMatrix<float>::Identity.M[0][1] = SUB84(uVar12,4);
  fVar3 = UE::Math::TMatrix<float>::Identity.M[0][1];
  *(float *)&__return_storage_ptr__->field_0x50 = UE::Math::TMatrix<float>::Identity.M[0][0];
  UE::Math::TMatrix<float>::Identity.M[0]._0_8_ = uVar11;
  uVar11 = UE::Math::TMatrix<float>::Identity.M[0]._8_8_;
  *(float *)&__return_storage_ptr__->field_0x54 = fVar3;
  UE::Math::TMatrix<float>::Identity.M[0][2] = (float)uVar4;
  UE::Math::TMatrix<float>::Identity.M[0][3] = SUB84(uVar4,4);
  fVar3 = UE::Math::TMatrix<float>::Identity.M[0][3];
  *(float *)&__return_storage_ptr__->field_0x58 = UE::Math::TMatrix<float>::Identity.M[0][2];
  UE::Math::TMatrix<float>::Identity.M[0]._8_8_ = uVar11;
  uVar11 = UE::Math::TMatrix<float>::Identity.M[1]._0_8_;
  *(float *)&__return_storage_ptr__->field_0x5c = fVar3;
  UE::Math::TMatrix<float>::Identity.M[1][0] = (float)uVar5;
  UE::Math::TMatrix<float>::Identity.M[1][1] = SUB84(uVar5,4);
  fVar3 = UE::Math::TMatrix<float>::Identity.M[1][1];
  *(float *)&__return_storage_ptr__->field_0x60 = UE::Math::TMatrix<float>::Identity.M[1][0];
  UE::Math::TMatrix<float>::Identity.M[1]._0_8_ = uVar11;
  uVar11 = UE::Math::TMatrix<float>::Identity.M[1]._8_8_;
  *(float *)&__return_storage_ptr__->field_0x64 = fVar3;
  UE::Math::TMatrix<float>::Identity.M[1][2] = (float)uVar6;
  UE::Math::TMatrix<float>::Identity.M[1][3] = SUB84(uVar6,4);
  fVar3 = UE::Math::TMatrix<float>::Identity.M[1][3];
  *(float *)&__return_storage_ptr__->field_0x68 = UE::Math::TMatrix<float>::Identity.M[1][2];
  UE::Math::TMatrix<float>::Identity.M[1]._8_8_ = uVar11;
  uVar11 = UE::Math::TMatrix<float>::Identity.M[2]._0_8_;
  *(float *)&__return_storage_ptr__->field_0x6c = fVar3;
  UE::Math::TMatrix<float>::Identity.M[2][0] = (float)uVar7;
  UE::Math::TMatrix<float>::Identity.M[2][1] = SUB84(uVar7,4);
  fVar3 = UE::Math::TMatrix<float>::Identity.M[2][1];
  *(float *)&__return_storage_ptr__->field_0x70 = UE::Math::TMatrix<float>::Identity.M[2][0];
  UE::Math::TMatrix<float>::Identity.M[2]._0_8_ = uVar11;
  uVar11 = UE::Math::TMatrix<float>::Identity.M[2]._8_8_;
  *(float *)&__return_storage_ptr__->field_0x74 = fVar3;
  UE::Math::TMatrix<float>::Identity.M[2][2] = (float)uVar8;
  UE::Math::TMatrix<float>::Identity.M[2][3] = SUB84(uVar8,4);
  fVar3 = UE::Math::TMatrix<float>::Identity.M[2][3];
  *(float *)&__return_storage_ptr__->field_0x78 = UE::Math::TMatrix<float>::Identity.M[2][2];
  UE::Math::TMatrix<float>::Identity.M[2]._8_8_ = uVar11;
  uVar11 = UE::Math::TMatrix<float>::Identity.M[3]._0_8_;
  *(float *)&__return_storage_ptr__->field_0x7c = fVar3;
  UE::Math::TMatrix<float>::Identity.M[3][0] = (float)uVar9;
  UE::Math::TMatrix<float>::Identity.M[3][1] = SUB84(uVar9,4);
  fVar3 = UE::Math::TMatrix<float>::Identity.M[3][1];
  *(float *)&__return_storage_ptr__->field_0x80 = UE::Math::TMatrix<float>::Identity.M[3][0];
  UE::Math::TMatrix<float>::Identity.M[3]._0_8_ = uVar11;
  uVar11 = UE::Math::TMatrix<float>::Identity.M[3]._8_8_;
  *(float *)&__return_storage_ptr__->field_0x84 = fVar3;
  UE::Math::TMatrix<float>::Identity.M[3][2] = (float)uVar10;
  UE::Math::TMatrix<float>::Identity.M[3][3] = SUB84(uVar10,4);
  fVar3 = UE::Math::TMatrix<float>::Identity.M[3][3];
  *(float *)&__return_storage_ptr__->field_0x88 = UE::Math::TMatrix<float>::Identity.M[3][2];
  UE::Math::TMatrix<float>::Identity.M[3]._8_8_ = uVar11;
  uVar11 = UE::Math::TMatrix<float>::Identity.M[0]._0_8_;
  *(float *)&__return_storage_ptr__->field_0x8c = fVar3;
  UE::Math::TMatrix<float>::Identity.M[0][0] = (float)uVar12;
  UE::Math::TMatrix<float>::Identity.M[0][1] = SUB84(uVar12,4);
  fVar3 = UE::Math::TMatrix<float>::Identity.M[0][1];
  *(float *)&__return_storage_ptr__->field_0x90 = UE::Math::TMatrix<float>::Identity.M[0][0];
  UE::Math::TMatrix<float>::Identity.M[0]._0_8_ = uVar11;
  uVar12 = UE::Math::TMatrix<float>::Identity.M[0]._8_8_;
  *(float *)&__return_storage_ptr__->field_0x94 = fVar3;
  UE::Math::TMatrix<float>::Identity.M[0][2] = (float)uVar4;
  UE::Math::TMatrix<float>::Identity.M[0][3] = SUB84(uVar4,4);
  fVar3 = UE::Math::TMatrix<float>::Identity.M[0][3];
  *(float *)&__return_storage_ptr__->field_0x98 = UE::Math::TMatrix<float>::Identity.M[0][2];
  UE::Math::TMatrix<float>::Identity.M[0]._8_8_ = uVar12;
  uVar12 = UE::Math::TMatrix<float>::Identity.M[1]._0_8_;
  *(float *)&__return_storage_ptr__->field_0x9c = fVar3;
  UE::Math::TMatrix<float>::Identity.M[1][0] = (float)uVar5;
  UE::Math::TMatrix<float>::Identity.M[1][1] = SUB84(uVar5,4);
  fVar3 = UE::Math::TMatrix<float>::Identity.M[1][1];
  *(float *)&__return_storage_ptr__->field_0xa0 = UE::Math::TMatrix<float>::Identity.M[1][0];
  UE::Math::TMatrix<float>::Identity.M[1]._0_8_ = uVar12;
  uVar12 = UE::Math::TMatrix<float>::Identity.M[1]._8_8_;
  *(float *)&__return_storage_ptr__->field_0xa4 = fVar3;
  UE::Math::TMatrix<float>::Identity.M[1][2] = (float)uVar6;
  UE::Math::TMatrix<float>::Identity.M[1][3] = SUB84(uVar6,4);
  fVar3 = UE::Math::TMatrix<float>::Identity.M[1][3];
  *(float *)&__return_storage_ptr__->field_0xa8 = UE::Math::TMatrix<float>::Identity.M[1][2];
  UE::Math::TMatrix<float>::Identity.M[1]._8_8_ = uVar12;
  uVar12 = UE::Math::TMatrix<float>::Identity.M[2]._0_8_;
  *(float *)&__return_storage_ptr__->field_0xac = fVar3;
  UE::Math::TMatrix<float>::Identity.M[2][0] = (float)uVar7;
  UE::Math::TMatrix<float>::Identity.M[2][1] = SUB84(uVar7,4);
  fVar3 = UE::Math::TMatrix<float>::Identity.M[2][1];
  *(float *)&__return_storage_ptr__->field_0xb0 = UE::Math::TMatrix<float>::Identity.M[2][0];
  UE::Math::TMatrix<float>::Identity.M[2]._0_8_ = uVar12;
  uVar12 = UE::Math::TMatrix<float>::Identity.M[2]._8_8_;
  *(float *)&__return_storage_ptr__->field_0xb4 = fVar3;
  UE::Math::TMatrix<float>::Identity.M[2][2] = (float)uVar8;
  UE::Math::TMatrix<float>::Identity.M[2][3] = SUB84(uVar8,4);
  fVar3 = UE::Math::TMatrix<float>::Identity.M[2][3];
  *(float *)&__return_storage_ptr__->field_0xb8 = UE::Math::TMatrix<float>::Identity.M[2][2];
  UE::Math::TMatrix<float>::Identity.M[2]._8_8_ = uVar12;
  uVar12 = UE::Math::TMatrix<float>::Identity.M[3]._0_8_;
  *(float *)&__return_storage_ptr__->field_0xbc = fVar3;
  UE::Math::TMatrix<float>::Identity.M[3][0] = (float)uVar9;
  UE::Math::TMatrix<float>::Identity.M[3][1] = SUB84(uVar9,4);
  fVar3 = UE::Math::TMatrix<float>::Identity.M[3][1];
  *(float *)&__return_storage_ptr__->field_0xc0 = UE::Math::TMatrix<float>::Identity.M[3][0];
  UE::Math::TMatrix<float>::Identity.M[3]._0_8_ = uVar12;
  uVar12 = UE::Math::TMatrix<float>::Identity.M[3]._8_8_;
  *(float *)&__return_storage_ptr__->field_0xc4 = fVar3;
  UE::Math::TMatrix<float>::Identity.M[3][2] = (float)uVar10;
  UE::Math::TMatrix<float>::Identity.M[3][3] = SUB84(uVar10,4);
  fVar3 = UE::Math::TMatrix<float>::Identity.M[3][3];
  *(float *)&__return_storage_ptr__->field_0xc8 = UE::Math::TMatrix<float>::Identity.M[3][2];
  UE::Math::TMatrix<float>::Identity.M[3]._8_8_ = uVar12;
  *(float *)&__return_storage_ptr__->field_0xcc = fVar3;
  *(undefined8 *)&__return_storage_ptr__->field_0xd0 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0xd8 = uVar1;
  *(ulonglong *)&__return_storage_ptr__->field_0xe0 = CONCAT44(uStack_14,uVar2);
  *(ulonglong *)&__return_storage_ptr__->field_0xe8 = CONCAT44(uVar2,uStack_10);
  return __return_storage_ptr__;
}

// operator<TWeakObjectPtr<UNiagaraComponent,FWeakObjectPtr>,FNiagaraDebugHud::FValidationErrorInfo>_TTuple<TWeakObjectPtr<UNiagaraComponent,FWeakObjectPtr>,FNiagaraDebugHud::FValidationErrorInfo> @ 149266160

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014926628f) */
/* WARNING: Removing unreachable block (ram,0x00014926629d) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TTuple<TWeakObjectPtr<UNiagaraComponent,FWeakObjectPtr>,FNiagaraDebugHud::FValidationErrorInfo> *
__thiscall
TKeyInitializer<TWeakObjectPtr<UNiagaraComponent,FWeakObjectPtr>_&&>::
operator<TWeakObjectPtr<UNiagaraComponent,FWeakObjectPtr>,FNiagaraDebugHud::FValidationErrorInfo>_TTuple<TWeakObjectPtr<UNiagaraComponent,FWeakObjectPtr>,FNiagaraDebugHud::FValidationErrorInfo>
          (TKeyInitializer<TWeakObjectPtr<UNiagaraComponent,FWeakObjectPtr>_&&> *this,
          TTuple<TWeakObjectPtr<UNiagaraComponent,FWeakObjectPtr>,FNiagaraDebugHud::FValidationErrorInfo>
          *__return_storage_ptr__)

{
  FWeakObjectPtr FVar1;
  int iVar2;
  uint uVar3;
  undefined1 auStackY_c8 [32];
  undefined1 local_70 [24];
  undefined8 uStack_58;
  void *local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ForElementType<FSetElementId> local_38;
  ulonglong local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  local_38.InlineData[0] = '\0';
  local_38.InlineData[1] = '\0';
  local_38.InlineData[2] = '\0';
  local_38.InlineData[3] = '\0';
  local_38._padding_ = 0;
  local_28 = 0;
  local_70._16_8_ = 0;
  uStack_58 = 0;
  local_70._0_8_ = (FScriptContainerElement *)0x0;
  local_70._8_8_ = 0;
  local_50 = (void *)0x0;
  local_48 = ___xmm_00000000ffffffff0000008000000000;
  uStack_40 = _UNK_150631d98;
  local_38.SecondaryData = (ForElementType<FSetElementId>)0x0;
  FVar1 = this->Key->WeakPtr;
  *(int *)&__return_storage_ptr__->field_0x0 = FVar1.ObjectIndex;
  *(int *)&__return_storage_ptr__->field_0x4 = FVar1.ObjectSerialNumber;
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x18 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x28 = 0;
  TSet<TTuple<FName,TArray<FName,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::
  TSet<TTuple<FName,TArray<FName,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
            ((TSet<TTuple<FName,TArray<FName,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
              *)&__return_storage_ptr__->field_0x30,
             (TSet<TTuple<FName,TArray<FName,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
              *)local_70);
  local_28 = local_28 & 0xffffffff00000000;
  if (local_38.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_38.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TArray<FName,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,TArray<FName,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_70,0,local_70._8_4_);
  iVar2 = SUB84(local_70._8_8_,4);
  local_70._8_8_ = local_70._8_8_ & 0xffffffff00000000;
  if (iVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)local_70,0,(int *)(local_70 + 0xc));
  }
  uVar3 = local_48._4_4_;
  uStack_40 = 0xffffffff;
  local_48 = (ulonglong)local_48._4_4_ << 0x20;
  if (0x80 < uVar3) {
    local_48 = 0x8000000000;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_70 + 0x10),0);
  }
  if (local_50 != (void *)0x0) {
    FMemory::Free(local_50);
  }
  if ((FScriptContainerElement *)local_70._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_70._0_8_);
  }
  return __return_storage_ptr__;
}

// operator<TWeakObjectPtr<UNiagaraEmitter,FWeakObjectPtr>,FNiagaraDebugHud::FGpuUsagePerEmitter>_TTuple<TWeakObjectPtr<UNiagaraEmitter,FWeakObjectPtr>,FNiagaraDebugHud::FGpuUsagePerEmitter> @ 1492662d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTuple<TWeakObjectPtr<UNiagaraEmitter,FWeakObjectPtr>,FNiagaraDebugHud::FGpuUsagePerEmitter> *
__thiscall
TKeyInitializer<TWeakObjectPtr<UNiagaraEmitter,FWeakObjectPtr>_&&>::
operator<TWeakObjectPtr<UNiagaraEmitter,FWeakObjectPtr>,FNiagaraDebugHud::FGpuUsagePerEmitter>_TTuple<TWeakObjectPtr<UNiagaraEmitter,FWeakObjectPtr>,FNiagaraDebugHud::FGpuUsagePerEmitter>
          (TKeyInitializer<TWeakObjectPtr<UNiagaraEmitter,FWeakObjectPtr>_&&> *this,
          TTuple<TWeakObjectPtr<UNiagaraEmitter,FWeakObjectPtr>,FNiagaraDebugHud::FGpuUsagePerEmitter>
          *__return_storage_ptr__)

{
  FWeakObjectPtr FVar1;
  ulonglong uVar2;
  undefined1 auStackY_f8 [32];
  undefined1 local_c8 [96];
  ForAnyElementType local_68;
  undefined8 local_60;
  TBitArray<FDefaultBitArrayAllocator> local_58;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  void *local_28;
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  local_58.MaxBits = 0x80;
  local_c8._9_2_ = 0;
  local_c8[0xb] = 0;
  local_c8._32_8_ = 0;
  local_c8._49_4_ = 0;
  local_c8._53_2_ = 0;
  local_c8[0x37] = 0;
  local_30 = 0;
  local_20 = 0;
  local_c8[8] = false;
  local_c8[0x30] = false;
  local_c8._64_4_ = 0.0;
  local_c8._68_4_ = 0;
  local_58.AllocatorInstance.InlineData[0] = '\0';
  local_58.AllocatorInstance.InlineData[1] = '\0';
  local_58.AllocatorInstance.InlineData[2] = '\0';
  local_58.AllocatorInstance.InlineData[3] = '\0';
  local_58.AllocatorInstance.InlineData[4] = '\0';
  local_58.AllocatorInstance.InlineData[5] = '\0';
  local_58.AllocatorInstance.InlineData[6] = '\0';
  local_58.AllocatorInstance.InlineData[7] = '\0';
  local_58.AllocatorInstance.InlineData[8] = '\0';
  local_58.AllocatorInstance.InlineData[9] = '\0';
  local_58.AllocatorInstance.InlineData[10] = '\0';
  local_58.AllocatorInstance.InlineData[0xb] = '\0';
  local_58.AllocatorInstance.InlineData[0xc] = '\0';
  local_58.AllocatorInstance.InlineData[0xd] = '\0';
  local_58.AllocatorInstance.InlineData[0xe] = '\0';
  local_58.AllocatorInstance.InlineData[0xf] = '\0';
  local_c8._0_8_ = 0;
  local_c8._12_4_ = 0;
  local_c8._16_4_ = 0.0;
  local_c8._20_4_ = 0;
  local_c8._24_4_ = 0;
  local_c8._28_4_ = 0;
  local_c8._40_8_ = 0;
  local_c8._56_8_ = 0;
  local_c8._72_8_ = 0;
  local_c8._80_8_ = 0;
  local_c8._88_8_ = 0;
  local_68.Data = (FScriptContainerElement *)0x0;
  local_60 = 0;
  local_58.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_58.NumBits = 0;
  local_38 = 0xffffffff;
  local_34 = 0;
  local_28 = (void *)0x0;
  FVar1 = this->Key->WeakPtr;
  *(int *)&__return_storage_ptr__->field_0x0 = FVar1.ObjectIndex;
  *(int *)&__return_storage_ptr__->field_0x4 = FVar1.ObjectSerialNumber;
  FNiagaraDebugHud::FGpuUsagePerEmitter::FGpuUsagePerEmitter
            ((FGpuUsagePerEmitter *)&__return_storage_ptr__->field_0x8,
             (FGpuUsagePerEmitter *)local_c8);
  local_20 = local_20 & 0xffffffff00000000;
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  uVar2 = local_60 >> 0x20;
  local_60 = local_60 & 0xffffffff00000000;
  if ((int)uVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x70,8,0,&local_68,0,(int *)((longlong)&local_60 + 4));
  }
  local_38 = 0xffffffff;
  local_34 = 0;
  local_58.NumBits = 0;
  if (0x80 < (uint)local_58.MaxBits) {
    local_58.MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_58,0);
  }
  if (local_58.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_58.AllocatorInstance.SecondaryData);
  }
  if (local_68.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data);
  }
  return __return_storage_ptr__;
}

// operator<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,NiagaraDebugLocal::FCachedVariables>_TTuple<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,NiagaraDebugLocal::FCachedVariables> @ 149266430

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

TTuple<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,NiagaraDebugLocal::FCachedVariables> *
__thiscall
TKeyInitializer<UNiagaraSystem_*_&>::
operator<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,NiagaraDebugLocal::FCachedVariables>_TTuple<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,NiagaraDebugLocal::FCachedVariables>
          (TKeyInitializer<UNiagaraSystem_*_&> *this,
          TTuple<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,NiagaraDebugLocal::FCachedVariables>
          *__return_storage_ptr__)

{
  UNiagaraSystem *pUVar1;
  ForAnyElementType FVar2;
  UNiagaraSystem *local_res8;
  FCachedVariables local_68;
  
  local_68.WeakNiagaraSystem.WeakPtr.ObjectIndex = 0;
  local_68.WeakNiagaraSystem.WeakPtr.ObjectSerialNumber = 0;
  local_68.EngineVariables.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pUVar1 = *this->Key;
  local_68.EngineVariables.ArrayNum = 0;
  local_68.EngineVariables.ArrayMax = 0;
  local_68.SystemVariables.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.SystemVariables.ArrayNum = 0;
  local_68.SystemVariables.ArrayMax = 0;
  local_68.ParameterStoreVariables.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.ParameterStoreVariables.ArrayNum = 0;
  local_68.ParameterStoreVariables.ArrayMax = 0;
  local_68.ParticleVariables.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.ParticleVariables.ArrayNum = 0;
  local_68.ParticleVariables.ArrayMax = 0;
  local_68.ParticlePositionAccessors.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.ParticlePositionAccessors.ArrayNum = 0;
  local_68.ParticlePositionAccessors.ArrayMax = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (pUVar1 != (UNiagaraSystem *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  *(undefined8 *)__return_storage_ptr__ = 0;
  local_res8 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UNiagaraSystem *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)__return_storage_ptr__,(FObjectPtr)&local_res8);
  NiagaraDebugLocal::FCachedVariables::FCachedVariables
            ((FCachedVariables *)&__return_storage_ptr__->field_0x8,&local_68);
  if (local_68.ParticlePositionAccessors.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.ParticlePositionAccessors.AllocatorInstance.Data);
  }
  FVar2.Data = local_68.ParticleVariables.AllocatorInstance.Data;
  DestructItems<TArray<FNiagaraDataSetDebugAccessor,TSizedDefaultAllocator<32>_>,int>
            ((TArray<FNiagaraDataSetDebugAccessor,TSizedDefaultAllocator<32>_> *)
             local_68.ParticleVariables.AllocatorInstance.Data,local_68.ParticleVariables.ArrayNum);
  if ((TArray<FNiagaraDataSetDebugAccessor,TSizedDefaultAllocator<32>_> *)FVar2.Data !=
      (TArray<FNiagaraDataSetDebugAccessor,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(FVar2.Data);
  }
  if (local_68.ParameterStoreVariables.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.ParameterStoreVariables.AllocatorInstance.Data);
  }
  if (local_68.SystemVariables.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.SystemVariables.AllocatorInstance.Data);
  }
  if (local_68.EngineVariables.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.EngineVariables.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// operator<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,FNiagaraDebugHud::FGpuUsagePerSystem>_TTuple<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,FNiagaraDebugHud::FGpuUsagePerSystem> @ 149266550

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TTuple<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,FNiagaraDebugHud::FGpuUsagePerSystem> *
__thiscall
TKeyInitializer<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>_&&>::
operator<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,FNiagaraDebugHud::FGpuUsagePerSystem>_TTuple<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,FNiagaraDebugHud::FGpuUsagePerSystem>
          (TKeyInitializer<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>_&&> *this,
          TTuple<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,FNiagaraDebugHud::FGpuUsagePerSystem>
          *__return_storage_ptr__)

{
  FWeakObjectPtr FVar1;
  int iVar2;
  uint uVar3;
  undefined1 auStackY_108 [32];
  undefined1 local_d8 [8];
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined4 local_b0;
  uint uStack_ac;
  undefined8 local_a8;
  undefined1 uStack_a0;
  uint7 uStack_9f;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined1 auStack_70 [32];
  void *local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ForElementType<FSetElementId> local_30;
  int local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_108;
  memset(local_d8,0,0xb8);
  local_48 = ___xmm_00000000ffffffff0000008000000000;
  uStack_40 = _UNK_150631d98;
  local_c0 = 0;
  uStack_b8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  auStack_70._0_8_ = (FScriptContainerElement *)0x0;
  auStack_70._8_8_ = 0;
  local_50 = (void *)0x0;
  local_30 = (ForElementType<FSetElementId>)0x0;
  local_28 = 0;
  FVar1 = this->Key->WeakPtr;
  *(int *)&__return_storage_ptr__->field_0x0 = FVar1.ObjectIndex;
  *(int *)&__return_storage_ptr__->field_0x4 = FVar1.ObjectSerialNumber;
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = local_d0;
  *(undefined8 *)&__return_storage_ptr__->field_0x18 = uStack_c8;
  __return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x28 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x38 = 0;
  *(ulonglong *)&__return_storage_ptr__->field_0x40 = (ulonglong)uStack_9f << 8;
  *(ulonglong *)&__return_storage_ptr__->field_0x30 = (ulonglong)uStack_ac << 0x20;
  *(undefined8 *)&__return_storage_ptr__->field_0x48 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x50 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x58 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x60 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x68 = 0;
  TSet<TTuple<TWeakObjectPtr<UNiagaraEmitter,FWeakObjectPtr>,FNiagaraDebugHud::FGpuUsagePerEmitter>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNiagaraEmitter,FWeakObjectPtr>,FNiagaraDebugHud::FGpuUsagePerEmitter,0>,FDefaultSetAllocator>
  ::
  TSet<TTuple<TWeakObjectPtr<UNiagaraEmitter,FWeakObjectPtr>,FNiagaraDebugHud::FGpuUsagePerEmitter>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNiagaraEmitter,FWeakObjectPtr>,FNiagaraDebugHud::FGpuUsagePerEmitter,0>,FDefaultSetAllocator>
            ((TSet<TTuple<TWeakObjectPtr<UNiagaraEmitter,FWeakObjectPtr>,FNiagaraDebugHud::FGpuUsagePerEmitter>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNiagaraEmitter,FWeakObjectPtr>,FNiagaraDebugHud::FGpuUsagePerEmitter,0>,FDefaultSetAllocator>
              *)&__return_storage_ptr__->field_0x70,
             (TSet<TTuple<TWeakObjectPtr<UNiagaraEmitter,FWeakObjectPtr>,FNiagaraDebugHud::FGpuUsagePerEmitter>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNiagaraEmitter,FWeakObjectPtr>,FNiagaraDebugHud::FGpuUsagePerEmitter,0>,FDefaultSetAllocator>
              *)auStack_70);
  local_28 = 0;
  if (local_30 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_30);
  }
  TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UNiagaraEmitter,FWeakObjectPtr>,FNiagaraDebugHud::FGpuUsagePerEmitter>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UNiagaraEmitter,FWeakObjectPtr>,FNiagaraDebugHud::FGpuUsagePerEmitter>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)auStack_70,0,auStack_70._8_4_);
  iVar2 = SUB84(auStack_70._8_8_,4);
  auStack_70._8_8_ = auStack_70._8_8_ & 0xffffffff00000000;
  if (iVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc0,8,0,(ForAnyElementType *)auStack_70,0,(int *)(auStack_70 + 0xc));
  }
  uVar3 = local_48._4_4_;
  uStack_40 = 0xffffffff;
  local_48 = (ulonglong)local_48._4_4_ << 0x20;
  if (0x80 < uVar3) {
    local_48 = 0x8000000000;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(auStack_70 + 0x10),0);
  }
  if (local_50 != (void *)0x0) {
    FMemory::Free(local_50);
  }
  if ((FScriptContainerElement *)auStack_70._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)auStack_70._0_8_);
  }
  return __return_storage_ptr__;
}

// operator<FObjectKey,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>_TTuple<FObjectKey,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> @ 1492666f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTuple<FObjectKey,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> * __thiscall
TKeyInitializer<FObjectKey_const_&>::
operator<FObjectKey,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>_TTuple<FObjectKey,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>
          (TKeyInitializer<FObjectKey_const_&> *this,
          TTuple<FObjectKey,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>
          *__return_storage_ptr__)

{
  int iVar1;
  undefined1 auStackY_98 [32];
  undefined1 local_68 [24];
  undefined8 uStack_50;
  void *local_48;
  undefined4 local_40;
  uint local_3c;
  undefined4 local_38;
  undefined4 local_34;
  ForElementType<FSetElementId> local_30;
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_98;
  local_30.InlineData[0] = '\0';
  local_30.InlineData[1] = '\0';
  local_30.InlineData[2] = '\0';
  local_30.InlineData[3] = '\0';
  local_30._padding_ = 0;
  local_68._16_8_ = 0;
  uStack_50 = 0;
  local_20 = 0;
  local_68._0_8_ = (FScriptContainerElement *)0x0;
  local_68._8_8_ = 0;
  local_48 = (void *)0x0;
  local_40 = 0;
  local_3c = 0x80;
  local_38 = 0xffffffff;
  local_34 = 0;
  local_30.SecondaryData = (ForElementType<FSetElementId>)0x0;
  iVar1 = this->Key->ObjectSerialNumber;
  *(int *)&__return_storage_ptr__->field_0x0 = this->Key->ObjectIndex;
  *(int *)&__return_storage_ptr__->field_0x4 = iVar1;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>
            ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
             &__return_storage_ptr__->field_0x8,
             (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_68);
  local_20 = local_20 & 0xffffffff00000000;
  if (local_30.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_30.SecondaryData);
  }
  iVar1 = SUB84(local_68._8_8_,4);
  local_68._8_8_ = local_68._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,(ForAnyElementType *)local_68,0,(int *)(local_68 + 0xc));
  }
  local_38 = 0xffffffff;
  local_34 = 0;
  local_40 = 0;
  if (0x80 < local_3c) {
    local_3c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_68 + 0x10),0);
  }
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  if ((FScriptContainerElement *)local_68._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_68._0_8_);
  }
  return __return_storage_ptr__;
}

// operator<FName,FNiagaraDebugHud::FSystemDebugInfo>_TTuple<FName,FNiagaraDebugHud::FSystemDebugInfo> @ 149266810

TTuple<FName,FNiagaraDebugHud::FSystemDebugInfo> * __thiscall
TKeyInitializer<FName_&&>::
operator<FName,FNiagaraDebugHud::FSystemDebugInfo>_TTuple<FName,FNiagaraDebugHud::FSystemDebugInfo>
          (TKeyInitializer<FName_&&> *this,
          TTuple<FName,FNiagaraDebugHud::FSystemDebugInfo> *__return_storage_ptr__)

{
  uint uVar1;
  FSystemDebugInfo local_a8;
  
  local_a8.bShowInWorld = false;
  local_a8.bPassesSystemFilter = true;
  local_a8._70_2_ = 0;
  local_a8.TotalParticles = 0;
  local_a8._92_4_ = 0;
  local_a8.ScalabilityKillCounts.GlobalBudget = 0;
  local_a8._148_4_ = 0;
  local_a8.SystemName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.SystemName.Data.ArrayNum = 0;
  local_a8.SystemName.Data.ArrayMax = 0;
  local_a8.SystemPrettyName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.SystemPrettyName.Data.ArrayNum = 0;
  local_a8.SystemPrettyName.Data.ArrayMax = 0;
  local_a8.FramesSinceVisible = 0;
  local_a8.TotalBytes = 0;
  local_a8.ScalabilityKillCounts.InstanceCounts = 0;
  local_a8.ScalabilityKillCounts.Visibility = 0;
  local_a8.UniqueColor.field0_0x0._s_0 = FLinearColor::Red.field0_0x0;
  uVar1 = this->Key->Number;
  *(uint *)&__return_storage_ptr__->field_0x0 = (this->Key->ComparisonIndex).Value;
  *(uint *)&__return_storage_ptr__->field_0x4 = uVar1;
  local_a8.PerfStats.Object = (FNiagaraDebugHUDPerfStats *)0x0;
  local_a8.PerfStats.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_a8.TotalRegistered = 0;
  local_a8.TotalActive = 0;
  local_a8.TotalScalability = 0;
  local_a8.TotalEmitters = 0;
  local_a8.TotalCulled = 0;
  local_a8.TotalCulledByDistance = 0;
  local_a8.TotalCulledByVisibility = 0;
  local_a8.TotalCulledByInstanceCount = 0;
  local_a8.TotalCulledByBudget = 0;
  local_a8.TotalPlayerSystems = 0;
  local_a8.ScalabilityKillCounts.Total = 0;
  local_a8.ScalabilityKillCounts.Distance = 0;
  FNiagaraDebugHud::FSystemDebugInfo::FSystemDebugInfo
            ((FSystemDebugInfo *)&__return_storage_ptr__->field_0x8,&local_a8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_a8.PerfStats.SharedReferenceCount.ReferenceController);
  if (local_a8.SystemPrettyName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.SystemPrettyName.Data.AllocatorInstance.Data);
  }
  if (local_a8.SystemName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.SystemName.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// operator<FString,FNiagaraOutlinerWorldData>_TTuple<FString,FNiagaraOutlinerWorldData> @ 1492668d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTuple<FString,FNiagaraOutlinerWorldData> * __thiscall
TKeyInitializer<FString_&&>::
operator<FString,FNiagaraOutlinerWorldData>_TTuple<FString,FNiagaraOutlinerWorldData>
          (TKeyInitializer<FString_&&> *this,
          TTuple<FString,FNiagaraOutlinerWorldData> *__return_storage_ptr__)

{
  FString *pFVar1;
  int iVar2;
  uint uVar3;
  undefined1 auStackY_c8 [32];
  undefined1 local_98 [24];
  undefined8 uStack_80;
  void *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  ForElementType<FSetElementId> FStack_60;
  ulonglong uStack_50;
  undefined1 local_48;
  undefined1 uStack_47;
  undefined1 uStack_46;
  undefined1 uStack_45;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  pFVar1 = this->Key;
  uStack_45 = 0;
  *(undefined8 *)__return_storage_ptr__ = 0;
  FStack_60.InlineData[0] = '\0';
  FStack_60.InlineData[1] = '\0';
  FStack_60.InlineData[2] = '\0';
  FStack_60.InlineData[3] = '\0';
  FStack_60._padding_ = 0;
  uStack_34 = 0;
  local_78 = (void *)0x0;
  uStack_70 = 0x8000000000;
  local_98._0_8_ = (FScriptContainerElement *)0x0;
  local_98._8_8_ = 0;
  local_68 = 0xffffffff;
  local_98._16_8_ = 0;
  uStack_80 = 0;
  FStack_60.SecondaryData = (ForElementType<FSetElementId>)0x0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_47 = 0xff;
  uStack_46 = 0xff;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  uStack_38 = 0;
  *(FScriptContainerElement **)__return_storage_ptr__ = (pFVar1->Data).AllocatorInstance.Data;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)&__return_storage_ptr__->field_0x8 = (pFVar1->Data).ArrayNum;
  *(int *)&__return_storage_ptr__->field_0xc = (pFVar1->Data).ArrayMax;
  (pFVar1->Data).ArrayNum = 0;
  (pFVar1->Data).ArrayMax = 0;
  TSet<TTuple<FString,FNiagaraOutlinerSystemData>,TDefaultMapHashableKeyFuncs<FString,FNiagaraOutlinerSystemData,0>,FDefaultSetAllocator>
  ::
  TSet<TTuple<FString,FNiagaraOutlinerSystemData>,TDefaultMapHashableKeyFuncs<FString,FNiagaraOutlinerSystemData,0>,FDefaultSetAllocator>
            ((TSet<TTuple<FString,FNiagaraOutlinerSystemData>,TDefaultMapHashableKeyFuncs<FString,FNiagaraOutlinerSystemData,0>,FDefaultSetAllocator>
              *)&__return_storage_ptr__->field_0x10,
             (TSet<TTuple<FString,FNiagaraOutlinerSystemData>,TDefaultMapHashableKeyFuncs<FString,FNiagaraOutlinerSystemData,0>,FDefaultSetAllocator>
              *)local_98);
  __return_storage_ptr__->field_0x60 = local_48;
  __return_storage_ptr__->field_0x61 = uStack_47;
  __return_storage_ptr__->field_0x62 = uStack_46;
  uStack_50 = uStack_50 & 0xffffffff00000000;
  *(ulonglong *)&__return_storage_ptr__->field_0x64 = CONCAT44(uStack_40,uStack_44);
  *(ulonglong *)&__return_storage_ptr__->field_0x6c = CONCAT44(uStack_38,uStack_3c);
  if (FStack_60.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FStack_60.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FNiagaraOutlinerSystemData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,FNiagaraOutlinerSystemData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_98,0,local_98._8_4_);
  iVar2 = SUB84(local_98._8_8_,4);
  local_98._8_8_ = local_98._8_8_ & 0xffffffff00000000;
  if (iVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x48,8,0,(ForAnyElementType *)local_98,0,(int *)(local_98 + 0xc));
  }
  uVar3 = uStack_70._4_4_;
  local_68 = 0xffffffff;
  uStack_70 = (ulonglong)uStack_70._4_4_ << 0x20;
  if (0x80 < uVar3) {
    uStack_70 = 0x8000000000;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10),0);
  }
  if (local_78 != (void *)0x0) {
    FMemory::Free(local_78);
  }
  if ((FScriptContainerElement *)local_98._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_98._0_8_);
  }
  return __return_storage_ptr__;
}

// operator<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,FParticlePerfStatsListener_NiagaraPerformanceReporter::FStoredStatsInfo>_TTuple<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,FParticlePerfStatsListener_NiagaraPerformanceReporter::FStoredStatsInfo> @ 149317e30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTuple<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,FParticlePerfStatsListener_NiagaraPerformanceReporter::FStoredStatsInfo>
* __thiscall
TKeyInitializer<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>_&&>::
operator<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,FParticlePerfStatsListener_NiagaraPerformanceReporter::FStoredStatsInfo>_TTuple<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,FParticlePerfStatsListener_NiagaraPerformanceReporter::FStoredStatsInfo>
          (TKeyInitializer<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>_&&> *this,
          TTuple<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,FParticlePerfStatsListener_NiagaraPerformanceReporter::FStoredStatsInfo>
          *__return_storage_ptr__)

{
  FWeakObjectPtr FVar1;
  undefined1 auStack_2f8 [32];
  FAccumulatedParticlePerfStats local_2d8;
  void *local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_2f8;
  memset(&local_2d8,0,0x2c8);
  FAccumulatedParticlePerfStats::FAccumulatedParticlePerfStats(&local_2d8);
  local_20 = (void *)0x0;
  local_18 = 0;
  FVar1 = this->Key->WeakPtr;
  *(int *)&__return_storage_ptr__->field_0x0 = FVar1.ObjectIndex;
  *(int *)&__return_storage_ptr__->field_0x4 = FVar1.ObjectSerialNumber;
  FAccumulatedParticlePerfStats::FAccumulatedParticlePerfStats
            ((FAccumulatedParticlePerfStats *)&__return_storage_ptr__->field_0x8,&local_2d8);
  *(void **)&__return_storage_ptr__->field_0x2c0 = local_20;
  *(undefined4 *)&__return_storage_ptr__->field_0x2c8 = (undefined4)local_18;
  *(undefined4 *)&__return_storage_ptr__->field_0x2cc = local_18._4_4_;
  local_18 = 0;
  local_20 = (void *)0x0;
  DestructItems<FParticlePerfStatsListener_NiagaraPerformanceReporter::FStatTestInfo,int>
            ((FStatTestInfo *)0x0,0);
  if (local_20 != (void *)0x0) {
    FMemory::Free(local_20);
  }
  FAccumulatedParticlePerfStats::~FAccumulatedParticlePerfStats(&local_2d8);
  return __return_storage_ptr__;
}

// operator<FString,FNiagaraParameterStore>_TTuple<FString,FNiagaraParameterStore> @ 14937b7f0

TTuple<FString,FNiagaraParameterStore> * __thiscall
TKeyInitializer<FString_&&>::
operator<FString,FNiagaraParameterStore>_TTuple<FString,FNiagaraParameterStore>
          (TKeyInitializer<FString_&&> *this,
          TTuple<FString,FNiagaraParameterStore> *__return_storage_ptr__)

{
  FString *pFVar1;
  FNiagaraParameterStore *pFVar2;
  FNiagaraParameterStore local_98;
  
  pFVar2 = FNiagaraParameterStore::FNiagaraParameterStore(&local_98);
  pFVar1 = this->Key;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(FScriptContainerElement **)__return_storage_ptr__ = (pFVar1->Data).AllocatorInstance.Data;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)&__return_storage_ptr__->field_0x8 = (pFVar1->Data).ArrayNum;
  *(int *)&__return_storage_ptr__->field_0xc = (pFVar1->Data).ArrayMax;
  (pFVar1->Data).ArrayNum = 0;
  (pFVar1->Data).ArrayMax = 0;
  FNiagaraParameterStore::FNiagaraParameterStore
            ((FNiagaraParameterStore *)&__return_storage_ptr__->field_0x10,pFVar2);
  FNiagaraParameterStore::~FNiagaraParameterStore(&local_98);
  return __return_storage_ptr__;
}

