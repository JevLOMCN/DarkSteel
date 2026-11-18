// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 18

// StaticClass @ 149855f60

UClass * __cdecl UPCGRenderTargetData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGRenderTargetData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGRenderTargetData",
               &Z_Registration_Info_UClass_UPCGRenderTargetData.InnerSingleton,
               StaticRegisterNativesUPCGRenderTargetData,0x270,0x10,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGRenderTargetData>,
               InternalVTableHelperCtorCaller<UPCGRenderTargetData>,local_res8,
               UPCGBaseTextureData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGRenderTargetData.InnerSingleton;
}

// UPCGRenderTargetData @ 14988ec80

UPCGRenderTargetData * __thiscall
UPCGRenderTargetData::UPCGRenderTargetData(UPCGRenderTargetData *this,FVTableHelper *param_1)

{
  UPCGBaseTextureData::UPCGBaseTextureData((UPCGBaseTextureData *)this,param_1);
  this->bOwnsRenderTarget = false;
  this->_padding_ = (longlong)&___7UPCGRenderTargetData__6B_;
  (this->RenderTarget).field0_0x0.DebugPtr = (UTextureRenderTarget2D *)0x0;
  return this;
}

// UPCGRenderTargetData @ 14988ecc0

UPCGRenderTargetData * __thiscall
UPCGRenderTargetData::UPCGRenderTargetData(UPCGRenderTargetData *this,FObjectInitializer *param_1)

{
  UPCGBaseTextureData::UPCGBaseTextureData((UPCGBaseTextureData *)this,param_1);
  this->bOwnsRenderTarget = false;
  this->_padding_ = (longlong)&___7UPCGRenderTargetData__6B_;
  (this->RenderTarget).field0_0x0.DebugPtr = (UTextureRenderTarget2D *)0x0;
  return this;
}

// ~UPCGRenderTargetData @ 1498918f0

void __thiscall UPCGRenderTargetData::~UPCGRenderTargetData(UPCGRenderTargetData *this)

{
  this->_padding_ = (longlong)&___7UPCGBaseTextureData__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  this->_padding_ = (longlong)&___7UPCGSurfaceData__6B_;
  UPCGSpatialDataWithPointCache::~UPCGSpatialDataWithPointCache
            ((UPCGSpatialDataWithPointCache *)this);
  return;
}

// AddToCrc @ 14989e170

void __thiscall
UPCGRenderTargetData::AddToCrc(UPCGRenderTargetData *this,FArchiveCrc32 *param_1,bool param_2)

{
  undefined1 local_res8 [8];
  
  UPCGData::AddToCrc((UPCGData *)this,param_1,param_2);
  if ((UPCGMetadata *)this->_padding_ != (UPCGMetadata *)0x0) {
    UPCGMetadata::GetLatestAttributeNameOrNone((UPCGMetadata *)this->_padding_);
    (**(code **)(param_1->_padding_ + 0x178))(param_1,local_res8);
  }
  UPCGData::AddUIDToCrc((UPCGData *)this,param_1);
  return;
}

// CopyInternal @ 1498a4f70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UPCGSpatialData * __thiscall
UPCGRenderTargetData::CopyInternal(UPCGRenderTargetData *this,FPCGContext *param_1)

{
  UTextureRenderTarget2D *pUVar1;
  code *pcVar2;
  bool bVar3;
  UPCGSpatialData *pUVar4;
  UObject *pUVar5;
  UPCGRenderTargetData *pUVar6;
  FGCScopeGuard local_res8 [8];
  TObjectPtr<UObject> local_res10;
  UPCGRenderTargetData *local_res18 [2];
  
  if (param_1 == (FPCGContext *)0x0) {
    bVar3 = IsInGameThread();
    if (!bVar3) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<4331830188552749225>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                         ,0xa9,"Context != nullptr || IsInGameThread()");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pUVar4 = (UPCGSpatialData *)(*pcVar2)();
        return pUVar4;
      }
    }
  }
  else {
    bVar3 = IsInGameThread();
    if (!bVar3) {
      if ((param_1->AsyncState).bIsRunningOnMainThread != false) {
        bVar3 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<4331830188552749348>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                           ,0x124,"!AsyncState.bIsRunningOnMainThread");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          pUVar4 = (UPCGSpatialData *)(*pcVar2)();
          return pUVar4;
        }
      }
      FGCScopeGuard::FGCScopeGuard(local_res8);
      pUVar5 = GetTransientPackageAsObject();
      pUVar6 = NewObject<UPCGRenderTargetData>(pUVar5);
      FGCScopeGuard::~FGCScopeGuard(local_res8);
      if (pUVar6 == (UPCGRenderTargetData *)0x0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Object",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                           ,0x12a,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          pUVar4 = (UPCGSpatialData *)(*pcVar2)();
          return pUVar4;
        }
      }
      local_res18[0] = pUVar6;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar6 != (UPCGRenderTargetData *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar6);
      }
      TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>::
      Emplace<TObjectPtr<UObject>_>(&param_1->AsyncObjects,&local_res10,(bool *)local_res18);
      goto LAB_1498a4fcd;
    }
  }
  pUVar5 = GetTransientPackageAsObject();
  pUVar6 = NewObject<UPCGRenderTargetData>(pUVar5);
LAB_1498a4fcd:
  UPCGBaseTextureData::CopyBaseTextureData
            ((UPCGBaseTextureData *)this,(UPCGBaseTextureData *)pUVar6);
  if (this->bOwnsRenderTarget != false) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1121492531662553185>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\PCGRenderTargetData.cpp"
                       ,0x61,"!bOwnsRenderTarget");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pUVar4 = (UPCGSpatialData *)(*pcVar2)();
      return pUVar4;
    }
    this->bOwnsRenderTarget = false;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar1 = (this->RenderTarget).field0_0x0.DebugPtr, pUVar1 != (UTextureRenderTarget2D *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (pUVar6->RenderTarget).field0_0x0 = (this->RenderTarget).field0_0x0;
  pUVar6->bOwnsRenderTarget = false;
  return (UPCGSpatialData *)pUVar6;
}

// GetDataType @ 1498b8430

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

EPCGDataType __thiscall UPCGRenderTargetData::GetDataType(UPCGRenderTargetData *this)

{
  return RenderTarget;
}

// GetDataTypeId @ 1498b8bf0

FPCGDataTypeBaseId * __thiscall UPCGRenderTargetData::GetDataTypeId(UPCGRenderTargetData *this)

{
  int iVar1;
  bool bVar2;
  UPackage *pUVar3;
  TObjectPtr<UScriptStruct_const_>_u_0 TVar4;
  
  if (`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoRenderTarget2D::AsId(void)'
      ::__l2::_thread_safe_static_guard_0__ <=
      *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c)) {
    return &`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoRenderTarget2D::AsId(void)'
            ::__l2::Id;
  }
  _Init_thread_header(&`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoRenderTarget2D::AsId(void)'
                       ::__l2::_thread_safe_static_guard_0__);
  if (`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoRenderTarget2D::AsId(void)'
      ::__l2::_thread_safe_static_guard_0__ != -1) {
    return &`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoRenderTarget2D::AsId(void)'
            ::__l2::Id;
  }
  if (Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoRenderTarget2D.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar3 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoRenderTarget2D.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPCGDataTypeInfoRenderTarget2D,(UObject *)pUVar3,
                         L"PCGDataTypeInfoRenderTarget2D");
    if (Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoRenderTarget2D.OuterSingleton !=
        (UScriptStruct *)0x0) goto LAB_1498b8c73;
  }
  else {
LAB_1498b8c73:
    TVar4.DebugPtr = Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoRenderTarget2D.OuterSingleton
    ;
    if (Z_Registration_Info_UScriptStruct_FPCGDataTypeInfo.OuterSingleton == (UScriptStruct *)0x0) {
      pUVar3 = Z_Construct_UPackage__Script_PCG();
      Z_Registration_Info_UScriptStruct_FPCGDataTypeInfo.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FPCGDataTypeInfo,(UObject *)pUVar3,
                           L"PCGDataTypeInfo");
      if (Z_Registration_Info_UScriptStruct_FPCGDataTypeInfo.OuterSingleton == (UScriptStruct *)0x0)
      goto LAB_1498b8cca;
    }
    iVar1 = (int)(Z_Registration_Info_UScriptStruct_FPCGDataTypeInfo.OuterSingleton)->_padding_;
    if (((int)(TVar4.DebugPtr)->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)((TVar4.DebugPtr)->_padding_ + (longlong)iVar1 * 8) !=
        &(Z_Registration_Info_UScriptStruct_FPCGDataTypeInfo.OuterSingleton)->_padding_)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) goto LAB_1498b8ccc;
  }
LAB_1498b8cca:
  TVar4.DebugPtr = (UScriptStruct *)0x0;
LAB_1498b8ccc:
  `public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoRenderTarget2D::AsId(void)'
  ::__l2::Id.Struct.field0_0x0 =
       (TObjectPtr<UScriptStruct_const_>)(TObjectPtr<UScriptStruct_const_>)TVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (TVar4.DebugPtr != (UScriptStruct *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)TVar4.DebugPtr);
  }
  _Init_thread_footer(&`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoRenderTarget2D::AsId(void)'
                       ::__l2::_thread_safe_static_guard_0__);
  return &`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoRenderTarget2D::AsId(void)'
          ::__l2::Id;
}

// GetPrivateStaticClass @ 1498bcb90

UClass * __cdecl UPCGRenderTargetData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGRenderTargetData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGRenderTargetData",
               &Z_Registration_Info_UClass_UPCGRenderTargetData.InnerSingleton,
               StaticRegisterNativesUPCGRenderTargetData,0x270,0x10,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGRenderTargetData>,
               InternalVTableHelperCtorCaller<UPCGRenderTargetData>,local_res8,
               UPCGBaseTextureData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGRenderTargetData.InnerSingleton;
}

// GetTexture @ 1498c7fe0

UTexture * __thiscall UPCGRenderTargetData::GetTexture(UPCGRenderTargetData *this)

{
  return (UTexture *)(this->RenderTarget).field0_0x0.DebugPtr;
}

// GetTextureRHI @ 1498c8070

TRefCountPtr<FRHITexture> __thiscall UPCGRenderTargetData::GetTextureRHI(UPCGRenderTargetData *this)

{
  UTextureRenderTarget2D *this_00;
  FRHIResource *this_01;
  FTextureResource *pFVar1;
  FRHITexture *in_RDX;
  
  this_00 = (this->RenderTarget).field0_0x0.DebugPtr;
  if ((this_00 == (UTextureRenderTarget2D *)0x0) ||
     (pFVar1 = UTexture::GetResource((UTexture *)this_00), pFVar1 == (FTextureResource *)0x0)) {
    in_RDX->_padding_ = 0;
  }
  else {
    this_01 = (FRHIResource *)pFVar1->_padding_;
    if (this_01 != (FRHIResource *)0x0) {
      FRHIResource::AddRef(this_01);
      in_RDX->_padding_ = (longlong)this_01;
      FRHIResource::AddRef(this_01);
      FRHIResource::Release(this_01);
      return (TRefCountPtr<FRHITexture>)in_RDX;
    }
    in_RDX->_padding_ = 0;
  }
  return (TRefCountPtr<FRHITexture>)in_RDX;
}

// GetTextureResourceType @ 1498c81f0

EPCGTextureResourceType __thiscall
UPCGRenderTargetData::GetTextureResourceType(UPCGRenderTargetData *this)

{
  return TextureObject;
}

// HoldsTransientResources @ 1498ca720

bool __thiscall UPCGRenderTargetData::HoldsTransientResources(UPCGRenderTargetData *this)

{
  return this->bOwnsRenderTarget;
}

// Initialize @ 1498cc590

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UPCGRenderTargetData::Initialize
          (UPCGRenderTargetData *this,UTextureRenderTarget2D *param_1,TTransform<double> *param_2,
          bool param_3,bool param_4)

{
  int *piVar1;
  longlong *this_00;
  byte bVar2;
  int iVar3;
  UTextureRenderTarget2D *pUVar4;
  code *pcVar5;
  double dVar6;
  bool bVar7;
  char cVar8;
  FTextureRenderTargetResource *pFVar9;
  UEnum *this_01;
  TMatrix<double> *pTVar10;
  bool bVar11;
  undefined1 auStackY_218 [32];
  TVector<double>_u_0 local_1e8;
  undefined8 local_1c8;
  int local_1c0;
  int iStack_1bc;
  FName local_1b8;
  FString local_1b0;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_188;
  double dStack_180;
  double local_178;
  undefined4 local_170;
  TVector<double>_u_0 local_168 [3];
  undefined1 local_120;
  undefined4 uStack_11f;
  undefined2 uStack_11b;
  undefined1 uStack_119;
  TVector<double>_u_0 local_118;
  longlong lStack_100;
  longlong local_f8;
  longlong lStack_f0;
  longlong local_e8;
  TMatrix<double> local_d8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_218;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UTextureRenderTarget2D *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (this->RenderTarget).field0_0x0.DebugPtr = param_1;
  piVar1 = (int *)((longlong)&this->_padding_ + 4);
  dVar6 = (param_2->Rotation).XY.m128d_f64[1];
  this->_padding_ = (longlong)(param_2->Rotation).XY.m128d_f64[0];
  this->_padding_ = (longlong)dVar6;
  dVar6 = (param_2->Rotation).ZW.m128d_f64[1];
  this->_padding_ = (longlong)(param_2->Rotation).ZW.m128d_f64[0];
  this->_padding_ = (longlong)dVar6;
  dVar6 = (param_2->Translation).XY.m128d_f64[1];
  this->_padding_ = (longlong)(param_2->Translation).XY.m128d_f64[0];
  this->_padding_ = (longlong)dVar6;
  dVar6 = (param_2->Translation).ZW.m128d_f64[1];
  this->_padding_ = (longlong)(param_2->Translation).ZW.m128d_f64[0];
  this->_padding_ = (longlong)dVar6;
  dVar6 = (param_2->Scale3D).XY.m128d_f64[1];
  this->_padding_ = (longlong)(param_2->Scale3D).XY.m128d_f64[0];
  this->_padding_ = (longlong)dVar6;
  dVar6 = (param_2->Scale3D).ZW.m128d_f64[1];
  this->_padding_ = (longlong)(param_2->Scale3D).ZW.m128d_f64[0];
  this->_padding_ = (longlong)dVar6;
  *(bool *)&this->_padding_ = param_3;
  this->bOwnsRenderTarget = param_4;
  iVar3 = *piVar1;
  *(undefined4 *)&this->_padding_ = 0;
  if (iVar3 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,(ForAnyElementType *)&this->_padding_,0,piVar1);
  }
  pUVar4 = (this->RenderTarget).field0_0x0.DebugPtr;
  if (pUVar4 != (UTextureRenderTarget2D *)0x0) {
    *(int *)((longlong)&this->_padding_ + 4) = pUVar4->SizeX;
    *(int *)&this->_padding_ = pUVar4->SizeY;
    if (((char)this->_padding_ == '\0') &&
       (pFVar9 = UTextureRenderTarget::GameThread_GetRenderTargetResource
                           ((UTextureRenderTarget *)pUVar4),
       pFVar9 != (FTextureRenderTargetResource *)0x0)) {
      bVar11 = -1 < CpuChannel->Enabled;
      if (bVar11) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId31,"UPCGRenderTargetData::Initialize::ReadData",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\PCGRenderTargetData.cpp"
                   ,0x1f);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId31);
      }
      pUVar4 = (this->RenderTarget).field0_0x0.DebugPtr;
      bVar2 = (pUVar4->RenderTargetFormat).Value;
      if ((bVar2 < 0xb) && ((0x644U >> (bVar2 & 0x1f) & 1) != 0)) {
        local_1c0 = pUVar4->SizeX;
        iStack_1bc = pUVar4->SizeY;
        local_198._0_4_ = pUVar4->SizeX;
        local_198._4_4_ = pUVar4->SizeY;
        local_1a0 = 0;
        local_1e8._s_0.X = 6.36598737586021e-314;
        local_1e8._8_1_ = 1;
        local_1e8._12_4_ = 0x467a0000;
        local_1e8._s_0.Z = (double)(((ulonglong)local_1e8._s_0.Z >> 0x10 & 0xffff) << 0x10);
        local_1c8 = 0;
        local_188 = 0x300000006;
        dStack_180 = local_1e8._s_0.Y;
        local_178 = local_1e8._s_0.Z;
        local_170 = 0;
        (**(code **)(pFVar9->_padding_ + 0x70))
                  (&pFVar9->_padding_,&this->_padding_,&local_188,&local_1a0);
      }
      else if (2 < (byte)LogPCG._0_1_) {
        this_01 = StaticEnum<enum_ETextureRenderTargetFormat>();
        if ((this_01 == (UEnum *)0x0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("EnumClass != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                               ,0xca4,L""), bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        UEnum::GetNameByValue(this_01,(long64)&local_1b8);
        ::FName::ToString(&local_1b8,&local_1b0);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
        if (local_1b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1b0.Data.AllocatorInstance.Data);
        }
      }
      if (bVar11) {
        FCpuProfilerTrace::OutputEndEvent();
      }
    }
    cVar8 = (**(code **)(((this->RenderTarget).field0_0x0.DebugPtr)->_padding_ + 0x1c0))();
    if (cVar8 != '\0') {
      this->bOwnsRenderTarget = false;
    }
  }
  this_00 = &this->_padding_;
  local_120 = 0;
  uStack_11f = 0;
  *this_00 = 0;
  this->_padding_ = 0;
  uStack_11b = 0;
  uStack_119 = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  local_168[0]._8_8_ = _UNK_15076c718;
  local_168[0]._0_8_ = ___xmm_bff0000000000000bff0000000000000;
  this->_padding_ = 0;
  this->_padding_ = 0;
  local_168[0]._s_0.Z = 0.0;
  this->_padding_ = 0;
  UE::Math::TBox<double>::operator+=((TBox<double> *)this_00,(TVector<double> *)&local_168[0]._s_0);
  local_1e8._s_0.Z = 0.0;
  local_1e8._s_0.X = ___xmm_3ff00000000000003ff0000000000000;
  local_1e8._s_0.Y = _UNK_150689688;
  UE::Math::TBox<double>::operator+=((TBox<double> *)this_00,(TVector<double> *)&local_1e8._s_0);
  pTVar10 = UE::Math::TTransform<double>::ToMatrixWithScale
                      ((TTransform<double> *)&this->_padding_,&local_d8);
  UE::Math::TBox<double>::TransformBy
            ((TBox<double> *)this_00,(TBox<double> *)&local_118._s_0,pTVar10);
  *this_00 = (longlong)local_118._s_0.X;
  this->_padding_ = (longlong)local_118._s_0.Y;
  this->_padding_ = (longlong)local_118._s_0.Z;
  this->_padding_ = lStack_100;
  this->_padding_ = local_f8;
  this->_padding_ = lStack_f0;
  this->_padding_ = local_e8;
  return;
}

// IsCacheable @ 1498d0d20

bool __thiscall UPCGRenderTargetData::IsCacheable(UPCGRenderTargetData *this)

{
  return this->bOwnsRenderTarget == false;
}

// ReleaseTransientResources @ 1498d6920

void __thiscall
UPCGRenderTargetData::ReleaseTransientResources(UPCGRenderTargetData *this,wchar_t *param_1)

{
  UTextureRenderTarget2D *this_00;
  
  if ((this->bOwnsRenderTarget != false) &&
     (this_00 = (this->RenderTarget).field0_0x0.DebugPtr, this_00 != (UTextureRenderTarget2D *)0x0))
  {
    UTexture::ReleaseResource((UTexture *)this_00);
    (this->RenderTarget).field0_0x0.DebugPtr = (UTextureRenderTarget2D *)0x0;
    this->bOwnsRenderTarget = false;
  }
  return;
}

// StaticRegisterNativesUPCGRenderTargetData @ 1498f6a00

void __cdecl UPCGRenderTargetData::StaticRegisterNativesUPCGRenderTargetData(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UPCGRenderTargetData_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execInitialize @ 1498fdd60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl UPCGRenderTargetData::execInitialize(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  TTransform<double> *pTVar12;
  bool bVar13;
  undefined1 auStack_c8 [32];
  int local_98;
  int local_94;
  UTextureRenderTarget2D *local_90;
  TTransform<double> local_88;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_c8;
  local_90 = (UTextureRenderTarget2D *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_90,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_90);
  }
  fVar6 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar9 = GlobalVectorConstants::Float0001.m128_f32[3];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[0];
  fVar4 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar7 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar10 = GlobalVectorConstants::FloatZero.m128_f32[3];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[0];
  fVar5 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar8 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar11 = GlobalVectorConstants::Float1110.m128_f32[3];
  local_88.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_88.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  local_88.Rotation.ZW.m128d_f64[0] = (double)fVar6;
  local_88.Rotation.ZW.m128d_f64[1] = (double)fVar9;
  local_88.Translation.ZW.m128d_f64[0] = (double)fVar7;
  local_88.Translation.ZW.m128d_f64[1] = (double)fVar10;
  local_88.Translation.XY.m128d_f64[1]._0_4_ = SUB84((double)fVar4,0);
  local_88.Translation.XY.m128d_f64[0] = (double)fVar2;
  local_88.Translation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar4 >> 0x20);
  local_88.Scale3D.ZW.m128d_f64[0] = (double)fVar8;
  local_88.Scale3D.ZW.m128d_f64[1] = (double)fVar11;
  local_88.Scale3D.XY.m128d_f64[1]._0_4_ = SUB84((double)fVar5,0);
  local_88.Scale3D.XY.m128d_f64[0] = (double)fVar3;
  local_88.Scale3D.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar5 >> 0x20);
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  local_98 = 0;
  pTVar12 = &local_88;
  if ((TTransform<double> *)param_2->MostRecentPropertyAddress != (TTransform<double> *)0x0) {
    pTVar12 = (TTransform<double> *)param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_98,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_98);
  }
  bVar13 = local_98 != 0;
  local_94 = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_94,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_94);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  Initialize((UPCGRenderTargetData *)param_1,local_90,pTVar12,bVar13,local_94 != 0);
  return;
}

