// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 2

// operator() @ 1453687d0

void __thiscall
`FReflectionCubemapTexture::InitRHI'::__l12::<lambda_2>::operator()
          (void *this,FRDGAsyncTask param_1,FRHICommandList *param_2)

{
  return;
}

// InitRHI @ 14539ad70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014539b16e) */
/* WARNING: Removing unreachable block (ram,0x00014539b176) */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ERDGBuilderFlags": Some values do not have unique names */

void __thiscall
FReflectionCubemapTexture::InitRHI
          (FReflectionCubemapTexture *this,FRHICommandListImmediate *param_1)

{
  ulonglong uVar1;
  IPooledRenderTarget *pIVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  TRefCountPtr<IPooledRenderTarget> TVar7;
  FRDGScope *this_00;
  FRDGTexture *pFVar8;
  undefined8 *puVar9;
  FRDGEventName *pFVar10;
  char cVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  undefined1 auStackY_978 [32];
  <lambda_2> local_928 [4];
  int local_924;
  undefined8 *local_920;
  uint local_918;
  uint uStack_914;
  longlong *local_910;
  FRenderTargetBinding local_908;
  int local_8f0;
  TRDGEventScopeGuard<FRDGScope_RHI> local_8e8;
  char local_8d8;
  FRDGEventName local_8d0;
  tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<23>_const_*,std::tuple<>_> local_8b8;
  uint uStack_89c;
  undefined4 local_898;
  undefined4 uStack_894;
  FRDGEventName local_888;
  wchar_t local_868 [14];
  int local_84c;
  undefined4 local_848;
  undefined8 local_844;
  undefined4 local_83c;
  undefined1 local_838;
  undefined4 local_837;
  undefined1 local_833;
  void *local_828;
  undefined4 local_820;
  undefined4 local_81c;
  undefined1 local_818 [22];
  ERDGScopeMode local_802;
  FRDGAllocator local_800 [3];
  FRHIComputeCommandList *local_758;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_978;
  uVar12 = this->CubemapSize;
  iVar14 = 0;
  uVar6 = 1;
  if (uVar12 != 0) {
    uVar6 = uVar12;
  }
  uVar1 = (ulonglong)(uVar6 - 1) * 2 + 1;
  lVar3 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar3 == 0; lVar3 = lVar3 + -1) {
    }
  }
  local_8f0 = (int)lVar3;
  iVar13 = local_8f0 + 1;
  local_924 = iVar13;
  if ((0x7fffffff < uVar12) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Size <= (uint32)TNumericLimits<int32>::Max()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphDefinitions.h"
                         ,0x2ad,L"Size parameter exceeds valid range"), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_84c = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
  local_844 = CONCAT44(uVar12,uVar12);
  local_868[0] = L'\x01';
  local_868[1] = L'ā';
  local_868[2] = L'\0';
  local_868[3] = L'\0';
  local_868[4] = L'\x01';
  local_868[5] = L'\0';
  local_868[6] = L'\0';
  local_868[7] = L'\0';
  local_868[8] = L'䀀';
  local_868[9] = L'䘜';
  local_868[10] = L'\0';
  local_868[0xb] = L'\0';
  local_868[0xc] = L'\0';
  local_868[0xd] = L'\0';
  local_848 = 0;
  local_83c = 0x10001;
  local_838 = (undefined1)iVar13;
  local_837 = 0xa0301;
  local_833 = 0xff;
  local_828 = (void *)0x0;
  local_820 = 0;
  local_81c = 1;
  local_918 = uVar12;
  uStack_914 = uVar12;
  TVar7 = AllocatePooledTexture((FRDGTextureDesc *)&local_910,local_868);
  if ((IPooledRenderTarget *)this != TVar7.Reference) {
    pIVar2 = (this->RenderTarget).Reference;
    (this->RenderTarget).Reference = (IPooledRenderTarget *)(TVar7.Reference)->_padding_;
    (TVar7.Reference)->_padding_ = 0;
    if (pIVar2 != (IPooledRenderTarget *)0x0) {
      (**(code **)(pIVar2->_padding_ + 0x38))();
    }
  }
  if (local_910 != (longlong *)0x0) {
    (**(code **)(*local_910 + 0x38))();
  }
  local_8d0.FormattedEventName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_8d0.EventFormat = L"";
  local_8d0.FormattedEventName.Data.ArrayNum = 0;
  local_8d0.FormattedEventName.Data.ArrayMax = 0;
  FRDGBuilder::FRDGBuilder((FRDGBuilder *)local_818,param_1,&local_8d0,None,GMaxRHIShaderPlatform);
  cVar11 = '\0';
  local_8d8 = '\0';
  if ((local_802 != Disabled) && ((local_802 != TopLevelOnly || ((local_818[0x10] & 4) == 0)))) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) <
         `public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_void___cdecl_FReflectionCubemapTexture::InitRHI(FRHICommandListImmediate&___ptr64)___ptr64'::`8'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
         ::__l2::_thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_void___cdecl_FReflectionCubemapTexture::InitRHI(FRHICommandListImmediate&___ptr64)___ptr64'::`8'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
                             ::__l2::_thread_safe_static_guard_0__),
       `public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_void___cdecl_FReflectionCubemapTexture::InitRHI(FRHICommandListImmediate&___ptr64)___ptr64'::`8'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
       ::__l2::_thread_safe_static_guard_0__ == -1)) {
      local_898 = 0;
      uStack_894 = 0;
      `public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_void___cdecl_FReflectionCubemapTexture::InitRHI(FRHICommandListImmediate&___ptr64)___ptr64'::`8'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
      ::__l2::Desc._12_8_ = ZEXT48(uStack_89c);
      `public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_void___cdecl_FReflectionCubemapTexture::InitRHI(FRHICommandListImmediate&___ptr64)___ptr64'::`8'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
      ::__l2::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
      `public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_void___cdecl_FReflectionCubemapTexture::InitRHI(FRHICommandListImmediate&___ptr64)___ptr64'::`8'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
      ::__l2::Desc._padding_._4_4_ = 0;
      `public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_void___cdecl_FReflectionCubemapTexture::InitRHI(FRHICommandListImmediate&___ptr64)___ptr64'::`8'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
      ::__l2::Desc._padding_ = (longlong)u_ClearReflection;
      `public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_void___cdecl_FReflectionCubemapTexture::InitRHI(FRHICommandListImmediate&___ptr64)___ptr64'::`8'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
      ::__l2::Desc._padding_ = (longlong)u_ClearReflection;
      `public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_void___cdecl_FReflectionCubemapTexture::InitRHI(FRHICommandListImmediate&___ptr64)___ptr64'::`8'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
      ::__l2::Desc._padding_._0_4_ = 0x11a;
      InitializeCriticalSectionAndSpinCount
                ((LPCRITICAL_SECTION)
                 &`public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_void___cdecl_FReflectionCubemapTexture::InitRHI(FRHICommandListImmediate&___ptr64)___ptr64'::`8'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
                  ::__l2::Desc.Cs,4000);
      `public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_void___cdecl_FReflectionCubemapTexture::InitRHI(FRHICommandListImmediate&___ptr64)___ptr64'::`8'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
      ::__l2::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
      `public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_void___cdecl_FReflectionCubemapTexture::InitRHI(FRHICommandListImmediate&___ptr64)___ptr64'::`8'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
      ::__l2::Desc.TraceGpuSpecId = 0;
      `public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_void___cdecl_FReflectionCubemapTexture::InitRHI(FRHICommandListImmediate&___ptr64)___ptr64'::`8'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
      ::__l2::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
      atexit(```FReflectionCubemapTexture::InitRHI'::__l8::Desc::operator()<>'::__l3::<lambda_1>::
             operator()<>'::__l2::_dynamic_atexit_destructor_for__Desc__);
      _Init_thread_footer(&`public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_void___cdecl_FReflectionCubemapTexture::InitRHI(FRHICommandListImmediate&___ptr64)___ptr64'::`8'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
    local_8b8._Myfirst._Val =
         &`public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_void___cdecl_FReflectionCubemapTexture::InitRHI(FRHICommandListImmediate&___ptr64)___ptr64'::`8'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
          ::__l2::Desc;
    local_8e8.State = (FRDGScopeState *)local_818;
    this_00 = FRDGAllocator::Alloc<FRDGScope,FRDGScope_*_&>(local_800,(FRDGScope **)local_818);
    local_8e8.Scope = this_00;
    local_818._0_8_ = this_00;
    TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::
    Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<23>_const_*,std::tuple<>_>_>
              (&(this_00->Impl).Impl,(FRDGScopeState *)local_818,&local_8b8);
    if (local_818[0x14] != false) {
      FRDGScope::BeginCPU(this_00,local_758,false);
      FRDGScope::BeginGPU(this_00,local_758);
    }
    cVar11 = '\x01';
    local_8d8 = '\x01';
  }
  pFVar8 = FRDGBuilder::RegisterExternalTexture((FRDGBuilder *)local_818,&this->RenderTarget,None);
  if (0 < iVar13) {
    do {
      uVar12 = 0;
      do {
        puVar9 = FMemStackBase::Alloc(&local_800[0].MemStack,0x110,0x10);
        if (puVar9 == (undefined8 *)0x0) {
          puVar9 = (undefined8 *)0x0;
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Object",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                             ,0x61,L"");
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        else {
          *puVar9 = &___7__TObject_VFRenderTargetParameters___FRDGAllocator__6B_;
          FRenderTargetBindingSlots::FRenderTargetBindingSlots
                    ((FRenderTargetBindingSlots *)(puVar9 + 2));
        }
        local_920 = puVar9;
        if (((local_800[0].Objects.AllocatorInstance.Data <= (FScriptContainerElement *)&local_920)
            && ((FScriptContainerElement *)&local_920 <
                local_800[0].Objects.AllocatorInstance.Data +
                (longlong)local_800[0].Objects.ArrayMax * 8)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if (local_800[0].Objects.ArrayNum == local_800[0].Objects.ArrayMax) {
          local_800[0].Objects.ArrayNum =
               UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&local_800[0].Objects.AllocatorInstance,
                          &local_800[0].Objects.ArrayMax);
        }
        *(undefined8 **)
         (local_800[0].Objects.AllocatorInstance.Data + (longlong)local_800[0].Objects.ArrayNum * 8)
             = local_920;
        local_908.ResolveTexture = (FRDGTexture *)0x0;
        local_908.LoadAction = EClear;
        local_908.MipIndex = (uchar)iVar14;
        local_908.ArraySlice = (short)uVar12;
        local_908.Texture = pFVar8;
        local_800[0].Objects.ArrayNum = local_800[0].Objects.ArrayNum + 1;
        bVar5 = FRenderTargetBinding::Validate(&local_908);
        if ((!bVar5) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Validate()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMacros.h"
                               ,0x216,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        puVar9[2] = local_908.Texture;
        puVar9[3] = local_908.ResolveTexture;
        puVar9[4] = CONCAT44(local_908._20_4_,
                             CONCAT22(local_908.ArraySlice,
                                      CONCAT11(local_908.MipIndex,local_908.LoadAction)));
        pFVar10 = FRDGEventName::FRDGEventName(&local_888,L"Clear (Mip: %d, Face : %d)");
        FRDGBuilder::
        AddPass<FRenderTargetParameters,_FReflectionCubemapTexture::InitRHI_::__l12::<lambda_2>_>
                  ((FRDGBuilder *)local_818,pFVar10,(FRenderTargetParameters *)(puVar9 + 2),Raster,
                   local_928);
        if (local_888.FormattedEventName.Data.AllocatorInstance.Data !=
            (FScriptContainerElement *)0x0) {
          FMemory::Free(local_888.FormattedEventName.Data.AllocatorInstance.Data);
        }
        uVar12 = uVar12 + 1;
      } while (uVar12 < 6);
      iVar14 = iVar14 + 1;
      cVar11 = local_8d8;
    } while (iVar14 < local_924);
  }
  if (cVar11 != '\0') {
    TRDGEventScopeGuard<FRDGScope_RHI>::~TRDGEventScopeGuard<FRDGScope_RHI>(&local_8e8);
  }
  FRDGBuilder::Execute((FRDGBuilder *)local_818);
  FRDGBuilder::~FRDGBuilder((FRDGBuilder *)local_818);
  if (local_828 != (void *)0x0) {
    FMemory::Free(local_828);
  }
  return;
}

