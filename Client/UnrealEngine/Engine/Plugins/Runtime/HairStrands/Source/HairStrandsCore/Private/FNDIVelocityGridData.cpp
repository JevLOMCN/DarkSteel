// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsCore
// Functions: 4

// Init @ 14e0f1f60

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FNDIVelocityGridData::Init
          (FNDIVelocityGridData *this,TIntVector3<int> *param_1,int param_2,
          FNiagaraSystemInstance *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  FNDIVelocityGridBuffer *this_00;
  FNDIVelocityGridBuffer *pFVar5;
  FNDIVelocityGridBuffer *pFVar6;
  
  pFVar6 = (FNDIVelocityGridBuffer *)0x0;
  this->CurrentGridBuffer = (FNDIVelocityGridBuffer *)0x0;
  this->DestinationGridBuffer = (FNDIVelocityGridBuffer *)0x0;
  (this->GridSize).field0_0x0._s_0.X = 1;
  (this->GridSize).field0_0x0._s_0.Y = 1;
  (this->GridSize).field0_0x0._s_0.Z = 1;
  this->NeedResize = true;
  dVar1 = UE::Math::TMatrix<double>::Identity.M[0][1];
  (this->WorldInverse).M[0][0] = UE::Math::TMatrix<double>::Identity.M[0][0];
  (this->WorldInverse).M[0][1] = dVar1;
  dVar1 = UE::Math::TMatrix<double>::Identity.M[0][3];
  (this->WorldInverse).M[0][2] = UE::Math::TMatrix<double>::Identity.M[0][2];
  (this->WorldInverse).M[0][3] = dVar1;
  dVar1 = UE::Math::TMatrix<double>::Identity.M[1][1];
  (this->WorldInverse).M[1][0] = UE::Math::TMatrix<double>::Identity.M[1][0];
  (this->WorldInverse).M[1][1] = dVar1;
  dVar1 = UE::Math::TMatrix<double>::Identity.M[1][3];
  (this->WorldInverse).M[1][2] = UE::Math::TMatrix<double>::Identity.M[1][2];
  (this->WorldInverse).M[1][3] = dVar1;
  dVar1 = UE::Math::TMatrix<double>::Identity.M[2][1];
  (this->WorldInverse).M[2][0] = UE::Math::TMatrix<double>::Identity.M[2][0];
  (this->WorldInverse).M[2][1] = dVar1;
  dVar1 = UE::Math::TMatrix<double>::Identity.M[2][3];
  (this->WorldInverse).M[2][2] = UE::Math::TMatrix<double>::Identity.M[2][2];
  (this->WorldInverse).M[2][3] = dVar1;
  dVar1 = UE::Math::TMatrix<double>::Identity.M[3][1];
  (this->WorldInverse).M[3][0] = UE::Math::TMatrix<double>::Identity.M[3][0];
  (this->WorldInverse).M[3][1] = dVar1;
  dVar1 = UE::Math::TMatrix<double>::Identity.M[3][3];
  (this->WorldInverse).M[3][2] = UE::Math::TMatrix<double>::Identity.M[3][2];
  (this->WorldInverse).M[3][3] = dVar1;
  dVar1 = (this->WorldInverse).M[0][1];
  dVar2 = (this->WorldInverse).M[0][2];
  dVar3 = (this->WorldInverse).M[0][3];
  (this->WorldTransform).M[0][0] = (this->WorldInverse).M[0][0];
  (this->WorldTransform).M[0][1] = dVar1;
  dVar1 = (this->WorldInverse).M[1][0];
  dVar4 = (this->WorldInverse).M[1][1];
  (this->WorldTransform).M[0][2] = dVar2;
  (this->WorldTransform).M[0][3] = dVar3;
  dVar2 = (this->WorldInverse).M[1][2];
  dVar3 = (this->WorldInverse).M[1][3];
  (this->WorldTransform).M[1][0] = dVar1;
  (this->WorldTransform).M[1][1] = dVar4;
  dVar1 = (this->WorldInverse).M[2][0];
  dVar4 = (this->WorldInverse).M[2][1];
  (this->WorldTransform).M[1][2] = dVar2;
  (this->WorldTransform).M[1][3] = dVar3;
  dVar2 = (this->WorldInverse).M[2][2];
  dVar3 = (this->WorldInverse).M[2][3];
  (this->WorldTransform).M[2][0] = dVar1;
  (this->WorldTransform).M[2][1] = dVar4;
  dVar1 = (this->WorldInverse).M[3][0];
  dVar4 = (this->WorldInverse).M[3][1];
  (this->WorldTransform).M[2][2] = dVar2;
  (this->WorldTransform).M[2][3] = dVar3;
  dVar2 = (this->WorldInverse).M[3][2];
  dVar3 = (this->WorldInverse).M[3][3];
  (this->WorldTransform).M[3][0] = dVar1;
  (this->WorldTransform).M[3][1] = dVar4;
  (this->WorldTransform).M[3][2] = dVar2;
  (this->WorldTransform).M[3][3] = dVar3;
  if ((((param_1->field0_0x0)._s_0.X != 0) && ((param_1->field0_0x0)._s_0.Y != 0)) &&
     ((param_1->field0_0x0)._s_0.Z != 0)) {
    *(undefined8 *)&(this->GridSize).field0_0x0 = *(undefined8 *)&param_1->field0_0x0;
    (this->GridSize).field0_0x0._s_0.Z = (param_1->field0_0x0)._s_0.Z;
    this->NumAttributes = param_2;
    this_00 = ::operator_new(0x60);
    pFVar5 = pFVar6;
    if (this_00 != (FNDIVelocityGridBuffer *)0x0) {
      this_00->_padding_ = 0;
      this_00->_padding_ = 0;
      this_00->_padding_ = 0;
      this_00->_padding_ = 0;
      (this_00->GridDataBuffer).Buffer.Reference = (FRDGPooledBuffer *)0x0;
      *(undefined8 *)&(this_00->GridDataBuffer).PixelFormat = 0;
      (this_00->GridDataBuffer).TransientRDGBuffer = (FRDGBuffer *)0x0;
      (this_00->GridDataBuffer).TransientRDGSRV = (FRDGBufferSRV *)0x0;
      (this_00->GridDataBuffer).TransientRDGUAV = (FRDGBufferUAV *)0x0;
      (this_00->GridDataBuffer).NumBytes = 0;
      *(undefined8 *)&(this_00->GridSize).field0_0x0 = 0;
      *(undefined8 *)((longlong)&(this_00->GridSize).field0_0x0 + 8) = 0;
      pFVar5 = FNDIVelocityGridBuffer::FNDIVelocityGridBuffer(this_00);
    }
    this->CurrentGridBuffer = pFVar5;
    pFVar5 = ::operator_new(0x60);
    if (pFVar5 != (FNDIVelocityGridBuffer *)0x0) {
      pFVar5->_padding_ = 0;
      pFVar5->_padding_ = 0;
      pFVar5->_padding_ = 0;
      pFVar5->_padding_ = 0;
      (pFVar5->GridDataBuffer).Buffer.Reference = (FRDGPooledBuffer *)0x0;
      *(undefined8 *)&(pFVar5->GridDataBuffer).PixelFormat = 0;
      (pFVar5->GridDataBuffer).TransientRDGBuffer = (FRDGBuffer *)0x0;
      (pFVar5->GridDataBuffer).TransientRDGSRV = (FRDGBufferSRV *)0x0;
      (pFVar5->GridDataBuffer).TransientRDGUAV = (FRDGBufferUAV *)0x0;
      (pFVar5->GridDataBuffer).NumBytes = 0;
      *(undefined8 *)&(pFVar5->GridSize).field0_0x0 = 0;
      *(undefined8 *)((longlong)&(pFVar5->GridSize).field0_0x0 + 8) = 0;
      pFVar6 = FNDIVelocityGridBuffer::FNDIVelocityGridBuffer(pFVar5);
    }
    this->DestinationGridBuffer = pFVar6;
    Resize(this);
  }
  return true;
}

// Release @ 14e0f51e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall FNDIVelocityGridData::Release(FNDIVelocityGridData *this)

{
  code *pcVar1;
  bool bVar2;
  FRenderCommandList *pFVar3;
  FCommandList *pFVar4;
  FRenderCommandTag *pFVar5;
  undefined ***pppuVar6;
  ulonglong uVar7;
  undefined1 auStack_128 [32];
  code *local_108 [2];
  undefined **local_f8;
  FNDIVelocityGridBuffer *pFStack_f0;
  undefined8 local_e8;
  undefined ***local_e0;
  code *local_d8 [2];
  undefined **local_c8;
  FNDIVelocityGridBuffer *pFStack_c0;
  undefined8 local_b8;
  undefined ***local_b0;
  undefined1 local_a8 [16];
  undefined **local_98;
  FNDIVelocityGridBuffer *pFStack_90;
  undefined8 local_88;
  undefined ***local_80;
  byte local_78;
  undefined1 local_68 [16];
  undefined **local_58;
  FNDIVelocityGridBuffer *pFStack_50;
  undefined8 local_48;
  undefined ***local_40;
  byte local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_128;
  if (this->CurrentGridBuffer != (FNDIVelocityGridBuffer *)0x0) {
    local_e0 = (undefined ***)0x0;
    local_108[0] = UE::Core::Private::Function::
                   TFunctionRefCaller<`FNDIVelocityGridData::Release'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
                   ::Call;
    local_f8 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`FNDIVelocityGridData::Release'::`5'::<lambda_1>,1,0>::
                _vftable_;
    pFStack_f0 = this->CurrentGridBuffer;
    pFVar3 = FRenderCommandList::GetInstanceTLS();
    if (pFVar3 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_FNDIVelocityGridData::Release_::__l5::TSTR_DeleteResourceA89>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_108);
    }
    else {
      pFVar4 = FRenderCommandList::GetRenderThread(pFVar3);
      local_a8._0_8_ = local_108[0];
      local_80 = local_e0;
      local_98 = local_f8;
      pFStack_90 = pFStack_f0;
      local_88 = local_e8;
      local_108[0] = (code *)0x0;
      local_78 = 2;
      pFVar5 = (FRenderCommandTag *)
               TRenderCommandTag<`FNDIVelocityGridData::Release'::__l5::TSTR_DeleteResourceA89>::Get
                         ();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (pFVar4,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                         *)local_a8,pFVar5);
      uVar7 = (ulonglong)local_78;
      if (2 < uVar7) {
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
                    ::__l2::Destructors)[uVar7] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)local_a8._0_8_ != (code *)0x0) {
          pppuVar6 = (undefined ***)(local_a8 + 0x10);
          if (local_80 != (undefined ***)0x0) {
            pppuVar6 = local_80;
          }
          (*(code *)(*pppuVar6)[2])();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar7])(local_a8);
      }
    }
    if (local_108[0] != (code *)0x0) {
      pppuVar6 = &local_f8;
      if (local_e0 != (undefined ***)0x0) {
        pppuVar6 = local_e0;
      }
      (*(code *)(*pppuVar6)[2])();
    }
    this->CurrentGridBuffer = (FNDIVelocityGridBuffer *)0x0;
  }
  pFStack_c0 = this->DestinationGridBuffer;
  if (pFStack_c0 != (FNDIVelocityGridBuffer *)0x0) {
    local_b0 = (undefined ***)0x0;
    local_d8[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FNDIVelocityGridData::Release'::__l8::<lambda_2>,void,FRHICommandListImmediate_&>
                  ::Call;
    local_c8 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`FNDIVelocityGridData::Release'::`8'::<lambda_2>,1,0>::
                _vftable_;
    pFVar3 = FRenderCommandList::GetInstanceTLS();
    if (pFVar3 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_FNDIVelocityGridData::Release_::__l8::TSTR_DeleteResourceB100>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_d8);
    }
    else {
      pFVar4 = FRenderCommandList::GetRenderThread(pFVar3);
      local_68._0_8_ = local_d8[0];
      local_40 = local_b0;
      local_58 = local_c8;
      pFStack_50 = pFStack_c0;
      local_48 = local_b8;
      local_d8[0] = (code *)0x0;
      local_38 = 2;
      pFVar5 = (FRenderCommandTag *)
               TRenderCommandTag<`FNDIVelocityGridData::Release'::__l8::TSTR_DeleteResourceB100>::
               Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (pFVar4,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                         *)local_68,pFVar5);
      uVar7 = (ulonglong)local_38;
      if (2 < uVar7) {
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
    if (local_d8[0] != (code *)0x0) {
      pppuVar6 = &local_c8;
      if (local_b0 != (undefined ***)0x0) {
        pppuVar6 = local_b0;
      }
      (*(code *)(*pppuVar6)[2])();
    }
    this->DestinationGridBuffer = (FNDIVelocityGridBuffer *)0x0;
  }
  return;
}

// Resize @ 14e0f6380

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall FNDIVelocityGridData::Resize(FNDIVelocityGridData *this)

{
  int iVar1;
  FNDIVelocityGridBuffer *pFVar2;
  
  if (this->NeedResize != false) {
    pFVar2 = this->CurrentGridBuffer;
    if (pFVar2 != (FNDIVelocityGridBuffer *)0x0) {
      iVar1 = this->NumAttributes;
      *(undefined8 *)&(pFVar2->GridSize).field0_0x0 = *(undefined8 *)&(this->GridSize).field0_0x0;
      (pFVar2->GridSize).field0_0x0._s_0.Z = (this->GridSize).field0_0x0._s_0.Z;
      pFVar2->NumAttributes = iVar1;
      BeginInitResource((FRenderResource *)this->CurrentGridBuffer,(FRenderCommandPipe *)0x0);
    }
    pFVar2 = this->DestinationGridBuffer;
    if (pFVar2 != (FNDIVelocityGridBuffer *)0x0) {
      iVar1 = this->NumAttributes;
      *(undefined8 *)&(pFVar2->GridSize).field0_0x0 = *(undefined8 *)&(this->GridSize).field0_0x0;
      (pFVar2->GridSize).field0_0x0._s_0.Z = (this->GridSize).field0_0x0._s_0.Z;
      pFVar2->NumAttributes = iVar1;
      BeginInitResource((FRenderResource *)this->DestinationGridBuffer,(FRenderCommandPipe *)0x0);
    }
    this->NeedResize = false;
  }
  return;
}

// Swap @ 14e0f8510

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall FNDIVelocityGridData::Swap(FNDIVelocityGridData *this)

{
  FNDIVelocityGridBuffer *pFVar1;
  
  pFVar1 = this->CurrentGridBuffer;
  this->CurrentGridBuffer = this->DestinationGridBuffer;
  this->DestinationGridBuffer = pFVar1;
  return;
}

