// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 25

// StaticClass @ 149855810

UClass * __cdecl UPCGTextureData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGTextureData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGTextureData",
               &Z_Registration_Info_UClass_UPCGTextureData.InnerSingleton,
               StaticRegisterNativesUPCGTextureData,0x2c0,0x10,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGTextureData>,
               InternalVTableHelperCtorCaller<UPCGTextureData>,local_res8,
               UPCGBaseTextureData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGTextureData.InnerSingleton;
}

// UPCGTextureData @ 14988f590

UPCGTextureData * __thiscall
UPCGTextureData::UPCGTextureData(UPCGTextureData *this,FVTableHelper *param_1)

{
  undefined8 local_res8;
  
  UPCGBaseTextureData::UPCGBaseTextureData((UPCGBaseTextureData *)this,param_1);
  *(undefined ***)this = &___7UPCGTextureData__6B_;
  (this->Texture).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = 0;
  FWeakObjectPtr::operator=(&(this->Texture).WeakPtr,(FObjectPtr)&local_res8);
  *(undefined8 *)&this->PostInitializeCallback = 0;
  *(undefined8 *)&(this->PostInitializeCallback).field_0x28 = 0;
  this->TextureIndex = 0;
  this->bSuccessfullyInitialized = false;
  this->bReadbackFromGPUInitiated = false;
  this->ResourceType = TextureObject;
  (this->TextureHandle).Reference = (IPooledRenderTarget *)0x0;
  this->bUpdatedReadbackTextureResource = false;
  this->bReadbackFromGPUInitiated_DEPRECATED = false;
  return this;
}

// UPCGTextureData @ 14988f610

UPCGTextureData * __thiscall
UPCGTextureData::UPCGTextureData(UPCGTextureData *this,FObjectInitializer *param_1)

{
  undefined8 local_res8;
  
  UPCGBaseTextureData::UPCGBaseTextureData((UPCGBaseTextureData *)this,param_1);
  *(undefined ***)this = &___7UPCGTextureData__6B_;
  (this->Texture).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = 0;
  FWeakObjectPtr::operator=(&(this->Texture).WeakPtr,(FObjectPtr)&local_res8);
  *(undefined8 *)&this->PostInitializeCallback = 0;
  *(undefined8 *)&(this->PostInitializeCallback).field_0x28 = 0;
  this->TextureIndex = 0;
  this->bSuccessfullyInitialized = false;
  this->bReadbackFromGPUInitiated = false;
  this->ResourceType = TextureObject;
  (this->TextureHandle).Reference = (IPooledRenderTarget *)0x0;
  this->bUpdatedReadbackTextureResource = false;
  this->bReadbackFromGPUInitiated_DEPRECATED = false;
  return this;
}

// ~UPCGTextureData @ 149891bc0

void __thiscall UPCGTextureData::~UPCGTextureData(UPCGTextureData *this)

{
  IPooledRenderTarget *pIVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  *(undefined ***)this = &___7UPCGTextureData__6B_;
  pIVar1 = (this->TextureHandle).Reference;
  if (pIVar1 != (IPooledRenderTarget *)0x0) {
    (**(code **)(pIVar1->_padding_ + 0x38))();
  }
  if (*(longlong *)&this->PostInitializeCallback != 0) {
    plVar2 = *(longlong **)&(this->PostInitializeCallback).field_0x28;
    plVar3 = (longlong *)&(this->PostInitializeCallback).field_0x10;
    if (plVar2 != (longlong *)0x0) {
      plVar3 = plVar2;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  *(undefined ***)this = &___7UPCGBaseTextureData__6B_;
  if (*(void **)&this->field_0x208 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x208);
  }
  *(undefined ***)this = &___7UPCGSurfaceData__6B_;
  UPCGSpatialDataWithPointCache::~UPCGSpatialDataWithPointCache
            ((UPCGSpatialDataWithPointCache *)this);
  return;
}

// operator() @ 149896990

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`UPCGTextureData::ReadbackFromGPUTexture'::__l20::<lambda_1>::operator()
          (void *this,void *param_1,int param_2,int param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  code *pcVar7;
  uint uVar8;
  float fVar9;
  bool bVar10;
  UObject *pUVar11;
  undefined8 uVar12;
  longlong lVar13;
  UObject *pUVar14;
  uint uVar15;
  int iVar16;
  longlong lVar17;
  longlong lVar18;
  bool bVar19;
  int local_res8;
  int local_68;
  
  bVar19 = -1 < CpuChannel->Enabled;
  if (bVar19) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId884,"UPCGTextureData::Initialize::DispatchCallback",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\PCGTextureData.cpp"
               ,0x374);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId884);
  }
  bVar10 = FWeakObjectPtr::IsValid(this);
  if ((bVar10) && (pUVar11 = FWeakObjectPtr::Get(this), pUVar11 != (UObject *)0x0)) {
    piVar1 = (int *)((longlong)this + 0xc);
    if ((param_2 - *(int *)((longlong)this + 8) < 0) || (param_3 - *piVar1 < 0)) {
      if (1 < (byte)LogPCG._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
      }
    }
    else {
      if (param_1 == (void *)0x0) {
        if (1 < (byte)LogPCG._0_1_) {
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
        }
      }
      else {
        *(int *)&pUVar11[0xe].field_0x24 = *(int *)((longlong)this + 8);
        *(int *)&pUVar11[0xe].field_0x20 = *piVar1;
        TArray<FLinearColor,TSizedDefaultAllocator<32>_>::SetNum
                  ((TArray<FLinearColor,TSizedDefaultAllocator<32>_> *)(pUVar11 + 0xd),
                   *(int *)((longlong)this + 8) * *piVar1,Default);
        fVar9 = __real_3b808081;
        uVar15 = 0;
        local_68 = 0;
        if (0 < *piVar1) {
          lVar18 = 0;
          local_res8 = 0;
          do {
            iVar16 = 0;
            if (0 < *(int *)((longlong)this + 8)) {
              lVar17 = lVar18 << 4;
              do {
                lVar13 = (longlong)(local_res8 + iVar16);
                bVar3 = *(byte *)((longlong)param_1 + lVar13 * 4 + 2);
                bVar4 = *(byte *)((longlong)param_1 + lVar13 * 4 + 1);
                bVar5 = *(byte *)((longlong)param_1 + lVar13 * 4);
                bVar6 = *(byte *)((longlong)param_1 + lVar13 * 4 + 3);
                uVar8 = 0;
                if ((int)uVar15 < *(int *)&pUVar11[0xd].field_0x8) {
                  uVar8 = ~uVar15 >> 0x1f;
                }
                if ((uVar8 == 0) &&
                   (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar10)) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                uVar15 = uVar15 + 1;
                lVar18 = lVar18 + 1;
                iVar16 = iVar16 + 1;
                puVar2 = (undefined8 *)(lVar17 + *(longlong *)(pUVar11 + 0xd));
                *puVar2 = CONCAT44((float)bVar4 * fVar9,(float)bVar3 * fVar9);
                puVar2[1] = CONCAT44((float)bVar6 * fVar9,(float)bVar5 * fVar9);
                lVar17 = lVar17 + 0x10;
              } while (iVar16 < *(int *)((longlong)this + 8));
            }
            local_68 = local_68 + 1;
            local_res8 = local_res8 + param_2;
          } while (local_68 < *(int *)((longlong)this + 0xc));
        }
      }
      pUVar11[0xf].field_0x14 = 1;
      if (*(void **)&pUVar11[0xf].field_0x18 != (void *)0x0) {
        UE::Core::Private::Function::CheckCallable(*(void **)&pUVar11[0xf].field_0x18);
        pcVar7 = *(code **)&pUVar11[0xf].field_0x18;
        pUVar14 = pUVar11 + 0x10;
        if (*(UObject **)&pUVar11[0x10].field_0x18 != (UObject *)0x0) {
          pUVar14 = *(UObject **)&pUVar11[0x10].field_0x18;
        }
        uVar12 = (**(code **)(*(longlong *)pUVar14 + 8))();
        (*pcVar7)(uVar12);
      }
    }
  }
  if (bVar19) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// AddToCrc @ 14989e410

void __thiscall UPCGTextureData::AddToCrc(UPCGTextureData *this,FArchiveCrc32 *param_1,bool param_2)

{
  undefined1 local_res8 [8];
  
  UPCGData::AddToCrc((UPCGData *)this,param_1,param_2);
  if (*(UPCGMetadata **)&this->field_0x38 != (UPCGMetadata *)0x0) {
    UPCGMetadata::GetLatestAttributeNameOrNone(*(UPCGMetadata **)&this->field_0x38);
    (**(code **)(param_1->_padding_ + 0x178))(param_1,local_res8);
  }
  UPCGData::AddUIDToCrc((UPCGData *)this,param_1);
  return;
}

// CopyInternal @ 1498a5440

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
UPCGTextureData::CopyInternal(UPCGTextureData *this,FPCGContext *param_1)

{
  IPooledRenderTarget *pIVar1;
  IPooledRenderTarget *pIVar2;
  code *pcVar3;
  bool bVar4;
  UPCGSpatialData *pUVar5;
  UObject *pUVar6;
  UPCGTextureData *pUVar7;
  FGCScopeGuard local_res8 [8];
  TObjectPtr<UObject> local_res10;
  UPCGTextureData *local_res18 [2];
  
  if (param_1 == (FPCGContext *)0x0) {
    bVar4 = IsInGameThread();
    if (!bVar4) {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<4331830188552749225>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                         ,0xa9,"Context != nullptr || IsInGameThread()");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pUVar5 = (UPCGSpatialData *)(*pcVar3)();
        return pUVar5;
      }
    }
  }
  else {
    bVar4 = IsInGameThread();
    if (!bVar4) {
      if ((param_1->AsyncState).bIsRunningOnMainThread != false) {
        bVar4 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<4331830188552749348>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                           ,0x124,"!AsyncState.bIsRunningOnMainThread");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pUVar5 = (UPCGSpatialData *)(*pcVar3)();
          return pUVar5;
        }
      }
      FGCScopeGuard::FGCScopeGuard(local_res8);
      pUVar6 = GetTransientPackageAsObject();
      pUVar7 = NewObject<UPCGTextureData>(pUVar6);
      FGCScopeGuard::~FGCScopeGuard(local_res8);
      if (pUVar7 == (UPCGTextureData *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Object",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                           ,0x12a,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pUVar5 = (UPCGSpatialData *)(*pcVar3)();
          return pUVar5;
        }
      }
      local_res18[0] = pUVar7;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UPCGTextureData *)0x0)
         ) {
        UE::GC::MarkAsReachable((UObject *)pUVar7);
      }
      TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>::
      Emplace<TObjectPtr<UObject>_>(&param_1->AsyncObjects,&local_res10,(bool *)local_res18);
      goto LAB_1498a549d;
    }
  }
  pUVar6 = GetTransientPackageAsObject();
  pUVar7 = NewObject<UPCGTextureData>(pUVar6);
LAB_1498a549d:
  UPCGBaseTextureData::CopyBaseTextureData
            ((UPCGBaseTextureData *)this,(UPCGBaseTextureData *)pUVar7);
  pUVar7->ResourceType = this->ResourceType;
  (pUVar7->Texture).WeakPtr = (this->Texture).WeakPtr;
  pIVar1 = (this->TextureHandle).Reference;
  pIVar2 = (pUVar7->TextureHandle).Reference;
  if (pIVar2 != pIVar1) {
    (pUVar7->TextureHandle).Reference = pIVar1;
    if (pIVar1 != (IPooledRenderTarget *)0x0) {
      (**(code **)(pIVar1->_padding_ + 0x30))();
    }
    if (pIVar2 != (IPooledRenderTarget *)0x0) {
      (**(code **)(pIVar2->_padding_ + 0x38))(pIVar2);
    }
  }
  return (UPCGSpatialData *)pUVar7;
}

// GetDataType @ 1498b84a0

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

EPCGDataType __thiscall UPCGTextureData::GetDataType(UPCGTextureData *this)

{
  return Texture;
}

// GetDataTypeId @ 1498b91a0

FPCGDataTypeBaseId * __thiscall UPCGTextureData::GetDataTypeId(UPCGTextureData *this)

{
  int iVar1;
  bool bVar2;
  UPackage *pUVar3;
  TObjectPtr<UScriptStruct_const_>_u_0 TVar4;
  
  if (`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoTexture2D::AsId(void)'
      ::__l2::_thread_safe_static_guard_0__ <=
      *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c)) {
    return &`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoTexture2D::AsId(void)'
            ::__l2::Id;
  }
  _Init_thread_header(&`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoTexture2D::AsId(void)'
                       ::__l2::_thread_safe_static_guard_0__);
  if (`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoTexture2D::AsId(void)'
      ::__l2::_thread_safe_static_guard_0__ != -1) {
    return &`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoTexture2D::AsId(void)'
            ::__l2::Id;
  }
  if (Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoTexture2D.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar3 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoTexture2D.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPCGDataTypeInfoTexture2D,(UObject *)pUVar3,
                         L"PCGDataTypeInfoTexture2D");
    if (Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoTexture2D.OuterSingleton !=
        (UScriptStruct *)0x0) goto LAB_1498b9223;
  }
  else {
LAB_1498b9223:
    TVar4.DebugPtr = Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoTexture2D.OuterSingleton;
    if (Z_Registration_Info_UScriptStruct_FPCGDataTypeInfo.OuterSingleton == (UScriptStruct *)0x0) {
      pUVar3 = Z_Construct_UPackage__Script_PCG();
      Z_Registration_Info_UScriptStruct_FPCGDataTypeInfo.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FPCGDataTypeInfo,(UObject *)pUVar3,
                           L"PCGDataTypeInfo");
      if (Z_Registration_Info_UScriptStruct_FPCGDataTypeInfo.OuterSingleton == (UScriptStruct *)0x0)
      goto LAB_1498b927a;
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
    if (bVar2) goto LAB_1498b927c;
  }
LAB_1498b927a:
  TVar4.DebugPtr = (UScriptStruct *)0x0;
LAB_1498b927c:
  `public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoTexture2D::AsId(void)'
  ::__l2::Id.Struct.field0_0x0 =
       (TObjectPtr<UScriptStruct_const_>)(TObjectPtr<UScriptStruct_const_>)TVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (TVar4.DebugPtr != (UScriptStruct *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)TVar4.DebugPtr);
  }
  _Init_thread_footer(&`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoTexture2D::AsId(void)'
                       ::__l2::_thread_safe_static_guard_0__);
  return &`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoTexture2D::AsId(void)'
          ::__l2::Id;
}

// GetPrivateStaticClass @ 1498bd250

UClass * __cdecl UPCGTextureData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGTextureData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGTextureData",
               &Z_Registration_Info_UClass_UPCGTextureData.InnerSingleton,
               StaticRegisterNativesUPCGTextureData,0x2c0,0x10,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGTextureData>,
               InternalVTableHelperCtorCaller<UPCGTextureData>,local_res8,
               UPCGBaseTextureData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGTextureData.InnerSingleton;
}

// GetRefCountedTexture @ 1498c52b0

TRefCountPtr<IPooledRenderTarget> __thiscall
UPCGTextureData::GetRefCountedTexture(UPCGTextureData *this)

{
  IPooledRenderTarget *pIVar1;
  IPooledRenderTarget *in_RDX;
  
  in_RDX->_padding_ = 0;
  pIVar1 = (this->TextureHandle).Reference;
  in_RDX->_padding_ = (longlong)pIVar1;
  if (pIVar1 != (IPooledRenderTarget *)0x0) {
    (**(code **)(pIVar1->_padding_ + 0x30))();
  }
  return (TRefCountPtr<IPooledRenderTarget>)in_RDX;
}

// GetTexture @ 1498c7ff0

UTexture * __thiscall UPCGTextureData::GetTexture(UPCGTextureData *this)

{
  bool bVar1;
  UTexture *pUVar2;
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->Texture).WeakPtr);
  if (bVar1) {
    pUVar2 = (UTexture *)FWeakObjectPtr::Get(&(this->Texture).WeakPtr);
    return pUVar2;
  }
  return (UTexture *)0x0;
}

// GetTextureRHI @ 1498c80f0

TRefCountPtr<FRHITexture> __thiscall UPCGTextureData::GetTextureRHI(UPCGTextureData *this)

{
  FRHIResource *this_00;
  IPooledRenderTarget *pIVar1;
  FRHITexture *this_01;
  bool bVar2;
  UTexture *this_02;
  FTextureResource *pFVar3;
  FRHITexture *in_RDX;
  
  if (this->ResourceType == TextureObject) {
    bVar2 = FWeakObjectPtr::IsValid(&(this->Texture).WeakPtr);
    if (bVar2) {
      this_02 = (UTexture *)FWeakObjectPtr::Get(&(this->Texture).WeakPtr);
      pFVar3 = UTexture::GetResource(this_02);
      if (pFVar3 != (FTextureResource *)0x0) {
        this_00 = (FRHIResource *)pFVar3->_padding_;
        if (this_00 != (FRHIResource *)0x0) {
          FRHIResource::AddRef(this_00);
          in_RDX->_padding_ = (longlong)this_00;
          FRHIResource::AddRef(this_00);
          FRHIResource::Release(this_00);
          return (TRefCountPtr<FRHITexture>)in_RDX;
        }
        in_RDX->_padding_ = 0;
        return (TRefCountPtr<FRHITexture>)in_RDX;
      }
    }
    in_RDX->_padding_ = 0;
    return (TRefCountPtr<FRHITexture>)in_RDX;
  }
  pIVar1 = (this->TextureHandle).Reference;
  if (pIVar1 == (IPooledRenderTarget *)0x0) {
    in_RDX->_padding_ = 0;
    return (TRefCountPtr<FRHITexture>)in_RDX;
  }
  this_01 = (pIVar1->RenderTargetItem).TargetableTexture.Reference;
  in_RDX->_padding_ = (longlong)this_01;
  if (this_01 == (FRHITexture *)0x0) {
    return (TRefCountPtr<FRHITexture>)in_RDX;
  }
  FRHIResource::AddRef((FRHIResource *)this_01);
  return (TRefCountPtr<FRHITexture>)in_RDX;
}

// GetTextureResourceType @ 1498c8200

EPCGTextureResourceType __thiscall UPCGTextureData::GetTextureResourceType(UPCGTextureData *this)

{
  return this->ResourceType;
}

// GetTextureSlice @ 1498c8240

int __thiscall UPCGTextureData::GetTextureSlice(UPCGTextureData *this)

{
  return this->TextureIndex;
}

// HoldsTransientResources @ 1498ca730

bool __thiscall UPCGTextureData::HoldsTransientResources(UPCGTextureData *this)

{
  return this->ResourceType == ExportedTexture;
}

// Initialize @ 1498cd900

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UPCGTextureData::Initialize
          (UPCGTextureData *this,UTexture *param_1,uint param_2,TTransform<double> *param_3,
          TFunction<void___cdecl(void)> *param_4,bool param_5)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  undefined1 auStackY_98 [32];
  bool local_58 [16];
  longlong local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_98;
  this->ResourceType = TextureObject;
  local_58[0] = false;
  InitializeInternal(this,param_1,param_2,param_3,local_58,param_5,(bool)this->field_0x258);
  if (local_58[0] == false) {
    local_48 = *(longlong *)param_4;
    uStack_20 = (longlong *)0x0;
    if (local_48 != 0) {
      puVar10 = (undefined8 *)&param_4->field_0x10;
      if (*(undefined8 **)&param_4->field_0x28 != (undefined8 *)0x0) {
        puVar10 = *(undefined8 **)&param_4->field_0x28;
      }
      (**(code **)*puVar10)(puVar10,&local_38);
    }
    lVar6 = *(longlong *)&this->PostInitializeCallback;
    uVar7 = *(undefined8 *)&(this->PostInitializeCallback).field_0x8;
    uVar2 = *(undefined4 *)&(this->PostInitializeCallback).field_0x10;
    uVar3 = *(undefined4 *)&(this->PostInitializeCallback).field_0x14;
    uVar4 = *(undefined4 *)&(this->PostInitializeCallback).field_0x18;
    uVar5 = *(undefined4 *)&(this->PostInitializeCallback).field_0x1c;
    uVar8 = *(undefined8 *)&(this->PostInitializeCallback).field_0x20;
    plVar9 = *(longlong **)&(this->PostInitializeCallback).field_0x28;
    *(longlong *)&this->PostInitializeCallback = local_48;
    *(undefined8 *)&(this->PostInitializeCallback).field_0x8 = uStack_40;
    *(undefined4 *)&(this->PostInitializeCallback).field_0x10 = (undefined4)local_38;
    *(undefined4 *)&(this->PostInitializeCallback).field_0x14 = local_38._4_4_;
    *(undefined4 *)&(this->PostInitializeCallback).field_0x18 = uStack_30;
    *(undefined4 *)&(this->PostInitializeCallback).field_0x1c = uStack_2c;
    *(undefined4 *)&(this->PostInitializeCallback).field_0x20 = (undefined4)local_28;
    *(undefined4 *)&(this->PostInitializeCallback).field_0x24 = local_28._4_4_;
    *(undefined4 *)&(this->PostInitializeCallback).field_0x28 = (undefined4)uStack_20;
    *(undefined4 *)&(this->PostInitializeCallback).field_0x2c = uStack_20._4_4_;
    local_38._0_4_ = uVar2;
    local_38._4_4_ = uVar3;
    uStack_30 = uVar4;
    uStack_2c = uVar5;
    local_28 = uVar8;
    uStack_20 = plVar9;
    if (lVar6 != 0) {
      plVar11 = &local_38;
      if (plVar9 != (longlong *)0x0) {
        plVar11 = plVar9;
      }
      local_48 = lVar6;
      uStack_40 = uVar7;
      (**(code **)(*plVar11 + 0x10))();
    }
  }
  else {
    UE::Core::Private::Function::CheckCallable(*(void **)param_4);
    pcVar1 = *(code **)param_4;
    plVar9 = (longlong *)&param_4->field_0x10;
    if (*(longlong **)&param_4->field_0x28 != (longlong *)0x0) {
      plVar9 = *(longlong **)&param_4->field_0x28;
    }
    uVar8 = (**(code **)(*plVar9 + 8))();
    (*pcVar1)(uVar8);
  }
  return;
}

// Initialize @ 1498cda60

bool __thiscall
UPCGTextureData::Initialize
          (UPCGTextureData *this,UTexture *param_1,uint param_2,TTransform<double> *param_3,
          bool param_4,bool param_5)

{
  bool local_res8 [32];
  
  this->ResourceType = TextureObject;
  local_res8[0] = false;
  InitializeInternal(this,param_1,param_2,param_3,local_res8,param_4,param_5);
  return local_res8[0];
}

// Initialize @ 1498cdab0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
UPCGTextureData::Initialize
          (UPCGTextureData *this,TRefCountPtr<IPooledRenderTarget> param_1,uint param_2,
          TTransform<double> *param_3,bool param_4)

{
  undefined1 *this_00;
  bool bVar1;
  IPooledRenderTarget *pIVar2;
  IPooledRenderTarget *pIVar3;
  TIntPoint<int>_u_0_s_0 TVar4;
  double dVar5;
  double dVar6;
  TMatrix<double> *pTVar7;
  longlong lVar8;
  TIntPoint<int> *pTVar9;
  undefined1 auStack_128 [32];
  TVector<double>_u_0 local_108;
  TVector<double>_u_0 local_f0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined1 local_c0;
  undefined4 uStack_bf;
  undefined2 uStack_bb;
  undefined1 uStack_b9;
  TMatrix<double> local_b8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_128;
  this->ResourceType = ExportedTexture;
  pIVar2 = (IPooledRenderTarget *)(param_1.Reference)->_padding_;
  pIVar3 = (this->TextureHandle).Reference;
  if (pIVar3 != pIVar2) {
    (this->TextureHandle).Reference = pIVar2;
    if (pIVar2 != (IPooledRenderTarget *)0x0) {
      (**(code **)(pIVar2->_padding_ + 0x30))();
    }
    if (pIVar3 != (IPooledRenderTarget *)0x0) {
      (**(code **)(pIVar3->_padding_ + 0x38))(pIVar3);
    }
  }
  this->TextureIndex = param_2;
  this_00 = &this->field_0x218;
  dVar5 = (param_3->Rotation).XY.m128d_f64[1];
  *(double *)&this->field_0x110 = (param_3->Rotation).XY.m128d_f64[0];
  *(double *)&this->field_0x118 = dVar5;
  dVar5 = (param_3->Rotation).ZW.m128d_f64[1];
  *(double *)&this->field_0x120 = (param_3->Rotation).ZW.m128d_f64[0];
  *(double *)&this->field_0x128 = dVar5;
  uStack_bf = 0;
  dVar5 = (param_3->Translation).XY.m128d_f64[1];
  *(double *)&this->field_0x130 = (param_3->Translation).XY.m128d_f64[0];
  *(double *)&this->field_0x138 = dVar5;
  uStack_bb = 0;
  dVar5 = (param_3->Translation).ZW.m128d_f64[1];
  *(double *)&this->field_0x140 = (param_3->Translation).ZW.m128d_f64[0];
  *(double *)&this->field_0x148 = dVar5;
  uStack_b9 = 0;
  dVar5 = (param_3->Scale3D).XY.m128d_f64[1];
  *(double *)&this->field_0x150 = (param_3->Scale3D).XY.m128d_f64[0];
  *(double *)&this->field_0x158 = dVar5;
  local_c0 = 0;
  dVar5 = (param_3->Scale3D).ZW.m128d_f64[0];
  dVar6 = (param_3->Scale3D).ZW.m128d_f64[1];
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&this->field_0x220 = 0;
  this->field_0x258 = param_4;
  *(double *)&this->field_0x160 = dVar5;
  *(double *)&this->field_0x168 = dVar6;
  local_108._s_0.Z = 0.0;
  *(undefined8 *)&this->field_0x228 = 0;
  *(undefined8 *)&this->field_0x230 = 0;
  local_108._s_0.Y = _UNK_15076c718;
  local_108._s_0.X = ___xmm_bff0000000000000bff0000000000000;
  *(undefined8 *)&this->field_0x238 = 0;
  *(undefined8 *)&this->field_0x240 = 0;
  *(undefined8 *)&this->field_0x248 = 0;
  UE::Math::TBox<double>::operator+=((TBox<double> *)this_00,(TVector<double> *)&local_108._s_0);
  local_108._s_0.Z = 0.0;
  local_108._s_0.X = ___xmm_3ff00000000000003ff0000000000000;
  local_108._s_0.Y = _UNK_150689688;
  UE::Math::TBox<double>::operator+=((TBox<double> *)this_00,(TVector<double> *)&local_108._s_0);
  pTVar7 = UE::Math::TTransform<double>::ToMatrixWithScale
                     ((TTransform<double> *)&this->field_0x110,&local_b8);
  UE::Math::TBox<double>::TransformBy((TBox<double> *)this_00,(TBox<double> *)&local_f0._s_0,pTVar7)
  ;
  *(double *)this_00 = local_f0._s_0.X;
  *(double *)&this->field_0x220 = local_f0._s_0.Y;
  *(double *)&this->field_0x228 = local_f0._s_0.Z;
  *(undefined8 *)&this->field_0x230 = uStack_d8;
  *(undefined8 *)&this->field_0x238 = local_d0;
  *(undefined8 *)&this->field_0x240 = uStack_c8;
  *(ulonglong *)&this->field_0x248 =
       CONCAT17(uStack_b9,CONCAT25(uStack_bb,CONCAT41(uStack_bf,local_c0)));
  if (param_4) {
    if ((longlong *)(param_1.Reference)->_padding_ == (longlong *)0x0) {
      pTVar9 = &UE::Math::TIntPoint<int>::ZeroValue;
    }
    else {
      lVar8 = (**(code **)(*(longlong *)(param_1.Reference)->_padding_ + 0x10))();
      pTVar9 = (TIntPoint<int> *)(lVar8 + 0x2c);
    }
    TVar4 = *(TIntPoint<int>_u_0_s_0 *)pTVar9;
    *(int *)&this->field_0x254 = TVar4.X;
    *(int *)&this->field_0x250 = TVar4.Y;
    this->bSuccessfullyInitialized = true;
  }
  else {
    ReadbackFromGPUTexture(this);
  }
  bVar1 = this->bSuccessfullyInitialized;
  if ((longlong *)(param_1.Reference)->_padding_ != (longlong *)0x0) {
    (**(code **)(*(longlong *)(param_1.Reference)->_padding_ + 0x38))();
  }
  return bVar1;
}

// InitializeFromCPUTexture @ 1498ce300

/* WARNING: Removing unreachable block (ram,0x0001498ce407) */
/* WARNING: Removing unreachable block (ram,0x0001498ce428) */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

TOptional<bool> __thiscall UPCGTextureData::InitializeFromCPUTexture(UPCGTextureData *this)

{
  undefined1 *this_00;
  undefined8 *puVar1;
  ushort *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  byte bVar6;
  byte bVar7;
  int iVar8;
  code *pcVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  bool bVar12;
  TOptional<bool> TVar13;
  UTexture2D *this_01;
  UClass *pUVar14;
  FLinearColor *pFVar15;
  undefined2 *in_RDX;
  longlong lVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  int *piVar19;
  int iVar20;
  uint uVar21;
  byte *pbVar22;
  uint uVar23;
  longlong lVar24;
  longlong lVar25;
  longlong lVar26;
  longlong lVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined8 *local_res18;
  FName local_e8;
  float local_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float local_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float local_c0;
  float fStack_bc;
  float fStack_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  FString local_a0;
  FLinearColor local_90 [5];
  
  bVar12 = FWeakObjectPtr::IsValid(&(this->Texture).WeakPtr);
  TVar13 = SUB82(in_RDX,0);
  if ((!bVar12) ||
     (this_01 = (UTexture2D *)FWeakObjectPtr::Get(&(this->Texture).WeakPtr),
     this_01 == (UTexture2D *)0x0)) {
LAB_1498cf36e:
    *in_RDX = 0x100;
    return TVar13;
  }
  pUVar14 = Z_Construct_UClass_UTexture2D_NoRegister();
  iVar8 = (int)pUVar14->_padding_;
  if ((*(int *)(this_01->_padding_ + 0x38) < iVar8) ||
     (((longlong *)*(undefined1 **)(*(longlong *)(this_01->_padding_ + 0x30) + (longlong)iVar8 * 8)
       != &pUVar14->_padding_ || (UTexture2D::GetCPUCopy(this_01), local_res18 == (undefined8 *)0x0)
      ))) goto LAB_1498cf36e;
  iVar8 = *(int *)(local_res18 + 2);
  this_00 = &this->field_0x208;
  *(int *)&this->field_0x254 = iVar8;
  iVar20 = *(int *)((longlong)local_res18 + 0x14);
  *(int *)&this->field_0x250 = iVar20;
  iVar20 = iVar20 * iVar8;
  TArray<FLinearColor,TSizedDefaultAllocator<32>_>::SetNum
            ((TArray<FLinearColor,TSizedDefaultAllocator<32>_> *)this_00,iVar20,Default);
  lVar25 = (longlong)iVar20;
  cVar5 = *(char *)((longlong)local_res18 + 0x1c);
  if (cVar5 == '\0') {
    lVar26 = local_res18[5];
    lVar27 = local_res18[4];
    if ((lVar26 < 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("ArrayNum >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xfe,L""), bVar12)) {
      pcVar9 = (code *)swi(3);
      TVar13 = (TOptional<bool>)(*pcVar9)();
      return TVar13;
    }
    fVar30 = __real_3b808081;
    uVar23 = 0;
    lVar16 = 0;
    if (0 < lVar25) {
      lVar24 = 0;
      do {
        if ((lVar26 <= lVar16) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar12)) {
          pcVar9 = (code *)swi(3);
          TVar13 = (TOptional<bool>)(*pcVar9)();
          return TVar13;
        }
        bVar6 = *(byte *)(lVar16 + lVar27);
        if ((lVar26 <= lVar16) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar12)) {
          pcVar9 = (code *)swi(3);
          TVar13 = (TOptional<bool>)(*pcVar9)();
          return TVar13;
        }
        bVar7 = *(byte *)(lVar16 + lVar27);
        if ((lVar26 <= lVar16) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar12)) {
          pcVar9 = (code *)swi(3);
          TVar13 = (TOptional<bool>)(*pcVar9)();
          return TVar13;
        }
        fStack_d4 = 1.0;
        local_e0 = (float)*(byte *)(lVar16 + lVar27) * fVar30;
        fStack_dc = (float)bVar7 * fVar30;
        uVar21 = 0;
        if ((int)uVar23 < *(int *)&this->field_0x210) {
          uVar21 = ~uVar23 >> 0x1f;
        }
        fStack_d8 = (float)bVar6 * fVar30;
        if ((uVar21 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar9 = (code *)swi(3);
          TVar13 = (TOptional<bool>)(*pcVar9)();
          return TVar13;
        }
        uVar23 = uVar23 + 1;
        lVar16 = lVar16 + 1;
        puVar1 = (undefined8 *)(lVar24 + *(longlong *)&this->field_0x208);
        *puVar1 = CONCAT44(fStack_dc,local_e0);
        puVar1[1] = CONCAT44(fStack_d4,fStack_d8);
        lVar24 = lVar24 + 0x10;
      } while (lVar16 < lVar25);
    }
  }
  else if (cVar5 == '\x01') {
    if ((*(char *)((longlong)local_res18 + 0x1c) != '\x01') &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("Format == ERawImageFormat::BGRA8",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageCore\\Public\\ImageCore.h"
                            ,0x2be,L""), bVar12)) {
      pcVar9 = (code *)swi(3);
      TVar13 = (TOptional<bool>)(*pcVar9)();
      return TVar13;
    }
    fVar30 = __real_3b808081;
    uVar23 = 0;
    uVar18 = local_res18[5];
    uVar17 = 0;
    if (0 < lVar25) {
      lVar26 = 0;
      pbVar22 = (byte *)(local_res18[4] + 1);
      do {
        if ((uVar18 >> 2 <= uVar17) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar12)) {
          pcVar9 = (code *)swi(3);
          TVar13 = (TOptional<bool>)(*pcVar9)();
          return TVar13;
        }
        local_e0 = (float)pbVar22[1] * fVar30;
        fStack_dc = (float)*pbVar22 * fVar30;
        fStack_d8 = (float)pbVar22[-1] * fVar30;
        uVar21 = 0;
        if ((int)uVar23 < *(int *)&this->field_0x210) {
          uVar21 = ~uVar23 >> 0x1f;
        }
        fStack_d4 = (float)pbVar22[2] * fVar30;
        if ((uVar21 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar9 = (code *)swi(3);
          TVar13 = (TOptional<bool>)(*pcVar9)();
          return TVar13;
        }
        lVar27 = *(longlong *)this_00;
        uVar23 = uVar23 + 1;
        uVar17 = uVar17 + 1;
        pbVar22 = pbVar22 + 4;
        *(undefined8 *)(lVar26 + lVar27) = CONCAT44(fStack_dc,local_e0);
        ((undefined8 *)(lVar26 + lVar27))[1] = CONCAT44(fStack_d4,fStack_d8);
        lVar26 = lVar26 + 0x10;
      } while ((longlong)uVar17 < lVar25);
    }
  }
  else if (cVar5 == '\x02') {
    if ((*(char *)((longlong)local_res18 + 0x1c) != '\x02') &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("Format == ERawImageFormat::BGRE8",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageCore\\Public\\ImageCore.h"
                            ,0x2c4,L""), bVar12)) {
      pcVar9 = (code *)swi(3);
      TVar13 = (TOptional<bool>)(*pcVar9)();
      return TVar13;
    }
    fVar30 = __real_3b808081;
    uVar23 = 0;
    uVar18 = local_res18[5];
    uVar17 = 0;
    if (0 < lVar25) {
      lVar26 = 0;
      pbVar22 = (byte *)(local_res18[4] + 1);
      do {
        if ((uVar18 >> 2 <= uVar17) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar12)) {
          pcVar9 = (code *)swi(3);
          TVar13 = (TOptional<bool>)(*pcVar9)();
          return TVar13;
        }
        local_e0 = (float)pbVar22[1] * fVar30;
        fStack_dc = (float)*pbVar22 * fVar30;
        fStack_d8 = (float)pbVar22[-1] * fVar30;
        uVar21 = 0;
        if ((int)uVar23 < *(int *)&this->field_0x210) {
          uVar21 = ~uVar23 >> 0x1f;
        }
        fStack_d4 = (float)pbVar22[2] * fVar30;
        if ((uVar21 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar9 = (code *)swi(3);
          TVar13 = (TOptional<bool>)(*pcVar9)();
          return TVar13;
        }
        lVar27 = *(longlong *)this_00;
        uVar23 = uVar23 + 1;
        uVar17 = uVar17 + 1;
        pbVar22 = pbVar22 + 4;
        *(undefined8 *)(lVar26 + lVar27) = CONCAT44(fStack_dc,local_e0);
        ((undefined8 *)(lVar26 + lVar27))[1] = CONCAT44(fStack_d4,fStack_d8);
        lVar26 = lVar26 + 0x10;
      } while ((longlong)uVar17 < lVar25);
    }
  }
  else if (cVar5 == '\x03') {
    if ((*(char *)((longlong)local_res18 + 0x1c) != '\x03') &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("Format == ERawImageFormat::RGBA16",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageCore\\Public\\ImageCore.h"
                            ,0x2ca,L""), bVar12)) {
      pcVar9 = (code *)swi(3);
      TVar13 = (TOptional<bool>)(*pcVar9)();
      return TVar13;
    }
    lVar26 = local_res18[4];
    uVar18 = (ulonglong)local_res18[5] >> 1;
    if (((longlong)(iVar20 * 4) != uVar18) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("PixelCount * 4 == DataView.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\PCGTextureData.cpp"
                            ,0x300,L""), bVar12)) {
      pcVar9 = (code *)swi(3);
      TVar13 = (TOptional<bool>)(*pcVar9)();
      return TVar13;
    }
    uVar23 = 0;
    if (0 < lVar25) {
      lVar27 = 0;
      do {
        uVar21 = uVar23 * 4;
        if ((uVar18 <= uVar21 + 3) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar12)) {
          pcVar9 = (code *)swi(3);
          TVar13 = (TOptional<bool>)(*pcVar9)();
          return TVar13;
        }
        fVar30 = (float)*(ushort *)(lVar26 + (ulonglong)(uVar21 + 3) * 2);
        if ((uVar18 <= uVar21 + 2) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar12)) {
          pcVar9 = (code *)swi(3);
          TVar13 = (TOptional<bool>)(*pcVar9)();
          return TVar13;
        }
        fVar29 = (float)*(ushort *)(lVar26 + (ulonglong)(uVar21 + 2) * 2);
        if ((uVar18 <= uVar21 + 1) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar12)) {
          pcVar9 = (code *)swi(3);
          TVar13 = (TOptional<bool>)(*pcVar9)();
          return TVar13;
        }
        fVar28 = (float)*(ushort *)(lVar26 + (ulonglong)(uVar21 + 1) * 2);
        if ((uVar18 <= uVar21) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar12)) {
          pcVar9 = (code *)swi(3);
          TVar13 = (TOptional<bool>)(*pcVar9)();
          return TVar13;
        }
        local_d0 = (float)*(ushort *)(lVar26 + (ulonglong)uVar21 * 2);
        uVar21 = 0;
        if ((int)uVar23 < *(int *)&this->field_0x210) {
          uVar21 = ~uVar23 >> 0x1f;
        }
        fStack_cc = fVar28;
        fStack_c8 = fVar29;
        fStack_c4 = fVar30;
        if ((uVar21 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar9 = (code *)swi(3);
          TVar13 = (TOptional<bool>)(*pcVar9)();
          return TVar13;
        }
        uVar23 = uVar23 + 1;
        puVar1 = (undefined8 *)(lVar27 + *(longlong *)&this->field_0x208);
        *puVar1 = CONCAT44(fStack_cc,local_d0);
        puVar1[1] = CONCAT44(fStack_c4,fStack_c8);
        lVar27 = lVar27 + 0x10;
        lVar25 = lVar25 + -1;
      } while (lVar25 != 0);
    }
  }
  else if (cVar5 == '\x04') {
    if ((*(char *)((longlong)local_res18 + 0x1c) != '\x04') &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("Format == ERawImageFormat::RGBA16F",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageCore\\Public\\ImageCore.h"
                            ,0x2d0,L""), bVar12)) {
      pcVar9 = (code *)swi(3);
      TVar13 = (TOptional<bool>)(*pcVar9)();
      return TVar13;
    }
    lVar26 = local_res18[4];
    uVar23 = 0;
    uVar18 = local_res18[5];
    if (0 < iVar20) {
      lVar27 = 0;
      do {
        uVar21 = 0;
        if ((longlong)(int)uVar23 < (longlong)(uVar18 >> 3)) {
          uVar21 = (uint)((int)uVar23 >> 0x1f) >> 0x1f ^ 1;
        }
        if ((uVar21 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar12)) {
          pcVar9 = (code *)swi(3);
          TVar13 = (TOptional<bool>)(*pcVar9)();
          return TVar13;
        }
        pFVar15 = FLinearColor::FLinearColor
                            (local_90,(FFloat16Color *)(lVar26 + (longlong)(int)uVar23 * 8));
        uVar10 = *(undefined8 *)&pFVar15->field0_0x0;
        uVar11 = *(undefined8 *)((longlong)&pFVar15->field0_0x0 + 8);
        uVar21 = 0;
        if ((int)uVar23 < *(int *)&this->field_0x210) {
          uVar21 = ~uVar23 >> 0x1f;
        }
        if ((uVar21 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar9 = (code *)swi(3);
          TVar13 = (TOptional<bool>)(*pcVar9)();
          return TVar13;
        }
        lVar16 = *(longlong *)this_00;
        uVar23 = uVar23 + 1;
        *(undefined8 *)(lVar27 + lVar16) = uVar10;
        ((undefined8 *)(lVar27 + lVar16))[1] = uVar11;
        lVar27 = lVar27 + 0x10;
        lVar25 = lVar25 + -1;
      } while (lVar25 != 0);
    }
  }
  else if (cVar5 == '\x05') {
    if ((*(char *)((longlong)local_res18 + 0x1c) != '\x05') &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("Format == ERawImageFormat::RGBA32F",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageCore\\Public\\ImageCore.h"
                            ,0x2d6,L""), bVar12)) {
      pcVar9 = (code *)swi(3);
      TVar13 = (TOptional<bool>)(*pcVar9)();
      return TVar13;
    }
    lVar26 = local_res18[4];
    uVar23 = 0;
    uVar18 = local_res18[5];
    uVar17 = 0;
    if (0 < iVar20) {
      lVar27 = 0;
      do {
        if ((uVar18 >> 4 <= uVar17) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar12)) {
          pcVar9 = (code *)swi(3);
          TVar13 = (TOptional<bool>)(*pcVar9)();
          return TVar13;
        }
        uVar10 = *(undefined8 *)(lVar26 + lVar27);
        uVar11 = ((undefined8 *)(lVar26 + lVar27))[1];
        uVar21 = 0;
        if ((int)uVar23 < *(int *)&this->field_0x210) {
          uVar21 = ~uVar23 >> 0x1f;
        }
        if ((uVar21 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar9 = (code *)swi(3);
          TVar13 = (TOptional<bool>)(*pcVar9)();
          return TVar13;
        }
        lVar16 = *(longlong *)this_00;
        uVar23 = uVar23 + 1;
        uVar17 = uVar17 + 1;
        *(undefined8 *)(lVar27 + lVar16) = uVar10;
        ((undefined8 *)(lVar27 + lVar16))[1] = uVar11;
        lVar27 = lVar27 + 0x10;
      } while ((longlong)uVar17 < lVar25);
    }
  }
  else if (cVar5 == '\x06') {
    if ((*(char *)((longlong)local_res18 + 0x1c) != '\x06') &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("Format == ERawImageFormat::G16",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageCore\\Public\\ImageCore.h"
                            ,0x2b8,L""), bVar12)) {
      pcVar9 = (code *)swi(3);
      TVar13 = (TOptional<bool>)(*pcVar9)();
      return TVar13;
    }
    fVar30 = __real_3b808081;
    uVar23 = 0;
    lVar26 = local_res18[4];
    uVar18 = 0;
    uVar17 = (ulonglong)local_res18[5] >> 1;
    if (0 < lVar25) {
      lVar27 = 0;
      do {
        if ((uVar17 <= uVar18) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar12)) {
          pcVar9 = (code *)swi(3);
          TVar13 = (TOptional<bool>)(*pcVar9)();
          return TVar13;
        }
        bVar6 = *(byte *)(lVar26 + uVar18 * 2);
        if ((uVar17 <= uVar18) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar12)) {
          pcVar9 = (code *)swi(3);
          TVar13 = (TOptional<bool>)(*pcVar9)();
          return TVar13;
        }
        bVar7 = *(byte *)(lVar26 + uVar18 * 2);
        if ((uVar17 <= uVar18) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar12)) {
          pcVar9 = (code *)swi(3);
          TVar13 = (TOptional<bool>)(*pcVar9)();
          return TVar13;
        }
        fStack_d4 = 1.0;
        local_e0 = (float)*(byte *)(lVar26 + uVar18 * 2) * fVar30;
        fStack_dc = (float)bVar7 * fVar30;
        uVar21 = 0;
        if ((int)uVar23 < *(int *)&this->field_0x210) {
          uVar21 = ~uVar23 >> 0x1f;
        }
        fStack_d8 = (float)bVar6 * fVar30;
        if ((uVar21 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar9 = (code *)swi(3);
          TVar13 = (TOptional<bool>)(*pcVar9)();
          return TVar13;
        }
        uVar23 = uVar23 + 1;
        uVar18 = uVar18 + 1;
        puVar1 = (undefined8 *)(*(longlong *)&this->field_0x208 + lVar27);
        *puVar1 = CONCAT44(fStack_dc,local_e0);
        puVar1[1] = CONCAT44(fStack_d4,fStack_d8);
        lVar27 = lVar27 + 0x10;
      } while ((longlong)uVar18 < lVar25);
    }
  }
  else if (cVar5 == '\a') {
    if ((*(char *)((longlong)local_res18 + 0x1c) != '\a') &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("Format == ERawImageFormat::R16F",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageCore\\Public\\ImageCore.h"
                            ,0x2dc,L""), bVar12)) {
      pcVar9 = (code *)swi(3);
      TVar13 = (TOptional<bool>)(*pcVar9)();
      return TVar13;
    }
    lVar26 = local_res18[4];
    uVar23 = 0;
    uVar18 = local_res18[5];
    if (0 < iVar20) {
      lVar27 = 0;
      do {
        uVar21 = 0;
        if ((longlong)(int)uVar23 < (longlong)(uVar18 >> 1)) {
          uVar21 = (uint)((int)uVar23 >> 0x1f) >> 0x1f ^ 1;
        }
        if ((uVar21 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar12)) {
          pcVar9 = (code *)swi(3);
          TVar13 = (TOptional<bool>)(*pcVar9)();
          return TVar13;
        }
        puVar2 = (ushort *)(lVar26 + (longlong)(int)uVar23 * 2);
        fVar30 = FGenericPlatformMath::LoadHalf(puVar2);
        if ((uVar21 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar12)) {
          pcVar9 = (code *)swi(3);
          TVar13 = (TOptional<bool>)(*pcVar9)();
          return TVar13;
        }
        fVar29 = FGenericPlatformMath::LoadHalf(puVar2);
        if ((uVar21 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar12)) {
          pcVar9 = (code *)swi(3);
          TVar13 = (TOptional<bool>)(*pcVar9)();
          return TVar13;
        }
        local_c0 = FGenericPlatformMath::LoadHalf(puVar2);
        uStack_b4 = 0x3f800000;
        uVar21 = 0;
        if ((int)uVar23 < *(int *)&this->field_0x210) {
          uVar21 = ~uVar23 >> 0x1f;
        }
        fStack_bc = fVar29;
        fStack_b8 = fVar30;
        if ((uVar21 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar9 = (code *)swi(3);
          TVar13 = (TOptional<bool>)(*pcVar9)();
          return TVar13;
        }
        uVar23 = uVar23 + 1;
        puVar1 = (undefined8 *)(lVar27 + *(longlong *)&this->field_0x208);
        *puVar1 = CONCAT44(fStack_bc,local_c0);
        puVar1[1] = CONCAT44(uStack_b4,fStack_b8);
        lVar27 = lVar27 + 0x10;
        lVar25 = lVar25 + -1;
      } while (lVar25 != 0);
    }
  }
  else {
    if (cVar5 != '\b') {
      if (1 < (byte)LogPCG._0_1_) {
        local_e8 = (FName)this_01->_padding_;
        ::FName::ToString(&local_e8,&local_a0);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
        if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a0.Data.AllocatorInstance.Data);
        }
      }
      *(undefined8 *)&this->field_0x250 = 0;
      TArray<FLinearColor,TSizedDefaultAllocator<32>_>::SetNum
                ((TArray<FLinearColor,TSizedDefaultAllocator<32>_> *)this_00,0,Default);
      *in_RDX = 0x100;
      if (local_res18 == (undefined8 *)0x0) {
        return TVar13;
      }
      piVar19 = (int *)(local_res18 + 1);
      LOCK();
      iVar8 = *piVar19;
      *piVar19 = *piVar19 + -1;
      UNLOCK();
      goto joined_r0x0001498cf31e;
    }
    if ((*(char *)((longlong)local_res18 + 0x1c) != '\b') &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("Format == ERawImageFormat::R32F",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageCore\\Public\\ImageCore.h"
                            ,0x2e2,L""), bVar12)) {
      pcVar9 = (code *)swi(3);
      TVar13 = (TOptional<bool>)(*pcVar9)();
      return TVar13;
    }
    uVar23 = 0;
    lVar26 = local_res18[4];
    uVar18 = 0;
    uVar17 = (ulonglong)local_res18[5] >> 2;
    if (0 < lVar25) {
      lVar27 = 0;
      do {
        if ((uVar17 <= uVar18) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar12)) {
          pcVar9 = (code *)swi(3);
          TVar13 = (TOptional<bool>)(*pcVar9)();
          return TVar13;
        }
        uVar3 = *(undefined4 *)(lVar26 + uVar18 * 4);
        if ((uVar17 <= uVar18) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar12)) {
          pcVar9 = (code *)swi(3);
          TVar13 = (TOptional<bool>)(*pcVar9)();
          return TVar13;
        }
        uVar4 = *(undefined4 *)(lVar26 + uVar18 * 4);
        if ((uVar17 <= uVar18) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar12)) {
          pcVar9 = (code *)swi(3);
          TVar13 = (TOptional<bool>)(*pcVar9)();
          return TVar13;
        }
        local_b0 = *(undefined4 *)(lVar26 + uVar18 * 4);
        uVar21 = 0;
        if ((int)uVar23 < *(int *)&this->field_0x210) {
          uVar21 = ~uVar23 >> 0x1f;
        }
        uStack_a4 = 0x3f800000;
        uStack_ac = uVar4;
        uStack_a8 = uVar3;
        if ((uVar21 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar9 = (code *)swi(3);
          TVar13 = (TOptional<bool>)(*pcVar9)();
          return TVar13;
        }
        lVar16 = *(longlong *)this_00;
        uVar23 = uVar23 + 1;
        uVar18 = uVar18 + 1;
        *(undefined8 *)(lVar16 + lVar27) = CONCAT44(uStack_ac,local_b0);
        ((undefined8 *)(lVar16 + lVar27))[1] = CONCAT44(uStack_a4,uStack_a8);
        lVar27 = lVar27 + 0x10;
      } while ((longlong)uVar18 < lVar25);
    }
  }
  *in_RDX = 0x101;
  if (local_res18 == (undefined8 *)0x0) {
    return TVar13;
  }
  piVar19 = (int *)(local_res18 + 1);
  LOCK();
  iVar8 = *piVar19;
  *piVar19 = *piVar19 + -1;
  UNLOCK();
joined_r0x0001498cf31e:
  if (((iVar8 == 1) && (local_res18 + 1 != (undefined8 *)0x0)) && (local_res18 != (undefined8 *)0x0)
     ) {
    (**(code **)*local_res18)(local_res18,1);
  }
  return TVar13;
}

// InitializeInternal @ 1498cf550

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UPCGTextureData::InitializeInternal
          (UPCGTextureData *this,UTexture *param_1,uint param_2,TTransform<double> *param_3,
          bool *param_4,bool param_5,bool param_6)

{
  undefined1 *this_00;
  TIntPoint<int>_u_0_s_0 TVar1;
  double dVar2;
  double dVar3;
  bool bVar4;
  TMatrix<double> *pTVar5;
  longlong lVar6;
  TIntPoint<int> *pTVar7;
  bool bVar8;
  undefined1 auStack_148 [32];
  char local_128;
  char local_127;
  UTexture *local_120;
  TVector<double>_u_0 local_118;
  TVector<double>_u_0 local_100;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined1 local_d0;
  undefined4 uStack_cf;
  undefined2 uStack_cb;
  undefined1 uStack_c9;
  TMatrix<double> local_c8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_148;
  bVar8 = -1 < CpuChannel->Enabled;
  if (bVar8) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId459,"UPCGTextureData::InitializeInternal",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\PCGTextureData.cpp"
               ,0x1cb);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId459);
  }
  if ((this->bSuccessfullyInitialized == false) && (param_1 != (UTexture *)0x0)) {
    if (this->bReadbackFromGPUInitiated == false) {
      this->ResourceType = TextureObject;
      local_120 = param_1;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      FWeakObjectPtr::operator=(&(this->Texture).WeakPtr,(FObjectPtr)&local_120);
      this->TextureIndex = param_2;
      this_00 = &this->field_0x218;
      dVar2 = (param_3->Rotation).XY.m128d_f64[1];
      *(double *)&this->field_0x110 = (param_3->Rotation).XY.m128d_f64[0];
      *(double *)&this->field_0x118 = dVar2;
      dVar2 = (param_3->Rotation).ZW.m128d_f64[1];
      *(double *)&this->field_0x120 = (param_3->Rotation).ZW.m128d_f64[0];
      *(double *)&this->field_0x128 = dVar2;
      local_d0 = 0;
      dVar2 = (param_3->Translation).XY.m128d_f64[1];
      *(double *)&this->field_0x130 = (param_3->Translation).XY.m128d_f64[0];
      *(double *)&this->field_0x138 = dVar2;
      uStack_cf = 0;
      dVar2 = (param_3->Translation).ZW.m128d_f64[1];
      *(double *)&this->field_0x140 = (param_3->Translation).ZW.m128d_f64[0];
      *(double *)&this->field_0x148 = dVar2;
      uStack_cb = 0;
      dVar2 = (param_3->Scale3D).XY.m128d_f64[1];
      *(double *)&this->field_0x150 = (param_3->Scale3D).XY.m128d_f64[0];
      *(double *)&this->field_0x158 = dVar2;
      uStack_c9 = 0;
      dVar2 = (param_3->Scale3D).ZW.m128d_f64[0];
      dVar3 = (param_3->Scale3D).ZW.m128d_f64[1];
      *(undefined8 *)this_00 = 0;
      *(undefined8 *)&this->field_0x220 = 0;
      *(undefined8 *)&this->field_0x250 = 0;
      *(double *)&this->field_0x160 = dVar2;
      *(double *)&this->field_0x168 = dVar3;
      this->field_0x258 = param_6;
      local_118._s_0.Z = 0.0;
      *(undefined8 *)&this->field_0x228 = 0;
      *(undefined8 *)&this->field_0x230 = 0;
      local_118._s_0.Y = _UNK_15076c718;
      local_118._s_0.X = ___xmm_bff0000000000000bff0000000000000;
      *(undefined8 *)&this->field_0x238 = 0;
      *(undefined8 *)&this->field_0x240 = 0;
      *(undefined8 *)&this->field_0x248 = 0;
      UE::Math::TBox<double>::operator+=((TBox<double> *)this_00,(TVector<double> *)&local_118._s_0)
      ;
      local_118._s_0.Z = 0.0;
      local_118._s_0.X = ___xmm_3ff00000000000003ff0000000000000;
      local_118._s_0.Y = _UNK_150689688;
      UE::Math::TBox<double>::operator+=((TBox<double> *)this_00,(TVector<double> *)&local_118._s_0)
      ;
      pTVar5 = UE::Math::TTransform<double>::ToMatrixWithScale
                         ((TTransform<double> *)&this->field_0x110,&local_c8);
      UE::Math::TBox<double>::TransformBy
                ((TBox<double> *)this_00,(TBox<double> *)&local_100._s_0,pTVar5);
      *(double *)this_00 = local_100._s_0.X;
      *(double *)&this->field_0x220 = local_100._s_0.Y;
      *(double *)&this->field_0x228 = local_100._s_0.Z;
      *(undefined8 *)&this->field_0x230 = uStack_e8;
      *(undefined8 *)&this->field_0x238 = local_e0;
      *(undefined8 *)&this->field_0x240 = uStack_d8;
      *(ulonglong *)&this->field_0x248 =
           CONCAT17(uStack_c9,CONCAT25(uStack_cb,CONCAT41(uStack_cf,local_d0)));
      if (param_6) {
        (**(code **)(*(longlong *)this + 0x4a8))(this,&local_120);
        if (local_120 == (UTexture *)0x0) {
          pTVar7 = &UE::Math::TIntPoint<int>::ZeroValue;
        }
        else {
          lVar6 = (**(code **)(local_120->_padding_ + 0x20))();
          pTVar7 = (TIntPoint<int> *)(lVar6 + 0x24);
        }
        TVar1 = *(TIntPoint<int>_u_0_s_0 *)pTVar7;
        *(int *)&this->field_0x254 = TVar1.X;
        *(int *)&this->field_0x250 = TVar1.Y;
        this->bSuccessfullyInitialized = true;
        if (param_4 != (bool *)0x0) {
          *param_4 = true;
        }
        if (local_120 != (UTexture *)0x0) {
          FRHIResource::Release((FRHIResource *)local_120);
        }
        goto LAB_1498cf82d;
      }
      InitializeFromCPUTexture(this);
      if (local_127 != '\0') {
        if (local_128 == '\0') {
          bVar4 = ReadbackFromGPUTexture(this);
          if (param_4 != (bool *)0x0) {
            *param_4 = bVar4;
          }
          goto LAB_1498cf82d;
        }
        this->bSuccessfullyInitialized = true;
        goto joined_r0x0001498cf5f7;
      }
    }
    if (param_4 != (bool *)0x0) {
      *param_4 = false;
    }
  }
  else {
joined_r0x0001498cf5f7:
    if (param_4 != (bool *)0x0) {
      *param_4 = true;
    }
  }
LAB_1498cf82d:
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// IsCacheable @ 1498d0d40

bool __thiscall UPCGTextureData::IsCacheable(UPCGTextureData *this)

{
  return this->ResourceType != ExportedTexture;
}

// ReadbackFromGPUTexture @ 1498d5480

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

bool __thiscall UPCGTextureData::ReadbackFromGPUTexture(UPCGTextureData *this)

{
  FWeakObjectPtr *pFVar1;
  ushort uVar2;
  TRefCountPtr<FRHISamplerState> this_00;
  ForAnyElementType _Src;
  bool bVar3;
  UObject *pUVar4;
  UStreamableRenderAsset *this_01;
  longlong lVar5;
  FString *pFVar6;
  int iVar7;
  code **ppcVar8;
  wchar_t *pwVar9;
  bool bVar10;
  undefined1 auStackY_168 [32];
  FRHITexture *local_128;
  FName local_120;
  FWeakObjectPtr local_118;
  FWeakObjectPtr local_110;
  code *local_108;
  uint local_100;
  FString local_f8;
  FPCGTextureReadbackDispatchParams local_e8;
  int local_c8;
  int iStack_c4;
  FString local_b8;
  FString local_a8;
  FScopedCapture local_98;
  code *local_58 [2];
  code *local_48 [3];
  code **local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_168;
  bVar10 = -1 < CpuChannel->Enabled;
  if (bVar10) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId837,"UPCGTextureData::ReadbackFromGPUTexture",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\PCGTextureData.cpp"
               ,0x345);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId837);
  }
  if (this->bReadbackFromGPUInitiated != false) {
    bVar3 = false;
    goto LAB_1498d58c5;
  }
  if (this->ResourceType == TextureObject) {
    bVar3 = FWeakObjectPtr::IsValid(&(this->Texture).WeakPtr);
    if (bVar3) {
      if (this->bUpdatedReadbackTextureResource == false) {
        pUVar4 = FWeakObjectPtr::Get(&(this->Texture).WeakPtr);
        (**(code **)(*(longlong *)pUVar4 + 0x328))(pUVar4);
        this->bUpdatedReadbackTextureResource = true;
      }
      this_01 = (UStreamableRenderAsset *)FWeakObjectPtr::Get(&(this->Texture).WeakPtr);
      bVar3 = UStreamableRenderAsset::HasPendingInitOrStreaming(this_01,true);
      if (bVar3) {
        bVar3 = false;
        goto LAB_1498d58c5;
      }
      goto LAB_1498d556a;
    }
  }
  else {
LAB_1498d556a:
    (**(code **)(*(longlong *)this + 0x4a8))(this,&local_128);
    if (local_128 != (FRHITexture *)0x0) {
      local_e8.SourceSampler.Reference = (FRHISamplerState *)0x0;
      local_e8.SourceTexture.Reference = local_128;
      FRHIResource::AddRef((FRHIResource *)local_128);
      this_00.Reference = local_e8.SourceSampler.Reference;
      if (local_e8.SourceSampler.Reference !=
          TStaticStateRHI<TStaticSamplerState<0,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
          ::StaticResource.StateRHI.Reference) {
        local_e8.SourceSampler.Reference =
             TStaticStateRHI<TStaticSamplerState<0,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
             ::StaticResource.StateRHI.Reference;
        if (TStaticStateRHI<TStaticSamplerState<0,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
            ::StaticResource.StateRHI.Reference != (FRHISamplerState *)0x0) {
          FRHIResource::AddRef
                    ((FRHIResource *)
                     TStaticStateRHI<TStaticSamplerState<0,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
                     ::StaticResource.StateRHI.Reference);
        }
        if ((FRHIResource *)this_00.Reference != (FRHIResource *)0x0) {
          FRHIResource::Release((FRHIResource *)this_00.Reference);
        }
      }
      local_e8.SourceTextureIndex = this->TextureIndex;
      lVar5 = (**(code **)(local_128->_padding_ + 0x20))();
      local_e8.SourceDimensions.field0_0x0._s_0.X = *(int *)(lVar5 + 0x24);
      local_e8.SourceDimensions.field0_0x0._s_0.Y = *(int *)(lVar5 + 0x28);
      uVar2 = *(ushort *)(lVar5 + 0x2c);
      local_c8 = local_e8.SourceDimensions.field0_0x0._s_0.X;
      iStack_c4 = local_e8.SourceDimensions.field0_0x0._s_0.Y;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      local_118.ObjectIndex = 0;
      local_118.ObjectSerialNumber = 0;
      local_120 = (FName)this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=(&local_118,(FObjectPtr)&local_120);
      local_120 = (FName)local_128->_padding_;
      pFVar6 = ::FName::ToString(&local_120,&local_a8);
      if ((pFVar6->Data).ArrayNum == 0) {
        pwVar9 = L"";
      }
      else {
        pwVar9 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
      }
      ::FString::FString(&local_b8,pwVar9);
      if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.Data.AllocatorInstance.Data);
      }
      RenderCaptureInterface::FScopedCapture::FScopedCapture
                (&local_98,0 < PCGTextureSamplingHelpers::GTriggerReadbackCaptureDispatches,
                 L"PCGTextureReadbackCapture",(wchar_t *)0x0);
      _Src.Data = local_b8.Data.AllocatorInstance.Data;
      local_108 = (code *)CONCAT44(iStack_c4,local_c8);
      iVar7 = PCGTextureSamplingHelpers::GTriggerReadbackCaptureDispatches + -1;
      local_100 = (uint)uVar2;
      PCGTextureSamplingHelpers::GTriggerReadbackCaptureDispatches = 0;
      if (0 < iVar7) {
        PCGTextureSamplingHelpers::GTriggerReadbackCaptureDispatches = iVar7;
      }
      local_110 = local_118;
      local_f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (local_b8.Data.ArrayNum == 0) {
        local_f8.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_b8.Data.ArrayNum,0,(ForAnyElementType *)&local_f8,
                   local_b8.Data.ArrayNum,&local_f8.Data.ArrayMax);
        memcpy(local_f8.Data.AllocatorInstance.Data,_Src.Data,(longlong)local_b8.Data.ArrayNum * 2);
      }
      local_58[0] = (code *)0x0;
      local_30 = FMemory::Malloc(0x30,8);
      *local_30 = (code *)&UE::Core::Private::Function::
                           TFunction_OwnedObject<`UPCGTextureData::ReadbackFromGPUTexture'::`20'::<lambda_1>,0,1>
                           ::_vftable_;
      pFVar1 = (FWeakObjectPtr *)(local_30 + 1);
      *pFVar1 = local_110;
      local_30[2] = local_108;
      *(uint *)(local_30 + 3) = local_100;
      ::FString::FString((FString *)(local_30 + 4),&local_f8);
      if (pFVar1 != (FWeakObjectPtr *)0x0) {
        local_58[0] = UE::Core::Private::Function::
                      TFunctionRefCaller<`UPCGTextureData::ReadbackFromGPUTexture'::__l20::<lambda_1>,void,void_*,int,int>
                      ::Call;
      }
      FPCGTextureReadbackInterface::Dispatch
                (&local_e8,(TFunction<void___cdecl(void_*,int,int)> *)local_58);
      if (local_58[0] != (code *)0x0) {
        ppcVar8 = local_58 + 2;
        if (local_30 != (code **)0x0) {
          ppcVar8 = local_30;
        }
        (**(code **)(*ppcVar8 + 0x10))();
      }
      if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f8.Data.AllocatorInstance.Data);
      }
      this->bReadbackFromGPUInitiated = true;
      RenderCaptureInterface::FScopedCapture::~FScopedCapture(&local_98);
      if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b8.Data.AllocatorInstance.Data);
      }
      if ((FRHIResource *)local_e8.SourceSampler.Reference != (FRHIResource *)0x0) {
        FRHIResource::Release((FRHIResource *)local_e8.SourceSampler.Reference);
      }
      if (local_e8.SourceTexture.Reference != (FRHITexture *)0x0) {
        FRHIResource::Release((FRHIResource *)local_e8.SourceTexture.Reference);
      }
      if (local_128 != (FRHITexture *)0x0) {
        FRHIResource::Release((FRHIResource *)local_128);
      }
      bVar3 = false;
      goto LAB_1498d58c5;
    }
    bVar3 = FWeakObjectPtr::IsValid(&(this->Texture).WeakPtr);
    if (bVar3) {
      if (1 < (byte)LogPCG._0_1_) {
        pUVar4 = FWeakObjectPtr::Get(&(this->Texture).WeakPtr);
        local_120.ComparisonIndex.Value = *(uint *)&pUVar4->field_0x18;
        local_120.Number = *(uint *)&pUVar4->field_0x1c;
        ::FName::ToString(&local_120,&local_a8);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
        if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a8.Data.AllocatorInstance.Data);
        }
      }
    }
    else if (1 < (byte)LogPCG._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
    }
    if (local_128 != (FRHITexture *)0x0) {
      FRHIResource::Release((FRHIResource *)local_128);
    }
  }
  bVar3 = true;
LAB_1498d58c5:
  if (bVar10) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar3;
}

// ReleaseTransientResources @ 1498d6970

void __thiscall UPCGTextureData::ReleaseTransientResources(UPCGTextureData *this,wchar_t *param_1)

{
  IPooledRenderTarget *pIVar1;
  
  pIVar1 = (this->TextureHandle).Reference;
  if (pIVar1 != (IPooledRenderTarget *)0x0) {
    (this->TextureHandle).Reference = (IPooledRenderTarget *)0x0;
                    /* WARNING: Could not recover jumptable at 0x0001498d698d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pIVar1->_padding_ + 0x38))();
    return;
  }
  return;
}

// StaticRegisterNativesUPCGTextureData @ 1498f6b20

void __cdecl UPCGTextureData::StaticRegisterNativesUPCGTextureData(void)

{
  return;
}

