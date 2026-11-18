// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenColorIO
// Functions: 35

// StaticClass @ 14d764370

UClass * __cdecl UOpenColorIOColorTransform::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOpenColorIOColorTransform.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OpenColorIO",L"OpenColorIOColorTransform",
               &Z_Registration_Info_UClass_UOpenColorIOColorTransform.InnerSingleton,
               StaticRegisterNativesUOpenColorIOColorTransform,200,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UOpenColorIOColorTransform>,
               InternalVTableHelperCtorCaller<UOpenColorIOColorTransform>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOpenColorIOColorTransform.InnerSingleton;
}

// UOpenColorIOColorTransform @ 14d769320

UOpenColorIOColorTransform * __thiscall
UOpenColorIOColorTransform::UOpenColorIOColorTransform
          (UOpenColorIOColorTransform *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->bIsDisplayViewType = false;
  this->_padding_ = (longlong)&___7UOpenColorIOColorTransform__6B_;
  (this->SourceColorSpace).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SourceColorSpace).Data.ArrayNum = 0;
  (this->SourceColorSpace).Data.ArrayMax = 0;
  (this->DestinationColorSpace).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DestinationColorSpace).Data.ArrayNum = 0;
  (this->DestinationColorSpace).Data.ArrayMax = 0;
  (this->Display).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Display).Data.ArrayNum = 0;
  (this->Display).Data.ArrayMax = 0;
  (this->View).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->View).Data.ArrayNum = 0;
  (this->View).Data.ArrayMax = 0;
  this->DisplayViewDirection = Forward;
  (this->LookupTextures).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LookupTextures).ArrayNum = 0;
  (this->LookupTextures).ArrayMax = 0;
  (this->LoadedTransformResources).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LoadedTransformResources).ArrayNum = 0;
  (this->LoadedTransformResources).ArrayMax = 0;
  FRenderCommandFence::FRenderCommandFence(&this->ReleaseFence);
  return this;
}

// UOpenColorIOColorTransform @ 14d7693a0

UOpenColorIOColorTransform * __thiscall
UOpenColorIOColorTransform::UOpenColorIOColorTransform
          (UOpenColorIOColorTransform *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->bIsDisplayViewType = false;
  this->_padding_ = (longlong)&___7UOpenColorIOColorTransform__6B_;
  (this->SourceColorSpace).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SourceColorSpace).Data.ArrayNum = 0;
  (this->SourceColorSpace).Data.ArrayMax = 0;
  (this->DestinationColorSpace).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DestinationColorSpace).Data.ArrayNum = 0;
  (this->DestinationColorSpace).Data.ArrayMax = 0;
  (this->Display).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Display).Data.ArrayNum = 0;
  (this->Display).Data.ArrayMax = 0;
  (this->View).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->View).Data.ArrayNum = 0;
  (this->View).Data.ArrayMax = 0;
  this->DisplayViewDirection = Forward;
  (this->LookupTextures).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LookupTextures).ArrayNum = 0;
  (this->LookupTextures).ArrayMax = 0;
  (this->LoadedTransformResources).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LoadedTransformResources).ArrayNum = 0;
  (this->LoadedTransformResources).ArrayMax = 0;
  FRenderCommandFence::FRenderCommandFence(&this->ReleaseFence);
  return this;
}

// ~UOpenColorIOColorTransform @ 14d769d30

void __thiscall
UOpenColorIOColorTransform::~UOpenColorIOColorTransform(UOpenColorIOColorTransform *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UOpenColorIOColorTransform__6B_;
  FRenderCommandFence::~FRenderCommandFence(&this->ReleaseFence);
  DestructItems<FOpenColorIOTransformResource,int>
            ((FOpenColorIOTransformResource *)
             (this->LoadedTransformResources).AllocatorInstance.Data,
             (this->LoadedTransformResources).ArrayNum);
  pFVar1 = (this->LoadedTransformResources).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->LookupTextures).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->View).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Display).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DestinationColorSpace).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SourceColorSpace).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// AllColorTransformsCacheResourceShadersForRendering @ 14d76c680

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __cdecl UOpenColorIOColorTransform::AllColorTransformsCacheResourceShadersForRendering(void)

{
  code *pcVar1;
  bool bVar2;
  EInternalObjectFlags EVar3;
  uint uVar4;
  UClass *pUVar5;
  longlong lVar6;
  TObjectIterator<UOpenColorIOColorTransform> local_28;
  
  local_28.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ObjectArray.ArrayNum = 0;
  local_28.ObjectArray.ArrayMax = 0;
  local_28.Index = 0xffffffff;
  EVar3 = UE::GetAsyncLoadingInternalFlagsExclusion();
  pUVar5 = StaticClass();
  GetObjectsOfClass(pUVar5,&local_28.ObjectArray,true,RF_ClassDefaultObject,
                    EVar3 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted));
  while( true ) {
    TObjectIterator<UOpenColorIOColorTransform>::Advance(&local_28);
    lVar6 = (longlong)local_28.Index;
    if (local_28.Index < 0) break;
    if (local_28.ObjectArray.ArrayNum <= local_28.Index) break;
    uVar4 = 0;
    if (local_28.Index < local_28.ObjectArray.ArrayNum) {
      uVar4 = (uint)~local_28.Index >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    CacheResourceShadersForRendering
              (*(UOpenColorIOColorTransform **)
                (local_28.ObjectArray.AllocatorInstance.Data + lVar6 * 8),false);
  }
  if (local_28.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.ObjectArray.AllocatorInstance.Data);
  }
  return;
}

// AreRenderResourcesReady @ 14d76cbf0

bool __thiscall
UOpenColorIOColorTransform::AreRenderResourcesReady(UOpenColorIOColorTransform *this)

{
  FScriptContainerElement *pFVar1;
  FOpenColorIOShaderMap *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  FTextureResource *pFVar6;
  FOpenColorIOTransformResource **ppFVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  int iVar10;
  undefined1 local_res8 [8];
  
  bVar4 = IsInGameThread();
  if ((!bVar4) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Compositing\\OpenColorIO\\Source\\OpenColorIO\\Private\\OpenColorIOColorTransform.cpp"
                         ,0x206,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  ppFVar7 = this->ColorTransformResources;
  iVar10 = 0;
  iVar8 = 0;
  if ((FRenderCommandFence *)ppFVar7 != &this->ReleaseFence) {
    do {
      if (*ppFVar7 != (FOpenColorIOTransformResource *)0x0) {
        pFVar2 = ((*ppFVar7)->GameThreadShaderMap).Reference;
        iVar10 = iVar10 + 1;
        if ((pFVar2 != (FOpenColorIOShaderMap *)0x0) && (pFVar2->bCompilationFinalized != 0)) {
          iVar8 = iVar8 + 1;
        }
      }
      ppFVar7 = ppFVar7 + 1;
    } while ((FRenderCommandFence *)ppFVar7 != &this->ReleaseFence);
    if (iVar10 != iVar8) {
      return false;
    }
  }
  pFVar9 = (this->LookupTextures).AllocatorInstance.Data;
  iVar8 = (this->LookupTextures).ArrayNum;
  pFVar1 = pFVar9 + (longlong)iVar8 * 8;
  while( true ) {
    if ((this->LookupTextures).ArrayNum != iVar8) {
      `TCheckedPointerIterator<TObjectPtr<UTexture>_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar9 == pFVar1) break;
    pFVar6 = UTexture::GetResource(*(UTexture **)pFVar9);
    if (pFVar6 == (FTextureResource *)0x0) {
      return false;
    }
    pFVar9 = pFVar9 + 8;
  }
  return true;
}

// BeginDestroy @ 14d76cce0

void __thiscall UOpenColorIOColorTransform::BeginDestroy(UOpenColorIOColorTransform *this)

{
  UObject::BeginDestroy((UObject *)this);
  FRenderCommandFence::BeginFence(&this->ReleaseFence,RenderThread);
  return;
}

// BuildShaderParamMetadata @ 14d76cd20

/* WARNING: Enum "EUniformBufferBaseType": Some values do not have unique names */

FShaderParametersMetadata * __thiscall
UOpenColorIOColorTransform::BuildShaderParamMetadata(UOpenColorIOColorTransform *this)

{
  int iVar1;
  int iVar2;
  ForAnyElementType FVar3;
  undefined1 uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  FShaderParametersMetadata *pFVar9;
  UClass *pUVar10;
  code *pcVar11;
  wchar_t *pwVar12;
  int *piVar13;
  FScriptContainerElement *pFVar14;
  wchar_t *pwVar15;
  ForAnyElementType FVar16;
  FScriptContainerElement *this_00;
  bool bVar17;
  undefined1 local_res8 [8];
  FName local_res10;
  FName local_res18;
  FScriptContainerElement *local_res20;
  FString local_a8;
  FString local_98;
  TArray<FShaderParametersMetadata::FMember,TSizedDefaultAllocator<32>_> local_88;
  FString local_78;
  FShaderParametersMetadataBuilder local_68;
  
  piVar13 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c);
  if ((*piVar13 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    atexit(`UOpenColorIOColorTransform::BuildShaderParamMetadata'::__l2::
           _dynamic_atexit_destructor_for__AllTextureResourceNames__);
    _Init_thread_footer(&::_TSS0);
  }
  if ((*piVar13 < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
    atexit(`UOpenColorIOColorTransform::BuildShaderParamMetadata'::__l2::
           _dynamic_atexit_destructor_for__AllSamplerResourceNames__);
    _Init_thread_footer(&::_TSS1);
  }
  local_68.Members.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.Members.ArrayNum = 0;
  local_68.Members.ArrayMax = 0;
  local_68.NextMemberOffset = 0;
  if ((*piVar13 <
       `public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FOpenColorIOPixelShaderParameters::FTypeInfo::GetStructMetadata(void)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FOpenColorIOPixelShaderParameters::FTypeInfo::GetStructMetadata(void)'
                           ::__l2::_thread_safe_static_guard_0__), uVar4 = local_res8[0],
     `public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FOpenColorIOPixelShaderParameters::FTypeInfo::GetStructMetadata(void)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    pcVar11 = FOpenColorIOPixelShaderParameters::zzAppendMemberGetPrev;
    local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_88.ArrayNum = 0;
    local_88.ArrayMax = 0;
    do {
      pcVar11 = (code *)(*pcVar11)(uVar4,&local_88);
    } while (pcVar11 != (code *)0x0);
    AlgoImpl::Reverse<FShaderParametersMetadata::FMember>
              ((FMember *)local_88.AllocatorInstance.Data,local_88.ArrayNum);
    FShaderParametersMetadata::FShaderParametersMetadata
              (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FOpenColorIOPixelShaderParameters::FTypeInfo::GetStructMetadata(void)'
                ::__l2::StaticStructMetadata,ShaderParameterStruct,Shader,
               L"FOpenColorIOPixelShaderParameters",L"FOpenColorIOPixelShaderParameters",
               (wchar_t *)0x0,(wchar_t *)0x0,
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Compositing\\OpenColorIO\\Source\\OpenColorIO\\Public\\OpenColorIOShader.h"
               ,0x15,0x120,&local_88,false,(FRHIUniformBufferLayoutInitializer *)0x0,None);
    if ((FMember *)local_88.AllocatorInstance.Data != (FMember *)0x0) {
      FMemory::Free(local_88.AllocatorInstance.Data);
    }
    atexit(`FOpenColorIOPixelShaderParameters::FTypeInfo::GetStructMetadata'::__l2::
           _dynamic_atexit_destructor_for__StaticStructMetadata__);
    _Init_thread_footer(&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FOpenColorIOPixelShaderParameters::FTypeInfo::GetStructMetadata(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  FShaderParametersMetadataBuilder::AddIncludedStruct
            (&local_68,
             &`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FOpenColorIOPixelShaderParameters::FTypeInfo::GetStructMetadata(void)'
              ::__l2::StaticStructMetadata,Float);
  this_00 = (this->LookupTextures).AllocatorInstance.Data;
  iVar1 = (this->LookupTextures).ArrayNum;
  pFVar14 = this_00 + (longlong)iVar1 * 8;
  local_res20 = pFVar14;
  do {
    if ((this->LookupTextures).ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TObjectPtr<UTexture>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (this_00 == pFVar14) {
      pFVar9 = FShaderParametersMetadataBuilder::Build(&local_68,ShaderParameterStruct,L"");
      if (local_68.Members.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Members.AllocatorInstance.Data);
      }
      return pFVar9;
    }
    if ((*(longlong *)this_00 != 0) && ((*(uint *)(*(longlong *)this_00 + 8) >> 0x1e & 1) == 0)) {
      local_res10 = *(FName *)(*(longlong *)this_00 + 0x18);
      ::FName::ToString(&local_res10,&local_a8);
      FVar3 = AllTextureResourceNames.AllocatorInstance;
      pFVar14 = AllTextureResourceNames.AllocatorInstance.Data +
                (longlong)AllTextureResourceNames.ArrayNum * 0x10;
      if (AllTextureResourceNames.AllocatorInstance.Data != pFVar14) {
        FVar16 = AllTextureResourceNames.AllocatorInstance;
        iVar6 = local_a8.Data.ArrayNum;
        do {
          iVar2 = *(int *)(FVar16.Data + 8);
          if (iVar2 == iVar6) {
            if (1 < iVar2) {
              iVar6 = FGenericPlatformStricmp::Stricmp
                                (*(wchar_t **)FVar16.Data,
                                 (wchar_t *)local_a8.Data.AllocatorInstance.Data);
              bVar17 = iVar6 == 0;
              iVar6 = local_a8.Data.ArrayNum;
              goto LAB_14d76ce54;
            }
LAB_14d76ce66:
            uVar5 = (uint)((longlong)FVar16.Data - (longlong)FVar3.Data >> 4);
            if (uVar5 != 0xffffffff) goto LAB_14d76cf5b;
            break;
          }
          bVar17 = iVar2 + iVar6 == 1;
LAB_14d76ce54:
          if (bVar17) goto LAB_14d76ce66;
          FVar16.Data = FVar16.Data + 0x10;
        } while (FVar16.Data != pFVar14);
      }
      if (((AllTextureResourceNames.AllocatorInstance.Data <= (FScriptContainerElement *)&local_a8)
          && ((FScriptContainerElement *)&local_a8 <
              AllTextureResourceNames.AllocatorInstance.Data +
              (longlong)AllTextureResourceNames.ArrayMax * 0x10)) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar17)) {
        pcVar11 = (code *)swi(3);
        pFVar9 = (FShaderParametersMetadata *)(*pcVar11)();
        return pFVar9;
      }
      uVar5 = AllTextureResourceNames.ArrayNum;
      if (AllTextureResourceNames.ArrayNum == AllTextureResourceNames.ArrayMax) {
        uVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&AllTextureResourceNames.AllocatorInstance,
                           &AllTextureResourceNames.ArrayMax);
      }
      AllTextureResourceNames.ArrayNum = uVar5 + 1;
      pFVar14 = AllTextureResourceNames.AllocatorInstance.Data + (longlong)(int)uVar5 * 0x10;
      *(undefined8 *)pFVar14 = 0;
      *(FScriptContainerElement **)pFVar14 = local_a8.Data.AllocatorInstance.Data;
      local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)(pFVar14 + 8) = local_a8.Data.ArrayNum;
      *(int *)(pFVar14 + 0xc) = local_a8.Data.ArrayMax;
      local_a8.Data.ArrayNum = 0;
      local_a8.Data.ArrayMax = 0;
LAB_14d76cf5b:
      if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.Data.AllocatorInstance.Data);
      }
      local_res18 = *(FName *)(*(longlong *)this_00 + 0x18);
      ::FName::ToString(&local_res18,&local_78);
      ::FString::ConcatFC(&local_98,&local_78,L"Sampler");
      FVar3 = AllSamplerResourceNames.AllocatorInstance;
      pFVar14 = AllSamplerResourceNames.AllocatorInstance.Data +
                (longlong)AllSamplerResourceNames.ArrayNum * 0x10;
      if (AllSamplerResourceNames.AllocatorInstance.Data != pFVar14) {
        FVar16 = AllSamplerResourceNames.AllocatorInstance;
        iVar6 = local_98.Data.ArrayNum;
        do {
          iVar2 = *(int *)(FVar16.Data + 8);
          if (iVar2 == iVar6) {
            if (1 < iVar2) {
              iVar6 = FGenericPlatformStricmp::Stricmp
                                (*(wchar_t **)FVar16.Data,
                                 (wchar_t *)local_98.Data.AllocatorInstance.Data);
              bVar17 = iVar6 == 0;
              iVar6 = local_98.Data.ArrayNum;
              goto LAB_14d76cfe0;
            }
LAB_14d76d17f:
            uVar7 = (uint)((longlong)FVar16.Data - (longlong)FVar3.Data >> 4);
            if (uVar7 != 0xffffffff) goto LAB_14d76d0d8;
            break;
          }
          bVar17 = iVar2 + iVar6 == 1;
LAB_14d76cfe0:
          if (bVar17) goto LAB_14d76d17f;
          FVar16.Data = FVar16.Data + 0x10;
        } while (FVar16.Data != pFVar14);
      }
      if (((AllSamplerResourceNames.AllocatorInstance.Data <= (FScriptContainerElement *)&local_98)
          && ((FScriptContainerElement *)&local_98 <
              AllSamplerResourceNames.AllocatorInstance.Data +
              (longlong)AllSamplerResourceNames.ArrayMax * 0x10)) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar17)) {
        pcVar11 = (code *)swi(3);
        pFVar9 = (FShaderParametersMetadata *)(*pcVar11)();
        return pFVar9;
      }
      uVar7 = AllSamplerResourceNames.ArrayNum;
      if (AllSamplerResourceNames.ArrayNum == AllSamplerResourceNames.ArrayMax) {
        uVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&AllSamplerResourceNames.AllocatorInstance,
                           &AllSamplerResourceNames.ArrayMax);
      }
      AllSamplerResourceNames.ArrayNum = uVar7 + 1;
      pFVar14 = AllSamplerResourceNames.AllocatorInstance.Data + (longlong)(int)uVar7 * 0x10;
      *(undefined8 *)pFVar14 = 0;
      *(FScriptContainerElement **)pFVar14 = local_98.Data.AllocatorInstance.Data;
      local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)(pFVar14 + 8) = local_98.Data.ArrayNum;
      *(int *)(pFVar14 + 0xc) = local_98.Data.ArrayMax;
      local_98.Data.ArrayNum = 0;
      local_98.Data.ArrayMax = 0;
LAB_14d76d0d8:
      if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data.AllocatorInstance.Data);
      }
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
      pUVar10 = Z_Construct_UClass_UVolumeTexture_NoRegister();
      bVar17 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar10);
      pwVar15 = L"Texture2D";
      if (bVar17) {
        pwVar15 = L"TextureCube";
      }
      uVar8 = 0;
      if ((int)uVar5 < AllTextureResourceNames.ArrayNum) {
        uVar8 = ~uVar5 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar11 = (code *)swi(3);
        pFVar9 = (FShaderParametersMetadata *)(*pcVar11)();
        return pFVar9;
      }
      if (*(int *)(AllTextureResourceNames.AllocatorInstance.Data + (longlong)(int)uVar5 * 0x10 + 8)
          == 0) {
        pwVar12 = L"";
      }
      else {
        pwVar12 = *(wchar_t **)
                   (AllTextureResourceNames.AllocatorInstance.Data + (longlong)(int)uVar5 * 0x10);
      }
      FShaderParametersMetadataBuilder::AddTexture(&local_68,pwVar12,pwVar15,Float);
      uVar5 = 0;
      if ((int)uVar7 < AllSamplerResourceNames.ArrayNum) {
        uVar5 = ~uVar7 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar11 = (code *)swi(3);
        pFVar9 = (FShaderParametersMetadata *)(*pcVar11)();
        return pFVar9;
      }
      if (*(int *)(AllSamplerResourceNames.AllocatorInstance.Data + (longlong)(int)uVar7 * 0x10 + 8)
          == 0) {
        pwVar15 = L"";
      }
      else {
        pwVar15 = *(wchar_t **)
                   (AllSamplerResourceNames.AllocatorInstance.Data + (longlong)(int)uVar7 * 0x10);
      }
      FShaderParametersMetadataBuilder::AddSampler(&local_68,pwVar15,L"SamplerState",Float);
      pFVar14 = local_res20;
    }
    this_00 = this_00 + 8;
  } while( true );
}

// CacheResourceShadersForRendering @ 14d76d3d0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __thiscall
UOpenColorIOColorTransform::CacheResourceShadersForRendering
          (UOpenColorIOColorTransform *this,bool param_1)

{
  undefined1 *puVar1;
  EShaderPlatform EVar2;
  Type TVar3;
  uint uVar4;
  UClass *pUVar5;
  UObject *pUVar6;
  FOpenColorIOTransformResource *pFVar7;
  FOpenColorIOTransformResource *pFVar8;
  FShaderParametersMetadata *pFVar9;
  FString *pFVar10;
  wchar_t *pwVar11;
  uint uVar12;
  Type TVar13;
  FName local_res18;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__)
     && (_Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                              _thread_safe_static_guard_0__),
        `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__
        == -1)) {
    pwVar11 = FCommandLine::Get();
    `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline =
         FParse::Param(pwVar11,L"nullrhi");
    _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                         _thread_safe_static_guard_0__);
  }
  if (((PRIVATE_GIsRunningCommandlet == false) || (PRIVATE_GAllowCommandletRendering != false)) &&
     (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline ==
      false)) {
    pUVar5 = UOpenColorIOConfiguration::StaticClass();
    pUVar6 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar5);
    if (((pUVar6 != (UObject *)0x0) && ((*(uint *)&pUVar6->field_0x8 >> 0x1e & 1) == 0)) &&
       (uVar4 = UMaterialInterface::GetFeatureLevelsToCompileForAllMaterials(), uVar4 != 0)) {
      do {
        uVar12 = -uVar4 & uVar4;
        uVar4 = uVar4 & uVar4 - 1;
        TVar3 = 0x1f;
        if (uVar12 != 0) {
          for (; uVar12 >> TVar3 == 0; TVar3 = TVar3 - ES3_1) {
          }
        }
        TVar13 = ES2_REMOVED;
        if (uVar12 != 0) {
          TVar13 = TVar3;
        }
        EVar2 = GRHIGlobals.ShaderPlatformForFeatureLevel[(int)TVar13];
        if (this->ColorTransformResources[(int)TVar13] == (FOpenColorIOTransformResource *)0x0) {
          pFVar7 = ::operator_new(0xa8);
          pFVar8 = (FOpenColorIOTransformResource *)0x0;
          if (pFVar7 != (FOpenColorIOTransformResource *)0x0) {
            (pFVar7->ShaderCode).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            (pFVar7->ShaderCode).Data.ArrayNum = 0;
            (pFVar7->ShaderCode).Data.ArrayMax = 0;
            (pFVar7->CompileErrors).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            (pFVar7->CompileErrors).ArrayNum = 0;
            (pFVar7->CompileErrors).ArrayMax = 0;
            pFVar7->_padding_ = (longlong)&___7FOpenColorIOTransformResource__6B_;
            (pFVar7->GameThreadShaderMap).Reference = (FOpenColorIOShaderMap *)0x0;
            pFVar7->bContainsInlineShaders = 0;
            pFVar7->bLoadedCookedShaderMapId = 0;
            (pFVar7->ShaderParametersMetadata).Object = (FShaderParametersMetadata *)0x0;
            (pFVar7->ShaderParametersMetadata).SharedReferenceCount.ReferenceController =
                 (TReferenceControllerBase<1> *)0x0;
            pFVar7->RenderingThreadShaderMap = (FOpenColorIOShaderMap *)0x0;
            (pFVar7->ShaderCodeAndConfigHash).Data.AllocatorInstance.Data =
                 (FScriptContainerElement *)0x0;
            (pFVar7->ShaderCodeAndConfigHash).Data.ArrayNum = 0;
            (pFVar7->ShaderCodeAndConfigHash).Data.ArrayMax = 0;
            pFVar7->FeatureLevel = SM5;
            (pFVar7->CookedShaderMapId).FeatureLevel = SM5;
            (pFVar7->CookedShaderMapId).ShaderCodeAndConfigHash.Data.AllocatorInstance =
                 (ForAnyElementType)0x0;
            (pFVar7->CookedShaderMapId).ShaderCodeAndConfigHash.Data.ArrayNum = 0;
            (pFVar7->CookedShaderMapId).ShaderCodeAndConfigHash.Data.ArrayMax = 0;
            (pFVar7->CookedShaderMapId).ShaderTypeDependencies.AllocatorInstance =
                 (ForAnyElementType)0x0;
            (pFVar7->CookedShaderMapId).ShaderTypeDependencies.ArrayNum = 0;
            (pFVar7->CookedShaderMapId).ShaderTypeDependencies.ArrayMax = 0;
            (pFVar7->CookedShaderMapId).LayoutParams.MaxFieldAlignment = 0xffffffff;
            (pFVar7->CookedShaderMapId).LayoutParams.Flags = 0;
            (pFVar7->FriendlyName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            (pFVar7->FriendlyName).Data.ArrayNum = 0;
            (pFVar7->FriendlyName).Data.ArrayMax = 0;
            (pFVar7->AssetPath).ComparisonIndex = 0;
            (pFVar7->AssetPath).Number = 0;
            pFVar8 = pFVar7;
          }
          this->ColorTransformResources[(int)TVar13] = pFVar8;
        }
        local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_48.Data.ArrayNum = 0;
        local_48.Data.ArrayMax = 0;
        local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_68.Data.ArrayNum = 0;
        local_68.Data.ArrayMax = 0;
        pFVar8 = this->ColorTransformResources[(int)TVar13];
        local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_58.Data.ArrayNum = 0;
        local_58.Data.ArrayMax = 0;
        local_res18.ComparisonIndex.Value = 0;
        local_res18.Number = 0;
        pFVar9 = BuildShaderParamMetadata(this);
        pFVar10 = GetTransformFriendlyName(this,&local_38);
        FOpenColorIOTransformResource::SetupResource
                  (pFVar8,TVar13,&local_48,&local_58,&local_68,pFVar10,&local_res18,pFVar9);
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
        CacheShadersForResources
                  (this,EVar2,this->ColorTransformResources[(int)TVar13],true,true,
                   (ITargetPlatform *)0x0);
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
      } while (uVar4 != 0);
    }
  }
  return;
}

// CacheShadersForResources @ 14d76dc30

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UOpenColorIOColorTransform::CacheShadersForResources
          (UOpenColorIOColorTransform *this,EShaderPlatform param_1,
          FOpenColorIOTransformResource *param_2,bool param_3,bool param_4,ITargetPlatform *param_5)

{
  code *pcVar1;
  TConsoleVariableData<bool> *pTVar2;
  bool bVar3;
  uint uVar4;
  FName this_00;
  ulonglong uVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined1 local_res18 [16];
  FString local_98;
  FString local_88;
  FAssetLog local_78;
  FOpenColorIOShaderMapId local_60;
  
  pTVar2 = CVarOpenColorIOAllowAsyncCompilation.Ref;
  bVar3 = IsInParallelGameThread();
  uVar8 = 0;
  if (!bVar3) {
    bVar3 = IsInGameThread();
    uVar5 = 1;
    if (!bVar3) goto LAB_14d76dc7c;
  }
  uVar5 = uVar8;
LAB_14d76dc7c:
  bVar3 = true;
  if (pTVar2->ShadowedValue[uVar5] != false) {
    bVar3 = param_4;
  }
  local_60.FeatureLevel = SM5;
  local_60.ShaderCodeAndConfigHash.Data.AllocatorInstance = (ForAnyElementType)0x0;
  local_60.ShaderCodeAndConfigHash.Data.ArrayNum = 0;
  local_60.ShaderCodeAndConfigHash.Data.ArrayMax = 0;
  local_60.ShaderTypeDependencies.AllocatorInstance = (ForAnyElementType)0x0;
  local_60.ShaderTypeDependencies.ArrayNum = 0;
  local_60.ShaderTypeDependencies.ArrayMax = 0;
  local_60.LayoutParams.MaxFieldAlignment = 0xffffffff;
  local_60.LayoutParams.Flags = 0;
  (**(code **)(param_2->_padding_ + 0x10))(param_2,param_1,param_5,&local_60);
  bVar3 = FOpenColorIOTransformResource::CacheShaders(param_2,&local_60,param_1,param_3,bVar3);
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&local_60.ShaderTypeDependencies);
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&local_60.ShaderCodeAndConfigHash);
  if (!bVar3) {
    if (2 < (byte)LogOpenColorIO._0_1_) {
      this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res18);
      ::FName::ToString((FName *)this_00,&local_88);
      ::FString::PrintfImpl
                (&local_98,L"Failed to compile OCIO ColorSpace transform %s shader for platform %s."
                );
      local_78.Path = (wchar_t *)0x0;
      local_78.PackagePath = (FPackagePath *)0x0;
      local_78.Object = (UObject *)this;
      UE::Core::Private::RecordAssetLog
                ((FName *)&LogOpenColorIO.field_0x4,Warning,&local_78,&local_98,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Compositing\\OpenColorIO\\Source\\OpenColorIO\\Private\\OpenColorIOColorTransform.cpp"
                 ,0x1d3);
      if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data.AllocatorInstance.Data);
      }
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
    }
    iVar6 = (param_2->CompileErrors).ArrayNum;
    if (0 < iVar6) {
      do {
        uVar7 = (uint)uVar8;
        if (2 < (byte)LogOpenColorIO._0_1_) {
          uVar4 = 0;
          if ((int)uVar7 < iVar6) {
            uVar4 = ~uVar7 >> 0x1f;
          }
          if ((uVar4 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogOpenColorIO);
        }
        iVar6 = (param_2->CompileErrors).ArrayNum;
        uVar8 = (ulonglong)(uVar7 + 1);
      } while ((int)(uVar7 + 1) < iVar6);
    }
  }
  return;
}

// FinishDestroy @ 14d770020

void __thiscall UOpenColorIOColorTransform::FinishDestroy(UOpenColorIOColorTransform *this)

{
  FOpenColorIOTransformResource *pFVar1;
  
  pFVar1 = this->ColorTransformResources[0];
  if (pFVar1 != (FOpenColorIOTransformResource *)0x0) {
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    this->ColorTransformResources[0] = (FOpenColorIOTransformResource *)0x0;
  }
  pFVar1 = this->ColorTransformResources[1];
  if (pFVar1 != (FOpenColorIOTransformResource *)0x0) {
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    this->ColorTransformResources[1] = (FOpenColorIOTransformResource *)0x0;
  }
  pFVar1 = this->ColorTransformResources[2];
  if (pFVar1 != (FOpenColorIOTransformResource *)0x0) {
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    this->ColorTransformResources[2] = (FOpenColorIOTransformResource *)0x0;
  }
  pFVar1 = this->ColorTransformResources[3];
  if (pFVar1 != (FOpenColorIOTransformResource *)0x0) {
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    this->ColorTransformResources[3] = (FOpenColorIOTransformResource *)0x0;
  }
  pFVar1 = this->ColorTransformResources[4];
  if (pFVar1 != (FOpenColorIOTransformResource *)0x0) {
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    this->ColorTransformResources[4] = (FOpenColorIOTransformResource *)0x0;
  }
  UObject::FinishDestroy((UObject *)this);
  return;
}

// FlushResourceShaderMaps @ 14d7700e0

void __thiscall
UOpenColorIOColorTransform::FlushResourceShaderMaps(UOpenColorIOColorTransform *this)

{
  wchar_t *pwVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__)
  {
    _Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                         _thread_safe_static_guard_0__);
    if (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__
        == -1) {
      pwVar1 = FCommandLine::Get();
      `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline =
           FParse::Param(pwVar1,L"nullrhi");
      _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                           _thread_safe_static_guard_0__);
    }
  }
  if (((PRIVATE_GIsRunningCommandlet == false) || (PRIVATE_GAllowCommandletRendering != false)) &&
     (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline ==
      false)) {
    if (this->ColorTransformResources[0] != (FOpenColorIOTransformResource *)0x0) {
      FOpenColorIOTransformResource::ReleaseShaderMap(this->ColorTransformResources[0]);
    }
    if (this->ColorTransformResources[1] != (FOpenColorIOTransformResource *)0x0) {
      FOpenColorIOTransformResource::ReleaseShaderMap(this->ColorTransformResources[1]);
    }
    if (this->ColorTransformResources[2] != (FOpenColorIOTransformResource *)0x0) {
      FOpenColorIOTransformResource::ReleaseShaderMap(this->ColorTransformResources[2]);
    }
    if (this->ColorTransformResources[3] != (FOpenColorIOTransformResource *)0x0) {
      FOpenColorIOTransformResource::ReleaseShaderMap(this->ColorTransformResources[3]);
    }
    if (this->ColorTransformResources[4] != (FOpenColorIOTransformResource *)0x0) {
      FOpenColorIOTransformResource::ReleaseShaderMap(this->ColorTransformResources[4]);
      return;
    }
  }
  return;
}

// GetContextKeyValues @ 14d770aa0

TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_> *
__thiscall
UOpenColorIOColorTransform::GetContextKeyValues
          (UOpenColorIOColorTransform *this,
          TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
          *__return_storage_ptr__)

{
  bool bVar1;
  UClass *pUVar2;
  UObject *pUVar3;
  
  pUVar2 = UOpenColorIOConfiguration::StaticClass();
  pUVar3 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar2);
  if ((pUVar3 == (UObject *)0x0) || ((*(uint *)&pUVar3->field_0x8 >> 0x1e & 1) != 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    *(undefined8 *)__return_storage_ptr__ = 0;
    *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
    *(undefined8 *)&__return_storage_ptr__->field_0x20 = 0;
    *(undefined4 *)&__return_storage_ptr__->field_0x28 = 0;
    *(undefined4 *)&__return_storage_ptr__->field_0x2c = 0x80;
    *(undefined4 *)&__return_storage_ptr__->field_0x30 = 0xffffffff;
    *(undefined4 *)&__return_storage_ptr__->field_0x34 = 0;
    *(undefined8 *)&__return_storage_ptr__->field_0x40 = 0;
    *(undefined4 *)&__return_storage_ptr__->field_0x48 = 0;
    TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
    ::operator=((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                 *)__return_storage_ptr__,
                (TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                 *)&pUVar3[2].field_0x8);
    return __return_storage_ptr__;
  }
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x18 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x38 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x48 = 0;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x28 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x2c = 0x80;
  *(undefined4 *)&__return_storage_ptr__->field_0x34 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x30 = 0xffffffff;
  *(undefined8 *)&__return_storage_ptr__->field_0x40 = 0;
  return __return_storage_ptr__;
}

// GetDisplayViewDirection @ 14d770e10

bool __thiscall
UOpenColorIOColorTransform::GetDisplayViewDirection
          (UOpenColorIOColorTransform *this,EOpenColorIOViewTransformDirection *param_1)

{
  if (this->bIsDisplayViewType != false) {
    *param_1 = this->DisplayViewDirection;
  }
  return this->bIsDisplayViewType;
}

// GetOpenColorIOLUTKeyGuid @ 14d7715e0

void __cdecl
UOpenColorIOColorTransform::GetOpenColorIOLUTKeyGuid(FString *param_1,FName *param_2,FGuid *param_3)

{
  return;
}

// GetPrivateStaticClass @ 14d771700

UClass * __cdecl UOpenColorIOColorTransform::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOpenColorIOColorTransform.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OpenColorIO",L"OpenColorIOColorTransform",
               &Z_Registration_Info_UClass_UOpenColorIOColorTransform.InnerSingleton,
               StaticRegisterNativesUOpenColorIOColorTransform,200,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UOpenColorIOColorTransform>,
               InternalVTableHelperCtorCaller<UOpenColorIOColorTransform>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOpenColorIOColorTransform.InnerSingleton;
}

// GetRenderResources @ 14d771b90

bool __thiscall
UOpenColorIOColorTransform::GetRenderResources
          (UOpenColorIOColorTransform *this,Type param_1,FOpenColorIOTransformResource **param_2,
          TArray<TWeakObjectPtr<UTexture,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *param_3)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  int iVar4;
  FOpenColorIOTransformResource *pFVar5;
  UObject *pUVar6;
  FWeakObjectPtr *pFVar7;
  code *pcVar8;
  bool bVar9;
  undefined1 uVar10;
  int iVar11;
  FScriptContainerElement *pFVar12;
  undefined1 local_48 [4];
  FWeakObjectPtr local_44;
  UObject *local_38 [2];
  
  bVar9 = AreRenderResourcesReady(this);
  if (!bVar9) {
    return false;
  }
  pFVar5 = this->ColorTransformResources[(int)param_1];
  *param_2 = pFVar5;
  if (pFVar5 != (FOpenColorIOTransformResource *)0x0) {
    uVar3 = (this->LookupTextures).ArrayNum;
    if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
    }
    piVar1 = &param_3->ArrayMax;
    if (*piVar1 < (int)uVar3) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,uVar3,&param_3->AllocatorInstance,param_3->ArrayNum,piVar1);
    }
    pFVar12 = (this->LookupTextures).AllocatorInstance.Data;
    iVar4 = (this->LookupTextures).ArrayNum;
    pFVar2 = pFVar12 + (longlong)iVar4 * 8;
    while( true ) {
      if ((this->LookupTextures).ArrayNum != iVar4) {
        local_48[0] = 0;
        `TCheckedPointerIterator<TObjectPtr<UTexture>_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_48);
      }
      if (pFVar12 == pFVar2) break;
      pUVar6 = *(UObject **)pFVar12;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if (pUVar6 != (UObject *)0x0) {
          UE::GC::MarkAsReachable(pUVar6);
        }
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar6);
        }
      }
      local_44.ObjectIndex = 0;
      local_44.ObjectSerialNumber = 0;
      local_38[0] = pUVar6;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar6);
      }
      FWeakObjectPtr::operator=(&local_44,(FObjectPtr)local_38);
      pFVar7 = (FWeakObjectPtr *)(param_3->AllocatorInstance).Data;
      if (((pFVar7 <= &local_44) && (&local_44 < pFVar7 + *piVar1)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar9)) {
        pcVar8 = (code *)swi(3);
        uVar10 = (*pcVar8)();
        return (bool)uVar10;
      }
      iVar11 = param_3->ArrayNum;
      if (iVar11 == *piVar1) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x408,&param_3->AllocatorInstance,piVar1);
      }
      pFVar12 = pFVar12 + 8;
      param_3->ArrayNum = iVar11 + 1;
      *(FWeakObjectPtr *)((param_3->AllocatorInstance).Data + (longlong)iVar11 * 8) = local_44;
    }
  }
  return *param_2 != (FOpenColorIOTransformResource *)0x0;
}

// GetRenderResources @ 14d771da0

bool __thiscall
UOpenColorIOColorTransform::GetRenderResources
          (UOpenColorIOColorTransform *this,Type param_1,FOpenColorIOTransformResource **param_2,
          TSortedMap<int,TWeakObjectPtr<UTexture,FWeakObjectPtr>,TSizedDefaultAllocator<32>,TLess<int_const_>_>
          *param_3)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  TArray<TWeakObjectPtr<UTexture,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  bVar4 = GetRenderResources(this,param_1,param_2,&local_18);
  if (bVar4) {
    uVar10 = 0;
    if (0 < local_18.ArrayNum) {
      do {
        uVar6 = 0;
        if ((int)uVar10 < local_18.ArrayNum) {
          uVar6 = ~uVar10 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        uVar6 = (param_3->Pairs).ArrayNum;
        uVar9 = 0;
        pFVar1 = local_18.AllocatorInstance.Data + (longlong)(int)uVar10 * 8;
        if ((int)uVar6 < 1) {
LAB_14d771e7b:
          if ((param_3->Pairs).ArrayNum < (int)uVar9) goto LAB_14d771e80;
LAB_14d771eaa:
          if ((param_3->Pairs).ArrayNum <= (int)uVar9) goto LAB_14d771eff;
          if (((int)uVar9 < 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
          pFVar2 = (param_3->Pairs).AllocatorInstance.Data;
          pFVar8 = pFVar2 + uVar9 * 0xc;
          if ((int)uVar10 < *(int *)(pFVar2 + uVar9 * 0xc)) goto LAB_14d771eff;
        }
        else {
          do {
            uVar11 = uVar6 >> 1;
            iVar7 = uVar11 + (int)uVar9;
            if (*(int *)((param_3->Pairs).AllocatorInstance.Data + (longlong)iVar7 * 0xc) <
                (int)uVar10) {
              uVar9 = (ulonglong)(iVar7 + (uVar6 & 1));
            }
            uVar6 = uVar11;
          } while (uVar11 != 0);
          if (-1 < (int)uVar9) goto LAB_14d771e7b;
LAB_14d771e80:
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("InsertIndex >= 0 && InsertIndex <= Pairs.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                             ,0x249,L"");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
          if (-1 < (int)uVar9) goto LAB_14d771eaa;
LAB_14d771eff:
          TArray<TTuple<int,TWeakObjectPtr<UTexture,FWeakObjectPtr>_>,TSizedDefaultAllocator<32>_>::
          InsertUninitializedImpl(&param_3->Pairs,(int)uVar9,1);
          pFVar8 = (param_3->Pairs).AllocatorInstance.Data + (longlong)(int)uVar9 * 0xc;
        }
        *(uint *)pFVar8 = uVar10;
        uVar10 = uVar10 + 1;
        *(undefined8 *)(pFVar8 + 4) = *(undefined8 *)pFVar1;
      } while ((int)uVar10 < local_18.ArrayNum);
    }
    bVar4 = true;
  }
  else {
    bVar4 = false;
  }
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return bVar4;
}

// GetTransformFriendlyName @ 14d772950

FString * __thiscall
UOpenColorIOColorTransform::GetTransformFriendlyName
          (UOpenColorIOColorTransform *this,FString *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  FString local_18;
  
  if (this->bIsDisplayViewType == false) {
    ::FString::ConcatFC(&local_18,&this->SourceColorSpace,L" to ");
    ::FString::ConcatFF(__return_storage_ptr__,&local_18,&this->DestinationColorSpace);
  }
  else if (this->DisplayViewDirection == Forward) {
    ::FString::ConcatFC(&local_28,&this->SourceColorSpace,L" to ");
    ::FString::ConcatFF(&local_38,&local_28,&this->Display);
    ::FString::ConcatFC(&local_48,&local_38,L" - ");
    ::FString::ConcatFF(__return_storage_ptr__,&local_48,&this->View);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    local_18.Data.AllocatorInstance.Data = local_28.Data.AllocatorInstance.Data;
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
      local_18.Data.AllocatorInstance.Data = local_28.Data.AllocatorInstance.Data;
    }
  }
  else {
    if (this->DisplayViewDirection != Inverse) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!\"Enclosing block should never be called\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Compositing\\OpenColorIO\\Source\\OpenColorIO\\Private\\OpenColorIOColorTransform.cpp"
                         ,0x2bf,L"");
      if (!bVar2) {
        (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (__return_storage_ptr__->Data).ArrayNum = 0;
        (__return_storage_ptr__->Data).ArrayMax = 0;
        return __return_storage_ptr__;
      }
      pcVar1 = (code *)swi(3);
      pFVar3 = (FString *)(*pcVar1)();
      return pFVar3;
    }
    ::FString::ConcatFC(&local_58,&this->Display,L" - ");
    ::FString::ConcatFF(&local_68,&local_58,&this->View);
    ::FString::ConcatFC(&local_78,&local_68,L" to ");
    ::FString::ConcatFF(__return_storage_ptr__,&local_78,&this->SourceColorSpace);
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    local_18.Data.AllocatorInstance.Data = local_58.Data.AllocatorInstance.Data;
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
      local_18.Data.AllocatorInstance.Data = local_58.Data.AllocatorInstance.Data;
    }
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetTransformProcessor @ 14d772b00

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UOpenColorIOColorTransform::GetTransformProcessor
          (UOpenColorIOColorTransform *this,FOpenColorIOWrapperProcessor *param_1,
          TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
          *param_2)

{
  int iVar1;
  FOpenColorIOWrapperConfig *pFVar2;
  TPimplPtr<FOpenColorIOProcessorPimpl,1> TVar3;
  bool bVar4;
  UClass *pUVar5;
  UOpenColorIOConfiguration *this_00;
  TPimplPtr<FOpenColorIOProcessorPimpl,1> *pTVar6;
  int iVar7;
  int iVar8;
  FOpenColorIOWrapperProcessor local_res20;
  TStringView<wchar_t> local_38;
  TStringView<wchar_t> local_28;
  TStringView<wchar_t> local_18;
  
  pUVar5 = UOpenColorIOConfiguration::StaticClass();
  this_00 = (UOpenColorIOConfiguration *)
            UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar5);
  if ((this_00 != (UOpenColorIOConfiguration *)0x0) && (((uint)this_00->_padding_ >> 0x1e & 1) == 0)
     ) {
    if ((this_00->Config).Ptr == (FOpenColorIOWrapperConfig *)0x0) {
      UOpenColorIOConfiguration::LoadConfiguration(this_00);
    }
    pFVar2 = (this_00->Config).Ptr;
    if (pFVar2 != (FOpenColorIOWrapperConfig *)0x0) {
      if (this->bIsDisplayViewType == false) {
        if (*(int *)&param_2->field_0x8 == *(int *)&param_2->field_0x34) {
          param_2 = &this_00->Context;
        }
        local_18.DataPtr = (wchar_t *)(this->DestinationColorSpace).Data.AllocatorInstance.Data;
        iVar1 = (this->DestinationColorSpace).Data.ArrayNum;
        local_28.DataPtr = (wchar_t *)(this->SourceColorSpace).Data.AllocatorInstance.Data;
        local_18.Size = iVar1 + -1;
        if (iVar1 == 0) {
          local_18.Size = 0;
        }
        iVar1 = (this->SourceColorSpace).Data.ArrayNum;
        local_28.Size = iVar1 + -1;
        if (iVar1 == 0) {
          local_28.Size = 0;
        }
        pTVar6 = &FOpenColorIOWrapperProcessor::FOpenColorIOWrapperProcessor
                            (&local_res20,pFVar2,&local_28,&local_18,param_2)->Pimpl;
      }
      else {
        if (*(int *)&param_2->field_0x8 == *(int *)&param_2->field_0x34) {
          param_2 = &this_00->Context;
        }
        local_38.DataPtr = (wchar_t *)(this->View).Data.AllocatorInstance.Data;
        iVar1 = (this->View).Data.ArrayNum;
        local_28.DataPtr = (wchar_t *)(this->Display).Data.AllocatorInstance.Data;
        iVar7 = 0;
        iVar8 = iVar1 + -1;
        if (iVar1 == 0) {
          iVar8 = iVar7;
        }
        iVar1 = (this->Display).Data.ArrayNum;
        local_38.Size = iVar8;
        local_18.DataPtr = (wchar_t *)(this->SourceColorSpace).Data.AllocatorInstance.Data;
        local_28.Size = iVar1 + -1;
        if (iVar1 == 0) {
          local_28.Size = iVar7;
        }
        iVar1 = (this->SourceColorSpace).Data.ArrayNum;
        local_18.Size = iVar1 + -1;
        if (iVar1 == 0) {
          local_18.Size = iVar7;
        }
        pTVar6 = &FOpenColorIOWrapperProcessor::FOpenColorIOWrapperProcessor
                            (&local_res20,pFVar2,&local_18,&local_28,&local_38,
                             this->DisplayViewDirection == Inverse,param_2)->Pimpl;
      }
      if (pTVar6 != &param_1->Pimpl) {
        TVar3 = param_1->Pimpl;
        param_1->Pimpl = *pTVar6;
        *pTVar6 = (TPimplPtr<FOpenColorIOProcessorPimpl,1>)0x0;
        if (TVar3 != (TPimplPtr<FOpenColorIOProcessorPimpl,1>)0x0) {
          (**(code **)((longlong)TVar3 + -0x10))((longlong)TVar3 + -0x10);
        }
      }
      if (local_res20.Pimpl != (TPimplPtr<FOpenColorIOProcessorPimpl,1>)0x0) {
        (**(code **)((longlong)local_res20.Pimpl + -0x10))((longlong)local_res20.Pimpl + -0x10);
      }
      bVar4 = FOpenColorIOWrapperProcessor::IsValid(param_1);
      return bVar4;
    }
  }
  if (1 < (byte)LogOpenColorIO._0_1_) {
    GetTransformFriendlyName(this,(FString *)&local_18);
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogOpenColorIO);
    if (local_18.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_18.DataPtr);
    }
  }
  return false;
}

// Initialize @ 14d7730f0

bool __thiscall
UOpenColorIOColorTransform::Initialize
          (UOpenColorIOColorTransform *this,FString *param_1,FString *param_2,FString *param_3,
          EOpenColorIOViewTransformDirection param_4)

{
  if (((1 < (param_1->Data).ArrayNum) && (1 < (param_2->Data).ArrayNum)) &&
     (1 < (param_3->Data).ArrayNum)) {
    ::FString::operator=(&this->SourceColorSpace,param_1);
    ::FString::Empty(&this->DestinationColorSpace);
    ::FString::operator=(&this->Display,param_2);
    ::FString::operator=(&this->View,param_3);
    this->DisplayViewDirection = param_4;
    this->bIsDisplayViewType = true;
    FlushResourceShaderMaps(this);
    CacheResourceShadersForRendering(this,false);
    return true;
  }
  return false;
}

// Initialize @ 14d773190

bool __thiscall
UOpenColorIOColorTransform::Initialize
          (UOpenColorIOColorTransform *this,FString *param_1,FString *param_2)

{
  if ((1 < (param_1->Data).ArrayNum) && (1 < (param_2->Data).ArrayNum)) {
    ::FString::operator=(&this->SourceColorSpace,param_1);
    ::FString::operator=(&this->DestinationColorSpace,param_2);
    this->bIsDisplayViewType = false;
    FlushResourceShaderMaps(this);
    CacheResourceShadersForRendering(this,false);
    return true;
  }
  return false;
}

// IsReadyForFinishDestroy @ 14d773710

bool __thiscall
UOpenColorIOColorTransform::IsReadyForFinishDestroy(UOpenColorIOColorTransform *this)

{
  bool bVar1;
  
  bVar1 = FRenderCommandFence::IsFenceComplete(&this->ReleaseFence);
  return bVar1;
}

// IsTransform @ 14d7737d0

bool __thiscall
UOpenColorIOColorTransform::IsTransform
          (UOpenColorIOColorTransform *this,FString *param_1,FString *param_2,FString *param_3,
          EOpenColorIOViewTransformDirection param_4)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  
  if (this->bIsDisplayViewType == false) {
    return false;
  }
  iVar2 = (this->SourceColorSpace).Data.ArrayNum;
  iVar1 = (param_1->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(this->SourceColorSpace).Data.AllocatorInstance.Data,
                         (wchar_t *)(param_1->Data).AllocatorInstance.Data);
      bVar3 = iVar2 == 0;
      goto LAB_14d773816;
    }
  }
  else {
    bVar3 = iVar2 + iVar1 == 1;
LAB_14d773816:
    if (!bVar3) {
      return false;
    }
  }
  iVar2 = (this->Display).Data.ArrayNum;
  iVar1 = (param_2->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(this->Display).Data.AllocatorInstance.Data,
                         (wchar_t *)(param_2->Data).AllocatorInstance.Data);
      bVar3 = iVar2 == 0;
      goto LAB_14d773841;
    }
  }
  else {
    bVar3 = iVar2 + iVar1 == 1;
LAB_14d773841:
    if (!bVar3) {
      return false;
    }
  }
  iVar2 = (this->View).Data.ArrayNum;
  iVar1 = (param_3->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (iVar2 < 2) goto LAB_14d773873;
    iVar2 = FGenericPlatformStricmp::Stricmp
                      ((wchar_t *)(this->View).Data.AllocatorInstance.Data,
                       (wchar_t *)(param_3->Data).AllocatorInstance.Data);
    bVar3 = iVar2 == 0;
  }
  else {
    bVar3 = iVar2 + iVar1 == 1;
  }
  if (!bVar3) {
    return false;
  }
LAB_14d773873:
  if (this->DisplayViewDirection != param_4) {
    return false;
  }
  return true;
}

// IsTransform @ 14d7738b0

bool __thiscall
UOpenColorIOColorTransform::IsTransform
          (UOpenColorIOColorTransform *this,FString *param_1,FString *param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  
  if (this->bIsDisplayViewType != false) {
    return false;
  }
  iVar2 = (this->SourceColorSpace).Data.ArrayNum;
  iVar1 = (param_1->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (iVar2 < 2) goto LAB_14d7738f1;
    iVar2 = FGenericPlatformStricmp::Stricmp
                      ((wchar_t *)(this->SourceColorSpace).Data.AllocatorInstance.Data,
                       (wchar_t *)(param_1->Data).AllocatorInstance.Data);
    bVar3 = iVar2 == 0;
  }
  else {
    bVar3 = iVar2 + iVar1 == 1;
  }
  if (!bVar3) {
    return false;
  }
LAB_14d7738f1:
  iVar2 = (this->DestinationColorSpace).Data.ArrayNum;
  iVar1 = (param_2->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (iVar2 < 2) {
      return true;
    }
    iVar2 = FGenericPlatformStricmp::Stricmp
                      ((wchar_t *)(this->DestinationColorSpace).Data.AllocatorInstance.Data,
                       (wchar_t *)(param_2->Data).AllocatorInstance.Data);
    bVar3 = iVar2 == 0;
  }
  else {
    bVar3 = iVar2 + iVar1 == 1;
  }
  if (bVar3) {
    return true;
  }
  return false;
}

// PostLoad @ 14d773f80

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UOpenColorIOColorTransform::PostLoad(UOpenColorIOColorTransform *this)

{
  int *piVar1;
  int iVar2;
  FOpenColorIOShaderMap *this_00;
  code *pcVar3;
  bool bVar4;
  UClass *pUVar5;
  UOpenColorIOConfiguration *this_01;
  wchar_t *pwVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  FName local_res10;
  FName local_res18;
  FString local_58;
  FString local_48;
  FString local_38;
  
  UObject::PostLoad((UObject *)this);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__)
     && (_Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                              _thread_safe_static_guard_0__),
        `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__
        == -1)) {
    pwVar6 = FCommandLine::Get();
    `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline =
         FParse::Param(pwVar6,L"nullrhi");
    _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                         _thread_safe_static_guard_0__);
  }
  if (((PRIVATE_GIsRunningCommandlet == false) || (PRIVATE_GAllowCommandletRendering != false)) &&
     (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline ==
      false)) {
    ProcessSerializedShaderMaps(this,&this->LoadedTransformResources,&this->ColorTransformResources)
    ;
  }
  else {
    pFVar7 = (this->LoadedTransformResources).AllocatorInstance.Data;
    iVar2 = (this->LoadedTransformResources).ArrayNum;
    pFVar8 = pFVar7 + (longlong)iVar2 * 0xa8;
    while( true ) {
      if ((this->LoadedTransformResources).ArrayNum != iVar2) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FOpenColorIOTransformResource,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(local_res8);
      }
      if (pFVar7 == pFVar8) break;
      if ((*(longlong *)(pFVar7 + 0x40) != 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("RenderingThreadShaderMap == nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Compositing\\OpenColorIO\\Source\\OpenColorIO\\Private\\OpenColorIOShared.cpp"
                             ,0x99,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      this_00 = *(FOpenColorIOShaderMap **)(pFVar7 + 0x28);
      if (this_00 != (FOpenColorIOShaderMap *)0x0) {
        *(undefined8 *)(pFVar7 + 0x28) = 0;
        FOpenColorIOShaderMap::Release(this_00);
      }
      pFVar7 = pFVar7 + 0xa8;
    }
  }
  pUVar5 = UOpenColorIOConfiguration::StaticClass();
  this_01 = (UOpenColorIOConfiguration *)
            UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar5);
  if (this_01 == (UOpenColorIOConfiguration *)0x0) {
    if ((byte)LogOpenColorIO._0_1_ < 3) goto LAB_14d7741e5;
    local_res10 = *(FName *)(this->_padding_ + 0x18);
    ::FName::ToString(&local_res10,&local_48);
    local_res18 = *(FName *)(*(longlong *)(this->_padding_ + 0x10) + 0x18);
    ::FName::ToString(&local_res18,&local_58);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogOpenColorIO);
    local_38.Data.AllocatorInstance.Data = local_48.Data.AllocatorInstance.Data;
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
      local_38.Data.AllocatorInstance.Data = local_48.Data.AllocatorInstance.Data;
    }
  }
  else {
    UObject::ConditionalPostLoad((UObject *)this_01);
    if (this->bIsDisplayViewType == false) {
      bVar4 = UOpenColorIOConfiguration::HasTransform
                        (this_01,&this->SourceColorSpace,&this->DestinationColorSpace);
    }
    else {
      bVar4 = UOpenColorIOConfiguration::HasTransform
                        (this_01,&this->SourceColorSpace,&this->Display,&this->View,
                         this->DisplayViewDirection);
    }
    if (bVar4 != false) {
      CacheResourceShadersForRendering(this,false);
      goto LAB_14d7741e5;
    }
    if ((byte)LogOpenColorIO._0_1_ < 6) goto LAB_14d7741e5;
    GetTransformFriendlyName(this,&local_38);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogOpenColorIO);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
LAB_14d7741e5:
  DestructItems<FOpenColorIOTransformResource,int>
            ((FOpenColorIOTransformResource *)
             (this->LoadedTransformResources).AllocatorInstance.Data,
             (this->LoadedTransformResources).ArrayNum);
  piVar1 = &(this->LoadedTransformResources).ArrayMax;
  (this->LoadedTransformResources).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xa8,8,0,&(this->LoadedTransformResources).AllocatorInstance,0,piVar1);
  }
  return;
}

// ProcessSerializedShaderMaps @ 14d774690

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
UOpenColorIOColorTransform::ProcessSerializedShaderMaps
          (UOpenColorIOColorTransform *param_1,
          TArray<FOpenColorIOTransformResource,TSizedDefaultAllocator<32>_> *param_2,
          FOpenColorIOTransformResource *(*param_3) [5])

{
  undefined1 *puVar1;
  FOpenColorIOShaderMap *pFVar2;
  code *pcVar3;
  bool bVar4;
  EShaderPlatform EVar5;
  uint uVar6;
  FOpenColorIOTransformResource *pFVar7;
  FOpenColorIOTransformResource *pFVar8;
  int iVar9;
  uint uVar10;
  FOpenColorIOTransformResource *pFVar11;
  FOpenColorIOTransformResource *pFVar12;
  
  bVar4 = IsInGameThread();
  if ((!bVar4) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Compositing\\OpenColorIO\\Source\\OpenColorIO\\Private\\OpenColorIOColorTransform.cpp"
                         ,0x66,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar9 = param_2->ArrayNum;
  pFVar12 = (FOpenColorIOTransformResource *)0x0;
  pFVar8 = pFVar12;
  pFVar11 = pFVar12;
  if (0 < iVar9) {
    do {
      uVar10 = (uint)pFVar8;
      uVar6 = 0;
      if ((int)uVar10 < iVar9) {
        uVar6 = ~uVar10 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar2 = *(FOpenColorIOShaderMap **)
                ((param_2->AllocatorInstance).Data +
                (longlong)&(pFVar11->GameThreadShaderMap).Reference);
      if ((pFVar2 != (FOpenColorIOShaderMap *)0x0) &&
         (EVar5 = FShaderMapContent::GetShaderPlatform((FShaderMapContent *)pFVar2->_padding_),
         EVar5 == GMaxRHIShaderPlatform)) {
        iVar9 = *(int *)(pFVar2->_padding_ + 0x70);
        pFVar8 = (*param_3)[iVar9];
        if (pFVar8 == (FOpenColorIOTransformResource *)0x0) {
          pFVar7 = ::operator_new(0xa8);
          pFVar8 = pFVar12;
          if (pFVar7 != (FOpenColorIOTransformResource *)0x0) {
            (pFVar7->ShaderCode).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            (pFVar7->ShaderCode).Data.ArrayNum = 0;
            (pFVar7->ShaderCode).Data.ArrayMax = 0;
            (pFVar7->CompileErrors).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            (pFVar7->CompileErrors).ArrayNum = 0;
            (pFVar7->CompileErrors).ArrayMax = 0;
            pFVar7->_padding_ = (longlong)&___7FOpenColorIOTransformResource__6B_;
            (pFVar7->GameThreadShaderMap).Reference = (FOpenColorIOShaderMap *)0x0;
            pFVar7->bContainsInlineShaders = 0;
            pFVar7->bLoadedCookedShaderMapId = 0;
            (pFVar7->ShaderParametersMetadata).Object = (FShaderParametersMetadata *)0x0;
            (pFVar7->ShaderParametersMetadata).SharedReferenceCount.ReferenceController =
                 (TReferenceControllerBase<1> *)0x0;
            pFVar7->RenderingThreadShaderMap = (FOpenColorIOShaderMap *)0x0;
            (pFVar7->ShaderCodeAndConfigHash).Data.AllocatorInstance.Data =
                 (FScriptContainerElement *)0x0;
            (pFVar7->ShaderCodeAndConfigHash).Data.ArrayNum = 0;
            (pFVar7->ShaderCodeAndConfigHash).Data.ArrayMax = 0;
            pFVar7->FeatureLevel = SM5;
            (pFVar7->CookedShaderMapId).FeatureLevel = SM5;
            (pFVar7->CookedShaderMapId).ShaderCodeAndConfigHash.Data.AllocatorInstance =
                 (ForAnyElementType)0x0;
            (pFVar7->CookedShaderMapId).ShaderCodeAndConfigHash.Data.ArrayNum = 0;
            (pFVar7->CookedShaderMapId).ShaderCodeAndConfigHash.Data.ArrayMax = 0;
            (pFVar7->CookedShaderMapId).ShaderTypeDependencies.AllocatorInstance =
                 (ForAnyElementType)0x0;
            (pFVar7->CookedShaderMapId).ShaderTypeDependencies.ArrayNum = 0;
            (pFVar7->CookedShaderMapId).ShaderTypeDependencies.ArrayMax = 0;
            (pFVar7->CookedShaderMapId).LayoutParams.MaxFieldAlignment = 0xffffffff;
            (pFVar7->CookedShaderMapId).LayoutParams.Flags = 0;
            (pFVar7->FriendlyName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            (pFVar7->FriendlyName).Data.ArrayNum = 0;
            (pFVar7->FriendlyName).Data.ArrayMax = 0;
            (pFVar7->AssetPath).ComparisonIndex = 0;
            (pFVar7->AssetPath).Number = 0;
            pFVar8 = pFVar7;
          }
          (*param_3)[iVar9] = pFVar8;
        }
        FOpenColorIOTransformResource::SetInlineShaderMap(pFVar8,pFVar2);
      }
      iVar9 = param_2->ArrayNum;
      pFVar8 = (FOpenColorIOTransformResource *)(ulonglong)(uVar10 + 1);
      pFVar11 = pFVar11 + 1;
    } while ((int)(uVar10 + 1) < iVar9);
  }
  return;
}

// ReleaseResources @ 14d774e90

void __thiscall UOpenColorIOColorTransform::ReleaseResources(UOpenColorIOColorTransform *this)

{
  FOpenColorIOTransformResource *pFVar1;
  
  pFVar1 = this->ColorTransformResources[0];
  if (pFVar1 != (FOpenColorIOTransformResource *)0x0) {
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    this->ColorTransformResources[0] = (FOpenColorIOTransformResource *)0x0;
  }
  pFVar1 = this->ColorTransformResources[1];
  if (pFVar1 != (FOpenColorIOTransformResource *)0x0) {
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    this->ColorTransformResources[1] = (FOpenColorIOTransformResource *)0x0;
  }
  pFVar1 = this->ColorTransformResources[2];
  if (pFVar1 != (FOpenColorIOTransformResource *)0x0) {
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    this->ColorTransformResources[2] = (FOpenColorIOTransformResource *)0x0;
  }
  pFVar1 = this->ColorTransformResources[3];
  if (pFVar1 != (FOpenColorIOTransformResource *)0x0) {
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    this->ColorTransformResources[3] = (FOpenColorIOTransformResource *)0x0;
  }
  pFVar1 = this->ColorTransformResources[4];
  if (pFVar1 != (FOpenColorIOTransformResource *)0x0) {
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    this->ColorTransformResources[4] = (FOpenColorIOTransformResource *)0x0;
  }
  return;
}

// Serialize @ 14d7765a0

void __thiscall
UOpenColorIOColorTransform::Serialize(UOpenColorIOColorTransform *this,FArchive *param_1)

{
  longlong *plVar1;
  int iVar2;
  uint local_res8 [2];
  
  UObject::Serialize((UObject *)this,param_1);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FUE5MainStreamObjectVersion::GUID);
  SerializeOpenColorIOShaderMaps
            ((TMap<ITargetPlatform_const_*,TArray<FOpenColorIOTransformResource_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ITargetPlatform_const_*,TArray<FOpenColorIOTransformResource_*,TSizedDefaultAllocator<32>_>,0>_>
              *)0x0,param_1,&this->LoadedTransformResources);
  iVar2 = FArchiveState::CustomVer((FArchiveState *)param_1,&FUE5MainStreamObjectVersion::GUID);
  if ((iVar2 < 0x75) && ((param_1->field_0x28 & 1) != 0)) {
    plVar1 = *(longlong **)&param_1->field_0x8;
    local_res8[0] = 0;
    if (*plVar1 + 4U <= (ulonglong)plVar1[1]) {
      *plVar1 = *plVar1 + 4;
      return;
    }
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
      return;
    }
    FArchive::SerializeByteOrderSwapped(param_1,local_res8);
  }
  return;
}

// Serialize @ 14d776660

void __thiscall
UOpenColorIOColorTransform::Serialize
          (UOpenColorIOColorTransform *this,FStructuredArchiveRecord param_1)

{
  FFastPathLoadBuffer *pFVar1;
  int iVar2;
  FArchiveState *this_00;
  uint local_res8 [2];
  FSlotBase local_res10;
  
  local_res10.StructuredArchive = (FStructuredArchive *)param_1;
  this_00 = (FArchiveState *)
            UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&local_res10);
  UObject::Serialize((UObject *)this,(FArchive *)this_00);
  (**(code **)(this_00->_padding_ + 0x230))(this_00,&FUE5MainStreamObjectVersion::GUID);
  SerializeOpenColorIOShaderMaps
            ((TMap<ITargetPlatform_const_*,TArray<FOpenColorIOTransformResource_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ITargetPlatform_const_*,TArray<FOpenColorIOTransformResource_*,TSizedDefaultAllocator<32>_>,0>_>
              *)0x0,(FArchive *)this_00,&this->LoadedTransformResources);
  iVar2 = FArchiveState::CustomVer(this_00,&FUE5MainStreamObjectVersion::GUID);
  if ((iVar2 < 0x75) && (this_00->ArIsLoading != 0)) {
    pFVar1 = this_00->ActiveFPLB;
    local_res8[0] = 0;
    if (pFVar1->StartFastPathLoadBuffer + 4 <= pFVar1->EndFastPathLoadBuffer) {
      pFVar1->StartFastPathLoadBuffer = pFVar1->StartFastPathLoadBuffer + 4;
      return;
    }
    if (this_00->ArForceByteSwapping == 0) {
      (**(code **)(this_00->_padding_ + 0x188))(this_00,local_res8,4);
      return;
    }
    FArchive::SerializeByteOrderSwapped((FArchive *)this_00,local_res8);
  }
  return;
}

// SerializeOpenColorIOShaderMaps @ 14d776740

void __cdecl
UOpenColorIOColorTransform::SerializeOpenColorIOShaderMaps
          (TMap<ITargetPlatform_const_*,TArray<FOpenColorIOTransformResource_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ITargetPlatform_const_*,TArray<FOpenColorIOTransformResource_*,TSizedDefaultAllocator<32>_>,0>_>
           *param_1,FArchive *param_2,
          TArray<FOpenColorIOTransformResource,TSizedDefaultAllocator<32>_> *param_3)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  ITargetPlatform *pIVar7;
  longlong lVar8;
  uint uVar9;
  ITargetPlatform *pIVar10;
  FOpenColorIOTransformResource *this;
  int iVar11;
  ITargetPlatform *pIVar12;
  uint local_res10 [2];
  uint local_res20 [2];
  
  if ((param_2->field_0x28 & 4) == 0) {
    if ((param_2->field_0x28 & 1) != 0) {
      plVar2 = *(longlong **)&param_2->field_0x8;
      iVar11 = 0;
      local_res20[0] = 0;
      if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
        if ((param_2->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)param_2 + 0x188))(param_2,local_res20,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_2,local_res20);
        }
      }
      else {
        local_res20[0] = *(uint *)*plVar2;
        *plVar2 = *plVar2 + 4;
      }
      uVar5 = local_res20[0];
      if ((int)local_res20[0] < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)local_res20[0]);
      }
      DestructItems<FOpenColorIOTransformResource,int>
                ((FOpenColorIOTransformResource *)(param_3->AllocatorInstance).Data,
                 param_3->ArrayNum);
      piVar1 = &param_3->ArrayMax;
      param_3->ArrayNum = 0;
      if (*piVar1 != uVar5) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xa8,8,uVar5,&param_3->AllocatorInstance,0,piVar1);
      }
      if (0 < (int)local_res20[0]) {
        do {
          iVar6 = param_3->ArrayNum;
          if (iVar6 == *piVar1) {
            iVar6 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x8a8,&param_3->AllocatorInstance,piVar1);
          }
          param_3->ArrayNum = iVar6 + 1;
          this = (FOpenColorIOTransformResource *)
                 ((param_3->AllocatorInstance).Data + (longlong)iVar6 * 0xa8);
          DefaultConstructItems<FOpenColorIOTransformResource,int>(this,1);
          FOpenColorIOTransformResource::SerializeShaderMap(this,param_2);
          iVar11 = iVar11 + 1;
        } while (iVar11 < (int)local_res20[0]);
      }
    }
  }
  else {
    pIVar10 = (ITargetPlatform *)0x0;
    local_res10[0] = 0;
    pIVar7 = pIVar10;
    if ((*(longlong *)&param_2->field_0x68 != 0) &&
       (pIVar7 = (ITargetPlatform *)0x0,
       *(longlong *)(*(longlong *)&param_2->field_0x68 + 0x10) != 0)) {
      if ((param_1 ==
           (TMap<ITargetPlatform_const_*,TArray<FOpenColorIOTransformResource_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ITargetPlatform_const_*,TArray<FOpenColorIOTransformResource_*,TSizedDefaultAllocator<32>_>,0>_>
            *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("PlatformColorTransformResourcesToSavePtr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Compositing\\OpenColorIO\\Source\\OpenColorIO\\Private\\OpenColorIOColorTransform.cpp"
                             ,0x3f,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pIVar7 = pIVar10;
      if (*(longlong *)&param_2->field_0x68 != 0) {
        pIVar7 = *(ITargetPlatform **)(*(longlong *)&param_2->field_0x68 + 8);
      }
      pIVar7 = (ITargetPlatform *)
               TMapBase<ITargetPlatform_const_*,TArray<FOpenColorIOTransformResource_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ITargetPlatform_const_*,TArray<FOpenColorIOTransformResource_*,TSizedDefaultAllocator<32>_>,0>_>
               ::Find((TMapBase<ITargetPlatform_const_*,TArray<FOpenColorIOTransformResource_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ITargetPlatform_const_*,TArray<FOpenColorIOTransformResource_*,TSizedDefaultAllocator<32>_>,0>_>
                       *)param_1,pIVar7);
      if (pIVar7 == (ITargetPlatform *)0x0) {
        lVar8 = (**(code **)(*(longlong *)param_2 + 0x20))(param_2);
        if ((lVar8 != 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("ColorTransformResourcesToSavePtr != nullptr || (Ar.GetLinker() == nullptr)"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Compositing\\OpenColorIO\\Source\\OpenColorIO\\Private\\OpenColorIOColorTransform.cpp"
                               ,0x43,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      else {
        local_res10[0] = *(uint *)&pIVar7->field_0x8;
      }
    }
    plVar2 = *(longlong **)&param_2->field_0x8;
    if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
      if ((param_2->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_2 + 0x188))(param_2,local_res10,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_2,local_res10);
      }
    }
    else {
      local_res10[0] = *(uint *)*plVar2;
      *plVar2 = *plVar2 + 4;
    }
    if ((pIVar7 != (ITargetPlatform *)0x0) && (pIVar12 = pIVar10, 0 < (int)local_res10[0])) {
      do {
        uVar9 = (uint)pIVar10;
        uVar5 = 0;
        if ((int)uVar9 < *(int *)&pIVar7->field_0x8) {
          uVar5 = ~uVar9 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        FOpenColorIOTransformResource::SerializeShaderMap
                  (*(FOpenColorIOTransformResource **)
                    ((longlong)&((ForAnyElementType *)&pIVar12->field_0x0)->Data +
                    *(longlong *)pIVar7),param_2);
        pIVar10 = (ITargetPlatform *)(ulonglong)(uVar9 + 1);
        pIVar12 = (ITargetPlatform *)&pIVar12->field_0x8;
      } while ((int)(uVar9 + 1) < (int)local_res10[0]);
    }
  }
  return;
}

// StaticRegisterNativesUOpenColorIOColorTransform @ 14d778480

void __cdecl UOpenColorIOColorTransform::StaticRegisterNativesUOpenColorIOColorTransform(void)

{
  return;
}

// TransformColor @ 14d778cc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UOpenColorIOColorTransform::TransformColor(UOpenColorIOColorTransform *this,FLinearColor *param_1)

{
  int iVar1;
  bool bVar2;
  undefined1 auStackY_b8 [32];
  FOpenColorIOWrapperProcessor local_88 [2];
  undefined1 local_78 [24];
  undefined8 uStack_60;
  void *local_58;
  undefined4 local_50;
  uint local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  void *local_38;
  ulonglong local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_b8;
  FOpenColorIOWrapperProcessor::FOpenColorIOWrapperProcessor(local_88);
  local_4c = 0x80;
  local_40 = 0;
  local_78._16_8_ = 0;
  uStack_60 = 0;
  local_30 = 0;
  local_78._0_8_ = (FScriptContainerElement *)0x0;
  local_78._8_8_ = 0;
  local_58 = (void *)0x0;
  local_50 = 0;
  local_48 = 0xffffffff;
  local_44 = 0;
  local_38 = (void *)0x0;
  bVar2 = GetTransformProcessor
                    (this,local_88,
                     (TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                      *)local_78);
  local_30 = local_30 & 0xffffffff00000000;
  if (local_38 != (void *)0x0) {
    FMemory::Free(local_38);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_78,0,local_78._8_4_);
  iVar1 = SUB84(local_78._8_8_,4);
  local_78._8_8_ = local_78._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,(ForAnyElementType *)local_78,0,(int *)(local_78 + 0xc));
  }
  local_48 = 0xffffffff;
  local_44 = 0;
  local_50 = 0;
  if (0x80 < local_4c) {
    local_4c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_78 + 0x10),0);
  }
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  if ((FScriptContainerElement *)local_78._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_78._0_8_);
  }
  if (bVar2) {
    bVar2 = FOpenColorIOWrapperProcessor::TransformColor(local_88,param_1);
  }
  else {
    bVar2 = false;
  }
  if (local_88[0].Pimpl != (TPimplPtr<FOpenColorIOProcessorPimpl,1>)0x0) {
    (**(code **)((longlong)local_88[0].Pimpl + -0x10))((longlong)local_88[0].Pimpl + -0x10);
  }
  return bVar2;
}

// TransformImage @ 14d779010

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UOpenColorIOColorTransform::TransformImage
          (UOpenColorIOColorTransform *this,FImageView *param_1,FImageView *param_2)

{
  int iVar1;
  bool bVar2;
  undefined1 auStackY_c8 [32];
  FOpenColorIOWrapperProcessor local_98 [2];
  undefined1 local_88 [24];
  undefined8 uStack_70;
  void *local_68;
  undefined4 local_60;
  uint local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  void *local_48;
  ulonglong local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  FOpenColorIOWrapperProcessor::FOpenColorIOWrapperProcessor(local_98);
  local_5c = 0x80;
  local_50 = 0;
  local_88._16_8_ = 0;
  uStack_70 = 0;
  local_40 = 0;
  local_88._0_8_ = (FScriptContainerElement *)0x0;
  local_88._8_8_ = 0;
  local_68 = (void *)0x0;
  local_60 = 0;
  local_58 = 0xffffffff;
  local_54 = 0;
  local_48 = (void *)0x0;
  bVar2 = GetTransformProcessor
                    (this,local_98,
                     (TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                      *)local_88);
  local_40 = local_40 & 0xffffffff00000000;
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_88,0,local_88._8_4_);
  iVar1 = SUB84(local_88._8_8_,4);
  local_88._8_8_ = local_88._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,(ForAnyElementType *)local_88,0,(int *)(local_88 + 0xc));
  }
  local_58 = 0xffffffff;
  local_54 = 0;
  local_60 = 0;
  if (0x80 < local_5c) {
    local_5c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10),0);
  }
  if (local_68 != (void *)0x0) {
    FMemory::Free(local_68);
  }
  if ((FScriptContainerElement *)local_88._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_88._0_8_);
  }
  if (bVar2) {
    bVar2 = FOpenColorIOWrapperProcessor::TransformImage(local_98,param_1,param_2);
  }
  else {
    bVar2 = false;
  }
  if (local_98[0].Pimpl != (TPimplPtr<FOpenColorIOProcessorPimpl,1>)0x0) {
    (**(code **)((longlong)local_98[0].Pimpl + -0x10))((longlong)local_98[0].Pimpl + -0x10);
  }
  return bVar2;
}

// TransformImage @ 14d779180

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UOpenColorIOColorTransform::TransformImage(UOpenColorIOColorTransform *this,FImageView *param_1)

{
  int iVar1;
  bool bVar2;
  undefined1 auStackY_b8 [32];
  FOpenColorIOWrapperProcessor local_88 [2];
  undefined1 local_78 [24];
  undefined8 uStack_60;
  void *local_58;
  undefined4 local_50;
  uint local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  void *local_38;
  ulonglong local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_b8;
  FOpenColorIOWrapperProcessor::FOpenColorIOWrapperProcessor(local_88);
  local_4c = 0x80;
  local_40 = 0;
  local_78._16_8_ = 0;
  uStack_60 = 0;
  local_30 = 0;
  local_78._0_8_ = (FScriptContainerElement *)0x0;
  local_78._8_8_ = 0;
  local_58 = (void *)0x0;
  local_50 = 0;
  local_48 = 0xffffffff;
  local_44 = 0;
  local_38 = (void *)0x0;
  bVar2 = GetTransformProcessor
                    (this,local_88,
                     (TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                      *)local_78);
  local_30 = local_30 & 0xffffffff00000000;
  if (local_38 != (void *)0x0) {
    FMemory::Free(local_38);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_78,0,local_78._8_4_);
  iVar1 = SUB84(local_78._8_8_,4);
  local_78._8_8_ = local_78._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,(ForAnyElementType *)local_78,0,(int *)(local_78 + 0xc));
  }
  local_48 = 0xffffffff;
  local_44 = 0;
  local_50 = 0;
  if (0x80 < local_4c) {
    local_4c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_78 + 0x10),0);
  }
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  if ((FScriptContainerElement *)local_78._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_78._0_8_);
  }
  if (bVar2) {
    bVar2 = FOpenColorIOWrapperProcessor::TransformImage(local_88,param_1);
  }
  else {
    bVar2 = false;
  }
  if (local_88[0].Pimpl != (TPimplPtr<FOpenColorIOProcessorPimpl,1>)0x0) {
    (**(code **)((longlong)local_88[0].Pimpl + -0x10))((longlong)local_88[0].Pimpl + -0x10);
  }
  return bVar2;
}

