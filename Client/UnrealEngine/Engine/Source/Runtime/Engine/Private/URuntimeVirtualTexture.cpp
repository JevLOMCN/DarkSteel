// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 33

// StaticClass @ 148998580

UClass * __cdecl URuntimeVirtualTexture::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_URuntimeVirtualTexture.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"RuntimeVirtualTexture",
               &Z_Registration_Info_UClass_URuntimeVirtualTexture.InnerSingleton,
               StaticRegisterNativesURuntimeVirtualTexture,0x120,0x10,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<URuntimeVirtualTexture>,
               InternalVTableHelperCtorCaller<URuntimeVirtualTexture>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_URuntimeVirtualTexture.InnerSingleton;
}

// URuntimeVirtualTexture @ 1489b6a40

URuntimeVirtualTexture * __thiscall
URuntimeVirtualTexture::URuntimeVirtualTexture(URuntimeVirtualTexture *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->TileCount = 8;
  this->TileSize = 2;
  *(undefined ***)this = &___7URuntimeVirtualTexture__6B_;
  this->TileBorderSize = 2;
  this->MaterialType = BaseColor_Normal_Specular;
  this->bCompressTextures = true;
  this->bUseLowQualityCompression = false;
  this->bUseCustomPriority = false;
  this->bClearTextures = true;
  this->bSinglePhysicalSpace = true;
  this->bPrivateSpace = true;
  this->bAdaptive = false;
  this->bContinuousUpdate = false;
  this->RemoveLowMips = 0;
  (this->LODGroup).Value = '\0';
  this->Size_DEPRECATED = -1;
  *(undefined8 *)&(this->CustomMaterialData).field0_0x0 = 0;
  (this->CustomMaterialData).field0_0x0._s_0.Z = 0.0;
  (this->CustomMaterialData).field0_0x0._s_0.W = 1.0;
  this->WorldToUVTransformParameters[0].field0_0x0._s_0.W = 1.0;
  this->WorldToUVTransformParameters[0].field0_0x0._s_0.X = 0.0;
  this->WorldToUVTransformParameters[0].field0_0x0._s_0.Y = 0.0;
  this->WorldToUVTransformParameters[0].field0_0x0._s_0.Z = 0.0;
  this->WorldToUVTransformParameters[1].field0_0x0._s_0.X = 0.0;
  this->WorldToUVTransformParameters[1].field0_0x0._s_0.Y = 0.0;
  this->WorldToUVTransformParameters[1].field0_0x0._s_0.Z = 0.0;
  this->WorldToUVTransformParameters[1].field0_0x0._s_0.W = 1.0;
  this->WorldToUVTransformParameters[2].field0_0x0._s_0.X = 0.0;
  this->WorldToUVTransformParameters[2].field0_0x0._s_0.Y = 0.0;
  this->WorldToUVTransformParameters[2].field0_0x0._s_0.Z = 0.0;
  this->WorldToUVTransformParameters[2].field0_0x0._s_0.W = 1.0;
  (this->StreamingTexture_DEPRECATED).field0_0x0.DebugPtr =
       (URuntimeVirtualTextureStreamingProxy *)0x0;
  (this->WorldHeightUnpackParameter).field0_0x0._s_0.W = 1.0;
  (this->WorldHeightUnpackParameter).field0_0x0._s_0.X = 0.0;
  (this->WorldHeightUnpackParameter).field0_0x0._s_0.Y = 0.0;
  (this->WorldHeightUnpackParameter).field0_0x0._s_0.Z = 0.0;
  *(undefined8 *)&this->OnReInitDelegate = 0;
  *(undefined8 *)&(this->OnReInitDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->OnReInitDelegate).field_0x10 = 0;
  return this;
}

// URuntimeVirtualTexture @ 1489b6b50

URuntimeVirtualTexture * __thiscall
URuntimeVirtualTexture::URuntimeVirtualTexture
          (URuntimeVirtualTexture *this,FObjectInitializer *param_1)

{
  FRuntimeVirtualTextureRenderResource *pFVar1;
  FRuntimeVirtualTextureRenderResource *pFVar2;
  wchar_t *pwVar3;
  
  UObject::UObject((UObject *)this,param_1);
  pFVar2 = (FRuntimeVirtualTextureRenderResource *)0x0;
  this->TileCount = 8;
  this->TileSize = 2;
  *(undefined ***)this = &___7URuntimeVirtualTexture__6B_;
  this->TileBorderSize = 2;
  this->MaterialType = BaseColor_Normal_Specular;
  this->bCompressTextures = true;
  this->bUseLowQualityCompression = false;
  this->bUseCustomPriority = false;
  this->bClearTextures = true;
  this->bSinglePhysicalSpace = true;
  this->bPrivateSpace = true;
  this->bAdaptive = false;
  this->bContinuousUpdate = false;
  this->RemoveLowMips = 0;
  (this->LODGroup).Value = '\0';
  this->Size_DEPRECATED = -1;
  *(undefined8 *)&(this->CustomMaterialData).field0_0x0 = 0;
  *(undefined8 *)((longlong)&(this->CustomMaterialData).field0_0x0 + 8) = 0;
  this->WorldToUVTransformParameters[0].field0_0x0._s_0.W = 1.0;
  this->WorldToUVTransformParameters[0].field0_0x0._s_0.X = 0.0;
  this->WorldToUVTransformParameters[0].field0_0x0._s_0.Y = 0.0;
  this->WorldToUVTransformParameters[0].field0_0x0._s_0.Z = 0.0;
  this->WorldToUVTransformParameters[1].field0_0x0._s_0.X = 0.0;
  this->WorldToUVTransformParameters[1].field0_0x0._s_0.Y = 0.0;
  this->WorldToUVTransformParameters[1].field0_0x0._s_0.Z = 0.0;
  this->WorldToUVTransformParameters[1].field0_0x0._s_0.W = 1.0;
  this->WorldToUVTransformParameters[2].field0_0x0._s_0.X = 0.0;
  this->WorldToUVTransformParameters[2].field0_0x0._s_0.Y = 0.0;
  this->WorldToUVTransformParameters[2].field0_0x0._s_0.Z = 0.0;
  this->WorldToUVTransformParameters[2].field0_0x0._s_0.W = 1.0;
  (this->StreamingTexture_DEPRECATED).field0_0x0.DebugPtr =
       (URuntimeVirtualTextureStreamingProxy *)0x0;
  (this->WorldHeightUnpackParameter).field0_0x0._s_0.X = 0.0;
  (this->WorldHeightUnpackParameter).field0_0x0._s_0.Y = 0.0;
  (this->WorldHeightUnpackParameter).field0_0x0._s_0.Z = 0.0;
  (this->WorldHeightUnpackParameter).field0_0x0._s_0.W = 1.0;
  *(undefined8 *)&this->OnReInitDelegate = 0;
  *(undefined4 *)&(this->OnReInitDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->OnReInitDelegate).field_0x8 = 0;
  if ((*(uint *)&this->field_0x8 & 0x10) == 0) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) <
         `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
         _thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                             _thread_safe_static_guard_0__),
       `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__
       == -1)) {
      pwVar3 = FCommandLine::Get();
      `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline =
           FParse::Param(pwVar3,L"nullrhi");
      _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                           _thread_safe_static_guard_0__);
    }
    if (((PRIVATE_GIsRunningCommandlet == false) || (PRIVATE_GAllowCommandletRendering != false)) &&
       (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline ==
        false)) {
      pFVar1 = ::operator_new(0x18);
      if (pFVar1 != (FRuntimeVirtualTextureRenderResource *)0x0) {
        (pFVar1->ProducerHandle).PackedValue = 0;
        pFVar1->AllocatedVirtualTexture = (IAllocatedVirtualTexture *)0x0;
        pFVar1->AdaptiveVirtualTexture = (IAdaptiveVirtualTexture *)0x0;
        pFVar2 = pFVar1;
      }
      this->Resource = pFVar2;
      InitNullResource(this);
    }
  }
  return this;
}

// ~URuntimeVirtualTexture @ 1489ba660

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall URuntimeVirtualTexture::~URuntimeVirtualTexture(URuntimeVirtualTexture *this)

{
  FRuntimeVirtualTextureRenderResource *pFVar1;
  code *pcVar2;
  bool bVar3;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar4;
  code **ppcVar5;
  ulonglong uVar6;
  undefined1 auStack_c8 [32];
  uint local_a8;
  undefined4 uStack_a4;
  IAdaptiveVirtualTexture *pIStack_a0;
  IAllocatedVirtualTexture *local_98;
  code *local_88 [2];
  code *local_78 [3];
  code **local_60;
  undefined1 local_58 [40];
  code **local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  pFVar1 = this->Resource;
  *(undefined ***)this = &___7URuntimeVirtualTexture__6B_;
  if (pFVar1 != (FRuntimeVirtualTextureRenderResource *)0x0) {
    pIStack_a0 = pFVar1->AdaptiveVirtualTexture;
    local_a8 = (pFVar1->ProducerHandle).PackedValue;
    local_98 = pFVar1->AllocatedVirtualTexture;
    (pFVar1->ProducerHandle).PackedValue = 0;
    pFVar1->AdaptiveVirtualTexture = (IAdaptiveVirtualTexture *)0x0;
    pFVar1->AllocatedVirtualTexture = (IAllocatedVirtualTexture *)0x0;
    local_88[0] = (code *)0x0;
    local_60 = FMemory::Malloc(0x20,8);
    *local_60 = (code *)&
                        ___7__TFunction_OwnedObject_V<lambda_1>__1__Release_FRuntimeVirtualTextureRenderResource__QEAAXXZ__00_00_Function_Private_Core_UE__6B_
    ;
    local_60[1] = (code *)CONCAT44(uStack_a4,local_a8);
    local_60[2] = (code *)pIStack_a0;
    local_60[3] = (code *)local_98;
    if (local_60 + 1 != (code **)0x0) {
      local_88[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`FRuntimeVirtualTextureRenderResource::Release'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                    ::Call;
    }
    this_00 = FRenderCommandList::GetInstanceTLS();
    if (this_00 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_FRuntimeVirtualTextureRenderResource::Release_::__l2::TSTR_FRuntimeVirtualTextureRenderResource_Release190>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_88);
    }
    else {
      this_01 = FRenderCommandList::GetRenderThread(this_00);
      local_58._0_8_ = local_88[0];
      local_30 = local_60;
      local_60 = (code **)0x0;
      local_58._16_8_ = local_78[0];
      local_58._24_8_ = local_78[1];
      local_58._32_8_ = local_78[2];
      local_88[0] = (code *)0x0;
      local_28 = 2;
      pFVar4 = (FRenderCommandTag *)
               TRenderCommandTag<`FRuntimeVirtualTextureRenderResource::Release'::__l2::TSTR_FRuntimeVirtualTextureRenderResource_Release190>
               ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)local_58,pFVar4);
      uVar6 = (ulonglong)local_28;
      if (2 < uVar6) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar6] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)local_58._0_8_ != (code *)0x0) {
          ppcVar5 = (code **)(local_58 + 0x10);
          if (local_30 != (code **)0x0) {
            ppcVar5 = local_30;
          }
          (**(code **)(*ppcVar5 + 0x10))();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar6])(local_58);
      }
    }
    if (local_88[0] != (code *)0x0) {
      ppcVar5 = local_88 + 2;
      if (local_60 != (code **)0x0) {
        ppcVar5 = local_60;
      }
      (**(code **)(*ppcVar5 + 0x10))();
    }
    ::operator_delete(this->Resource,0x18);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnReInitDelegate);
  UObject::~UObject((UObject *)this);
  return;
}

// GetAllocatedVirtualTexture @ 1489e60c0

IAllocatedVirtualTexture * __thiscall
URuntimeVirtualTexture::GetAllocatedVirtualTexture(URuntimeVirtualTexture *this)

{
  FRuntimeVirtualTextureRenderResource *pFVar1;
  IAllocatedVirtualTexture *pIVar2;
  
  pFVar1 = this->Resource;
  if (pFVar1 == (FRuntimeVirtualTextureRenderResource *)0x0) {
    return (IAllocatedVirtualTexture *)0x0;
  }
  if (pFVar1->AdaptiveVirtualTexture != (IAdaptiveVirtualTexture *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001489e60d5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pIVar2 = (IAllocatedVirtualTexture *)(**(code **)*pFVar1->AdaptiveVirtualTexture)();
    return pIVar2;
  }
  return pFVar1->AllocatedVirtualTexture;
}

// GetAssetRegistryTags @ 1489e6110

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
URuntimeVirtualTexture::GetAssetRegistryTags
          (URuntimeVirtualTexture *this,
          TArray<UObject::FAssetRegistryTag,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  ForElementType<UObject_const_*> *pFVar3;
  longlong *plVar4;
  code *pcVar5;
  uchar *puVar6;
  bool bVar7;
  int iVar8;
  FAssetRegistryTagsContext *pFVar9;
  byte bVar10;
  ForElementType<UObject_const_*> *pFVar11;
  longlong lVar12;
  longlong lVar13;
  FScriptContainerElement *pFVar14;
  ulonglong uVar15;
  uint uVar16;
  uint *puVar17;
  uint uVar18;
  undefined1 auStackY_1d8 [32];
  undefined1 auStack_188 [8];
  URuntimeVirtualTexture *pUStack_180;
  int iStack_178;
  int iStack_174;
  ForElementType<UObject_const_*> FStack_170;
  longlong *plStack_168;
  int iStack_160;
  uint uStack_15c;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_158;
  undefined4 uStack_150;
  uint uStack_14c;
  int iStack_148;
  undefined4 uStack_144;
  int iStack_140;
  undefined4 uStack_13c;
  longlong *plStack_138;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_130;
  undefined8 uStack_110;
  FAssetRegistryTagsContext FStack_108;
  FString aFStack_100 [2];
  undefined4 uStack_d4;
  undefined1 auStack_c8 [32];
  uint *puStack_a8;
  uint uStack_a0;
  int iStack_94;
  void *pvStack_88;
  undefined4 uStack_80;
  FAssetBundleData *pFStack_68;
  bool bStack_53;
  ulonglong uStack_48;
  
  uStack_48 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  lVar13 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  pFVar3 = (ForElementType<UObject_const_*> *)(lVar13 + 0xcb8);
  pFVar11 = *(ForElementType<UObject_const_*> **)(lVar13 + 0xcc8);
  if (*(ForElementType<UObject_const_*> **)(lVar13 + 0xcc8) ==
      (ForElementType<UObject_const_*> *)0x0) {
    pFVar11 = pFVar3;
  }
  puVar6 = pFVar11->InlineData;
  for (; pFVar11 !=
         (ForElementType<UObject_const_*> *)(puVar6 + (longlong)*(int *)(lVar13 + 0xcd0) * 8);
      pFVar11 = (ForElementType<UObject_const_*> *)(pFVar11->InlineData + 8)) {
    if (*(URuntimeVirtualTexture **)pFVar11->InlineData == this) {
      return;
    }
  }
  FStack_170 = (ForElementType<UObject_const_*>)this;
  FAssetRegistryTagsContextData::FAssetRegistryTagsContextData
            ((FAssetRegistryTagsContextData *)auStack_c8,(UObject *)this,Uncategorized);
  bStack_53 = *(longlong *)(lVar13 + 0xcb0) != 0;
  pFVar11 = *(ForElementType<UObject_const_*> **)(lVar13 + 0xcc8);
  if (*(ForElementType<UObject_const_*> **)(lVar13 + 0xcc8) ==
      (ForElementType<UObject_const_*> *)0x0) {
    pFVar11 = pFVar3;
  }
  pUStack_180 = this;
  if (((pFVar11 <= (ForElementType<UObject_const_*> *)&pUStack_180) &&
      (&pUStack_180 < pFVar11->InlineData + (longlong)*(int *)(lVar13 + 0xcd4) * 8)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar8 = *(int *)(lVar13 + 0xcd0);
  if (iVar8 == *(int *)(lVar13 + 0xcd4)) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<UObject_const_*>_>
                      (0x808,pFVar3,(int *)(lVar13 + 0xcd4));
  }
  *(int *)(lVar13 + 0xcd0) = iVar8 + 1;
  pFVar11 = *(ForElementType<UObject_const_*> **)(lVar13 + 0xcc8);
  if (*(ForElementType<UObject_const_*> **)(lVar13 + 0xcc8) ==
      (ForElementType<UObject_const_*> *)0x0) {
    pFVar11 = pFVar3;
  }
  *(URuntimeVirtualTexture **)(pFVar11->InlineData + (longlong)iVar8 * 8) = pUStack_180;
  pcVar5 = *(code **)(*(longlong *)this + 0x1b8);
  pFVar9 = FAssetRegistryTagsContext::FAssetRegistryTagsContext
                     (&FStack_108,(FAssetRegistryTagsContextData *)auStack_c8);
  (*pcVar5)(this,pFVar9);
  lVar13 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar8 = *(int *)(lVar13 + 0xcd0);
  if (iVar8 != 0) {
    uVar16 = 0;
    if ((int)(iVar8 - 1U) < iVar8) {
      uVar16 = ~(iVar8 - 1U) >> 0x1f;
    }
    if ((uVar16 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    lVar12 = *(longlong *)(lVar13 + 0xcc8);
    if (*(longlong *)(lVar13 + 0xcc8) == 0) {
      lVar12 = lVar13 + 0xcb8;
    }
    if (*(URuntimeVirtualTexture **)(lVar12 + -8 + (longlong)*(int *)(lVar13 + 0xcd0) * 8) == this)
    goto LAB_1420f919b;
  }
  bVar7 = ::FDebug::CheckVerifyFailedImpl2
                    ("!GAssetRegistryTagsObjectsBeingForwarded.IsEmpty() && GAssetRegistryTagsObjectsBeingForwarded.Last() == this"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Obj.cpp"
                     ,0x966,L"");
  if (bVar7) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
LAB_1420f919b:
  TArray<UObject_const_*,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>::Pop
            ((TArray<UObject_const_*,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xcb8
             ),No);
  uVar16 = (auStack_c8._8_4_ - iStack_94) + param_1->ArrayNum;
  if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar16);
  }
  piVar1 = &param_1->ArrayMax;
  if (*piVar1 < (int)uVar16) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,uVar16,&param_1->AllocatorInstance,param_1->ArrayNum,piVar1);
  }
  uVar16 = uStack_a0;
  iStack_160 = 0;
  iStack_148 = 0;
  uStack_15c = 1;
  uStack_14c = 0;
  if (uStack_a0 != 0) {
    puVar17 = (uint *)(auStack_c8 + 0x10);
    if (puStack_a8 != (uint *)0x0) {
      puVar17 = puStack_a8;
    }
    uVar18 = *puVar17;
    while (uVar18 == 0) {
      lVar13 = (longlong)iStack_160;
      iStack_148 = iStack_148 + 0x20;
      iStack_160 = iStack_160 + 1;
      uStack_14c = uStack_a0;
      if ((int)((uStack_a0 - 1) + ((int)(uStack_a0 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_160)
      goto LAB_1420f9291;
      uVar18 = puVar17[lVar13 + 1];
    }
    uStack_15c = -uVar18 & uVar18;
    uVar15 = (ulonglong)uStack_15c * 2 + 1;
    lVar13 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    iStack_178 = (int)lVar13;
    uStack_14c = iStack_178 + -1 + iStack_148;
    if ((int)uStack_a0 < (int)uStack_14c) {
      uStack_14c = uStack_a0;
    }
  }
LAB_1420f9291:
  iStack_140 = auStack_c8._8_4_ - iStack_94;
  plStack_168 = (longlong *)auStack_c8;
  pTStack_158 = (TBitArray<FDefaultBitArrayAllocator> *)(auStack_c8 + 0x10);
  uStack_150 = 0xffffffff;
  TStack_130.CurrentBitIndex = uStack_14c;
  TStack_130.UnvisitedBitMask = 0xffffffff;
  uVar18 = uStack_a0 & 0xffffffe0;
  TStack_130._padding_ = CONCAT44(uStack_15c,iStack_160);
  uStack_144 = uStack_d4;
  iVar8 = (int)uStack_a0 >> 5;
  TStack_130._28_4_ = uStack_d4;
  TStack_130.BaseBitIndex = iStack_148;
  uStack_110 = CONCAT44(uStack_13c,iStack_140);
  bVar10 = (byte)uStack_a0;
  plStack_138 = plStack_168;
  TStack_130.Array = pTStack_158;
  if (((int)uStack_a0 < 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (uVar16 != uStack_a0) {
    puVar17 = (uint *)(auStack_c8 + 0x10);
    if (puStack_a8 != (uint *)0x0) {
      puVar17 = puStack_a8;
    }
    uVar16 = -1 << (bVar10 & 0x1f) & puVar17[iVar8];
    while (uVar16 == 0) {
      lVar13 = (longlong)iVar8;
      uVar18 = uVar18 + 0x20;
      iVar8 = iVar8 + 1;
      uVar16 = uStack_a0;
      if ((int)((uStack_a0 - 1) + ((int)(uStack_a0 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar8)
      goto LAB_1420f9392;
      uVar16 = puVar17[lVar13 + 1];
    }
    uVar15 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    iStack_174 = (int)lVar13;
    uVar16 = iStack_174 + -1 + uVar18;
    if ((int)uStack_a0 < (int)uVar16) {
      uVar16 = uStack_a0;
    }
  }
LAB_1420f9392:
  while( true ) {
    plVar4 = plStack_138;
    if ((int)plStack_138[1] - *(int *)((longlong)plStack_138 + 0x34) != (int)uStack_110) {
      auStack_188[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FName,UObject::FAssetRegistryTag>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(auStack_188);
    }
    if (((TStack_130.CurrentBitIndex == uVar16) &&
        (TStack_130.Array == (TBitArray<FDefaultBitArrayAllocator> *)(auStack_c8 + 0x10))) &&
       (plVar4 == (longlong *)auStack_c8)) break;
    pFVar14 = (param_1->AllocatorInstance).Data;
    lVar13 = (longlong)TStack_130.CurrentBitIndex * 0x30 + *plVar4;
    pFVar2 = (FScriptContainerElement *)(lVar13 + 8);
    if (((pFVar14 <= pFVar2) && (pFVar2 < pFVar14 + (longlong)*piVar1 * 0x20)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar8 = param_1->ArrayNum;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x820,&param_1->AllocatorInstance,piVar1);
    }
    param_1->ArrayNum = iVar8 + 1;
    pFVar14 = (param_1->AllocatorInstance).Data + (longlong)iVar8 * 0x20;
    *(undefined8 *)pFVar14 = *(undefined8 *)pFVar2;
    *(undefined8 *)(pFVar14 + 8) = 0;
    *(undefined8 *)(pFVar14 + 8) = *(undefined8 *)(lVar13 + 0x10);
    *(undefined8 *)(lVar13 + 0x10) = 0;
    *(undefined4 *)(pFVar14 + 0x10) = *(undefined4 *)(lVar13 + 0x18);
    *(undefined4 *)(pFVar14 + 0x14) = *(undefined4 *)(lVar13 + 0x1c);
    *(undefined8 *)(lVar13 + 0x18) = 0;
    *(undefined4 *)(pFVar14 + 0x18) = *(undefined4 *)(lVar13 + 0x20);
    *(undefined4 *)(pFVar14 + 0x1c) = *(undefined4 *)(lVar13 + 0x24);
    TStack_130.UnvisitedBitMask = TStack_130.UnvisitedBitMask & ~TStack_130._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_130);
  }
  uVar15 = (ulonglong)_tls_index;
  plVar4 = *(longlong **)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar15 * 8) + 0xcb0);
  if (plVar4 != (longlong *)0x0) {
    if (*plVar4 != 0) {
      UObjectBaseUtility::GetPathName((UObjectBaseUtility *)FStack_170,aFStack_100,(UObject *)0x0);
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("*TLegacyGetAssetRegistryTags_OutBundles == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Obj.cpp"
                         ,0x970,L"Object %s has more than one FAssetBundleData!");
      if (aFStack_100[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(aFStack_100[0].Data.AllocatorInstance.Data);
      }
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    **(undefined8 **)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar15 * 8) + 0xcb0) =
         pFStack_68;
  }
  uStack_80 = 0;
  if (pvStack_88 != (void *)0x0) {
    FMemory::Free(pvStack_88);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,UObject::FAssetRegistryTag>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,UObject::FAssetRegistryTag>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,UObject::FAssetRegistryTag>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)auStack_c8);
  return;
}

// GetAssetRegistryTags @ 1489e6120

void __thiscall
URuntimeVirtualTexture::GetAssetRegistryTags
          (URuntimeVirtualTexture *this,FAssetRegistryTagsContext param_1)

{
  int iVar1;
  int iVar2;
  FAssetRegistryTagsContext FVar3;
  FName *pFVar4;
  byte bVar5;
  byte bVar6;
  int iVar8;
  int iVar9;
  FName local_res8;
  FString local_58;
  FAssetRegistryTag local_48;
  byte bVar7;
  
  FVar3.Data = (FAssetRegistryTagsContextData *)
               FAssetRegistryTagsContext::FAssetRegistryTagsContext
                         ((FAssetRegistryTagsContext *)&local_res8,param_1.Data);
  UObject::GetAssetRegistryTags((UObject *)this,FVar3);
  iVar2 = 0xc;
  iVar9 = iVar2;
  if (this->bAdaptive != false) {
    iVar9 = 0x14;
  }
  bVar5 = 6;
  if (this->TileCount < iVar9) {
    iVar9 = this->TileCount;
  }
  iVar1 = this->TileSize + 6;
  iVar8 = 10;
  if (iVar1 < 10) {
    iVar8 = iVar1;
  }
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.Data.ArrayNum = 0;
  local_58.Data.ArrayMax = 0;
  if (6 < iVar8) {
    bVar5 = (byte)iVar8;
  }
  bVar6 = 0;
  bVar7 = bVar6;
  if (0 < iVar9) {
    bVar7 = (byte)iVar9;
  }
  ::FString::AppendInt(&local_58,(1 << (bVar5 & 0x1f)) << (bVar7 & 0x1f));
  pFVar4 = ::FName::FName(&local_res8,"Size");
  local_48.Name = *pFVar4;
  local_48.Value.Data.AllocatorInstance.Data = local_58.Data.AllocatorInstance.Data;
  local_48.Value.Data.ArrayNum = local_58.Data.ArrayNum;
  local_48.Value.Data.ArrayMax = local_58.Data.ArrayMax;
  local_58.Data.ArrayNum = 0;
  local_58.Data.ArrayMax = 0;
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Type = TT_Numerical;
  local_48.DisplayFlags = 0;
  FAssetRegistryTagsContext::AddTag((FAssetRegistryTagsContext *)param_1.Data,&local_48);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (this->bAdaptive != false) {
    iVar2 = 0x14;
  }
  local_58.Data.ArrayNum = 0;
  local_58.Data.ArrayMax = 0;
  if (this->TileCount < iVar2) {
    iVar2 = this->TileCount;
  }
  if (0 < iVar2) {
    bVar6 = (byte)iVar2;
  }
  ::FString::AppendInt(&local_58,1 << (bVar6 & 0x1f));
  pFVar4 = ::FName::FName(&local_res8,"TileCount");
  local_48.Name = *pFVar4;
  local_48.Value.Data.AllocatorInstance.Data = local_58.Data.AllocatorInstance.Data;
  local_48.Value.Data.ArrayNum = local_58.Data.ArrayNum;
  local_48.Value.Data.ArrayMax = local_58.Data.ArrayMax;
  local_58.Data.ArrayNum = 0;
  local_58.Data.ArrayMax = 0;
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Type = TT_Numerical;
  local_48.DisplayFlags = 0;
  FAssetRegistryTagsContext::AddTag((FAssetRegistryTagsContext *)param_1.Data,&local_48);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  iVar2 = this->TileSize + 6;
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.Data.ArrayNum = 0;
  local_58.Data.ArrayMax = 0;
  iVar9 = 10;
  if (iVar2 < 10) {
    iVar9 = iVar2;
  }
  iVar2 = 6;
  if (6 < iVar9) {
    iVar2 = iVar9;
  }
  ::FString::AppendInt(&local_58,1 << ((byte)iVar2 & 0x1f));
  pFVar4 = ::FName::FName(&local_res8,"TileSize");
  local_48.Name = *pFVar4;
  local_48.Value.Data.AllocatorInstance.Data = local_58.Data.AllocatorInstance.Data;
  local_48.Value.Data.ArrayNum = local_58.Data.ArrayNum;
  local_48.Value.Data.ArrayMax = local_58.Data.ArrayMax;
  local_58.Data.ArrayNum = 0;
  local_58.Data.ArrayMax = 0;
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Type = TT_Numerical;
  local_48.DisplayFlags = 0;
  FAssetRegistryTagsContext::AddTag((FAssetRegistryTagsContext *)param_1.Data,&local_48);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.Data.ArrayNum = 0;
  local_58.Data.ArrayMax = 0;
  iVar9 = 4;
  if (this->TileBorderSize < 4) {
    iVar9 = this->TileBorderSize;
  }
  iVar2 = 0;
  if (0 < iVar9) {
    iVar2 = iVar9;
  }
  ::FString::AppendInt(&local_58,iVar2 * 2);
  pFVar4 = ::FName::FName(&local_res8,"TileBorderSize");
  local_48.Name = *pFVar4;
  local_48.Value.Data.AllocatorInstance.Data = local_58.Data.AllocatorInstance.Data;
  local_48.Value.Data.ArrayNum = local_58.Data.ArrayNum;
  local_48.Value.Data.ArrayMax = local_58.Data.ArrayMax;
  local_58.Data.ArrayNum = 0;
  local_58.Data.ArrayMax = 0;
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Type = TT_Numerical;
  local_48.DisplayFlags = 0;
  FAssetRegistryTagsContext::AddTag((FAssetRegistryTagsContext *)param_1.Data,&local_48);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  return;
}

// GetDefaultPriority @ 1489e7b50

EVTProducerPriority __thiscall
URuntimeVirtualTexture::GetDefaultPriority(URuntimeVirtualTexture *this)

{
  code *pcVar1;
  bool bVar2;
  EVTProducerPriority EVar3;
  
  switch(this->MaterialType) {
  case BaseColor:
  case BaseColor_Normal_Roughness:
  case BaseColor_Normal_Specular:
  case BaseColor_Normal_Specular_YCoCg:
  case BaseColor_Normal_Specular_Mask_YCoCg:
    return High;
  case Mask4:
    return BelowNormal;
  case WorldHeight:
    return Low;
  case Displacement:
    return Lower;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\VT\\RuntimeVirtualTexture.cpp"
                     ,0x25c,L"");
  if (!bVar2) {
    return Normal;
  }
  pcVar1 = (code *)swi(3);
  EVar3 = (*pcVar1)();
  return EVar3;
}

// GetLayerCount @ 1489e9990

int __thiscall URuntimeVirtualTexture::GetLayerCount(URuntimeVirtualTexture *this)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  switch(this->MaterialType) {
  case BaseColor:
  case Mask4:
  case WorldHeight:
  case Displacement:
    goto switchD_1489e99ae_caseD_0;
  case BaseColor_Normal_Roughness:
  case BaseColor_Normal_Specular:
    return 2;
  case BaseColor_Normal_Specular_YCoCg:
  case BaseColor_Normal_Specular_Mask_YCoCg:
    return 3;
  default:
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\VT\\RuntimeVirtualTexture.cpp"
                       ,0x18c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
switchD_1489e99ae_caseD_0:
    return 1;
  }
}

// GetLayerCount @ 1489e9a20

int __cdecl URuntimeVirtualTexture::GetLayerCount(ERuntimeVirtualTextureMaterialType param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  switch(param_1) {
  case BaseColor:
  case Mask4:
  case WorldHeight:
  case Displacement:
    goto switchD_1489e9a3d_caseD_0;
  case BaseColor_Normal_Roughness:
  case BaseColor_Normal_Specular:
    return 2;
  case BaseColor_Normal_Specular_YCoCg:
  case BaseColor_Normal_Specular_Mask_YCoCg:
    return 3;
  default:
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\VT\\RuntimeVirtualTexture.cpp"
                       ,0x18c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
switchD_1489e9a3d_caseD_0:
    return 1;
  }
}

// GetLayerFormat @ 1489e9b30

/* WARNING: Removing unreachable block (ram,0x0001489e9bd8) */

EPixelFormat __thiscall
URuntimeVirtualTexture::GetLayerFormat(URuntimeVirtualTexture *this,int param_1)

{
  ERuntimeVirtualTextureMaterialType EVar1;
  code *pcVar2;
  bool bVar3;
  EPixelFormat EVar4;
  
  if (param_1 == 0) {
    switch(this->MaterialType) {
    case BaseColor:
switchD_1489e9b5b_caseD_0:
      if (this->bCompressTextures == false) {
        return PF_B8G8R8A8;
      }
      if (ZPULL(GPixelFormats[5],0,1) != 0) {
        return PF_DXT1;
      }
      EVar4 = PF_ETC2_RGB;
      if (ZPULL(GPixelFormats[0x2e],0,1) == 0) {
        EVar4 = PF_DXT1;
      }
      return EVar4;
    case Mask4:
    case BaseColor_Normal_Specular:
    case BaseColor_Normal_Specular_YCoCg:
    case BaseColor_Normal_Specular_Mask_YCoCg:
switchD_1489e9b5b_caseD_1:
      if (this->bCompressTextures == false) {
        return PF_B8G8R8A8;
      }
      if (ZPULL(GPixelFormats[7],0,1) != 0) {
        return PF_DXT5;
      }
      EVar4 = PF_ETC2_RGBA;
      if (ZPULL(GPixelFormats[0x2e],0,1) == 0) {
        EVar4 = PF_DXT5;
      }
      return EVar4;
    case BaseColor_Normal_Roughness:
      if (this->bCompressTextures == false) {
        return PF_B8G8R8A8;
      }
      if (this->bUseLowQualityCompression == false) {
        if (ZPULL(GPixelFormats[5],0,1) != 0) {
          return PF_DXT1;
        }
        EVar4 = PF_ETC2_RGB;
        if (ZPULL(GPixelFormats[0x2e],0,1) == 0) {
          EVar4 = PF_DXT1;
        }
        return EVar4;
      }
LAB_1489e9b9c:
      if ((ZPULL(GPixelFormats[0x48],0,1) != 0) && (ZPULL(GPixelFormats[0x24],0,1) != 0)) {
        return PF_R5G6B5_UNORM;
      }
      return PF_DXT1;
    case WorldHeight:
      return PF_G16;
    case Displacement:
      if (this->bCompressTextures == false) {
        return PF_G16;
      }
      if (ZPULL(GPixelFormats[0x27],0,1) != 0) {
        return PF_BC4;
      }
      EVar4 = PF_ETC2_R11_EAC;
      if (ZPULL(GPixelFormats[0x2e],0,1) == 0) {
        EVar4 = PF_BC4;
      }
      return EVar4;
    }
  }
  else if (param_1 == 1) {
    EVar1 = this->MaterialType;
    if (EVar1 == BaseColor_Normal_Roughness) {
      if (this->bCompressTextures == false) {
        return PF_B8G8R8A8;
      }
      if (this->bUseLowQualityCompression == false) {
        if (ZPULL(GPixelFormats[7],0,1) != 0) {
          return PF_DXT5;
        }
        EVar4 = PF_ETC2_RGBA;
        if (ZPULL(GPixelFormats[0x2e],0,1) == 0) {
          EVar4 = PF_DXT5;
        }
        return EVar4;
      }
      goto LAB_1489e9b9c;
    }
    if (EVar1 == BaseColor_Normal_Specular) goto switchD_1489e9b5b_caseD_1;
    if ((EVar1 == BaseColor_Normal_Specular_YCoCg) ||
       (EVar1 == BaseColor_Normal_Specular_Mask_YCoCg)) {
      if (this->bCompressTextures == false) {
        return PF_B8G8R8A8;
      }
      if (ZPULL(GPixelFormats[0x17],0,1) != 0) {
        return PF_BC5;
      }
      EVar4 = PF_ETC2_RG11_EAC;
      if (ZPULL(GPixelFormats[0x2e],0,1) == 0) {
        EVar4 = PF_BC5;
      }
      return EVar4;
    }
  }
  else if (param_1 == 2) {
    if (this->MaterialType == BaseColor_Normal_Specular_YCoCg) goto switchD_1489e9b5b_caseD_0;
    if (this->MaterialType == BaseColor_Normal_Specular_Mask_YCoCg) goto switchD_1489e9b5b_caseD_1;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\VT\\RuntimeVirtualTexture.cpp"
                     ,0x1f0,L"");
  if (!bVar3) {
    return PF_B8G8R8A8;
  }
  pcVar2 = (code *)swi(3);
  EVar4 = (*pcVar2)();
  return EVar4;
}

// GetMaxTileCountLog2 @ 1489ea650

int __cdecl URuntimeVirtualTexture::GetMaxTileCountLog2(bool param_1)

{
  return (uint)param_1 * 8 + 0xc;
}

// GetPageTableSize @ 1489eaff0

int __thiscall URuntimeVirtualTexture::GetPageTableSize(URuntimeVirtualTexture *this)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0xc;
  if (this->bAdaptive != false) {
    iVar2 = 0x14;
  }
  if (this->TileCount < iVar2) {
    iVar2 = this->TileCount;
  }
  iVar1 = 0;
  if (0 < iVar2) {
    iVar1 = iVar2;
  }
  if (this->bAdaptive != false) {
    iVar1 = ::`anonymous_namespace'::GetPageTableTileCountLog2(iVar1);
  }
  return 1 << ((byte)iVar1 & 0x1f);
}

// GetPriority @ 1489eb380

EVTProducerPriority __thiscall URuntimeVirtualTexture::GetPriority(URuntimeVirtualTexture *this)

{
  code *pcVar1;
  bool bVar2;
  EVTProducerPriority EVar3;
  
  if (this->bUseCustomPriority != false) {
    return this->CustomPriority;
  }
  switch(this->MaterialType) {
  case BaseColor:
  case BaseColor_Normal_Roughness:
  case BaseColor_Normal_Specular:
  case BaseColor_Normal_Specular_YCoCg:
  case BaseColor_Normal_Specular_Mask_YCoCg:
    return High;
  case Mask4:
    return BelowNormal;
  case WorldHeight:
    return Low;
  case Displacement:
    return Lower;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\VT\\RuntimeVirtualTexture.cpp"
                     ,0x25c,L"");
  if (!bVar2) {
    return Normal;
  }
  pcVar1 = (code *)swi(3);
  EVar3 = (*pcVar1)();
  return EVar3;
}

// GetPrivateStaticClass @ 1489eba20

UClass * __cdecl URuntimeVirtualTexture::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_URuntimeVirtualTexture.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"RuntimeVirtualTexture",
               &Z_Registration_Info_UClass_URuntimeVirtualTexture.InnerSingleton,
               StaticRegisterNativesURuntimeVirtualTexture,0x120,0x10,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<URuntimeVirtualTexture>,
               InternalVTableHelperCtorCaller<URuntimeVirtualTexture>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_URuntimeVirtualTexture.InnerSingleton;
}

// GetProducerDescription @ 1489ec5d0

void __thiscall
URuntimeVirtualTexture::GetProducerDescription
          (URuntimeVirtualTexture *this,FVTProducerDescription *param_1,FInitSettings *param_2,
          TTransform<double> *param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  code *pcVar3;
  undefined4 uVar4;
  EPixelFormat EVar5;
  uchar uVar6;
  bool bVar7;
  EVTProducerPriority EVar8;
  uint uVar9;
  int iVar10;
  FString *pFVar11;
  wchar_t *pwVar12;
  UDeviceProfileManager *pUVar13;
  UDeviceProfile *pUVar14;
  UTextureLODSettings *pUVar15;
  FTextureLODGroup *pFVar16;
  uchar uVar17;
  int iVar18;
  uint uVar19;
  int iVar20;
  byte bVar21;
  double dVar22;
  float fVar23;
  uint uVar24;
  FName local_res10;
  FString local_68;
  FString local_58;
  uint local_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  double local_38;
  
  uVar4 = *(undefined4 *)&this->field_0x1c;
  (param_1->Name).ComparisonIndex = (FNameEntryId)*(undefined4 *)&this->field_0x18;
  (param_1->Name).Number = uVar4;
  local_res10.ComparisonIndex.Value = *(uint *)&this->field_0x18;
  local_res10.Number = *(uint *)&this->field_0x1c;
  ::FName::ToString(&local_res10,&local_68);
  pFVar11 = ::FString::ToLower(&local_68,&local_58);
  iVar10 = (pFVar11->Data).ArrayNum;
  if (iVar10 == 0) {
    pwVar12 = L"";
  }
  else {
    pwVar12 = (wchar_t *)(pFVar11->Data).AllocatorInstance.Data;
  }
  iVar20 = 0;
  iVar18 = iVar10 + -1;
  if (iVar10 == 0) {
    iVar18 = 0;
  }
  uVar9 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar18,pwVar12);
  param_1->FullNameHash = uVar9;
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  uVar6 = '\x01';
  param_1->Dimensions = '\x02';
  param_1->DepthInTiles = 1;
  param_1->WidthInBlocks = 1;
  param_1->HeightInBlocks = 1;
  pUVar13 = UDeviceProfileManager::Get(false);
  pUVar14 = UDeviceProfileManager::GetActiveProfile(pUVar13);
  pUVar15 = UDeviceProfile::GetTextureLODSettings(pUVar14);
  pFVar16 = UTextureLODSettings::GetTextureLODGroup(pUVar15,(uint)(this->LODGroup).Value);
  iVar18 = pFVar16->VirtualTextureTileSizeBias + this->TileSize + 6;
  iVar10 = 10;
  if (iVar18 < 10) {
    iVar10 = iVar18;
  }
  iVar18 = 6;
  if (6 < iVar10) {
    iVar18 = iVar10;
  }
  param_1->TileSize = 1 << ((byte)iVar18 & 0x1f);
  iVar10 = 4;
  if (this->TileBorderSize < 4) {
    iVar10 = this->TileBorderSize;
  }
  iVar18 = 0;
  if (0 < iVar10) {
    iVar18 = iVar10;
  }
  param_1->TileBorderSize = iVar18 * 2;
  pUVar13 = UDeviceProfileManager::Get(false);
  pUVar14 = UDeviceProfileManager::GetActiveProfile(pUVar13);
  pUVar15 = UDeviceProfile::GetTextureLODSettings(pUVar14);
  pFVar16 = UTextureLODSettings::GetTextureLODGroup(pUVar15,(uint)(this->LODGroup).Value);
  local_48 = *(uint *)(param_3->Scale3D).XY.m128d_f64;
  uStack_44 = *(uint *)((longlong)(param_3->Scale3D).XY.m128d_f64 + 4);
  uStack_40 = *(uint *)((param_3->Scale3D).XY.m128d_f64 + 1);
  uStack_3c = *(uint *)((longlong)(param_3->Scale3D).XY.m128d_f64 + 0xc);
  local_38 = (param_3->Scale3D).ZW.m128d_f64[0];
  iVar18 = this->TileCount + pFVar16->VirtualTextureTileCountBias + param_2->TileCountBias;
  bVar21 = 0;
  dVar22 = (double)CONCAT44(uStack_44 & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            local_48 & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  iVar10 = 0xc;
  if (this->bAdaptive != false) {
    iVar10 = 0x14;
  }
  if (dVar22 <= __real_3f1a36e2e0000000) {
    dVar22 = __real_3f1a36e2e0000000;
  }
  uVar9 = uStack_40 & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar24 = uStack_3c & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  if (iVar18 < iVar10) {
    iVar10 = iVar18;
  }
  if ((double)CONCAT44(uVar24,uVar9) <= __real_3f1a36e2e0000000) {
    uVar9 = SUB84(__real_3f1a36e2e0000000,0);
    uVar24 = (uint)((ulonglong)__real_3f1a36e2e0000000 >> 0x20);
  }
  if (0 < iVar10) {
    bVar21 = (byte)iVar10;
  }
  uVar19 = 1 << (bVar21 & 0x1f);
  dVar22 = log(dVar22 / (double)CONCAT44(uVar24,uVar9));
  fVar23 = (float)(dVar22 * __real_3ff71547652b82fe);
  if (fVar23 < 0.0) {
    uVar24 = uVar19 >> ((byte)((int)ROUND(__real_3f000000 - (fVar23 + fVar23)) >> 1) & 0x1f);
    uVar9 = 1;
    if (1 < uVar24) {
      uVar9 = uVar24;
    }
  }
  else {
    uVar24 = uVar19 >> ((byte)((int)ROUND(fVar23 + fVar23 + __real_3f000000) >> 1) & 0x1f);
    uVar9 = uVar19;
    uVar19 = 1;
    if (1 < uVar24) {
      uVar19 = uVar24;
    }
  }
  param_1->BlockHeightInTiles = uVar19;
  param_1->BlockWidthInTiles = uVar9;
  if (uVar19 < uVar9) {
    uVar19 = uVar9;
  }
  uVar9 = 1;
  if (uVar19 != 0) {
    uVar9 = uVar19;
  }
  uVar1 = (ulonglong)(uVar9 - 1) * 2 + 1;
  lVar2 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
    }
  }
  iVar10 = 5;
  if (this->RemoveLowMips < 5) {
    iVar10 = this->RemoveLowMips;
  }
  iVar18 = 0;
  if (0 < iVar10) {
    iVar18 = iVar10;
  }
  iVar18 = (int)lVar2 - iVar18;
  uVar17 = '\0';
  if (0 < iVar18) {
    uVar17 = (uchar)iVar18;
  }
  param_1->MaxLevel = uVar17;
  param_1->bContinuousUpdate = this->bContinuousUpdate;
  param_1->bRequiresSinglePhysicalPool = true;
  iVar10 = GetLayerCount(this);
  param_1->NumTextureLayers = (uchar)iVar10;
  if (this->bSinglePhysicalSpace == false) {
    iVar10 = GetLayerCount(this);
    uVar6 = (uchar)iVar10;
  }
  param_1->NumPhysicalGroups = uVar6;
  if (param_1->NumTextureLayers != '\0') {
    do {
      EVar5 = GetLayerFormat(this,iVar20);
      param_1->LayerFormat[iVar20].Value = EVar5;
      uVar6 = (uchar)iVar20;
      if (this->bSinglePhysicalSpace != false) {
        uVar6 = '\0';
      }
      param_1->PhysicalGroupIndex[iVar20] = uVar6;
      switch(this->MaterialType) {
      case BaseColor:
      case BaseColor_Normal_Specular:
        bVar7 = iVar20 == 0;
        break;
      default:
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("false",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\VT\\RuntimeVirtualTexture.cpp"
                           ,0x20b,L"");
        if (bVar7) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      case Mask4:
      case BaseColor_Normal_Roughness:
      case BaseColor_Normal_Specular_YCoCg:
      case BaseColor_Normal_Specular_Mask_YCoCg:
      case WorldHeight:
      case Displacement:
        bVar7 = false;
      }
      param_1->bIsLayerSRGB[iVar20] = bVar7;
      iVar20 = iVar20 + 1;
    } while (iVar20 < (int)(uint)param_1->NumTextureLayers);
  }
  if (this->bUseCustomPriority == false) {
    switch(this->MaterialType) {
    case BaseColor:
    case BaseColor_Normal_Roughness:
    case BaseColor_Normal_Specular:
    case BaseColor_Normal_Specular_YCoCg:
    case BaseColor_Normal_Specular_Mask_YCoCg:
      EVar8 = High;
      break;
    case Mask4:
      EVar8 = BelowNormal;
      break;
    case WorldHeight:
      EVar8 = Low;
      break;
    case Displacement:
      EVar8 = Lower;
      break;
    default:
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("!\"Enclosing block should never be called\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\VT\\RuntimeVirtualTexture.cpp"
                         ,0x25c,L"");
      if (bVar7) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      EVar8 = Normal;
    }
  }
  else {
    EVar8 = this->CustomPriority;
  }
  param_1->Priority = EVar8;
  return;
}

// GetProducerHandle @ 1489ec990

FVirtualTextureProducerHandle __thiscall
URuntimeVirtualTexture::GetProducerHandle(URuntimeVirtualTexture *this)

{
  FVirtualTextureProducerHandle *in_RDX;
  
  if (this->Resource != (FRuntimeVirtualTextureRenderResource *)0x0) {
    *in_RDX = this->Resource->ProducerHandle;
    return (FVirtualTextureProducerHandle)(uint)in_RDX;
  }
  in_RDX->PackedValue = 0;
  return (FVirtualTextureProducerHandle)(uint)in_RDX;
}

// GetUniformParameter @ 1489ef520

TVector4<double> * __thiscall
URuntimeVirtualTexture::GetUniformParameter
          (URuntimeVirtualTexture *this,TVector4<double> *__return_storage_ptr__,int param_1)

{
  code *pcVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  bool bVar5;
  TVector4<double> *pTVar6;
  
  if (param_1 == 0) {
    dVar2 = this->WorldToUVTransformParameters[0].field0_0x0._s_0.Y;
    dVar3 = this->WorldToUVTransformParameters[0].field0_0x0._s_0.Z;
    dVar4 = this->WorldToUVTransformParameters[0].field0_0x0._s_0.W;
    (__return_storage_ptr__->field0_0x0)._s_0.X =
         this->WorldToUVTransformParameters[0].field0_0x0._s_0.X;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar3;
    (__return_storage_ptr__->field0_0x0)._s_0.W = dVar4;
    return __return_storage_ptr__;
  }
  if (param_1 == 1) {
    dVar2 = this->WorldToUVTransformParameters[1].field0_0x0._s_0.Y;
    dVar3 = this->WorldToUVTransformParameters[1].field0_0x0._s_0.Z;
    dVar4 = this->WorldToUVTransformParameters[1].field0_0x0._s_0.W;
    (__return_storage_ptr__->field0_0x0)._s_0.X =
         this->WorldToUVTransformParameters[1].field0_0x0._s_0.X;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar3;
    (__return_storage_ptr__->field0_0x0)._s_0.W = dVar4;
    return __return_storage_ptr__;
  }
  if (param_1 == 2) {
    dVar2 = this->WorldToUVTransformParameters[2].field0_0x0._s_0.Y;
    dVar3 = this->WorldToUVTransformParameters[2].field0_0x0._s_0.Z;
    dVar4 = this->WorldToUVTransformParameters[2].field0_0x0._s_0.W;
    (__return_storage_ptr__->field0_0x0)._s_0.X =
         this->WorldToUVTransformParameters[2].field0_0x0._s_0.X;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar3;
    (__return_storage_ptr__->field0_0x0)._s_0.W = dVar4;
    return __return_storage_ptr__;
  }
  if (param_1 != 3) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\VT\\RuntimeVirtualTexture.cpp"
                       ,0x232,L"");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      pTVar6 = (TVector4<double> *)(*pcVar1)();
      return pTVar6;
    }
    (__return_storage_ptr__->field0_0x0)._s_0.X = 0.0;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = 0.0;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = 0.0;
    (__return_storage_ptr__->field0_0x0)._s_0.W = 0.0;
    return __return_storage_ptr__;
  }
  dVar2 = (this->WorldHeightUnpackParameter).field0_0x0._s_0.Y;
  dVar3 = (this->WorldHeightUnpackParameter).field0_0x0._s_0.Z;
  dVar4 = (this->WorldHeightUnpackParameter).field0_0x0._s_0.W;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (this->WorldHeightUnpackParameter).field0_0x0._s_0.X
  ;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar3;
  (__return_storage_ptr__->field0_0x0)._s_0.W = dVar4;
  return __return_storage_ptr__;
}

// GetUniformParameterType @ 1489ef610

EValueType __cdecl URuntimeVirtualTexture::GetUniformParameterType(int param_1)

{
  code *pcVar1;
  bool bVar2;
  EValueType EVar3;
  
  if (param_1 == 0) {
    return Double3;
  }
  if ((param_1 == 1) || (param_1 == 2)) {
    return Float3;
  }
  if (param_1 == 3) {
    return Float2;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\VT\\RuntimeVirtualTexture.cpp"
                     ,0x242,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    EVar3 = (*pcVar1)();
    return EVar3;
  }
  return Float4;
}

// InitNullResource @ 1489f3250

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall URuntimeVirtualTexture::InitNullResource(URuntimeVirtualTexture *this)

{
  IVirtualTexture *pIVar1;
  wchar_t *pwVar2;
  undefined1 auStack_118 [32];
  FResourceInitDesc local_f8 [5];
  FVTProducerDescription local_e8;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_118;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__)
  {
    _Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                         _thread_safe_static_guard_0__);
    if (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__
        == -1) {
      pwVar2 = FCommandLine::Get();
      `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline =
           FParse::Param(pwVar2,L"nullrhi");
      _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                           _thread_safe_static_guard_0__);
    }
  }
  if ((((PRIVATE_GIsRunningCommandlet == false) || (PRIVATE_GAllowCommandletRendering != false)) &&
      (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline ==
       false)) && ((*(uint *)&this->field_0x8 & 0x10) == 0)) {
    pIVar1 = ::operator_new(8);
    if (pIVar1 == (IVirtualTexture *)0x0) {
      pIVar1 = (IVirtualTexture *)0x0;
    }
    else {
      *pIVar1 = (IVirtualTexture)&FNullVirtualTextureProducer::_vftable_;
    }
    FVTProducerDescription::FVTProducerDescription(&local_e8);
    local_e8.HeightInBlocks = 1;
    local_e8.Dimensions = '\x02';
    local_e8.MaxLevel = '\x01';
    local_e8.BlockWidthInTiles = 1;
    local_e8.BlockHeightInTiles = 1;
    local_e8.DepthInTiles = 1;
    local_e8.WidthInBlocks = 1;
    local_e8.TileSize = 4;
    local_e8.TileBorderSize = 0;
    local_e8.NumTextureLayers = '\0';
    local_e8.NumPhysicalGroups = '\0';
    local_f8[0].bSinglePhysicalSpace = false;
    local_f8[0].bPrivateSpace = false;
    local_f8[0].bAdaptive = false;
    FRuntimeVirtualTextureRenderResource::Init(this->Resource,pIVar1,&local_e8,local_f8);
  }
  return;
}

// InitResource @ 1489f41a0

void __thiscall
URuntimeVirtualTexture::InitResource
          (URuntimeVirtualTexture *this,IVirtualTexture *param_1,FVTProducerDescription *param_2)

{
  FResourceInitDesc local_res8 [10];
  
  local_res8[0].bSinglePhysicalSpace = this->bSinglePhysicalSpace;
  local_res8[0].bPrivateSpace = this->bPrivateSpace;
  local_res8[0].bAdaptive = this->bAdaptive;
  FRuntimeVirtualTextureRenderResource::Init(this->Resource,param_1,param_2,local_res8);
  return;
}

// Initialize @ 1489f63a0

void __thiscall
URuntimeVirtualTexture::Initialize
          (URuntimeVirtualTexture *this,IVirtualTexture *param_1,FVTProducerDescription *param_2,
          TTransform<double> *param_3,TBox<double> *param_4)

{
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> local_28;
  
  local_28._16_8_ = 0;
  local_28._0_8_ = 0;
  local_28._8_8_ = 0;
  Initialize(this,param_1,param_2,param_3,param_4,&local_28);
  return;
}

// Initialize @ 1489f63e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
URuntimeVirtualTexture::Initialize
          (URuntimeVirtualTexture *this,IVirtualTexture *param_1,FVTProducerDescription *param_2,
          TTransform<double> *param_3,TBox<double> *param_4,
          TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *param_5)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  double dVar5;
  double dVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  double dVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  double dVar20;
  double dVar21;
  undefined4 uVar22;
  double dVar23;
  double dVar28;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  double dVar29;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  FReadAccessScope local_88 [5];
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnReInitDelegate,
             local_88);
  if ((*(int *)&(this->OnReInitDelegate).field_0x10 != 0) &&
     (plVar1 = *(longlong **)&(this->OnReInitDelegate).field_0x8, plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x68))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (local_88);
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&this->OnReInitDelegate,param_5);
  uVar22 = *(undefined4 *)((longlong)(param_3->Translation).XY.m128d_f64 + 4);
  uVar2 = *(undefined4 *)((param_3->Translation).XY.m128d_f64 + 1);
  uVar3 = *(undefined4 *)((longlong)(param_3->Translation).XY.m128d_f64 + 0xc);
  dVar9 = (param_3->Translation).ZW.m128d_f64[0];
  *(undefined4 *)&this->WorldToUVTransformParameters[0].field0_0x0 =
       *(undefined4 *)(param_3->Translation).XY.m128d_f64;
  *(undefined4 *)((longlong)&this->WorldToUVTransformParameters[0].field0_0x0 + 4) = uVar22;
  *(undefined4 *)((longlong)&this->WorldToUVTransformParameters[0].field0_0x0 + 8) = uVar2;
  *(undefined4 *)((longlong)&this->WorldToUVTransformParameters[0].field0_0x0 + 0xc) = uVar3;
  this->WorldToUVTransformParameters[0].field0_0x0._s_0.Z = dVar9;
  this->WorldToUVTransformParameters[0].field0_0x0._s_0.W = 1.0;
  auVar12 = ___xmm_3ff00000000000000000000000000000;
  dVar5 = __real_3ff0000000000000;
  auVar8 = *(undefined1 (*) [16])(param_3->Rotation).ZW.m128d_f64;
  auVar7 = *(undefined1 (*) [16])(param_3->Rotation).XY.m128d_f64;
  dVar6 = (param_3->Rotation).ZW.m128d_f64[1];
  auVar10 = blendpd(auVar7,auVar8,2);
  dVar28 = __xmm_00000000000000003ff0000000000000._8_8_;
  dVar9 = auVar8._0_8_;
  auVar24._0_8_ =
       dVar28 * auVar7._0_8_ - auVar7._8_8_ * (double)__xmm_00000000000000003ff0000000000000;
  auVar24._8_8_ = auVar7._8_8_ * 0.0 - dVar9 * dVar28;
  auVar7 = blendpd(___xmm_00000000000000003ff0000000000000,ZEXT816(0),2);
  auVar11._0_8_ = auVar7._0_8_ * dVar9 - auVar10._0_8_ * 0.0;
  auVar11._8_8_ = auVar7._8_8_ * auVar8._8_8_ - auVar10._8_8_ * 0.0;
  auVar7 = *(undefined1 (*) [16])(param_3->Rotation).XY.m128d_f64;
  auVar10 = blendpd(auVar24,auVar11,2);
  dVar20 = auVar24._8_8_ + auVar24._8_8_;
  dVar21 = auVar11._0_8_ + auVar11._0_8_;
  auVar25._0_8_ = auVar10._0_8_ + auVar10._0_8_;
  auVar25._8_8_ = auVar10._8_8_ + auVar10._8_8_;
  auVar16._8_4_ = SUB84(dVar21,0);
  auVar16._0_8_ = dVar20;
  uVar22 = (undefined4)((ulonglong)dVar21 >> 0x20);
  auVar16._12_4_ = uVar22;
  auVar10._8_4_ = SUB84(dVar21,0);
  auVar10._0_8_ = dVar20;
  auVar10._12_4_ = uVar22;
  auVar11 = blendpd(auVar7,auVar8,2);
  auVar10 = blendpd(auVar10,auVar25,2);
  auVar17._0_8_ = auVar16._8_8_ * auVar7._0_8_ - auVar7._8_8_ * dVar20;
  auVar17._8_8_ = auVar25._0_8_ * auVar7._8_8_ - dVar9 * dVar21;
  auVar13._0_8_ = auVar10._0_8_ * dVar9 - auVar11._0_8_ * auVar25._0_8_;
  auVar13._8_8_ = auVar10._8_8_ * auVar8._8_8_ - auVar11._8_8_ * auVar25._8_8_;
  auVar8._8_4_ = SUB84(auVar17._8_8_,0);
  auVar8._0_8_ = auVar17._0_8_;
  auVar8._12_4_ = (int)((ulonglong)auVar17._8_8_ >> 0x20);
  dVar9 = __real_3ff0000000000000 / (param_3->Scale3D).XY.m128d_f64[0];
  auVar7 = blendpd(auVar17,auVar13,2);
  dVar23 = (double)__xmm_3ff00000000000000000000000000000;
  dVar29 = __xmm_3ff00000000000000000000000000000._8_8_;
  this->WorldToUVTransformParameters[1].field0_0x0._s_0.X =
       dVar9 * (dVar20 * dVar6 + (double)__xmm_00000000000000003ff0000000000000 + auVar8._8_8_);
  this->WorldToUVTransformParameters[1].field0_0x0._s_0.Y =
       dVar9 * (dVar21 * dVar6 + dVar28 + auVar13._0_8_);
  this->WorldToUVTransformParameters[1].field0_0x0._s_0.Z =
       dVar9 * (auVar25._0_8_ * dVar6 + auVar7._0_8_);
  this->WorldToUVTransformParameters[1].field0_0x0._s_0.W = dVar5;
  auVar8 = *(undefined1 (*) [16])(param_3->Rotation).XY.m128d_f64;
  dVar6 = (param_3->Rotation).ZW.m128d_f64[1];
  auVar7 = *(undefined1 (*) [16])(param_3->Rotation).ZW.m128d_f64;
  lVar4 = CONCAT53(param_4._3_5_,CONCAT12(param_4._2_1_,CONCAT11(param_4._1_1_,param_4._0_1_)));
  dVar9 = auVar7._0_8_;
  auVar11 = blendpd(auVar8,auVar7,2);
  auVar26._0_8_ = dVar29 * auVar8._0_8_ - auVar8._8_8_ * dVar23;
  auVar26._8_8_ = auVar8._8_8_ * 0.0 - dVar9 * dVar29;
  auVar8 = blendpd(auVar12,ZEXT816(0),2);
  auVar12._0_8_ = auVar8._0_8_ * dVar9 - auVar11._0_8_ * 0.0;
  auVar12._8_8_ = auVar8._8_8_ * auVar7._8_8_ - auVar11._8_8_ * 0.0;
  auVar8 = *(undefined1 (*) [16])(param_3->Rotation).XY.m128d_f64;
  auVar11 = blendpd(auVar26,auVar12,2);
  dVar20 = auVar26._8_8_ + auVar26._8_8_;
  dVar21 = auVar12._0_8_ + auVar12._0_8_;
  auVar27._0_8_ = auVar11._0_8_ + auVar11._0_8_;
  auVar27._8_8_ = auVar11._8_8_ + auVar11._8_8_;
  auVar18._8_4_ = SUB84(dVar21,0);
  auVar18._0_8_ = dVar20;
  uVar22 = (undefined4)((ulonglong)dVar21 >> 0x20);
  auVar18._12_4_ = uVar22;
  auVar14._8_4_ = SUB84(dVar21,0);
  auVar14._0_8_ = dVar20;
  auVar14._12_4_ = uVar22;
  auVar12 = blendpd(auVar8,auVar7,2);
  auVar19._0_8_ = auVar18._8_8_ * auVar8._0_8_ - auVar8._8_8_ * dVar20;
  auVar19._8_8_ = auVar27._0_8_ * auVar8._8_8_ - dVar9 * dVar21;
  auVar8 = blendpd(auVar14,auVar27,2);
  auVar15._0_8_ = auVar8._0_8_ * dVar9 - auVar12._0_8_ * auVar27._0_8_;
  auVar15._8_8_ = auVar8._8_8_ * auVar7._8_8_ - auVar12._8_8_ * auVar27._8_8_;
  auVar7._8_4_ = SUB84(auVar19._8_8_,0);
  auVar7._0_8_ = auVar19._0_8_;
  auVar7._12_4_ = (int)((ulonglong)auVar19._8_8_ >> 0x20);
  dVar9 = dVar5 / (param_3->Scale3D).XY.m128d_f64[1];
  auVar8 = blendpd(auVar19,auVar15,2);
  this->WorldToUVTransformParameters[2].field0_0x0._s_0.X =
       dVar9 * (dVar20 * dVar6 + dVar23 + auVar7._8_8_);
  this->WorldToUVTransformParameters[2].field0_0x0._s_0.Y =
       dVar9 * (dVar21 * dVar6 + dVar29 + auVar15._0_8_);
  this->WorldToUVTransformParameters[2].field0_0x0._s_0.Z =
       dVar9 * (auVar27._0_8_ * dVar6 + auVar8._0_8_);
  this->WorldToUVTransformParameters[2].field0_0x0._s_0.W = dVar5;
  dVar9 = *(double *)(lVar4 + 0x10);
  dVar6 = *(double *)(lVar4 + 0x28) - dVar9;
  if (dVar6 <= dVar5) {
    dVar6 = dVar5;
  }
  (this->WorldHeightUnpackParameter).field0_0x0._s_0.X = dVar6;
  (this->WorldHeightUnpackParameter).field0_0x0._s_0.Y = dVar9;
  (this->WorldHeightUnpackParameter).field0_0x0._s_0.Z = 0.0;
  (this->WorldHeightUnpackParameter).field0_0x0._s_0.W = 0.0;
  param_4._0_1_ = this->bSinglePhysicalSpace;
  param_4._1_1_ = this->bPrivateSpace;
  param_4._2_1_ = this->bAdaptive;
  FRuntimeVirtualTextureRenderResource::Init
            (this->Resource,param_1,param_2,(FResourceInitDesc *)&param_4);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_5);
  return;
}

// IsLayerSRGB @ 1489f8c90

bool __thiscall URuntimeVirtualTexture::IsLayerSRGB(URuntimeVirtualTexture *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  switch(this->MaterialType) {
  case BaseColor:
  case BaseColor_Normal_Specular:
    return param_1 == 0;
  case Mask4:
  case BaseColor_Normal_Roughness:
  case BaseColor_Normal_Specular_YCoCg:
  case BaseColor_Normal_Specular_Mask_YCoCg:
  case WorldHeight:
  case Displacement:
    goto switchD_1489f8caf_caseD_1;
  default:
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\VT\\RuntimeVirtualTexture.cpp"
                       ,0x20b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
switchD_1489f8caf_caseD_1:
    return false;
  }
}

// IsLayerYCoCg @ 1489f8d10

bool __thiscall URuntimeVirtualTexture::IsLayerYCoCg(URuntimeVirtualTexture *this,int param_1)

{
  if ((this->MaterialType != BaseColor_Normal_Specular_YCoCg) &&
     (this->MaterialType != BaseColor_Normal_Specular_Mask_YCoCg)) {
    return false;
  }
  return param_1 == 0;
}

// PostLoad @ 148a01500

void __thiscall URuntimeVirtualTexture::PostLoad(URuntimeVirtualTexture *this)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  
  if (-1 < this->Size_DEPRECATED) {
    iVar1 = this->Size_DEPRECATED + 10;
    this->Size_DEPRECATED = -1;
    iVar6 = 0x12;
    if (iVar1 < 0x12) {
      iVar6 = iVar1;
    }
    iVar2 = this->TileSize + 6;
    iVar1 = 10;
    if (iVar2 < 10) {
      iVar1 = iVar2;
    }
    iVar2 = 6;
    if (6 < iVar1) {
      iVar2 = iVar1;
    }
    bVar4 = 10;
    if (10 < iVar6) {
      bVar4 = (byte)iVar6;
    }
    uVar3 = (1 << (bVar4 & 0x1f)) / (1 << ((byte)iVar2 & 0x1f));
    uVar5 = 1;
    if (1 < (int)uVar3) {
      uVar5 = uVar3;
    }
    iVar6 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    iVar1 = 0;
    if (uVar5 != 0) {
      iVar1 = iVar6;
    }
    this->TileCount = iVar1;
  }
  (this->StreamingTexture_DEPRECATED).field0_0x0.DebugPtr =
       (URuntimeVirtualTextureStreamingProxy *)0x0;
  UObject::PostLoad((UObject *)this);
  return;
}

// Release @ 148a07a60

void __thiscall URuntimeVirtualTexture::Release(URuntimeVirtualTexture *this)

{
  undefined1 local_38 [8];
  ForAnyElementType local_30;
  ulonglong local_28;
  FDestructionSentinel local_20;
  
  local_28 = 0;
  local_38 = (undefined1  [8])0x0;
  local_30.Data = (FScriptContainerElement *)0x0;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnReInitDelegate,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_38);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_38,
             (FWriteAccessScope *)&local_20);
  if (((int)local_28 != 0) && (local_30.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)local_30.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_30,0,0,0x10);
    local_28 = local_28 & 0xffffffff00000000;
  }
  if (local_20.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_20.Accessor,&local_20);
  }
  if (local_30.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_38);
  InitNullResource(this);
  return;
}

// StaticRegisterNativesURuntimeVirtualTexture @ 148a18790

void __cdecl URuntimeVirtualTexture::StaticRegisterNativesURuntimeVirtualTexture(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 5;
  local_18.DataPtr = Z_Construct_UClass_URuntimeVirtualTexture_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetPageTableSize @ 148a22850

void __cdecl
URuntimeVirtualTexture::execGetPageTableSize(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  int iVar2;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar2 = 0xc;
  if (param_1[1].field_0x14 != '\0') {
    iVar2 = 0x14;
  }
  if (*(int *)(param_1 + 1) < iVar2) {
    iVar2 = *(int *)(param_1 + 1);
  }
  iVar1 = 0;
  if (0 < iVar2) {
    iVar1 = iVar2;
  }
  if (param_1[1].field_0x14 != '\0') {
    iVar1 = ::`anonymous_namespace'::GetPageTableTileCountLog2(iVar1);
  }
  *(int *)param_3 = 1 << ((byte)iVar1 & 0x1f);
  return;
}

// execGetSize @ 148a228c0

void __cdecl URuntimeVirtualTexture::execGetSize(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar4 = 0;
  iVar3 = 0xc;
  if (param_1[1].field_0x14 != '\0') {
    iVar3 = 0x14;
  }
  if (*(int *)(param_1 + 1) < iVar3) {
    iVar3 = *(int *)(param_1 + 1);
  }
  iVar1 = *(int *)&param_1[1].field_0x4 + 6;
  iVar2 = 10;
  if (iVar1 < 10) {
    iVar2 = iVar1;
  }
  iVar1 = 6;
  if (6 < iVar2) {
    iVar1 = iVar2;
  }
  if (0 < iVar3) {
    bVar4 = (byte)iVar3;
  }
  *(int *)param_3 = (1 << ((byte)iVar1 & 0x1f)) << (bVar4 & 0x1f);
  return;
}

// execGetTileBorderSize @ 148a22930

void __cdecl
URuntimeVirtualTexture::execGetTileBorderSize(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  int iVar2;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar1 = 4;
  if (*(int *)&param_1[1].field_0x8 < 4) {
    iVar1 = *(int *)&param_1[1].field_0x8;
  }
  iVar2 = 0;
  if (0 < iVar1) {
    iVar2 = iVar1;
  }
  *(int *)param_3 = iVar2 * 2;
  return;
}

// execGetTileCount @ 148a22970

void __cdecl
URuntimeVirtualTexture::execGetTileCount(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  byte bVar2;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = 0;
  iVar1 = 0xc;
  if (param_1[1].field_0x14 != '\0') {
    iVar1 = 0x14;
  }
  if (*(int *)(param_1 + 1) < iVar1) {
    iVar1 = *(int *)(param_1 + 1);
  }
  if (0 < iVar1) {
    bVar2 = (byte)iVar1;
  }
  *(int *)param_3 = 1 << (bVar2 & 0x1f);
  return;
}

// execGetTileSize @ 148a229c0

void __cdecl URuntimeVirtualTexture::execGetTileSize(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  int iVar2;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar1 = *(int *)&param_1[1].field_0x4 + 6;
  iVar2 = 10;
  if (iVar1 < 10) {
    iVar2 = iVar1;
  }
  iVar1 = 6;
  if (6 < iVar2) {
    iVar1 = iVar2;
  }
  *(int *)param_3 = 1 << ((byte)iVar1 & 0x1f);
  return;
}

