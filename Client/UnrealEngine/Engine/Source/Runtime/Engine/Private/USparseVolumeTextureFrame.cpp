// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 25

// StaticClass @ 148702860

UClass * __cdecl USparseVolumeTextureFrame::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USparseVolumeTextureFrame.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SparseVolumeTextureFrame",
               &Z_Registration_Info_UClass_USparseVolumeTextureFrame.InnerSingleton,
               StaticRegisterNativesUSparseVolumeTextureFrame,0x1d0,0x10,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<USparseVolumeTextureFrame>,
               InternalVTableHelperCtorCaller<USparseVolumeTextureFrame>,local_res8,
               USparseVolumeTexture::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USparseVolumeTextureFrame.InnerSingleton;
}

// USparseVolumeTextureFrame @ 148712ff0

USparseVolumeTextureFrame * __thiscall
USparseVolumeTextureFrame::USparseVolumeTextureFrame
          (USparseVolumeTextureFrame *this,FVTableHelper *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7USparseVolumeTextureFrame__6B_;
  (this->Owner).field0_0x0.DebugPtr = (USparseVolumeTexture *)0x0;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->Transform).Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->Transform).Rotation.XY.m128d_f64[1] = (double)fVar1;
  (this->Transform).Rotation.ZW.m128d_f64[0] = (double)fVar2;
  (this->Transform).Rotation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->Transform).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->Transform).Translation.XY.m128d_f64[1] = (double)fVar1;
  (this->Transform).Translation.ZW.m128d_f64[0] = (double)fVar2;
  (this->Transform).Translation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->Transform).Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->Transform).Scale3D.XY.m128d_f64[1] = (double)fVar1;
  (this->Transform).Scale3D.ZW.m128d_f64[0] = (double)fVar2;
  (this->Transform).Scale3D.ZW.m128d_f64[1] = (double)fVar3;
  UE::SVT::FResources::FResources(&this->Resources);
  return this;
}

// USparseVolumeTextureFrame @ 148713080

USparseVolumeTextureFrame * __thiscall
USparseVolumeTextureFrame::USparseVolumeTextureFrame
          (USparseVolumeTextureFrame *this,FObjectInitializer *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7USparseVolumeTextureFrame__6B_;
  (this->Owner).field0_0x0.DebugPtr = (USparseVolumeTexture *)0x0;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->Transform).Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->Transform).Rotation.XY.m128d_f64[1] = (double)fVar1;
  (this->Transform).Rotation.ZW.m128d_f64[0] = (double)fVar2;
  (this->Transform).Rotation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->Transform).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->Transform).Translation.XY.m128d_f64[1] = (double)fVar1;
  (this->Transform).Translation.ZW.m128d_f64[0] = (double)fVar2;
  (this->Transform).Translation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->Transform).Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->Transform).Scale3D.XY.m128d_f64[1] = (double)fVar1;
  (this->Transform).Scale3D.ZW.m128d_f64[0] = (double)fVar2;
  (this->Transform).Scale3D.ZW.m128d_f64[1] = (double)fVar3;
  UE::SVT::FResources::FResources(&this->Resources);
  return this;
}

// ~USparseVolumeTextureFrame @ 148714c80

void __thiscall
USparseVolumeTextureFrame::~USparseVolumeTextureFrame(USparseVolumeTextureFrame *this)

{
  UE::SVT::FResources::~FResources(&this->Resources);
  UObject::~UObject((UObject *)this);
  return;
}

// BeginDestroy @ 148722760

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall USparseVolumeTextureFrame::BeginDestroy(USparseVolumeTextureFrame *this)

{
  TObjectPtr<USparseVolumeTexture> *this_00;
  USparseVolumeTexture *pUVar1;
  UStreamableSparseVolumeTexture *this_01;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  UClass *pUVar5;
  USparseVolumeTextureFrame *pUVar6;
  FRenderCommandList *this_02;
  FCommandList *this_03;
  FRenderCommandTag *pFVar7;
  FString *pFVar8;
  undefined ***pppuVar9;
  wchar_t *pwVar10;
  wchar_t *pwVar11;
  int iVar12;
  ulonglong uVar13;
  undefined1 auStack_d8 [32];
  FString local_b8;
  FString local_a8;
  FString local_98;
  code *local_88 [2];
  undefined **local_78;
  FTextureRenderResources *pFStack_70;
  undefined8 local_68;
  undefined ***local_60;
  undefined1 local_58 [16];
  undefined **local_48;
  FTextureRenderResources *pFStack_40;
  undefined8 local_38;
  undefined ***local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_d8;
  bVar3 = UObjectBaseUtility::IsTemplate
                    ((UObjectBaseUtility *)this,RF_ArchetypeObject|RF_ClassDefaultObject);
  if (!bVar3) {
    pUVar1 = (this->Owner).field0_0x0.DebugPtr;
    this_00 = &this->Owner;
    if ((pUVar1 != (USparseVolumeTexture *)0x0) && ((*(uint *)&pUVar1->field_0x8 >> 0x1e & 1) == 0))
    {
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c) <
          `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
          _thread_safe_static_guard_0__) {
        _Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                             _thread_safe_static_guard_0__);
        if (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
            _thread_safe_static_guard_0__ == -1) {
          pwVar10 = FCommandLine::Get();
          `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline =
               FParse::Param(pwVar10,L"nullrhi");
          _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                               _thread_safe_static_guard_0__);
        }
      }
      if (((PRIVATE_GIsRunningCommandlet == false) || (PRIVATE_GAllowCommandletRendering != false))
         && (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline
             == false)) {
        if ((this_00->field0_0x0).DebugPtr == (USparseVolumeTexture *)0x0) {
          pFVar8 = GetTypeName<UStreamableSparseVolumeTexture>(&local_98);
          if ((pFVar8->Data).ArrayNum == 0) {
            pwVar10 = L"";
          }
          else {
            pwVar10 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
          }
                    /* WARNING: Subroutine does not return */
          CastLogError(L"nullptr",pwVar10);
        }
        pUVar5 = UStreamableSparseVolumeTexture::StaticClass();
        bVar3 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar5);
        if ((!bVar3) ||
           (this_01 = (UStreamableSparseVolumeTexture *)(this_00->field0_0x0).DebugPtr,
           this_01 == (UStreamableSparseVolumeTexture *)0x0)) {
          pFVar8 = GetTypeName<UStreamableSparseVolumeTexture>(&local_b8);
          pwVar10 = L"";
          if ((pFVar8->Data).ArrayNum == 0) {
            pwVar11 = L"";
          }
          else {
            pwVar11 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
          }
          pFVar8 = GetFullNameForCastLogError<USparseVolumeTexture>
                             (&local_a8,(this_00->field0_0x0).DebugPtr);
          if ((pFVar8->Data).ArrayNum != 0) {
            pwVar10 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
          }
                    /* WARNING: Subroutine does not return */
          CastLogError(pwVar10,pwVar11);
        }
        iVar12 = 0;
        iVar4 = (**(code **)(*(longlong *)this_01 + 0x2c8))(this_01);
        if (0 < iVar4) {
          do {
            pUVar6 = UStreamableSparseVolumeTexture::GetFrame(this_01,iVar12);
            if (pUVar6 == this) {
              (**(code **)(UE::SVT::GStreamingManager._32_8_ + 8))(0x155248580,this_01);
              break;
            }
            iVar12 = iVar12 + 1;
            iVar4 = (**(code **)(*(longlong *)this_01 + 0x2c8))(this_01);
          } while (iVar12 < iVar4);
        }
      }
    }
    if (this->TextureRenderResources != (FTextureRenderResources *)0x0) {
      local_60 = (undefined ***)0x0;
      local_88[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`USparseVolumeTextureFrame::BeginDestroy'::__l16::<lambda_1>,void,FRHICommandListImmediate_&>
                    ::Call;
      local_78 = &UE::Core::Private::Function::
                  TFunction_OwnedObject<`USparseVolumeTextureFrame::BeginDestroy'::`16'::<lambda_1>,1,0>
                  ::_vftable_;
      pFStack_70 = this->TextureRenderResources;
      this_02 = FRenderCommandList::GetInstanceTLS();
      if (this_02 == (FRenderCommandList *)0x0) {
        FRenderThreadCommandPipe::
        Enqueue<TRenderCommandTag<_USparseVolumeTextureFrame::BeginDestroy_::__l16::TSTR_USparseVolumeTextureFrame_DeleteTextureRenderResources1163>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                  ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_88);
      }
      else {
        this_03 = FRenderCommandList::GetRenderThread(this_02);
        local_58._0_8_ = local_88[0];
        local_30 = local_60;
        local_48 = local_78;
        pFStack_40 = pFStack_70;
        local_38 = local_68;
        local_88[0] = (code *)0x0;
        local_28 = 2;
        pFVar7 = (FRenderCommandTag *)
                 TRenderCommandTag<`USparseVolumeTextureFrame::BeginDestroy'::__l16::TSTR_USparseVolumeTextureFrame_DeleteTextureRenderResources1163>
                 ::Get();
        UE::RenderCommandPipe::FCommandList::Enqueue
                  (this_03,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                            *)local_58,pFVar7);
        uVar13 = (ulonglong)local_28;
        if (2 < uVar13) {
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
                      ::__l2::Destructors)[uVar13] ==
            UE::Core::Private::
            TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct)
        {
          if ((code *)local_58._0_8_ != (code *)0x0) {
            pppuVar9 = (undefined ***)(local_58 + 0x10);
            if (local_30 != (undefined ***)0x0) {
              pppuVar9 = local_30;
            }
            (*(code *)(*pppuVar9)[2])();
          }
        }
        else {
          (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar13])(local_58);
        }
      }
      if (local_88[0] != (code *)0x0) {
        pppuVar9 = &local_78;
        if (local_60 != (undefined ***)0x0) {
          pppuVar9 = local_60;
        }
        (*(code *)(*pppuVar9)[2])();
      }
      this->TextureRenderResources = (FTextureRenderResources *)0x0;
    }
  }
  UObject::BeginDestroy((UObject *)this);
  return;
}

// CreateTextureRenderResources @ 14872f160

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
USparseVolumeTextureFrame::CreateTextureRenderResources(USparseVolumeTextureFrame *this)

{
  USparseVolumeTexture *pUVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  FTextureRenderResources *this_00;
  undefined8 *puVar5;
  FRenderCommandList *this_01;
  FCommandList *this_02;
  FRenderCommandTag *pFVar6;
  wchar_t *pwVar7;
  code **ppcVar8;
  ulonglong uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined1 local_b0 [24];
  code *local_98 [2];
  code *local_88 [3];
  code **local_70;
  undefined1 local_68 [40];
  code **local_40;
  byte local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_e8;
  if ((this->TextureRenderResources == (FTextureRenderResources *)0x0) &&
     (bVar3 = UObjectBaseUtility::IsTemplate
                        ((UObjectBaseUtility *)this,RF_ArchetypeObject|RF_ClassDefaultObject),
     !bVar3)) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) <
         `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
         _thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                             _thread_safe_static_guard_0__),
       `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__
       == -1)) {
      pwVar7 = FCommandLine::Get();
      `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline =
           FParse::Param(pwVar7,L"nullrhi");
      _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                           _thread_safe_static_guard_0__);
    }
    if (((PRIVATE_GIsRunningCommandlet == false) || (PRIVATE_GAllowCommandletRendering != false)) &&
       (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline ==
        false)) {
      this_00 = ::operator_new(0xd0);
      if (this_00 == (FTextureRenderResources *)0x0) {
        this_00 = (FTextureRenderResources *)0x0;
      }
      else {
        memset(this_00,0,0xd0);
        FRenderResource::FRenderResource((FRenderResource *)this_00);
        *(undefined ***)this_00 = &___7FTextureRenderResources_SVT_UE__6B_;
        *(undefined8 *)&(this_00->Header).VirtualVolumeResolution.field0_0x0 = 0;
        (this_00->Header).VirtualVolumeResolution.field0_0x0._s_0.Z = 0;
        (this_00->Header).VirtualVolumeAABBMin.field0_0x0._s_0.X = 0x7fffffff;
        (this_00->Header).VirtualVolumeAABBMin.field0_0x0._s_0.Y = 0x7fffffff;
        (this_00->Header).VirtualVolumeAABBMin.field0_0x0._s_0.Z = 0x7fffffff;
        (this_00->Header).VirtualVolumeAABBMax.field0_0x0._s_0.X = -0x80000000;
        (this_00->Header).VirtualVolumeAABBMax.field0_0x0._s_0.Y = -0x80000000;
        (this_00->Header).VirtualVolumeAABBMax.field0_0x0._s_0.Z = -0x80000000;
        *(undefined8 *)&(this_00->Header).PageTableVolumeResolution.field0_0x0 = 0;
        (this_00->Header).PageTableVolumeResolution.field0_0x0._s_0.Z = 0;
        (this_00->Header).PageTableVolumeAABBMin.field0_0x0._s_0.X = 0x7fffffff;
        (this_00->Header).PageTableVolumeAABBMin.field0_0x0._s_0.Y = 0x7fffffff;
        (this_00->Header).PageTableVolumeAABBMin.field0_0x0._s_0.Z = 0x7fffffff;
        (this_00->Header).PageTableVolumeAABBMax.field0_0x0._s_0.X = -0x80000000;
        (this_00->Header).PageTableVolumeAABBMax.field0_0x0._s_0.Y = -0x80000000;
        (this_00->Header).PageTableVolumeAABBMax.field0_0x0._s_0.Z = -0x80000000;
        *(undefined2 *)(this_00->Header).AttributesFormats.Elements = 0;
        *(undefined8 *)&(this_00->Header).FallbackValues.Elements[0].field0_0x0 = 0;
        *(undefined8 *)((longlong)&(this_00->Header).FallbackValues.Elements[0].field0_0x0 + 8) = 0;
        *(undefined8 *)&(this_00->Header).FallbackValues.Elements[1].field0_0x0 = 0;
        *(undefined8 *)((longlong)&(this_00->Header).FallbackValues.Elements[1].field0_0x0 + 8) = 0;
        *(undefined8 *)&(this_00->GlobalVolumeResolution).field0_0x0 =
             UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_;
        (this_00->GlobalVolumeResolution).field0_0x0._s_0.Z =
             UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
        *(undefined8 *)&(this_00->TileDataTextureResolution).field0_0x0 =
             UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_;
        (this_00->TileDataTextureResolution).field0_0x0._s_0.Z =
             UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
        (this_00->PageTableTextureReferenceRHI).Reference = (FRHITextureReference *)0x0;
        (this_00->PhysicalTileDataATextureReferenceRHI).Reference = (FRHITextureReference *)0x0;
        (this_00->PhysicalTileDataBTextureReferenceRHI).Reference = (FRHITextureReference *)0x0;
        this_00->FrameIndex = -1;
        this_00->NumLogicalMipLevels = 0;
      }
      pUVar1 = (this->Owner).field0_0x0.DebugPtr;
      this->TextureRenderResources = this_00;
      puVar5 = (undefined8 *)(**(code **)(*(longlong *)pUVar1 + 0x2e0))(pUVar1,local_b0);
      local_98[0] = (code *)0x0;
      uVar10 = (undefined4)*puVar5;
      uVar11 = (undefined4)((ulonglong)*puVar5 >> 0x20);
      local_b8 = *(undefined4 *)(puVar5 + 1);
      local_c8 = this_00;
      local_70 = FMemory::Malloc(0x20,8);
      *local_70 = (code *)&UE::Core::Private::Function::
                           TFunction_OwnedObject<`UE::SVT::FTextureRenderResources::SetGlobalVolumeResolution_GameThread'::`2'::<lambda_1>,1,1>
                           ::_vftable_;
      *(undefined4 *)(local_70 + 1) = (undefined4)local_c8;
      *(undefined4 *)((longlong)local_70 + 0xc) = local_c8._4_4_;
      *(undefined4 *)(local_70 + 2) = uVar10;
      *(undefined4 *)((longlong)local_70 + 0x14) = uVar11;
      local_70[3] = (code *)CONCAT44(uStack_b4,local_b8);
      if (local_70 + 1 != (code **)0x0) {
        local_98[0] = UE::Core::Private::Function::
                      TFunctionRefCaller<`UE::SVT::FTextureRenderResources::SetGlobalVolumeResolution_GameThread'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                      ::Call;
      }
      uStack_c0 = uVar10;
      uStack_bc = uVar11;
      this_01 = FRenderCommandList::GetInstanceTLS();
      if (this_01 == (FRenderCommandList *)0x0) {
        FRenderThreadCommandPipe::
        Enqueue<TRenderCommandTag<_UE::SVT::FTextureRenderResources::SetGlobalVolumeResolution_GameThread_::__l2::TSTR_FTextureRenderResources_UpdateGlobalVolumeResolution895>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                  ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_98);
      }
      else {
        this_02 = FRenderCommandList::GetRenderThread(this_01);
        local_68._0_8_ = local_98[0];
        local_40 = local_70;
        local_70 = (code **)0x0;
        local_68._16_8_ = local_88[0];
        local_68._24_8_ = local_88[1];
        local_68._32_8_ = local_88[2];
        local_98[0] = (code *)0x0;
        local_38 = 2;
        pFVar6 = (FRenderCommandTag *)
                 TRenderCommandTag<`UE::SVT::FTextureRenderResources::SetGlobalVolumeResolution_GameThread'::__l2::TSTR_FTextureRenderResources_UpdateGlobalVolumeResolution895>
                 ::Get();
        UE::RenderCommandPipe::FCommandList::Enqueue
                  (this_02,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                            *)local_68,pFVar6);
        uVar9 = (ulonglong)local_38;
        if ((2 < uVar9) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0xd4,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
        if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar9] ==
            UE::Core::Private::
            TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct)
        {
          if ((code *)local_68._0_8_ != (code *)0x0) {
            ppcVar8 = (code **)(local_68 + 0x10);
            if (local_40 != (code **)0x0) {
              ppcVar8 = local_40;
            }
            (**(code **)(*ppcVar8 + 0x10))();
          }
        }
        else {
          (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar9])(local_68);
        }
      }
      if (local_98[0] != (code *)0x0) {
        ppcVar8 = local_98 + 2;
        if (local_70 != (code **)0x0) {
          ppcVar8 = local_70;
        }
        (**(code **)(*ppcVar8 + 0x10))();
      }
      BeginInitResource((FRenderResource *)this->TextureRenderResources,(FRenderCommandPipe *)0x0);
      return true;
    }
  }
  return false;
}

// FinishDestroy @ 148734f00

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall USparseVolumeTextureFrame::FinishDestroy(USparseVolumeTextureFrame *this)

{
  ForElementType<UObject_*> FVar1;
  void *_Dst;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FLinkerLoad *pFVar5;
  ForElementType<UObject_*> FVar6;
  TArray<UObject_*,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *pTVar7;
  TArray<UObject_*,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *pTVar8;
  FName aFStackX_8 [4];
  FString FStack_18;
  
  if ((*(uint *)&this->field_0x8 >> 0x10 & 1) == 0) {
    aFStackX_8[0].ComparisonIndex.Value = *(uint *)&this->field_0x18;
    aFStackX_8[0].Number = *(uint *)&this->field_0x1c;
    ::FName::ToString(aFStackX_8,&FStack_18);
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogObj);
    if (FStack_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_18.Data.AllocatorInstance.Data);
    }
  }
  pFVar5 = UObjectBaseUtility::GetLinker((UObjectBaseUtility *)this);
  if ((pFVar5 != (FLinkerLoad *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!GetLinker()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Obj.cpp"
                         ,0x457,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar4 = UObjectBaseUtility::GetLinkerIndex((UObjectBaseUtility *)this);
  if ((iVar4 != -1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("GetLinkerIndex() == INDEX_NONE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Obj.cpp"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  UObject::DestroyNonNativeProperties((UObject *)this);
  pTVar8 = &DebugFinishDestroyed;
  pTVar7 = &DebugFinishDestroyed;
  if (DebugFinishDestroyed.AllocatorInstance.SecondaryData != (ForElementType<UObject_*>)0x0) {
    pTVar7 = (TArray<UObject_*,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *)
             DebugFinishDestroyed.AllocatorInstance.SecondaryData;
  }
  FVar1 = (ForElementType<UObject_*>)
          ((longlong)pTVar7 + (longlong)DebugFinishDestroyed.ArrayNum * 8);
  FVar6 = (ForElementType<UObject_*>)pTVar7;
  if ((ForElementType<UObject_*>)pTVar7 != FVar1) {
    while (*(USparseVolumeTextureFrame **)FVar6 != this) {
      FVar6 = (ForElementType<UObject_*>)((longlong)FVar6 + 8);
      if (FVar6 == FVar1) {
        return;
      }
    }
    iVar4 = (int)((longlong)FVar6 - (longlong)pTVar7 >> 3);
    if (iVar4 != -1) {
      if (DebugFinishDestroyed.AllocatorInstance.SecondaryData != (ForElementType<UObject_*>)0x0) {
        pTVar8 = (TArray<UObject_*,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *)
                 DebugFinishDestroyed.AllocatorInstance.SecondaryData;
      }
      _Dst = (void *)((longlong)pTVar8 + (longlong)iVar4 * 8);
      memmove(_Dst,(void *)((longlong)_Dst + 8),
              (longlong)((DebugFinishDestroyed.ArrayNum - iVar4) + -1) << 3);
      DebugFinishDestroyed.ArrayNum = DebugFinishDestroyed.ArrayNum + -1;
    }
  }
  return;
}

// GetFallbackValue @ 14873bb10

TVector4<float> * __thiscall
USparseVolumeTextureFrame::GetFallbackValue
          (USparseVolumeTextureFrame *this,TVector4<float> *__return_storage_ptr__,int param_1)

{
  (**(code **)(*(longlong *)(this->Owner).field0_0x0.DebugPtr + 0x2f0))();
  return __return_storage_ptr__;
}

// GetFormat @ 14873bd20

EPixelFormat __thiscall
USparseVolumeTextureFrame::GetFormat(USparseVolumeTextureFrame *this,int param_1)

{
  EPixelFormat EVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014873bd27. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EVar1 = (**(code **)(*(longlong *)(this->Owner).field0_0x0.DebugPtr + 0x2e8))();
  return EVar1;
}

// GetFrameAndIssueStreamingRequest @ 14873bec0

USparseVolumeTextureFrame * __cdecl
USparseVolumeTextureFrame::GetFrameAndIssueStreamingRequest
          (USparseVolumeTexture *param_1,uint param_2,float param_3,float param_4,float param_5,
          bool param_6,bool param_7)

{
  int iVar1;
  UClass *pUVar2;
  USparseVolumeTextureFrame *pUVar3;
  
  if (param_1 != (USparseVolumeTexture *)0x0) {
    pUVar2 = UStreamableSparseVolumeTexture::StaticClass();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar2->_padding_)) {
      (**(code **)(UE::SVT::GStreamingManager._32_8_ + 0x10))
                (0x155248580,param_1,param_2,param_3,param_4,param_5,param_7 * '\x02' | param_6);
      pUVar3 = UStreamableSparseVolumeTexture::GetFrame
                         ((UStreamableSparseVolumeTexture *)param_1,(int)param_4);
      return pUVar3;
    }
  }
  return (USparseVolumeTextureFrame *)0x0;
}

// GetFrameTransform @ 14873c070

TTransform<double> * __thiscall
USparseVolumeTextureFrame::GetFrameTransform
          (USparseVolumeTextureFrame *this,TTransform<double> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar1 = (this->Transform).Rotation.XY.m128d_f64[1];
  dVar2 = (this->Transform).Rotation.ZW.m128d_f64[0];
  dVar3 = (this->Transform).Rotation.ZW.m128d_f64[1];
  (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = (this->Transform).Rotation.XY.m128d_f64[0];
  (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = dVar1;
  dVar1 = (this->Transform).Translation.XY.m128d_f64[0];
  dVar4 = (this->Transform).Translation.XY.m128d_f64[1];
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = dVar2;
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = dVar3;
  dVar2 = (this->Transform).Translation.ZW.m128d_f64[0];
  dVar3 = (this->Transform).Translation.ZW.m128d_f64[1];
  (__return_storage_ptr__->Translation).XY.m128d_f64[0] = dVar1;
  (__return_storage_ptr__->Translation).XY.m128d_f64[1] = dVar4;
  dVar1 = (this->Transform).Scale3D.XY.m128d_f64[0];
  dVar4 = (this->Transform).Scale3D.XY.m128d_f64[1];
  (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = dVar2;
  (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = dVar3;
  dVar2 = (this->Transform).Scale3D.ZW.m128d_f64[0];
  dVar3 = (this->Transform).Scale3D.ZW.m128d_f64[1];
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = dVar1;
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = dVar4;
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = dVar2;
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = dVar3;
  return __return_storage_ptr__;
}

// GetNumFrames @ 14873cd10

int __thiscall USparseVolumeTextureFrame::GetNumFrames(USparseVolumeTextureFrame *this)

{
  return 1;
}

// GetNumMipLevels @ 14873cd70

int __thiscall USparseVolumeTextureFrame::GetNumMipLevels(USparseVolumeTextureFrame *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014873cd77. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (**(code **)(*(longlong *)(this->Owner).field0_0x0.DebugPtr + 0x2d0))();
  return iVar1;
}

// GetPrivateStaticClass @ 14873e8c0

UClass * __cdecl USparseVolumeTextureFrame::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USparseVolumeTextureFrame.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SparseVolumeTextureFrame",
               &Z_Registration_Info_UClass_USparseVolumeTextureFrame.InnerSingleton,
               StaticRegisterNativesUSparseVolumeTextureFrame,0x1d0,0x10,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<USparseVolumeTextureFrame>,
               InternalVTableHelperCtorCaller<USparseVolumeTextureFrame>,local_res8,
               USparseVolumeTexture::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USparseVolumeTextureFrame.InnerSingleton;
}

// GetResourceSizeEx @ 14873f350

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
USparseVolumeTextureFrame::GetResourceSizeEx
          (USparseVolumeTextureFrame *this,FResourceSizeEx *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  Type TVar3;
  ulonglong uVar4;
  ForAnyElementType FVar5;
  undefined1 auStackX_18 [8];
  TArray<UObject_*,TSizedDefaultAllocator<32>_> TStack_b8;
  FArchiveState FStack_a8;
  undefined8 uStack_18;
  ulong64 uStack_10;
  
  TVar3 = FResourceSizeEx::GetResourceSizeMode(param_1);
  if (TVar3 == EstimatedTotal) {
    FArchiveState::FArchiveState(&FStack_a8);
    FStack_a8.ArIsFilterEditorOnly = '\x01';
    FStack_a8.ArIsCountingMemory = '\x01';
    FStack_a8._padding_ = (longlong)&___7FArchiveCountMem__6B_;
    uStack_18 = 0;
    uStack_10 = 0;
    if (this != (USparseVolumeTextureFrame *)0x0) {
      (**(code **)(*(longlong *)this + 200))(this,&FStack_a8);
    }
    FResourceSizeEx::AddDedicatedSystemMemoryBytes(param_1,uStack_10);
    TStack_b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TStack_b8.ArrayNum = 0;
    TStack_b8.ArrayMax = 0;
    GetObjectsWithOuter((UObjectBase *)this,&TStack_b8,false,RF_NoFlags,Borrowed);
    iVar2 = TStack_b8.ArrayNum;
    uVar4 = (ulonglong)TStack_b8.ArrayNum;
    pFVar1 = TStack_b8.AllocatorInstance.Data + uVar4 * 8;
    FVar5.Data = TStack_b8.AllocatorInstance.Data;
    while( true ) {
      if ((int)uVar4 != iVar2) {
        `TCheckedPointerIterator<UObject_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (auStackX_18);
      }
      if (FVar5.Data == pFVar1) break;
      (**(code **)(**(longlong **)FVar5.Data + 400))(*(longlong **)FVar5.Data,param_1);
      uVar4 = TStack_b8._8_8_ & 0xffffffff;
      FVar5.Data = FVar5.Data + 8;
    }
    if (TStack_b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(TStack_b8.AllocatorInstance.Data);
    }
    FArchive::~FArchive((FArchive *)&FStack_a8);
  }
  return;
}

// GetTextureAddressX @ 148740560

TextureAddress __thiscall
USparseVolumeTextureFrame::GetTextureAddressX(USparseVolumeTextureFrame *this)

{
  TextureAddress TVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000148740567. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  TVar1 = (**(code **)(*(longlong *)(this->Owner).field0_0x0.DebugPtr + 0x2f8))();
  return TVar1;
}

// GetTextureAddressY @ 1487405a0

TextureAddress __thiscall
USparseVolumeTextureFrame::GetTextureAddressY(USparseVolumeTextureFrame *this)

{
  TextureAddress TVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001487405a7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  TVar1 = (**(code **)(*(longlong *)(this->Owner).field0_0x0.DebugPtr + 0x300))();
  return TVar1;
}

// GetTextureAddressZ @ 1487405e0

TextureAddress __thiscall
USparseVolumeTextureFrame::GetTextureAddressZ(USparseVolumeTextureFrame *this)

{
  TextureAddress TVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001487405e7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  TVar1 = (**(code **)(*(longlong *)(this->Owner).field0_0x0.DebugPtr + 0x308))();
  return TVar1;
}

// GetTextureRenderResources @ 1487406c0

FTextureRenderResources * __thiscall
USparseVolumeTextureFrame::GetTextureRenderResources(USparseVolumeTextureFrame *this)

{
  return this->TextureRenderResources;
}

// GetVolumeResolution @ 148741d00

TIntVector3<int> * __thiscall
USparseVolumeTextureFrame::GetVolumeResolution
          (USparseVolumeTextureFrame *this,TIntVector3<int> *__return_storage_ptr__)

{
  (**(code **)(*(longlong *)(this->Owner).field0_0x0.DebugPtr + 0x2e0))();
  return __return_storage_ptr__;
}

// Initialize @ 148749780

bool __thiscall
USparseVolumeTextureFrame::Initialize
          (USparseVolumeTextureFrame *this,USparseVolumeTexture *param_1,int param_2,
          TTransform<double> *param_3,FTextureData *param_4)

{
  return false;
}

// PostLoad @ 14874f880

void __thiscall USparseVolumeTextureFrame::PostLoad(USparseVolumeTextureFrame *this)

{
  UObject::PostLoad((UObject *)this);
  CreateTextureRenderResources(this);
  return;
}

// Serialize @ 148758830

void __thiscall
USparseVolumeTextureFrame::Serialize(USparseVolumeTextureFrame *this,FArchive *param_1)

{
  uint *puVar1;
  ulonglong *puVar2;
  bool bVar3;
  uint uVar4;
  bool bVar5;
  uint local_res10 [2];
  
  UObject::Serialize((UObject *)this,param_1);
  if ((*(longlong *)&param_1->field_0x68 == 0) ||
     (*(longlong *)(*(longlong *)&param_1->field_0x68 + 0x10) == 0)) {
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
  bVar5 = SUB41(uVar4,0);
  puVar2 = *(ulonglong **)&param_1->field_0x8;
  puVar1 = (uint *)*puVar2 + 1;
  if ((uint *)puVar2[1] < puVar1) {
    local_res10[0] = 0;
    if ((param_1->field_0x28 & 1) == 0) {
      local_res10[0] = uVar4;
    }
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res10,4);
    if (1 < local_res10[0]) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    uVar4 = local_res10[0];
    if ((param_1->field_0x28 & 1) == 0) goto LAB_1487588c9;
  }
  else {
    uVar4 = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  bVar5 = uVar4 != 0;
LAB_1487588c9:
  if (((bVar5 != false) &&
      (bVar3 = UObjectBaseUtility::IsTemplate
                         ((UObjectBaseUtility *)this,RF_ArchetypeObject|RF_ClassDefaultObject),
      !bVar3)) && ((param_1->field_0x2b & 4) == 0)) {
    UE::SVT::FResources::Serialize(&this->Resources,param_1,(UObject *)this,bVar5);
  }
  return;
}

// Serialize @ 148758920

void __thiscall
USparseVolumeTextureFrame::Serialize
          (USparseVolumeTextureFrame *this,FStructuredArchiveRecord param_1)

{
  uint *puVar1;
  FFastPathLoadBuffer *pFVar2;
  bool bVar3;
  FArchiveState *this_00;
  uint uVar4;
  bool bVar5;
  uint local_res10 [2];
  FSlotBase local_res18;
  
  local_res18.StructuredArchive = (FStructuredArchive *)param_1;
  this_00 = (FArchiveState *)
            UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&local_res18);
  UObject::Serialize((UObject *)this,(FArchive *)this_00);
  if ((this_00->SavePackageData == (FArchiveSavePackageData *)0x0) ||
     (this_00->SavePackageData->CookContext == (FArchiveCookContext *)0x0)) {
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
  bVar5 = SUB41(uVar4,0);
  pFVar2 = this_00->ActiveFPLB;
  puVar1 = (uint *)((longlong)pFVar2->StartFastPathLoadBuffer + 4);
  if (pFVar2->EndFastPathLoadBuffer < puVar1) {
    local_res10[0] = 0;
    if (this_00->ArIsLoading == 0) {
      local_res10[0] = uVar4;
    }
    (**(code **)(this_00->_padding_ + 0x188))(this_00,local_res10,4);
    if (1 < local_res10[0]) {
      FArchiveState::SetError(this_00);
    }
    uVar4 = local_res10[0];
    if (this_00->ArIsLoading == 0) goto LAB_1487589ce;
  }
  else {
    uVar4 = *(uint *)pFVar2->StartFastPathLoadBuffer;
    pFVar2->StartFastPathLoadBuffer = (uchar *)puVar1;
  }
  bVar5 = uVar4 != 0;
LAB_1487589ce:
  if (((bVar5 != false) &&
      (bVar3 = UObjectBaseUtility::IsTemplate
                         ((UObjectBaseUtility *)this,RF_ArchetypeObject|RF_ClassDefaultObject),
      !bVar3)) && (this_00->ArIsCountingMemory == '\0')) {
    UE::SVT::FResources::Serialize(&this->Resources,(FArchive *)this_00,(UObject *)this,bVar5);
  }
  return;
}

// StaticRegisterNativesUSparseVolumeTextureFrame @ 14875d180

void __cdecl USparseVolumeTextureFrame::StaticRegisterNativesUSparseVolumeTextureFrame(void)

{
  return;
}

