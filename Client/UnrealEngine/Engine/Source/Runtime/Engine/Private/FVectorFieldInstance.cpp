// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// FVectorFieldInstance @ 1480f4af0

FVectorFieldInstance * __thiscall
FVectorFieldInstance::FVectorFieldInstance(FVectorFieldInstance *this)

{
  undefined1 *puVar1;
  double dVar2;
  double dVar3;
  
  (this->Resource).Reference = (FVectorFieldResource *)0x0;
  (this->WorldBounds).IsValid = '\0';
  dVar2 = UE::Math::TMatrix<double>::Identity.M[0][1];
  (this->VolumeToWorldNoScale).M[0][0] = UE::Math::TMatrix<double>::Identity.M[0][0];
  (this->VolumeToWorldNoScale).M[0][1] = dVar2;
  dVar2 = UE::Math::TMatrix<double>::Identity.M[0][3];
  (this->VolumeToWorldNoScale).M[0][2] = UE::Math::TMatrix<double>::Identity.M[0][2];
  (this->VolumeToWorldNoScale).M[0][3] = dVar2;
  dVar2 = UE::Math::TMatrix<double>::Identity.M[1][1];
  (this->VolumeToWorldNoScale).M[1][0] = UE::Math::TMatrix<double>::Identity.M[1][0];
  (this->VolumeToWorldNoScale).M[1][1] = dVar2;
  dVar2 = UE::Math::TMatrix<double>::Identity.M[1][3];
  (this->VolumeToWorldNoScale).M[1][2] = UE::Math::TMatrix<double>::Identity.M[1][2];
  (this->VolumeToWorldNoScale).M[1][3] = dVar2;
  dVar2 = UE::Math::TMatrix<double>::Identity.M[2][1];
  (this->VolumeToWorldNoScale).M[2][0] = UE::Math::TMatrix<double>::Identity.M[2][0];
  (this->VolumeToWorldNoScale).M[2][1] = dVar2;
  dVar2 = UE::Math::TMatrix<double>::Identity.M[2][3];
  (this->VolumeToWorldNoScale).M[2][2] = UE::Math::TMatrix<double>::Identity.M[2][2];
  (this->VolumeToWorldNoScale).M[2][3] = dVar2;
  dVar2 = UE::Math::TMatrix<double>::Identity.M[3][1];
  (this->VolumeToWorldNoScale).M[3][0] = UE::Math::TMatrix<double>::Identity.M[3][0];
  (this->VolumeToWorldNoScale).M[3][1] = dVar2;
  dVar2 = UE::Math::TMatrix<double>::Identity.M[3][3];
  (this->VolumeToWorldNoScale).M[3][2] = UE::Math::TMatrix<double>::Identity.M[3][2];
  (this->VolumeToWorldNoScale).M[3][3] = dVar2;
  dVar2 = UE::Math::TMatrix<double>::Identity.M[0][1];
  (this->WorldToVolume).M[0][0] = UE::Math::TMatrix<double>::Identity.M[0][0];
  (this->WorldToVolume).M[0][1] = dVar2;
  dVar2 = UE::Math::TMatrix<double>::Identity.M[0][3];
  (this->WorldToVolume).M[0][2] = UE::Math::TMatrix<double>::Identity.M[0][2];
  (this->WorldToVolume).M[0][3] = dVar2;
  dVar2 = UE::Math::TMatrix<double>::Identity.M[1][1];
  (this->WorldToVolume).M[1][0] = UE::Math::TMatrix<double>::Identity.M[1][0];
  (this->WorldToVolume).M[1][1] = dVar2;
  dVar2 = UE::Math::TMatrix<double>::Identity.M[1][3];
  (this->WorldToVolume).M[1][2] = UE::Math::TMatrix<double>::Identity.M[1][2];
  (this->WorldToVolume).M[1][3] = dVar2;
  dVar2 = UE::Math::TMatrix<double>::Identity.M[2][1];
  (this->WorldToVolume).M[2][0] = UE::Math::TMatrix<double>::Identity.M[2][0];
  (this->WorldToVolume).M[2][1] = dVar2;
  dVar2 = UE::Math::TMatrix<double>::Identity.M[2][3];
  (this->WorldToVolume).M[2][2] = UE::Math::TMatrix<double>::Identity.M[2][2];
  (this->WorldToVolume).M[2][3] = dVar2;
  dVar2 = UE::Math::TMatrix<double>::Identity.M[3][1];
  (this->WorldToVolume).M[3][0] = UE::Math::TMatrix<double>::Identity.M[3][0];
  (this->WorldToVolume).M[3][1] = dVar2;
  dVar2 = UE::Math::TMatrix<double>::Identity.M[3][3];
  (this->WorldToVolume).M[3][2] = UE::Math::TMatrix<double>::Identity.M[3][2];
  (this->WorldToVolume).M[3][3] = dVar2;
  dVar2 = UE::Math::TMatrix<double>::Identity.M[0][1];
  (this->VolumeToWorld).M[0][0] = UE::Math::TMatrix<double>::Identity.M[0][0];
  (this->VolumeToWorld).M[0][1] = dVar2;
  dVar2 = UE::Math::TMatrix<double>::Identity.M[0][3];
  (this->VolumeToWorld).M[0][2] = UE::Math::TMatrix<double>::Identity.M[0][2];
  (this->VolumeToWorld).M[0][3] = dVar2;
  dVar2 = UE::Math::TMatrix<double>::Identity.M[1][1];
  (this->VolumeToWorld).M[1][0] = UE::Math::TMatrix<double>::Identity.M[1][0];
  (this->VolumeToWorld).M[1][1] = dVar2;
  dVar2 = UE::Math::TMatrix<double>::Identity.M[1][3];
  (this->VolumeToWorld).M[1][2] = UE::Math::TMatrix<double>::Identity.M[1][2];
  (this->VolumeToWorld).M[1][3] = dVar2;
  dVar2 = UE::Math::TMatrix<double>::Identity.M[2][1];
  (this->VolumeToWorld).M[2][0] = UE::Math::TMatrix<double>::Identity.M[2][0];
  (this->VolumeToWorld).M[2][1] = dVar2;
  dVar2 = UE::Math::TMatrix<double>::Identity.M[2][3];
  (this->VolumeToWorld).M[2][2] = UE::Math::TMatrix<double>::Identity.M[2][2];
  (this->VolumeToWorld).M[2][3] = dVar2;
  dVar2 = UE::Math::TMatrix<double>::Identity.M[3][1];
  (this->VolumeToWorld).M[3][0] = UE::Math::TMatrix<double>::Identity.M[3][0];
  (this->VolumeToWorld).M[3][1] = dVar2;
  dVar3 = UE::Math::TMatrix<double>::Identity.M[3][3];
  dVar2 = UE::Math::TMatrix<double>::Identity.M[3][2];
  this->bTileX = 0;
  this->bUseFixDT = 0;
  this->bTileZ = 0;
  this->bTileY = 0;
  this->Tightness = 0.0;
  this->Intensity = 0.0;
  this->bInstancedResource = false;
  (this->VolumeToWorld).M[3][2] = dVar2;
  (this->VolumeToWorld).M[3][3] = dVar3;
  this->Index = -1;
  return this;
}

// ~FVectorFieldInstance @ 14890e240

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FVectorFieldInstance::~FVectorFieldInstance(FVectorFieldInstance *this)

{
  FThreadSafeCounter *pFVar1;
  int iVar2;
  FVectorFieldResource *pFVar3;
  code *pcVar4;
  bool bVar5;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar6;
  undefined ***pppuVar7;
  ulonglong uVar8;
  undefined1 auStack_b8 [48];
  code *local_88 [2];
  undefined **local_78;
  FVectorFieldResource *pFStack_70;
  undefined8 local_68;
  undefined ***local_60;
  undefined1 local_58 [16];
  undefined **local_48;
  FVectorFieldResource *pFStack_40;
  undefined8 local_38;
  undefined ***local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  pFVar3 = (this->Resource).Reference;
  if ((pFVar3 != (FVectorFieldResource *)0x0) && (this->bInstancedResource != false)) {
    LOCK();
    (pFVar3->NumRefs).Counter = (pFVar3->NumRefs).Counter + 1;
    UNLOCK();
    local_60 = (undefined ***)0x0;
    local_88[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FVectorFieldInstance::~FVectorFieldInstance'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
                  ::Call;
    local_78 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`FVectorFieldInstance::~FVectorFieldInstance'::`5'::<lambda_1>,1,0>
                ::_vftable_;
    pFStack_70 = pFVar3;
    this_00 = FRenderCommandList::GetInstanceTLS();
    if (this_00 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_FVectorFieldInstance::~FVectorFieldInstance_::__l5::TSTR_FDestroyVectorFieldResourceCommand72>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_88);
    }
    else {
      this_01 = FRenderCommandList::GetRenderThread(this_00);
      local_58._0_8_ = local_88[0];
      local_30 = local_60;
      local_48 = local_78;
      pFStack_40 = pFStack_70;
      local_38 = local_68;
      local_88[0] = (code *)0x0;
      local_28 = 2;
      pFVar6 = (FRenderCommandTag *)
               TRenderCommandTag<`FVectorFieldInstance::~FVectorFieldInstance'::__l5::TSTR_FDestroyVectorFieldResourceCommand72>
               ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)local_58,pFVar6);
      uVar8 = (ulonglong)local_28;
      if (2 < uVar8) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar8] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)local_58._0_8_ != (code *)0x0) {
          pppuVar7 = (undefined ***)(local_58 + 0x10);
          if (local_30 != (undefined ***)0x0) {
            pppuVar7 = local_30;
          }
          (*(code *)(*pppuVar7)[2])();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar8])(local_58);
      }
    }
    if (local_88[0] != (code *)0x0) {
      pppuVar7 = &local_78;
      if (local_60 != (undefined ***)0x0) {
        pppuVar7 = local_60;
      }
      (*(code *)(*pppuVar7)[2])();
    }
  }
  pFVar3 = (this->Resource).Reference;
  if (pFVar3 != (FVectorFieldResource *)0x0) {
    (this->Resource).Reference = (FVectorFieldResource *)0x0;
    LOCK();
    pFVar1 = &pFVar3->NumRefs;
    iVar2 = pFVar1->Counter;
    pFVar1->Counter = pFVar1->Counter + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)pFVar3->_padding_)(pFVar3,1);
    }
  }
  pFVar3 = (this->Resource).Reference;
  if (pFVar3 != (FVectorFieldResource *)0x0) {
    LOCK();
    pFVar1 = &pFVar3->NumRefs;
    iVar2 = pFVar1->Counter;
    pFVar1->Counter = pFVar1->Counter + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)pFVar3->_padding_)(pFVar3,1);
    }
  }
  return;
}

// Init @ 1489621c0

void __thiscall
FVectorFieldInstance::Init(FVectorFieldInstance *this,FVectorFieldResource *param_1,bool param_2)

{
  FThreadSafeCounter *pFVar1;
  int iVar2;
  FVectorFieldResource *pFVar3;
  code *pcVar4;
  bool bVar5;
  
  if ((this->Resource).Reference != (FVectorFieldResource *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Resource",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\VectorField.cpp"
                       ,0x59,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar3 = (this->Resource).Reference;
  if (pFVar3 != param_1) {
    (this->Resource).Reference = param_1;
    if (param_1 != (FVectorFieldResource *)0x0) {
      LOCK();
      (param_1->NumRefs).Counter = (param_1->NumRefs).Counter + 1;
      UNLOCK();
    }
    if (pFVar3 != (FVectorFieldResource *)0x0) {
      LOCK();
      pFVar1 = &pFVar3->NumRefs;
      iVar2 = pFVar1->Counter;
      pFVar1->Counter = pFVar1->Counter + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)pFVar3->_padding_)(pFVar3,1);
      }
    }
  }
  this->bInstancedResource = param_2;
  return;
}

// UpdateTransforms @ 14898a2c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FVectorFieldInstance::UpdateTransforms(FVectorFieldInstance *this,TMatrix<double> *param_1)

{
  TMatrix<double> *pTVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  FVectorFieldResource *pFVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  bool bVar10;
  uint uVar11;
  undefined4 uVar12;
  uint uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined1 auStack_468 [32];
  TMatrix<double> local_448 [2];
  TMatrix<double> local_328;
  TMatrix<double> local_2a8;
  TMatrix<double> local_228;
  TMatrix<double> local_1a8;
  TMatrix<double> local_128;
  ulonglong local_a8;
  
  local_a8 = __security_cookie.value ^ (ulonglong)auStack_468;
  if (((this->Resource).Reference == (FVectorFieldResource *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Resource",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\VectorField.cpp"
                          ,100,L""), bVar10)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  dVar9 = __real_3e45798ee0000000;
  pFVar5 = (this->Resource).Reference;
  local_448[0].M[0][2] = param_1->M[0][2];
  local_448[0].M[0][3] = param_1->M[0][3];
  local_448[0].M[0][0] = param_1->M[0][0];
  local_448[0].M[0][1] = param_1->M[0][1];
  dVar17 = (pFVar5->LocalBounds).Max.field0_0x0._s_0.X;
  dVar18 = (pFVar5->LocalBounds).Max.field0_0x0._s_0.Y;
  dVar19 = (pFVar5->LocalBounds).Max.field0_0x0._s_0.Z;
  dVar7 = (pFVar5->LocalBounds).Min.field0_0x0._s_0.X;
  dVar8 = (pFVar5->LocalBounds).Min.field0_0x0._s_0.Y;
  dVar20 = (pFVar5->LocalBounds).Min.field0_0x0._s_0.Z;
  dVar2 = (pFVar5->LocalBounds).Min.field0_0x0._s_0.X;
  dVar3 = (pFVar5->LocalBounds).Min.field0_0x0._s_0.Y;
  dVar4 = (pFVar5->LocalBounds).Min.field0_0x0._s_0.Z;
  local_448[0].M[1][2] = param_1->M[1][2];
  local_448[0].M[1][3] = param_1->M[1][3];
  local_448[0].M[1][0] = param_1->M[1][0];
  local_448[0].M[1][1] = param_1->M[1][1];
  local_448[0].M[2][2] = param_1->M[2][2];
  local_448[0].M[2][3] = param_1->M[2][3];
  local_448[0].M[2][0] = param_1->M[2][0];
  local_448[0].M[2][1] = param_1->M[2][1];
  local_448[0].M[3][2] = param_1->M[3][2];
  local_448[0].M[3][3] = param_1->M[3][3];
  local_448[0].M[3][0] = param_1->M[3][0];
  local_448[0].M[3][1] = param_1->M[3][1];
  UE::Math::TMatrix<double>::RemoveScaling(local_448,__real_3e45798ee0000000);
  (this->VolumeToWorldNoScale).M[0][0] = local_448[0].M[0][0];
  (this->VolumeToWorldNoScale).M[0][1] = local_448[0].M[0][1];
  local_2a8.M[0][1] = _UNK_150689518;
  local_2a8.M[0][0] = ___xmm_00000000000000003ff0000000000000;
  (this->VolumeToWorldNoScale).M[0][2] = local_448[0].M[0][2];
  (this->VolumeToWorldNoScale).M[0][3] = local_448[0].M[0][3];
  (this->VolumeToWorldNoScale).M[1][0] = local_448[0].M[1][0];
  (this->VolumeToWorldNoScale).M[1][1] = local_448[0].M[1][1];
  (this->VolumeToWorldNoScale).M[1][2] = local_448[0].M[1][2];
  (this->VolumeToWorldNoScale).M[1][3] = local_448[0].M[1][3];
  (this->VolumeToWorldNoScale).M[2][0] = local_448[0].M[2][0];
  (this->VolumeToWorldNoScale).M[2][1] = local_448[0].M[2][1];
  (this->VolumeToWorldNoScale).M[2][2] = local_448[0].M[2][2];
  (this->VolumeToWorldNoScale).M[2][3] = local_448[0].M[2][3];
  (this->VolumeToWorldNoScale).M[3][0] = 0.0;
  (this->VolumeToWorldNoScale).M[3][1] = 0.0;
  (this->VolumeToWorldNoScale).M[3][2] = 0.0;
  (this->VolumeToWorldNoScale).M[3][3] = local_448[0].M[3][3];
  local_328.M[2][0] = 0.0;
  local_328.M[2][1] = 0.0;
  local_328.M[0][2] = 0.0;
  local_328.M[0][3] = 0.0;
  local_328.M[1][2] = 0.0;
  local_328.M[1][3] = 0.0;
  local_328.M[3][0] = 0.0;
  local_328.M[3][1] = 0.0;
  local_2a8.M[0][2] = 0.0;
  local_2a8.M[0][3] = 0.0;
  local_2a8.M[1][2] = 0.0;
  local_2a8.M[1][3] = 0.0;
  local_328.M[3][2] = ___xmm_3ff00000000000000000000000000000;
  local_328.M[3][3] = _UNK_15061cbc8;
  local_2a8.M[1][0] = ___xmm_3ff00000000000000000000000000000;
  local_2a8.M[1][1] = _UNK_15061cbc8;
  local_2a8.M[3][3] = __real_3ff0000000000000;
  local_328.M[0][1] = 0.0;
  local_328.M[1][0] = 0.0;
  local_328.M[2][3] = 0.0;
  local_2a8.M[2][0] = 0.0;
  local_2a8.M[2][1] = 0.0;
  local_2a8.M[2][2] = local_2a8.M[0][0];
  local_2a8.M[2][3] = local_2a8.M[0][1];
  local_328.M[0][0] = dVar17 - dVar2;
  local_328.M[1][1] = dVar18 - dVar3;
  local_328.M[2][2] = dVar19 - dVar4;
  local_2a8.M[3][0] = dVar7;
  local_2a8.M[3][1] = dVar8;
  local_2a8.M[3][2] = dVar20;
  VectorMatrixMultiply(&local_128,&local_328,&local_2a8);
  VectorMatrixMultiply(&local_228,&local_128,param_1);
  pTVar1 = &this->VolumeToWorld;
  pTVar1->M[0][0] = local_228.M[0][0];
  (this->VolumeToWorld).M[0][1] = local_228.M[0][1];
  (this->VolumeToWorld).M[0][2] = local_228.M[0][2];
  (this->VolumeToWorld).M[0][3] = local_228.M[0][3];
  (this->VolumeToWorld).M[1][0] = local_228.M[1][0];
  (this->VolumeToWorld).M[1][1] = local_228.M[1][1];
  (this->VolumeToWorld).M[1][2] = local_228.M[1][2];
  (this->VolumeToWorld).M[1][3] = local_228.M[1][3];
  (this->VolumeToWorld).M[2][0] = local_228.M[2][0];
  (this->VolumeToWorld).M[2][1] = local_228.M[2][1];
  (this->VolumeToWorld).M[2][2] = local_228.M[2][2];
  (this->VolumeToWorld).M[2][3] = local_228.M[2][3];
  (this->VolumeToWorld).M[3][0] = local_228.M[3][0];
  (this->VolumeToWorld).M[3][1] = local_228.M[3][1];
  (this->VolumeToWorld).M[3][2] = local_228.M[3][2];
  (this->VolumeToWorld).M[3][3] = local_228.M[3][3];
  dVar17 = pTVar1->M[0][0];
  uVar11 = SUB84(dVar17,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar13 = (uint)((ulonglong)dVar17 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  if ((((((dVar9 <= (double)CONCAT44(uVar13,uVar11) && (double)CONCAT44(uVar13,uVar11) != dVar9) ||
         (dVar17 = (this->VolumeToWorld).M[0][1],
         uVar11 = SUB84(dVar17,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
         uVar13 = (uint)((ulonglong)dVar17 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
         dVar9 <= (double)CONCAT44(uVar13,uVar11) && (double)CONCAT44(uVar13,uVar11) != dVar9)) ||
        (dVar17 = (this->VolumeToWorld).M[0][2],
        uVar11 = SUB84(dVar17,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
        uVar13 = (uint)((ulonglong)dVar17 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
        dVar9 <= (double)CONCAT44(uVar13,uVar11) && (double)CONCAT44(uVar13,uVar11) != dVar9)) ||
       ((dVar17 = (this->VolumeToWorld).M[1][0],
        uVar11 = SUB84(dVar17,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
        uVar13 = (uint)((ulonglong)dVar17 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
        dVar9 <= (double)CONCAT44(uVar13,uVar11) && (double)CONCAT44(uVar13,uVar11) != dVar9 ||
        (dVar17 = (this->VolumeToWorld).M[1][1],
        uVar11 = SUB84(dVar17,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
        uVar13 = (uint)((ulonglong)dVar17 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
        dVar9 <= (double)CONCAT44(uVar13,uVar11) && (double)CONCAT44(uVar13,uVar11) != dVar9)))) ||
      ((dVar17 = (this->VolumeToWorld).M[1][2],
       uVar11 = SUB84(dVar17,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
       uVar13 = (uint)((ulonglong)dVar17 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
       dVar9 <= (double)CONCAT44(uVar13,uVar11) && (double)CONCAT44(uVar13,uVar11) != dVar9 ||
       ((dVar17 = (this->VolumeToWorld).M[2][0],
        uVar11 = SUB84(dVar17,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
        uVar13 = (uint)((ulonglong)dVar17 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
        dVar9 <= (double)CONCAT44(uVar13,uVar11) && (double)CONCAT44(uVar13,uVar11) != dVar9 ||
        (dVar17 = (this->VolumeToWorld).M[2][1],
        uVar11 = SUB84(dVar17,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
        uVar13 = (uint)((ulonglong)dVar17 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
        dVar9 <= (double)CONCAT44(uVar13,uVar11) && (double)CONCAT44(uVar13,uVar11) != dVar9))))))
     || (dVar17 = (this->VolumeToWorld).M[2][2],
        uVar11 = SUB84(dVar17,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
        uVar13 = (uint)((ulonglong)dVar17 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
        uVar12 = UE::Math::TMatrix<double>::Identity.M[0][0]._0_4_,
        uVar14 = UE::Math::TMatrix<double>::Identity.M[0][0]._4_4_,
        uVar15 = UE::Math::TMatrix<double>::Identity.M[0][1]._0_4_,
        uVar16 = UE::Math::TMatrix<double>::Identity.M[0][1]._4_4_,
        uVar21 = UE::Math::TMatrix<double>::Identity.M[1][2]._0_4_,
        uVar22 = UE::Math::TMatrix<double>::Identity.M[1][2]._4_4_,
        uVar23 = UE::Math::TMatrix<double>::Identity.M[1][3]._0_4_,
        uVar24 = UE::Math::TMatrix<double>::Identity.M[1][3]._4_4_,
        uVar25 = UE::Math::TMatrix<double>::Identity.M[2][0]._0_4_,
        uVar26 = UE::Math::TMatrix<double>::Identity.M[2][0]._4_4_,
        uVar27 = UE::Math::TMatrix<double>::Identity.M[2][1]._0_4_,
        uVar28 = UE::Math::TMatrix<double>::Identity.M[2][1]._4_4_,
        uVar29 = UE::Math::TMatrix<double>::Identity.M[2][2]._0_4_,
        uVar30 = UE::Math::TMatrix<double>::Identity.M[2][2]._4_4_,
        uVar31 = UE::Math::TMatrix<double>::Identity.M[2][3]._0_4_,
        uVar32 = UE::Math::TMatrix<double>::Identity.M[2][3]._4_4_,
        uVar33 = UE::Math::TMatrix<double>::Identity.M[3][0]._0_4_,
        uVar34 = UE::Math::TMatrix<double>::Identity.M[3][0]._4_4_,
        uVar35 = UE::Math::TMatrix<double>::Identity.M[3][1]._0_4_,
        uVar36 = UE::Math::TMatrix<double>::Identity.M[3][1]._4_4_,
        uVar37 = UE::Math::TMatrix<double>::Identity.M[3][2]._0_4_,
        uVar38 = UE::Math::TMatrix<double>::Identity.M[3][2]._4_4_,
        uVar39 = UE::Math::TMatrix<double>::Identity.M[3][3]._0_4_,
        uVar40 = UE::Math::TMatrix<double>::Identity.M[3][3]._4_4_,
        dVar17 = UE::Math::TMatrix<double>::Identity.M[0][2],
        dVar18 = UE::Math::TMatrix<double>::Identity.M[0][3],
        dVar19 = UE::Math::TMatrix<double>::Identity.M[1][0],
        dVar20 = UE::Math::TMatrix<double>::Identity.M[1][1],
        dVar9 <= (double)CONCAT44(uVar13,uVar11) && (double)CONCAT44(uVar13,uVar11) != dVar9)) {
    FMath::MatrixInverse(&local_1a8,pTVar1);
    uVar12 = local_1a8.M[0][0]._0_4_;
    uVar14 = local_1a8.M[0][0]._4_4_;
    uVar15 = local_1a8.M[0][1]._0_4_;
    uVar16 = local_1a8.M[0][1]._4_4_;
    uVar21 = local_1a8.M[1][2]._0_4_;
    uVar22 = local_1a8.M[1][2]._4_4_;
    uVar23 = local_1a8.M[1][3]._0_4_;
    uVar24 = local_1a8.M[1][3]._4_4_;
    uVar25 = local_1a8.M[2][0]._0_4_;
    uVar26 = local_1a8.M[2][0]._4_4_;
    uVar27 = local_1a8.M[2][1]._0_4_;
    uVar28 = local_1a8.M[2][1]._4_4_;
    uVar29 = local_1a8.M[2][2]._0_4_;
    uVar30 = local_1a8.M[2][2]._4_4_;
    uVar31 = local_1a8.M[2][3]._0_4_;
    uVar32 = local_1a8.M[2][3]._4_4_;
    uVar33 = local_1a8.M[3][0]._0_4_;
    uVar34 = local_1a8.M[3][0]._4_4_;
    uVar35 = local_1a8.M[3][1]._0_4_;
    uVar36 = local_1a8.M[3][1]._4_4_;
    uVar37 = local_1a8.M[3][2]._0_4_;
    uVar38 = local_1a8.M[3][2]._4_4_;
    uVar39 = local_1a8.M[3][3]._0_4_;
    uVar40 = local_1a8.M[3][3]._4_4_;
    dVar17 = local_1a8.M[0][2];
    dVar18 = local_1a8.M[0][3];
    dVar19 = local_1a8.M[1][0];
    dVar20 = local_1a8.M[1][1];
  }
  *(undefined4 *)(this->WorldToVolume).M[0] = uVar12;
  *(undefined4 *)((longlong)(this->WorldToVolume).M[0] + 4) = uVar14;
  *(undefined4 *)((this->WorldToVolume).M[0] + 1) = uVar15;
  *(undefined4 *)((longlong)(this->WorldToVolume).M[0] + 0xc) = uVar16;
  (this->WorldToVolume).M[0][2] = dVar17;
  (this->WorldToVolume).M[0][3] = dVar18;
  (this->WorldToVolume).M[1][0] = dVar19;
  (this->WorldToVolume).M[1][1] = dVar20;
  *(undefined4 *)((this->WorldToVolume).M[1] + 2) = uVar21;
  *(undefined4 *)((longlong)(this->WorldToVolume).M[1] + 0x14) = uVar22;
  *(undefined4 *)((this->WorldToVolume).M[1] + 3) = uVar23;
  *(undefined4 *)((longlong)(this->WorldToVolume).M[1] + 0x1c) = uVar24;
  *(undefined4 *)(this->WorldToVolume).M[2] = uVar25;
  *(undefined4 *)((longlong)(this->WorldToVolume).M[2] + 4) = uVar26;
  *(undefined4 *)((this->WorldToVolume).M[2] + 1) = uVar27;
  *(undefined4 *)((longlong)(this->WorldToVolume).M[2] + 0xc) = uVar28;
  *(undefined4 *)((this->WorldToVolume).M[2] + 2) = uVar29;
  *(undefined4 *)((longlong)(this->WorldToVolume).M[2] + 0x14) = uVar30;
  *(undefined4 *)((this->WorldToVolume).M[2] + 3) = uVar31;
  *(undefined4 *)((longlong)(this->WorldToVolume).M[2] + 0x1c) = uVar32;
  *(undefined4 *)(this->WorldToVolume).M[3] = uVar33;
  *(undefined4 *)((longlong)(this->WorldToVolume).M[3] + 4) = uVar34;
  *(undefined4 *)((this->WorldToVolume).M[3] + 1) = uVar35;
  *(undefined4 *)((longlong)(this->WorldToVolume).M[3] + 0xc) = uVar36;
  *(undefined4 *)((this->WorldToVolume).M[3] + 2) = uVar37;
  *(undefined4 *)((longlong)(this->WorldToVolume).M[3] + 0x14) = uVar38;
  *(undefined4 *)((this->WorldToVolume).M[3] + 3) = uVar39;
  *(undefined4 *)((longlong)(this->WorldToVolume).M[3] + 0x1c) = uVar40;
  return;
}

