// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosNiagara
// Functions: 5

// ComputeTickingGroup @ 14e98bef0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

ETickingGroup __thiscall
FNDIGeometryCollectionData::ComputeTickingGroup(FNDIGeometryCollectionData *this)

{
  this->TickingGroup = TG_PrePhysics;
  return TG_PrePhysics;
}

// Init @ 14e9a0c90

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FNDIGeometryCollectionData::Init
          (FNDIGeometryCollectionData *this,UNiagaraDataInterfaceGeometryCollection *param_1,
          FNiagaraSystemInstance *param_2)

{
  longlong *plVar1;
  FScriptContainerElement *pFVar2;
  double *pdVar3;
  longlong lVar4;
  TReferenceControllerBase<1> *pTVar5;
  longlong lVar6;
  code *pcVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  bool bVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  UObject *pUVar15;
  FNDIGeometryCollectionArrays *pFVar16;
  FNDIGeometryCollectionBuffer *pFVar17;
  FNDIGeometryCollectionBuffer *pFVar18;
  TVector<float> *pTVar19;
  FNDIGeometryCollectionBuffer *pFVar20;
  uint uVar21;
  uint uVar22;
  FNDIGeometryCollectionBuffer *pFVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  longlong local_158;
  longlong local_150;
  TVector<double>_u_0 local_118;
  TVector<float> local_f8;
  FNiagaraLWCConverter local_e8 [3];
  undefined8 local_a0;
  
  pFVar20 = (FNDIGeometryCollectionBuffer *)0x0;
  uVar14 = 0;
  this->AssetBuffer = (FNDIGeometryCollectionBuffer *)0x0;
  if (param_1 == (UNiagaraDataInterfaceGeometryCollection *)0x0) {
    return;
  }
  if (param_2 == (FNiagaraSystemInstance *)0x0) {
    return;
  }
  bVar11 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->ResolvedSource);
  if (bVar11) {
    pUVar15 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->ResolvedSource);
  }
  else {
    bVar11 = FWeakObjectPtr::IsValid(&(this->ResolvedSource).Component.WeakPtr);
    if (!bVar11) goto LAB_14e9a13c1;
    pUVar15 = FWeakObjectPtr::Get(&(this->ResolvedSource).Component.WeakPtr);
    pUVar15 = *(UObject **)(pUVar15 + 0x24);
  }
  if (pUVar15 != (UObject *)0x0) {
    lVar4 = *(longlong *)&pUVar15[0xf].field_0x20;
    pTVar5 = *(TReferenceControllerBase<1> **)(pUVar15 + 0x10);
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((lVar4 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar11)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    plVar1 = (longlong *)(lVar4 + 0x3c0);
    if ((lVar4 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar11)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    iVar12 = (**(code **)(*plVar1 + 0x60))(plVar1);
    uVar13 = 0;
    pFVar17 = pFVar20;
    pFVar18 = pFVar20;
    pFVar23 = pFVar20;
    if (0 < iVar12) {
      do {
        uVar21 = (uint)pFVar17;
        uVar14 = 0;
        if ((int)uVar21 < *(int *)(lVar4 + 0x3b8)) {
          uVar14 = ~uVar21 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        uVar14 = *(uint *)((longlong)
                           &(((TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *)
                             &pFVar23->_padding_)->AllocatorInstance).Data +
                          *(longlong *)(lVar4 + 0x3b0));
        if (param_1->bIncludeIntermediateBones == false) {
          if ((lVar4 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar11)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          uVar22 = uVar13;
          if ((int)uVar14 < *(int *)(lVar4 + 0x148)) {
            uVar22 = ~uVar14 >> 0x1f;
          }
          if ((uVar22 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          if (*(int *)(*(longlong *)(lVar4 + 0x140) + 8 + (longlong)(int)uVar14 * 0x50) ==
              *(int *)(*(longlong *)(lVar4 + 0x140) + 0x34 + (longlong)(int)uVar14 * 0x50))
          goto LAB_14e9a0f07;
        }
        else {
LAB_14e9a0f07:
          pFVar18 = (FNDIGeometryCollectionBuffer *)(ulonglong)((int)pFVar18 + 1);
        }
        uVar14 = (uint)pFVar18;
        iVar12 = (**(code **)(*plVar1 + 0x60))(plVar1);
        pFVar17 = (FNDIGeometryCollectionBuffer *)(ulonglong)(uVar21 + 1);
        pFVar23 = (FNDIGeometryCollectionBuffer *)
                  ((longlong)
                   &(((TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *)
                     &pFVar23->_padding_)->AllocatorInstance).Data + 4);
      } while ((int)(uVar21 + 1) < iVar12);
    }
    pFVar16 = ::operator_new(0x78);
    pFVar17 = pFVar20;
    if (pFVar16 != (FNDIGeometryCollectionArrays *)0x0) {
      pFVar17 = (FNDIGeometryCollectionBuffer *)
                FNDIGeometryCollectionArrays::FNDIGeometryCollectionArrays(pFVar16);
    }
    this->AssetArrays = (FNDIGeometryCollectionArrays *)pFVar17;
    FNDIGeometryCollectionArrays::Resize((FNDIGeometryCollectionArrays *)pFVar17,uVar14);
    pFVar18 = ::operator_new(0xb8);
    pFVar17 = pFVar20;
    if (pFVar18 != (FNDIGeometryCollectionBuffer *)0x0) {
      memset(pFVar18,0,0xb8);
      pFVar17 = FNDIGeometryCollectionBuffer::FNDIGeometryCollectionBuffer(pFVar18);
    }
    this->AssetBuffer = pFVar17;
    pFVar17->NumPieces = uVar14;
    BeginInitResource((FRenderResource *)this->AssetBuffer,(FRenderCommandPipe *)0x0);
    dVar24 = 0.0;
    dVar25 = 0.0;
    dVar26 = 0.0;
    dVar8 = 0.0;
    dVar9 = 0.0;
    dVar10 = 0.0;
    bVar11 = FWeakObjectPtr::IsValid(&(this->ResolvedSource).Component.WeakPtr);
    if (bVar11) {
      pUVar15 = FWeakObjectPtr::Get(&(this->ResolvedSource).Component.WeakPtr);
      dVar26 = *(double *)&pUVar15[6].field_0x20 - *(double *)&pUVar15[7].field_0x10;
      dVar25 = *(double *)(pUVar15 + 7) - *(double *)&pUVar15[7].field_0x18;
      dVar24 = *(double *)&pUVar15[7].field_0x8 - *(double *)&pUVar15[7].field_0x20;
      dVar8 = ((*(double *)&pUVar15[6].field_0x20 + *(double *)&pUVar15[7].field_0x10) - dVar26) *
              __real_3fe0000000000000;
      dVar9 = ((*(double *)(pUVar15 + 7) + *(double *)&pUVar15[7].field_0x18) - dVar25) *
              __real_3fe0000000000000;
      dVar10 = ((*(double *)&pUVar15[7].field_0x8 + *(double *)&pUVar15[7].field_0x20) - dVar24) *
               __real_3fe0000000000000;
      dVar26 = dVar8 + dVar26;
      dVar25 = dVar9 + dVar25;
      dVar24 = dVar10 + dVar24;
    }
    FNiagaraSystemInstance::GetLWCConverter(param_2,local_e8,false);
    local_118._s_0.X = dVar26;
    local_118._s_0.Y = dVar25;
    local_118._s_0.Z = dVar24;
    pTVar19 = FNiagaraLWCConverter::ConvertWorldToSimulationVector
                        (local_e8,&local_f8,(TVector<double> *)&local_118._s_0);
    *(undefined8 *)&(this->BoundsOrigin).field0_0x0 = *(undefined8 *)&pTVar19->field0_0x0;
    (this->BoundsOrigin).field0_0x0._s_0.Z = (pTVar19->field0_0x0)._s_0.Z;
    (this->BoundsExtent).field0_0x0._s_0.X = (float)dVar8;
    (this->BoundsExtent).field0_0x0._s_0.Y = (float)dVar9;
    (this->BoundsExtent).field0_0x0._s_0.Z = (float)dVar10;
    iVar12 = (**(code **)(*plVar1 + 0x60))(plVar1);
    if (0 < iVar12) {
      local_158 = 0;
      local_150 = 0;
      pFVar17 = pFVar20;
      pFVar18 = pFVar20;
      do {
        uVar21 = (uint)pFVar20;
        uVar14 = uVar13;
        if ((int)uVar21 < *(int *)(lVar4 + 0x3b8)) {
          uVar14 = ~uVar21 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        uVar14 = *(uint *)(local_150 + *(longlong *)(lVar4 + 0x3b0));
        if (param_1->bIncludeIntermediateBones == false) {
          if ((lVar4 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar11)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          uVar22 = uVar13;
          if ((int)uVar14 < *(int *)(lVar4 + 0x148)) {
            uVar22 = ~uVar14 >> 0x1f;
          }
          if ((uVar22 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          if (*(int *)(*(longlong *)(lVar4 + 0x140) + 8 + (longlong)(int)uVar14 * 0x50) ==
              *(int *)(*(longlong *)(lVar4 + 0x140) + 0x34 + (longlong)(int)uVar14 * 0x50))
          goto LAB_14e9a124e;
        }
        else {
LAB_14e9a124e:
          uVar14 = uVar13;
          if ((int)uVar21 < *(int *)(lVar4 + 0x3d8)) {
            uVar14 = ~uVar21 >> 0x1f;
          }
          if ((uVar14 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          lVar6 = *(longlong *)(lVar4 + 0x3d0);
          uVar22 = (uint)pFVar17;
          pdVar3 = (double *)(lVar6 + 0x10 + local_158);
          dVar24 = *pdVar3;
          dVar8 = pdVar3[1];
          dVar9 = *(double *)(lVar6 + local_158);
          dVar10 = ((double *)(lVar6 + local_158))[1];
          local_a0 = *(undefined8 *)(lVar6 + 0x30 + local_158);
          pdVar3 = (double *)(lVar6 + 0x20 + local_158);
          dVar25 = *pdVar3;
          dVar26 = pdVar3[1];
          pFVar16 = this->AssetArrays;
          uVar14 = uVar13;
          if ((int)uVar22 < (pFVar16->BoundsBuffer).ArrayNum) {
            uVar14 = ~uVar22 >> 0x1f;
          }
          if ((uVar14 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pFVar17 = (FNDIGeometryCollectionBuffer *)(ulonglong)(uVar22 + 1);
          pFVar2 = (pFVar16->BoundsBuffer).AllocatorInstance.Data +
                   (longlong)
                   &((TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *)
                    &pFVar18->_padding_)->AllocatorInstance;
          *(float *)pFVar2 = (float)(dVar8 - dVar9);
          *(float *)(pFVar2 + 4) = (float)(dVar25 - dVar10);
          *(float *)(pFVar2 + 8) = (float)(dVar26 - dVar24);
          *(undefined4 *)(pFVar2 + 0xc) = 0;
          pFVar18 = (FNDIGeometryCollectionBuffer *)&pFVar18->_padding_;
        }
        local_158 = local_158 + 0x38;
        local_150 = local_150 + 4;
        pFVar20 = (FNDIGeometryCollectionBuffer *)(ulonglong)(uVar21 + 1);
        iVar12 = (**(code **)(*plVar1 + 0x60))(plVar1);
      } while ((int)(uVar21 + 1) < iVar12);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
    return;
  }
LAB_14e9a13c1:
  pFVar16 = ::operator_new(0x78);
  pFVar17 = pFVar20;
  if (pFVar16 != (FNDIGeometryCollectionArrays *)0x0) {
    pFVar17 = (FNDIGeometryCollectionBuffer *)
              FNDIGeometryCollectionArrays::FNDIGeometryCollectionArrays(pFVar16);
  }
  this->AssetArrays = (FNDIGeometryCollectionArrays *)pFVar17;
  FNDIGeometryCollectionArrays::Resize((FNDIGeometryCollectionArrays *)pFVar17,1);
  pFVar17 = ::operator_new(0xb8);
  if (pFVar17 != (FNDIGeometryCollectionBuffer *)0x0) {
    memset(pFVar17,0,0xb8);
    pFVar20 = FNDIGeometryCollectionBuffer::FNDIGeometryCollectionBuffer(pFVar17);
  }
  this->AssetBuffer = pFVar20;
  pFVar20->NumPieces = 1;
  BeginInitResource((FRenderResource *)this->AssetBuffer,(FRenderCommandPipe *)0x0);
  return;
}

// Release @ 14e9a5290

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall FNDIGeometryCollectionData::Release(FNDIGeometryCollectionData *this)

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
  FNDIGeometryCollectionBuffer *pFStack_70;
  undefined8 local_68;
  undefined ***local_60;
  undefined1 local_58 [16];
  undefined **local_48;
  FNDIGeometryCollectionBuffer *pFStack_40;
  undefined8 local_38;
  undefined ***local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  pFStack_70 = this->AssetBuffer;
  if (pFStack_70 != (FNDIGeometryCollectionBuffer *)0x0) {
    local_60 = (undefined ***)0x0;
    local_88[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FNDIGeometryCollectionData::Release'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
                  ::Call;
    local_78 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`FNDIGeometryCollectionData::Release'::`5'::<lambda_1>,1,0>::
                _vftable_;
    this_00 = FRenderCommandList::GetInstanceTLS();
    if (this_00 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_FNDIGeometryCollectionData::Release_::__l5::TSTR_DeleteResource107>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
      pFVar3 = (FRenderCommandTag *)
               TRenderCommandTag<`FNDIGeometryCollectionData::Release'::__l5::TSTR_DeleteResource107>
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
    this->AssetBuffer = (FNDIGeometryCollectionBuffer *)0x0;
  }
  return;
}

// Update @ 14e9b0870

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FNDIGeometryCollectionData::Update
          (FNDIGeometryCollectionData *this,UNiagaraDataInterfaceGeometryCollection *param_1,
          FNiagaraSystemInstance *param_2)

{
  longlong *plVar1;
  double *pdVar2;
  longlong lVar3;
  FNDIGeometryCollectionArrays *pFVar4;
  FScriptContainerElement *pFVar5;
  FNDIGeometryCollectionArrays *pFVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined1 auVar12 [12];
  undefined8 uVar13;
  undefined8 uVar14;
  uint uVar15;
  bool bVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  UObject *pUVar22;
  UObject *pUVar23;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar24;
  TVector<float> *pTVar25;
  TTransform<double> *pTVar26;
  uint uVar27;
  uint uVar28;
  longlong lVar29;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar30;
  int iVar31;
  undefined1 *puVar32;
  uint uVar33;
  uint uVar34;
  longlong lVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  undefined1 auVar39 [16];
  float fVar47;
  float fVar48;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  double dVar49;
  float fVar50;
  double dVar51;
  double dVar52;
  undefined1 auVar53 [16];
  __m128 _Var54;
  undefined4 uVar55;
  float fVar56;
  undefined4 uVar57;
  float fVar58;
  undefined4 uVar59;
  undefined4 uVar60;
  double dVar61;
  __m128d _Var62;
  undefined1 auVar63 [16];
  __m128 _Var64;
  undefined4 uVar65;
  float fVar66;
  undefined4 uVar67;
  float fVar68;
  undefined4 uVar69;
  undefined4 uVar70;
  __m128d _Var71;
  undefined1 auVar72 [16];
  __m128d _Var73;
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined4 uVar76;
  undefined4 uVar77;
  undefined4 uVar78;
  undefined4 uVar79;
  undefined1 auStack_368 [32];
  longlong local_348;
  longlong local_340;
  undefined1 local_338 [8];
  FNDIGeometryCollectionArrays *local_330;
  uint local_328;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> local_320;
  FNiagaraSystemInstance *local_310;
  UNiagaraDataInterfaceGeometryCollection *local_308;
  longlong local_300;
  longlong local_2f8;
  longlong local_2f0;
  TReferenceControllerBase<1> *local_2e8;
  TVector<double>_u_0 local_2d8;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> local_2b8;
  TVector<float> local_2a8;
  double local_298;
  double dStack_290;
  double local_288;
  FNiagaraLWCConverter local_280;
  TTransform<double> local_268;
  TTransform<double> local_208;
  TTransform<double> local_1a8;
  TTransform<double> local_148;
  ulonglong local_e8;
  
  if (param_1 != (UNiagaraDataInterfaceGeometryCollection *)0x0) {
    local_e8 = __security_cookie.value ^ (ulonglong)auStack_368;
    if (param_2 != (FNiagaraSystemInstance *)0x0) {
      this->TickingGroup = TG_PrePhysics;
      local_310 = param_2;
      local_308 = param_1;
      bVar16 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->ResolvedSource);
      if (bVar16) {
        pUVar22 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->ResolvedSource);
      }
      else {
        bVar16 = FWeakObjectPtr::IsValid(&(this->ResolvedSource).Component.WeakPtr);
        if (!bVar16) {
          return;
        }
        pUVar22 = FWeakObjectPtr::Get(&(this->ResolvedSource).Component.WeakPtr);
        pUVar22 = *(UObject **)(pUVar22 + 0x24);
      }
      _Var73.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
      _Var62.m128d_f64 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
      _Var71.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
      if (pUVar22 != (UObject *)0x0) {
        uVar55 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]._0_4_;
        uVar57 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]._4_4_;
        uVar59 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1]._0_4_;
        uVar60 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1]._4_4_;
        uVar65 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._0_4_;
        uVar67 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._4_4_;
        uVar69 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._0_4_;
        uVar70 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._4_4_;
        uVar76 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._0_4_;
        uVar77 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._4_4_;
        uVar78 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._0_4_;
        uVar79 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._4_4_;
        bVar16 = FWeakObjectPtr::IsValid(&(this->ResolvedSource).Component.WeakPtr);
        if (bVar16) {
          pUVar23 = FWeakObjectPtr::Get(&(this->ResolvedSource).Component.WeakPtr);
          uVar65 = *(undefined4 *)&pUVar23[0xc].field_0x10;
          uVar67 = *(undefined4 *)&pUVar23[0xc].field_0x14;
          uVar69 = *(undefined4 *)&pUVar23[0xc].field_0x18;
          uVar70 = *(undefined4 *)&pUVar23[0xc].field_0x1c;
          _Var71.m128d_f64 = *(double (*) [2])&pUVar23[0xc].field_0x20;
          uVar55 = *(undefined4 *)&pUVar23[0xd].field_0x8;
          uVar57 = *(undefined4 *)&pUVar23[0xd].field_0xc;
          uVar59 = *(undefined4 *)&pUVar23[0xd].field_0x10;
          uVar60 = *(undefined4 *)&pUVar23[0xd].field_0x14;
          _Var62.m128d_f64[0] = *(double *)&pUVar23[0xd].field_0x18;
          _Var62.m128d_f64[1] = *(double *)&pUVar23[0xd].field_0x20;
          _Var73.m128d_f64[0] = *(double *)&pUVar23[0xe].field_0x0;
          _Var73.m128d_f64[1] = *(double *)&pUVar23[0xe].field_0x8;
          uVar76 = *(undefined4 *)&pUVar23[0xe].field_0x10;
          uVar77 = *(undefined4 *)&pUVar23[0xe].field_0x14;
          uVar78 = *(undefined4 *)&pUVar23[0xe].field_0x18;
          uVar79 = *(undefined4 *)&pUVar23[0xe].field_0x1c;
        }
        dStack_290 = __real_c140000000000000;
        fVar56 = (param_2->LWCTile).field0_0x0._s_0.X;
        fVar58 = (param_2->LWCTile).field0_0x0._s_0.Y;
        fVar36 = (param_2->LWCTile).field0_0x0._s_0.Z;
        *(undefined4 *)(this->RootTransform).Rotation.XY.m128d_f64 = uVar65;
        *(undefined4 *)((longlong)(this->RootTransform).Rotation.XY.m128d_f64 + 4) = uVar67;
        *(undefined4 *)((this->RootTransform).Rotation.XY.m128d_f64 + 1) = uVar69;
        *(undefined4 *)((longlong)(this->RootTransform).Rotation.XY.m128d_f64 + 0xc) = uVar70;
        *&(this->RootTransform).Rotation.ZW.m128d_f64 = _Var71.m128d_f64;
        local_298 = (double)fVar56 * dStack_290;
        local_288 = (double)fVar36 * dStack_290;
        dStack_290 = (double)fVar58 * dStack_290;
        dVar10 = (double)CONCAT44(uVar60,uVar59) + dStack_290;
        auVar45._8_4_ = SUB84(dVar10,0);
        auVar45._0_8_ = (double)CONCAT44(uVar57,uVar55) + local_298;
        auVar45._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
        *(undefined1 (*) [16])(this->RootTransform).Translation.XY.m128d_f64 = auVar45;
        (this->RootTransform).Translation.ZW.m128d_f64[0] = _Var62.m128d_f64[0] + local_288;
        (this->RootTransform).Translation.ZW.m128d_f64[1] = _Var62.m128d_f64[1] + 0.0;
        *&(this->RootTransform).Scale3D.XY.m128d_f64 = _Var73.m128d_f64;
        *(undefined4 *)(this->RootTransform).Scale3D.ZW.m128d_f64 = uVar76;
        *(undefined4 *)((longlong)(this->RootTransform).Scale3D.ZW.m128d_f64 + 4) = uVar77;
        *(undefined4 *)((this->RootTransform).Scale3D.ZW.m128d_f64 + 1) = uVar78;
        *(undefined4 *)((longlong)(this->RootTransform).Scale3D.ZW.m128d_f64 + 0xc) = uVar79;
        local_2e8 = *(TReferenceControllerBase<1> **)(pUVar22 + 0x10);
        lVar3 = *(longlong *)&pUVar22[0xf].field_0x20;
        if (local_2e8 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          local_2e8->SharedReferenceCount = (atomic<int>)((int)local_2e8->SharedReferenceCount + 1);
          UNLOCK();
        }
        if ((lVar3 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar16)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        plVar1 = (longlong *)(lVar3 + 0x3c0);
        if ((lVar3 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar16)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        iVar31 = 0;
        uVar27 = 0;
        iVar17 = (**(code **)(*plVar1 + 0x60))(plVar1);
        if (0 < iVar17) {
          lVar35 = 0;
          do {
            uVar18 = 0;
            if ((int)uVar27 < *(int *)(lVar3 + 0x3b8)) {
              uVar18 = ~uVar27 >> 0x1f;
            }
            if (uVar18 == 0) {
              local_348 = (longlong)(int)uVar27;
              local_340 = (longlong)*(int *)(lVar3 + 0x3b8);
              bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar16) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
            }
            uVar18 = *(uint *)(lVar35 + *(longlong *)(lVar3 + 0x3b0));
            lVar29 = (longlong)(int)uVar18;
            if (local_308->bIncludeIntermediateBones == false) {
              if ((lVar3 == 0) &&
                 (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValid()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                      ,0x458,L""), bVar16)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              uVar19 = 0;
              if ((int)uVar18 < *(int *)(lVar3 + 0x148)) {
                uVar19 = ~uVar18 >> 0x1f;
              }
              if ((uVar19 == 0) &&
                 (local_348 = lVar29, local_340 = (longlong)*(int *)(lVar3 + 0x148),
                 bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar16)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              if (*(int *)(*(longlong *)(lVar3 + 0x140) + 8 + lVar29 * 0x50) ==
                  *(int *)(*(longlong *)(lVar3 + 0x140) + 0x34 + lVar29 * 0x50)) goto LAB_14e9b0be5;
            }
            else {
LAB_14e9b0be5:
              iVar31 = iVar31 + 1;
            }
            uVar27 = uVar27 + 1;
            lVar35 = lVar35 + 4;
            iVar17 = (**(code **)(*plVar1 + 0x60))(plVar1);
            param_2 = local_310;
          } while ((int)uVar27 < iVar17);
        }
        if (iVar31 == (this->AssetArrays->BoundsBuffer).ArrayNum) {
          FResolvedNiagaraGeometryCollection::GetLocalRestTransforms
                    (&this->ResolvedSource,&local_320);
          local_2b8.AllocatorInstance.Data = local_320.AllocatorInstance.Data;
          pFVar4 = this->AssetArrays;
          pTVar24 = &pFVar4->ComponentRestTransformBuffer;
          if ((local_320.ArrayNum != (pFVar4->ComponentRestTransformBuffer).ArrayNum) ||
             (iVar17 = memcmp(local_320.AllocatorInstance.Data,(pTVar24->AllocatorInstance).Data,
                              (longlong)local_320.ArrayNum * 0x60), iVar17 != 0)) {
            if (pTVar24 != &local_320) {
              pFVar5 = (pTVar24->AllocatorInstance).Data;
              if (pFVar5 != (FScriptContainerElement *)0x0) {
                FMemory::Free(pFVar5);
                local_2b8.AllocatorInstance.Data = local_320.AllocatorInstance.Data;
              }
              (pTVar24->AllocatorInstance).Data = local_2b8.AllocatorInstance.Data;
              local_320.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              (pFVar4->ComponentRestTransformBuffer).ArrayNum = local_320.ArrayNum;
              (pFVar4->ComponentRestTransformBuffer).ArrayMax = local_320.ArrayMax;
              local_2b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_320.ArrayNum = 0;
              local_320.ArrayMax = 0;
            }
            this->bNeedsRenderUpdate = true;
          }
        }
        else {
          Init(this,local_308,param_2);
          this->bNeedsRenderUpdate = true;
          pTVar24 = FResolvedNiagaraGeometryCollection::GetLocalRestTransforms
                              (&this->ResolvedSource,&local_2b8);
          pFVar4 = this->AssetArrays;
          pTVar30 = &pFVar4->ComponentRestTransformBuffer;
          if (pTVar30 != pTVar24) {
            pFVar5 = (pTVar30->AllocatorInstance).Data;
            if (pFVar5 != (FScriptContainerElement *)0x0) {
              FMemory::Free(pFVar5);
            }
            (pTVar30->AllocatorInstance).Data = (pTVar24->AllocatorInstance).Data;
            (pTVar24->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
            (pFVar4->ComponentRestTransformBuffer).ArrayNum = pTVar24->ArrayNum;
            (pFVar4->ComponentRestTransformBuffer).ArrayMax = pTVar24->ArrayMax;
            pTVar24->ArrayNum = 0;
            pTVar24->ArrayMax = 0;
          }
        }
        if (local_2b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2b8.AllocatorInstance.Data);
        }
        bVar16 = FWeakObjectPtr::IsValid(&(this->ResolvedSource).Component.WeakPtr);
        dVar10 = __real_3fe0000000000000;
        if (bVar16) {
          pUVar22 = FWeakObjectPtr::Get(&(this->ResolvedSource).Component.WeakPtr);
          dVar52 = *(double *)&pUVar22[6].field_0x20 - *(double *)&pUVar22[7].field_0x10;
          dVar51 = *(double *)(pUVar22 + 7) - *(double *)&pUVar22[7].field_0x18;
          dVar49 = *(double *)&pUVar22[7].field_0x8 - *(double *)&pUVar22[7].field_0x20;
          dVar9 = ((*(double *)&pUVar22[7].field_0x10 + *(double *)&pUVar22[6].field_0x20) - dVar52)
                  * dVar10;
          dVar61 = ((*(double *)&pUVar22[7].field_0x18 + *(double *)(pUVar22 + 7)) - dVar51) *
                   dVar10;
          dVar11 = ((*(double *)&pUVar22[7].field_0x20 + *(double *)&pUVar22[7].field_0x8) - dVar49)
                   * dVar10;
          local_2d8._s_0.X = dVar9 + dVar52;
          local_2d8._s_0.Y = dVar61 + dVar51;
          local_2d8._s_0.Z = dVar11 + dVar49;
        }
        else {
          local_2d8._s_0.Z = 0.0;
          local_2d8._s_0.Y = 0.0;
          local_2d8._s_0.X = 0.0;
          dVar9 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X * __real_4130000000000000;
          dVar61 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y * __real_4130000000000000;
          dVar11 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z * __real_4130000000000000;
        }
        FNiagaraSystemInstance::GetLWCConverter(param_2,&local_280,false);
        pTVar25 = FNiagaraLWCConverter::ConvertWorldToSimulationVector
                            (&local_280,&local_2a8,(TVector<double> *)&local_2d8._s_0);
        uVar34 = 0;
        *(undefined8 *)&(this->BoundsOrigin).field0_0x0 = *(undefined8 *)&pTVar25->field0_0x0;
        (this->BoundsOrigin).field0_0x0._s_0.Z = (pTVar25->field0_0x0)._s_0.Z;
        local_328 = 0;
        (this->BoundsExtent).field0_0x0._s_0.X = (float)dVar9;
        (this->BoundsExtent).field0_0x0._s_0.Y = (float)dVar61;
        (this->BoundsExtent).field0_0x0._s_0.Z = (float)dVar11;
        iVar17 = (**(code **)(*plVar1 + 0x60))(plVar1);
        uVar15 = _UNK_15061cc7c;
        uVar19 = _UNK_15061cc78;
        uVar18 = _UNK_15061cc74;
        uVar27 = __xmm_7fffffff7fffffff7fffffff7fffffff;
        if (0 < iVar17) {
          puVar32 = (undefined1 *)0x0;
          uVar28 = 2;
          local_310 = (FNiagaraSystemInstance *)0x0;
          lVar35 = 0x20;
          local_2f0 = 0;
          local_2f8 = 0;
          local_300 = 0;
          do {
            uVar20 = 0;
            if ((int)uVar34 < *(int *)(lVar3 + 0x3b8)) {
              uVar20 = ~uVar34 >> 0x1f;
            }
            if (uVar20 == 0) {
              local_348 = (longlong)(int)uVar34;
              local_340 = (longlong)*(int *)(lVar3 + 0x3b8);
              bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar16) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
            }
            uVar20 = *(uint *)(puVar32 + *(longlong *)(lVar3 + 0x3b0));
            lVar29 = (longlong)(int)uVar20;
            if (local_308->bIncludeIntermediateBones == false) {
              if ((lVar3 == 0) &&
                 (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValid()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                      ,0x458,L""), bVar16)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              uVar21 = 0;
              if ((int)uVar20 < *(int *)(lVar3 + 0x148)) {
                uVar21 = ~uVar20 >> 0x1f;
              }
              if ((uVar21 == 0) &&
                 (local_348 = lVar29, local_340 = (longlong)*(int *)(lVar3 + 0x148),
                 bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar16)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              if (*(int *)(*(longlong *)(lVar3 + 0x140) + 8 + lVar29 * 0x50) ==
                  *(int *)(*(longlong *)(lVar3 + 0x140) + 0x34 + lVar29 * 0x50)) goto LAB_14e9b0fcd;
            }
            else {
LAB_14e9b0fcd:
              if (((int)uVar20 < 0) ||
                 ((this->AssetArrays->ComponentRestTransformBuffer).ArrayNum <= (int)uVar20)) {
                local_338[0] = 0;
                `FNDIGeometryCollectionData::Update'::__l31::<lambda_1>::operator()(local_338);
              }
              pFVar4 = this->AssetArrays;
              iVar17 = (pFVar4->ElementIndexToTransformBufferMapping).ArrayNum;
              uVar21 = 0;
              if ((int)local_328 < iVar17) {
                uVar21 = ~local_328 >> 0x1f;
              }
              if ((uVar21 == 0) &&
                 (local_348 = (longlong)(int)local_328, local_340 = (longlong)iVar17,
                 bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar16)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              uVar33 = ~(uVar28 - 2) >> 0x1f;
              *(uint *)((pFVar4->ElementIndexToTransformBufferMapping).AllocatorInstance.Data +
                       local_300) = uVar20;
              local_330 = this->AssetArrays;
              iVar17 = (local_330->WorldInverseTransformBuffer).ArrayNum;
              uVar21 = 0;
              if ((int)(uVar28 - 2) < iVar17) {
                uVar21 = uVar33;
              }
              if (uVar21 == 0) {
                local_348 = (longlong)(int)(uVar28 - 2);
                local_340 = (longlong)iVar17;
                bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar16) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
              }
              pFVar5 = (local_330->WorldInverseTransformBuffer).AllocatorInstance.Data +
                       lVar35 + -0x20;
              uVar13 = *(undefined8 *)pFVar5;
              uVar14 = *(undefined8 *)(pFVar5 + 8);
              local_330 = this->AssetArrays;
              iVar17 = (local_330->PrevWorldInverseTransformBuffer).ArrayNum;
              uVar21 = 0;
              if ((int)(uVar28 - 2) < iVar17) {
                uVar21 = uVar33;
              }
              if (uVar21 == 0) {
                local_348 = (longlong)(int)(uVar28 - 2);
                local_340 = (longlong)iVar17;
                bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar16) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
              }
              uVar33 = ~(uVar28 - 1) >> 0x1f;
              pFVar5 = (local_330->PrevWorldInverseTransformBuffer).AllocatorInstance.Data +
                       lVar35 + -0x20;
              *(undefined8 *)pFVar5 = uVar13;
              *(undefined8 *)(pFVar5 + 8) = uVar14;
              local_330 = this->AssetArrays;
              iVar17 = (local_330->WorldInverseTransformBuffer).ArrayNum;
              uVar21 = 0;
              if ((int)(uVar28 - 1) < iVar17) {
                uVar21 = uVar33;
              }
              if (uVar21 == 0) {
                local_348 = (longlong)(int)(uVar28 - 1);
                local_340 = (longlong)iVar17;
                bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar16) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
              }
              pFVar5 = (local_330->WorldInverseTransformBuffer).AllocatorInstance.Data +
                       lVar35 + -0x10;
              uVar13 = *(undefined8 *)pFVar5;
              uVar14 = *(undefined8 *)(pFVar5 + 8);
              local_330 = this->AssetArrays;
              iVar17 = (local_330->PrevWorldInverseTransformBuffer).ArrayNum;
              uVar21 = 0;
              if ((int)(uVar28 - 1) < iVar17) {
                uVar21 = uVar33;
              }
              if (uVar21 == 0) {
                local_348 = (longlong)(int)(uVar28 - 1);
                local_340 = (longlong)iVar17;
                bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar16) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
              }
              pFVar5 = (local_330->PrevWorldInverseTransformBuffer).AllocatorInstance.Data +
                       lVar35 + -0x10;
              *(undefined8 *)pFVar5 = uVar13;
              *(undefined8 *)(pFVar5 + 8) = uVar14;
              local_330 = this->AssetArrays;
              iVar17 = (local_330->WorldInverseTransformBuffer).ArrayNum;
              uVar21 = 0;
              if ((int)uVar28 < iVar17) {
                uVar21 = ~uVar28 >> 0x1f;
              }
              if (uVar21 == 0) {
                local_348 = (longlong)(int)uVar28;
                local_340 = (longlong)iVar17;
                bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar16) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
              }
              pFVar5 = (local_330->WorldInverseTransformBuffer).AllocatorInstance.Data + lVar35;
              uVar13 = *(undefined8 *)pFVar5;
              uVar14 = *(undefined8 *)(pFVar5 + 8);
              local_330 = this->AssetArrays;
              iVar17 = (local_330->PrevWorldInverseTransformBuffer).ArrayNum;
              uVar21 = 0;
              if ((int)uVar28 < iVar17) {
                uVar21 = ~uVar28 >> 0x1f;
              }
              if (uVar21 == 0) {
                local_348 = (longlong)(int)uVar28;
                local_340 = (longlong)iVar17;
                bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar16) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
              }
              pFVar5 = (local_330->PrevWorldInverseTransformBuffer).AllocatorInstance.Data + lVar35;
              *(undefined8 *)pFVar5 = uVar13;
              *(undefined8 *)(pFVar5 + 8) = uVar14;
              pFVar4 = this->AssetArrays;
              iVar17 = (pFVar4->WorldTransformBuffer).ArrayNum;
              uVar21 = 0;
              if ((int)(uVar28 - 2) < iVar17) {
                uVar21 = ~(uVar28 - 2) >> 0x1f;
              }
              if (uVar21 == 0) {
                local_348 = (longlong)(int)(uVar28 - 2);
                local_340 = (longlong)iVar17;
                bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar16) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
              }
              pFVar6 = this->AssetArrays;
              pFVar5 = (pFVar4->WorldTransformBuffer).AllocatorInstance.Data + lVar35 + -0x20;
              uVar13 = *(undefined8 *)pFVar5;
              uVar14 = *(undefined8 *)(pFVar5 + 8);
              iVar17 = (pFVar6->PrevWorldTransformBuffer).ArrayNum;
              uVar21 = 0;
              if ((int)(uVar28 - 2) < iVar17) {
                uVar21 = ~(uVar28 - 2) >> 0x1f;
              }
              if (uVar21 == 0) {
                local_348 = (longlong)(int)(uVar28 - 2);
                local_340 = (longlong)iVar17;
                bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar16) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
              }
              pFVar5 = (pFVar6->PrevWorldTransformBuffer).AllocatorInstance.Data + lVar35 + -0x20;
              *(undefined8 *)pFVar5 = uVar13;
              *(undefined8 *)(pFVar5 + 8) = uVar14;
              pFVar4 = this->AssetArrays;
              iVar17 = (pFVar4->WorldTransformBuffer).ArrayNum;
              uVar21 = 0;
              if ((int)(uVar28 - 1) < iVar17) {
                uVar21 = ~(uVar28 - 1) >> 0x1f;
              }
              if (uVar21 == 0) {
                local_348 = (longlong)(int)(uVar28 - 1);
                local_340 = (longlong)iVar17;
                bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar16) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
              }
              pFVar6 = this->AssetArrays;
              pFVar5 = (pFVar4->WorldTransformBuffer).AllocatorInstance.Data + lVar35 + -0x10;
              uVar13 = *(undefined8 *)pFVar5;
              uVar14 = *(undefined8 *)(pFVar5 + 8);
              iVar17 = (pFVar6->PrevWorldTransformBuffer).ArrayNum;
              uVar21 = 0;
              if ((int)(uVar28 - 1) < iVar17) {
                uVar21 = ~(uVar28 - 1) >> 0x1f;
              }
              if (uVar21 == 0) {
                local_348 = (longlong)(int)(uVar28 - 1);
                local_340 = (longlong)iVar17;
                bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar16) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
              }
              pFVar5 = (pFVar6->PrevWorldTransformBuffer).AllocatorInstance.Data + lVar35 + -0x10;
              *(undefined8 *)pFVar5 = uVar13;
              *(undefined8 *)(pFVar5 + 8) = uVar14;
              pFVar4 = this->AssetArrays;
              iVar17 = (pFVar4->WorldTransformBuffer).ArrayNum;
              uVar21 = 0;
              if ((int)uVar28 < iVar17) {
                uVar21 = ~uVar28 >> 0x1f;
              }
              if (uVar21 == 0) {
                local_348 = (longlong)(int)uVar28;
                local_340 = (longlong)iVar17;
                bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar16) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
              }
              pFVar6 = this->AssetArrays;
              pFVar5 = (pFVar4->WorldTransformBuffer).AllocatorInstance.Data + lVar35;
              uVar13 = *(undefined8 *)pFVar5;
              uVar14 = *(undefined8 *)(pFVar5 + 8);
              iVar17 = (pFVar6->PrevWorldTransformBuffer).ArrayNum;
              uVar21 = 0;
              if ((int)uVar28 < iVar17) {
                uVar21 = ~uVar28 >> 0x1f;
              }
              if (uVar21 == 0) {
                local_348 = (longlong)(int)uVar28;
                local_340 = (longlong)iVar17;
                bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar16) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
              }
              pFVar5 = (pFVar6->PrevWorldTransformBuffer).AllocatorInstance.Data + lVar35;
              *(undefined8 *)pFVar5 = uVar13;
              *(undefined8 *)(pFVar5 + 8) = uVar14;
              uVar21 = 0;
              if ((int)uVar34 < *(int *)(lVar3 + 0x3d8)) {
                uVar21 = ~uVar34 >> 0x1f;
              }
              if (uVar21 == 0) {
                local_348 = (longlong)(int)uVar34;
                local_340 = (longlong)*(int *)(lVar3 + 0x3d8);
                bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar16) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
              }
              lVar29 = *(longlong *)(lVar3 + 0x3d0);
              auVar45 = *(undefined1 (*) [16])(lVar29 + 0x10 + local_2f0);
              local_268.Translation.ZW.m128d_f64[0] = *(double *)(lVar29 + 0x30 + local_2f0);
              pdVar2 = (double *)(lVar29 + 0x20 + local_2f0);
              local_1a8.Rotation.XY.m128d_f64[0] =
                   (double)GlobalVectorConstants::Float0001.m128_f32[0];
              local_1a8.Rotation.XY.m128d_f64[1] =
                   (double)GlobalVectorConstants::Float0001.m128_f32[1];
              local_1a8.Rotation.ZW.m128d_f64[0] =
                   (double)GlobalVectorConstants::Float0001.m128_f32[2];
              local_1a8.Rotation.ZW.m128d_f64[1] =
                   (double)GlobalVectorConstants::Float0001.m128_f32[3];
              auVar12._4_8_ = GlobalVectorConstants::Float0001.m128_u64[1];
              auVar12._0_4_ = auVar45._4_4_;
              auVar75._0_8_ = auVar12._0_8_ << 0x20;
              auVar75._8_4_ = auVar45._8_4_;
              auVar75._12_4_ = auVar45._12_4_;
              local_1a8.Translation.XY.m128d_f64[0] =
                   (auVar75._8_8_ + *(double *)(lVar29 + local_2f0)) * dVar10;
              local_1a8.Translation.XY.m128d_f64[1] =
                   (*pdVar2 + ((double *)(lVar29 + local_2f0))[1]) * dVar10;
              local_1a8.Translation.ZW.m128d_f64[0] = (pdVar2[1] + auVar45._0_8_) * dVar10;
              local_1a8.Scale3D.XY.m128d_f64[0] =
                   (double)GlobalVectorConstants::Float1110.m128_f32[0];
              local_1a8.Scale3D.XY.m128d_f64[1] =
                   (double)GlobalVectorConstants::Float1110.m128_f32[1];
              local_1a8.Scale3D.ZW.m128d_f64[0] =
                   (double)GlobalVectorConstants::Float1110.m128_f32[2];
              local_1a8.Scale3D.ZW.m128d_f64[1] =
                   (double)GlobalVectorConstants::Float1110.m128_f32[3];
              local_1a8.Translation.ZW.m128d_f64[1] = 0.0;
              pTVar26 = FResolvedNiagaraGeometryCollection::GetComponentSpaceTransform
                                  (&this->ResolvedSource,&local_148,uVar20);
              local_208.Rotation.XY.m128d_f64[0] =
                   (double)GlobalVectorConstants::Float0001.m128_f32[0];
              local_208.Rotation.XY.m128d_f64[1] =
                   (double)GlobalVectorConstants::Float0001.m128_f32[1];
              local_208.Rotation.ZW.m128d_f64[0] =
                   (double)GlobalVectorConstants::Float0001.m128_f32[2];
              local_208.Rotation.ZW.m128d_f64[1] =
                   (double)GlobalVectorConstants::Float0001.m128_f32[3];
              local_208.Translation.XY.m128d_f64[0] =
                   (double)GlobalVectorConstants::FloatZero.m128_f32[0];
              local_208.Translation.XY.m128d_f64[1] =
                   (double)GlobalVectorConstants::FloatZero.m128_f32[1];
              local_208.Translation.ZW.m128d_f64[0] =
                   (double)GlobalVectorConstants::FloatZero.m128_f32[2];
              local_208.Translation.ZW.m128d_f64[1] =
                   (double)GlobalVectorConstants::FloatZero.m128_f32[3];
              local_208.Scale3D.XY.m128d_f64[0] =
                   (double)GlobalVectorConstants::Float1110.m128_f32[0];
              local_208.Scale3D.XY.m128d_f64[1] =
                   (double)GlobalVectorConstants::Float1110.m128_f32[1];
              local_208.Scale3D.ZW.m128d_f64[0] =
                   (double)GlobalVectorConstants::Float1110.m128_f32[2];
              local_208.Scale3D.ZW.m128d_f64[1] =
                   (double)GlobalVectorConstants::Float1110.m128_f32[3];
              UE::Math::TTransform<double>::Multiply(&local_208,&local_1a8,pTVar26);
              local_268.Rotation.XY.m128d_f64[0] =
                   (double)GlobalVectorConstants::Float0001.m128_f32[0];
              local_268.Rotation.XY.m128d_f64[1] =
                   (double)GlobalVectorConstants::Float0001.m128_f32[1];
              local_268.Rotation.ZW.m128d_f64[0] =
                   (double)GlobalVectorConstants::Float0001.m128_f32[2];
              local_268.Rotation.ZW.m128d_f64[1] =
                   (double)GlobalVectorConstants::Float0001.m128_f32[3];
              local_268.Translation.XY.m128d_f64[0] =
                   (double)GlobalVectorConstants::FloatZero.m128_f32[0];
              local_268.Translation.XY.m128d_f64[1] =
                   (double)GlobalVectorConstants::FloatZero.m128_f32[1];
              local_268.Translation.ZW.m128d_f64[0] =
                   (double)GlobalVectorConstants::FloatZero.m128_f32[2];
              local_268.Translation.ZW.m128d_f64[1] =
                   (double)GlobalVectorConstants::FloatZero.m128_f32[3];
              local_268.Scale3D.XY.m128d_f64[0] =
                   (double)GlobalVectorConstants::Float1110.m128_f32[0];
              local_268.Scale3D.XY.m128d_f64[1] =
                   (double)GlobalVectorConstants::Float1110.m128_f32[1];
              local_268.Scale3D.ZW.m128d_f64[0] =
                   (double)GlobalVectorConstants::Float1110.m128_f32[2];
              local_268.Scale3D.ZW.m128d_f64[1] =
                   (double)GlobalVectorConstants::Float1110.m128_f32[3];
              UE::Math::TTransform<double>::Multiply(&local_268,&local_208,&this->RootTransform);
              fVar56 = (float)local_268.Rotation.XY.m128d_f64[0];
              fVar58 = (float)local_268.Rotation.XY.m128d_f64[1];
              pFVar4 = this->AssetArrays;
              iVar17 = (pFVar4->WorldTransformBuffer).ArrayNum;
              auVar72._0_4_ = (float)local_268.Scale3D.XY.m128d_f64[0];
              auVar72._4_4_ = (float)local_268.Scale3D.XY.m128d_f64[1];
              uVar20 = 0;
              if ((int)(uVar28 - 2) < iVar17) {
                uVar20 = ~(uVar28 - 2) >> 0x1f;
              }
              fVar36 = (float)local_268.Rotation.ZW.m128d_f64[0];
              fVar40 = (float)local_268.Rotation.ZW.m128d_f64[1];
              fVar66 = (float)local_268.Translation.XY.m128d_f64[0];
              fVar68 = (float)local_268.Translation.XY.m128d_f64[1];
              fVar47 = fVar58 + fVar58;
              fVar48 = fVar36 + fVar36;
              fVar37 = (float)local_268.Translation.ZW.m128d_f64[0];
              fVar41 = (float)local_268.Translation.ZW.m128d_f64[1];
              fVar50 = fVar56 * (fVar56 + fVar56);
              auVar74._4_4_ = fVar68;
              auVar74._0_4_ = fVar66;
              auVar74._8_4_ = fVar37;
              auVar74._12_4_ = fVar41;
              fVar38 = (float)local_268.Scale3D.ZW.m128d_f64[0];
              fVar42 = (float)local_268.Scale3D.ZW.m128d_f64[1];
              auVar72._12_4_ = fVar42;
              auVar72._8_4_ = fVar38;
              auVar75 = blendps(auVar74,(undefined1  [16])GlobalVectorConstants::FloatOne,8);
              fVar43 = fVar40 * (fVar56 + fVar56);
              auVar44._0_4_ =
                   (GlobalVectorConstants::FloatOne.m128_f32[0] -
                   (fVar36 * fVar48 + fVar58 * fVar47)) * auVar72._0_4_;
              auVar44._4_4_ =
                   (GlobalVectorConstants::FloatOne.m128_f32[1] - (fVar36 * fVar48 + fVar50)) *
                   auVar72._4_4_;
              auVar44._8_4_ =
                   (GlobalVectorConstants::FloatOne.m128_f32[2] - (fVar58 * fVar47 + fVar50)) *
                   fVar38;
              auVar44._12_4_ =
                   (GlobalVectorConstants::FloatOne.m128_f32[3] - (fVar50 + fVar50)) * fVar42;
              auVar45 = insertps(auVar44,auVar44,8);
              if (uVar20 == 0) {
                local_348 = (longlong)(int)(uVar28 - 2);
                local_340 = (longlong)iVar17;
                bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar16) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
              }
              pFVar7 = (pFVar4->WorldTransformBuffer).AllocatorInstance.Data;
              pFVar5 = pFVar7 + lVar35 + -0x20;
              *(int *)pFVar5 = auVar45._0_4_;
              *(float *)(pFVar5 + 4) = auVar72._4_4_ * (fVar56 * fVar47 - fVar40 * fVar48);
              *(float *)(pFVar5 + 8) = (fVar40 * fVar47 + fVar56 * fVar48) * fVar38;
              *(int *)(pFVar5 + 0xc) = auVar75._0_4_;
              pFVar5 = pFVar7 + lVar35 + -0x10;
              *(float *)pFVar5 = (fVar40 * fVar48 + fVar56 * fVar47) * auVar72._0_4_;
              *(int *)(pFVar5 + 4) = auVar45._4_4_;
              *(float *)(pFVar5 + 8) = fVar38 * (fVar58 * fVar48 - fVar43);
              *(int *)(pFVar5 + 0xc) = auVar75._4_4_;
              pFVar5 = pFVar7 + lVar35;
              *(float *)pFVar5 = auVar72._0_4_ * (fVar56 * fVar48 - fVar40 * fVar47);
              *(float *)(pFVar5 + 4) = (fVar43 + fVar58 * fVar48) * auVar72._4_4_;
              *(int *)(pFVar5 + 8) = auVar45._8_4_;
              *(int *)(pFVar5 + 0xc) = auVar75._8_4_;
              auVar39._4_4_ =
                   -(uint)(GlobalVectorConstants::SmallNumber.m128_f32[1] <
                          (float)(uVar18 & (uint)auVar72._4_4_));
              auVar39._0_4_ =
                   -(uint)(GlobalVectorConstants::SmallNumber.m128_f32[0] <
                          (float)(uVar27 & (uint)auVar72._0_4_));
              auVar39._8_4_ =
                   -(uint)(GlobalVectorConstants::SmallNumber.m128_f32[2] <
                          (float)(uVar19 & (uint)fVar38));
              auVar39._12_4_ =
                   -(uint)(GlobalVectorConstants::SmallNumber.m128_f32[3] <
                          (float)(uVar15 & (uint)fVar42));
              iVar17 = movmskps((int)pFVar7,auVar39);
              if (iVar17 == 0) {
                fVar56 = UE::Math::TTransform<float>::Identity.Rotation.m128_f32[0];
                fVar58 = UE::Math::TTransform<float>::Identity.Rotation.m128_f32[1];
                fVar36 = UE::Math::TTransform<float>::Identity.Rotation.m128_f32[2];
                fVar40 = UE::Math::TTransform<float>::Identity.Rotation.m128_f32[3];
                _Var54 = UE::Math::TTransform<float>::Identity.Scale3D;
                _Var64 = UE::Math::TTransform<float>::Identity.Translation;
              }
              else {
                fVar56 = fVar56 * GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[0];
                fVar58 = fVar58 * GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[1];
                fVar36 = fVar36 * GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[2];
                fVar40 = fVar40 * GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[3];
                auVar75 = blendps(auVar72,(undefined1  [16])GlobalVectorConstants::FloatOne,8);
                auVar45 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar75);
                auVar53._0_4_ =
                     ~-(uint)((float)(uVar27 & auVar75._0_4_) <=
                             GlobalVectorConstants::SmallNumber.m128_f32[0]) & auVar45._0_4_;
                auVar53._4_4_ =
                     ~-(uint)((float)(uVar18 & auVar75._4_4_) <=
                             GlobalVectorConstants::SmallNumber.m128_f32[1]) & auVar45._4_4_;
                auVar53._8_4_ =
                     ~-(uint)((float)(uVar19 & auVar75._8_4_) <=
                             GlobalVectorConstants::SmallNumber.m128_f32[2]) & auVar45._8_4_;
                auVar53._12_4_ =
                     ~-(uint)((float)(uVar15 & auVar75._12_4_) <=
                             GlobalVectorConstants::SmallNumber.m128_f32[3]) & auVar45._12_4_;
                _Var54 = (__m128)insertps(auVar53,auVar53,8);
                fVar66 = fVar66 * _Var54.m128_f32[0];
                fVar68 = fVar68 * _Var54.m128_f32[1];
                fVar37 = fVar37 * _Var54.m128_f32[2];
                fVar41 = fVar41 * _Var54.m128_f32[3];
                fVar38 = fVar68 * fVar56 - fVar58 * fVar66;
                fVar42 = fVar37 * fVar58 - fVar36 * fVar68;
                fVar43 = fVar66 * fVar36 - fVar56 * fVar37;
                fVar47 = fVar41 * fVar40 - fVar40 * fVar41;
                fVar42 = fVar42 + fVar42;
                fVar43 = fVar43 + fVar43;
                fVar38 = fVar38 + fVar38;
                fVar47 = fVar47 + fVar47;
                auVar63._0_4_ =
                     0.0 - (fVar40 * fVar42 + fVar66 + (fVar38 * fVar58 - fVar43 * fVar36));
                auVar63._4_4_ =
                     0.0 - (fVar40 * fVar43 + fVar68 + (fVar42 * fVar36 - fVar38 * fVar56));
                auVar63._8_4_ =
                     0.0 - (fVar40 * fVar38 + fVar37 + (fVar43 * fVar56 - fVar42 * fVar58));
                auVar63._12_4_ =
                     0.0 - (fVar40 * fVar47 + fVar41 + (fVar47 * fVar40 - fVar47 * fVar40));
                _Var64 = (__m128)insertps(auVar63,auVar63,8);
              }
              pFVar4 = this->AssetArrays;
              fVar37 = fVar58 + fVar58;
              fVar38 = fVar36 + fVar36;
              iVar17 = (pFVar4->WorldInverseTransformBuffer).ArrayNum;
              fVar42 = _Var54.m128_f32[0];
              fVar43 = _Var54.m128_f32[1];
              fVar47 = _Var54.m128_f32[2];
              fVar41 = fVar56 * (fVar56 + fVar56);
              uVar20 = 0;
              if ((int)(uVar28 - 2) < iVar17) {
                uVar20 = ~(uVar28 - 2) >> 0x1f;
              }
              fVar48 = (fVar56 + fVar56) * fVar40;
              auVar75 = blendps((undefined1  [16])_Var64,
                                (undefined1  [16])GlobalVectorConstants::FloatOne,8);
              auVar46._0_4_ =
                   (GlobalVectorConstants::FloatOne.m128_f32[0] -
                   (fVar36 * fVar38 + fVar58 * fVar37)) * fVar42;
              auVar46._4_4_ =
                   (GlobalVectorConstants::FloatOne.m128_f32[1] - (fVar36 * fVar38 + fVar41)) *
                   fVar43;
              auVar46._8_4_ =
                   (GlobalVectorConstants::FloatOne.m128_f32[2] - (fVar58 * fVar37 + fVar41)) *
                   fVar47;
              auVar46._12_4_ =
                   (GlobalVectorConstants::FloatOne.m128_f32[3] - (fVar41 + fVar41)) *
                   _Var54.m128_f32[3];
              auVar45 = insertps(auVar46,auVar46,8);
              if (uVar20 == 0) {
                local_348 = local_2f8;
                local_340 = (longlong)iVar17;
                bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar16) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
              }
              pFVar5 = (pFVar4->WorldInverseTransformBuffer).AllocatorInstance.Data;
              local_328 = local_328 + 1;
              local_300 = local_300 + 4;
              uVar28 = uVar28 + 3;
              local_2f8 = local_2f8 + 3;
              pFVar7 = pFVar5 + lVar35 + -0x20;
              *(int *)pFVar7 = auVar45._0_4_;
              *(float *)(pFVar7 + 4) = fVar43 * (fVar37 * fVar56 - fVar38 * fVar40);
              *(float *)(pFVar7 + 8) = (fVar37 * fVar40 + fVar38 * fVar56) * fVar47;
              *(int *)(pFVar7 + 0xc) = auVar75._0_4_;
              pFVar7 = pFVar5 + lVar35 + -0x10;
              *(float *)pFVar7 = (fVar38 * fVar40 + fVar37 * fVar56) * fVar42;
              *(int *)(pFVar7 + 4) = auVar45._4_4_;
              *(float *)(pFVar7 + 8) = fVar47 * (fVar38 * fVar58 - fVar48);
              *(int *)(pFVar7 + 0xc) = auVar75._4_4_;
              pFVar5 = pFVar5 + lVar35;
              *(float *)pFVar5 = fVar42 * (fVar38 * fVar56 - fVar37 * fVar40);
              *(float *)(pFVar5 + 4) = (fVar48 + fVar38 * fVar58) * fVar43;
              *(int *)(pFVar5 + 8) = auVar45._8_4_;
              *(int *)(pFVar5 + 0xc) = auVar75._8_4_;
              lVar35 = lVar35 + 0x30;
            }
            puVar32 = &local_310->field_0x4;
            local_2f0 = local_2f0 + 0x38;
            uVar34 = uVar34 + 1;
            local_310 = (FNiagaraSystemInstance *)puVar32;
            iVar17 = (**(code **)(*(longlong *)(lVar3 + 0x3c0) + 0x60))((longlong *)(lVar3 + 0x3c0))
            ;
          } while ((int)uVar34 < iVar17);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_2e8);
      }
    }
  }
  return;
}

// operator() @ 15059b610

bool __thiscall `FNDIGeometryCollectionData::Update'::__l31::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_694469131994398469>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_694469131994398469>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

