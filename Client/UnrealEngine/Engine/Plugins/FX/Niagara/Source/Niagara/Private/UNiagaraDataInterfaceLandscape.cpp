// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 26

// StaticClass @ 14915c020

UClass * __cdecl UNiagaraDataInterfaceLandscape::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceLandscape.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataInterfaceLandscape",
               &Z_Registration_Info_UClass_UNiagaraDataInterfaceLandscape.InnerSingleton,
               StaticRegisterNativesUNiagaraDataInterfaceLandscape,0x60,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraDataInterfaceLandscape>,
               InternalVTableHelperCtorCaller<UNiagaraDataInterfaceLandscape>,local_res8,
               UNiagaraDataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceLandscape.InnerSingleton;
}

// UNiagaraDataInterfaceLandscape @ 14916a270

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UNiagaraDataInterfaceLandscape * __thiscall
UNiagaraDataInterfaceLandscape::UNiagaraDataInterfaceLandscape
          (UNiagaraDataInterfaceLandscape *this,FVTableHelper *param_1)

{
  UNiagaraDataInterface::UNiagaraDataInterface((UNiagaraDataInterface *)this,param_1);
  this->bVirtualTexturesSupported = true;
  this->_padding_ = (longlong)&___7UNiagaraDataInterfaceLandscape__6B_;
  (this->SourceLandscape).field0_0x0.DebugPtr = (AActor *)0x0;
  this->SourceMode = Default;
  (this->PhysicalMaterials).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PhysicalMaterials).ArrayNum = 0;
  (this->PhysicalMaterials).ArrayMax = 0;
  return this;
}

// UNiagaraDataInterfaceLandscape @ 14916a2b0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UNiagaraDataInterfaceLandscape * __thiscall
UNiagaraDataInterfaceLandscape::UNiagaraDataInterfaceLandscape
          (UNiagaraDataInterfaceLandscape *this,FObjectInitializer *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  UNiagaraDataInterface::UNiagaraDataInterface((UNiagaraDataInterface *)this,param_1);
  puVar2 = (undefined8 *)0x0;
  this->SourceMode = Default;
  this->bVirtualTexturesSupported = true;
  this->_padding_ = (longlong)&___7UNiagaraDataInterfaceLandscape__6B_;
  (this->PhysicalMaterials).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PhysicalMaterials).ArrayNum = 0;
  (this->PhysicalMaterials).ArrayMax = 0;
  (this->SourceLandscape).field0_0x0.DebugPtr = (AActor *)0x0;
  puVar1 = ::operator_new(0x60);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[9] = 0;
    puVar1[0xb] = 0;
    *puVar1 = &___7FNiagaraDataInterfaceProxyLandscape__6B_;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[6] = 0;
    *(undefined4 *)(puVar1 + 7) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x3c) = 0x80;
    *(undefined4 *)(puVar1 + 8) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x44) = 0;
    puVar1[10] = 0;
    puVar2 = puVar1;
  }
  puVar1 = (undefined8 *)this->_padding_;
  if ((puVar1 != puVar2) && (this->_padding_ = (longlong)puVar2, puVar1 != (undefined8 *)0x0)) {
    (**(code **)*puVar1)(puVar1,1);
  }
  return this;
}

// ~UNiagaraDataInterfaceLandscape @ 14916b530

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UNiagaraDataInterfaceLandscape::~UNiagaraDataInterfaceLandscape
          (UNiagaraDataInterfaceLandscape *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UNiagaraDataInterfaceLandscape__6B_;
  pFVar1 = (this->PhysicalMaterials).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UNiagaraDataInterface::~UNiagaraDataInterface((UNiagaraDataInterface *)this);
  return;
}

// operator() @ 14916c600

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
`UNiagaraDataInterfaceLandscape::GetLandscape'::__l2::<lambda_1>::operator()
          (void *this,ALandscape *param_1)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  longlong *plVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  double *pdVar6;
  UWorld *pUVar7;
  code *pcVar8;
  longlong *plVar9;
  bool bVar10;
  undefined1 uVar11;
  UObject *pUVar12;
  UWorld *pUVar13;
  longlong lVar14;
  longlong lVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  TBitArray<FDefaultBitArrayAllocator> *pTVar19;
  double dVar20;
  double dVar21;
  undefined1 local_b8 [8];
  longlong *local_b0;
  int iStack_a8;
  uint uStack_a4;
  TBitArray<FDefaultBitArrayAllocator> *local_a0;
  undefined4 uStack_98;
  int iStack_94;
  int local_90;
  int iStack_8c;
  int iStack_88;
  undefined4 uStack_84;
  int local_80;
  UObject *local_78;
  longlong *local_70;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_68;
  undefined8 uStack_48;
  
  pUVar12 = FWeakObjectPtr::Get((FWeakObjectPtr *)(*(longlong *)this + 8));
  if (pUVar12 != (UObject *)0x0) {
    dVar21 = *(double *)&pUVar12[6].field_0x20 - *(double *)&pUVar12[7].field_0x10;
    pdVar6 = *(double **)((longlong)this + 8);
    dVar20 = *(double *)(pUVar12 + 7) - *(double *)&pUVar12[7].field_0x18;
    if ((((*pdVar6 <= *(double *)&pUVar12[6].field_0x20 + *(double *)&pUVar12[7].field_0x10) &&
         (dVar21 < pdVar6[3] || dVar21 == pdVar6[3])) &&
        (pdVar6[1] <= *(double *)(pUVar12 + 7) + *(double *)&pUVar12[7].field_0x18)) &&
       (dVar20 < pdVar6[4] || dVar20 == pdVar6[4])) {
      return true;
    }
  }
  pUVar7 = *(UWorld **)(*(longlong *)((longlong)this + 0x10) + 0x48);
  pUVar13 = AActor::GetWorld((AActor *)param_1);
  if ((pUVar13 == pUVar7) &&
     (lVar14 = (**(code **)(*(longlong *)&param_1->field_0x2c0 + 0x18))(), lVar14 != 0)) {
    iStack_a8 = 0;
    pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)(lVar14 + 0xb0);
    uStack_a4 = 1;
    iVar4 = *(int *)(lVar14 + 200);
    plVar2 = (longlong *)(lVar14 + 0xa0);
    local_90 = 0;
    iStack_94 = 0;
    if (iVar4 != 0) {
      pTVar19 = *(TBitArray<FDefaultBitArrayAllocator> **)(lVar14 + 0xc0);
      if (*(TBitArray<FDefaultBitArrayAllocator> **)(lVar14 + 0xc0) ==
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar19 = pTVar1;
      }
      uVar18 = *(uint *)(pTVar19->AllocatorInstance).InlineData;
      while (uVar18 == 0) {
        lVar15 = (longlong)iStack_a8;
        local_90 = local_90 + 0x20;
        iStack_a8 = iStack_a8 + 1;
        iStack_94 = iVar4;
        if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_a8) goto LAB_14916c76d;
        uVar18 = *(uint *)((pTVar19->AllocatorInstance).InlineData + lVar15 * 4 + 4);
      }
      uStack_a4 = -uVar18 & uVar18;
      uVar3 = (ulonglong)uStack_a4 * 2 + 1;
      lVar15 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar15 == 0; lVar15 = lVar15 + -1) {
        }
      }
      local_80 = (int)lVar15;
      iStack_94 = local_80 + -1 + local_90;
      if (iVar4 < iStack_94) {
        iStack_94 = iVar4;
      }
    }
LAB_14916c76d:
    iStack_88 = *(int *)(lVar14 + 0xa8) - *(int *)(lVar14 + 0xd4);
    uVar18 = *(uint *)(lVar14 + 200);
    uStack_98 = 0xffffffff;
    uVar17 = uVar18 & 0xffffffe0;
    TStack_68._padding_ = CONCAT44(uStack_a4,iStack_a8);
    TStack_68.CurrentBitIndex = iStack_94;
    TStack_68.UnvisitedBitMask = 0xffffffff;
    iVar16 = (int)uVar18 >> 5;
    TStack_68._28_4_ = iStack_94;
    TStack_68.BaseBitIndex = local_90;
    uStack_48 = CONCAT44(uStack_84,iStack_88);
    local_b0 = plVar2;
    local_a0 = pTVar1;
    iStack_8c = iStack_94;
    local_70 = plVar2;
    TStack_68.Array = pTVar1;
    if ((((int)uVar18 < 0) || (iVar4 < (int)uVar18)) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar10)) {
      pcVar8 = (code *)swi(3);
      uVar11 = (*pcVar8)();
      return (bool)uVar11;
    }
    uVar5 = *(uint *)(lVar14 + 200);
    if (uVar18 != uVar5) {
      pTVar19 = *(TBitArray<FDefaultBitArrayAllocator> **)(lVar14 + 0xc0);
      if (*(TBitArray<FDefaultBitArrayAllocator> **)(lVar14 + 0xc0) ==
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar19 = pTVar1;
      }
      uVar18 = -1 << ((byte)uVar18 & 0x1f) &
               *(uint *)((pTVar19->AllocatorInstance).InlineData + (longlong)iVar16 * 4);
      while (uVar18 == 0) {
        lVar14 = (longlong)iVar16;
        uVar17 = uVar17 + 0x20;
        iVar16 = iVar16 + 1;
        uVar18 = uVar5;
        if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar16)
        goto LAB_14916c871;
        uVar18 = *(uint *)((pTVar19->AllocatorInstance).InlineData + lVar14 * 4 + 4);
      }
      uVar3 = (ulonglong)(-uVar18 & uVar18) * 2 + 1;
      lVar14 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      uVar18 = (int)lVar14 + -1 + uVar17;
      if ((int)uVar5 < (int)uVar18) {
        uVar18 = uVar5;
      }
    }
LAB_14916c871:
    while( true ) {
      plVar9 = local_70;
      if ((int)local_70[1] - *(int *)((longlong)local_70 + 0x34) != (int)uStack_48) {
        `TSparseArray<TSparseSetElement<TTuple<UE::Math::TIntPoint<int>,ULandscapeHeightfieldCollisionComponent_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_b8);
      }
      if (((TStack_68.CurrentBitIndex == uVar18) && (TStack_68.Array == pTVar1)) &&
         (plVar9 == plVar2)) break;
      pdVar6 = *(double **)((longlong)this + 8);
      local_78 = *(UObject **)(*plVar9 + 8 + (longlong)TStack_68.CurrentBitIndex * 0x18);
      dVar21 = *(double *)&local_78[6].field_0x20 - *(double *)&local_78[7].field_0x10;
      dVar20 = *(double *)(local_78 + 7) - *(double *)&local_78[7].field_0x18;
      if (((*pdVar6 <= *(double *)&local_78[6].field_0x20 + *(double *)&local_78[7].field_0x10) &&
          (dVar21 < pdVar6[3] || dVar21 == pdVar6[3])) &&
         ((pdVar6[1] <= *(double *)(local_78 + 7) + *(double *)&local_78[7].field_0x18 &&
          (dVar20 < pdVar6[4] || dVar20 == pdVar6[4])))) {
        lVar14 = *(longlong *)this;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_78 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(local_78);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(lVar14 + 8),(FObjectPtr)&local_78);
        return true;
      }
      TStack_68.UnvisitedBitMask = TStack_68.UnvisitedBitMask & ~TStack_68._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_68);
    }
  }
  return false;
}

// operator() @ 14916d050

void __thiscall
`UNiagaraDataInterfaceLandscape::InitPerInstanceData'::__l2::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  
  lVar1 = *(longlong *)this;
  uVar2 = *(ulonglong *)((longlong)this + 8);
  if (*(int *)(lVar1 + 0x18) != *(int *)(lVar1 + 0x44)) {
    lVar6 = *(longlong *)(lVar1 + 0x50);
    if (*(longlong *)(lVar1 + 0x50) == 0) {
      lVar6 = lVar1 + 0x48;
    }
    iVar5 = *(int *)(lVar6 + ((uVar2 >> 0x20) * 0x17 + uVar2 &
                             (ulonglong)(*(int *)(lVar1 + 0x58) - 1)) * 4);
    if (iVar5 != -1) {
      do {
        if (*(ulonglong *)((longlong)iVar5 * 0x450 + *(longlong *)(lVar1 + 0x10)) == uVar2) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("!RT_Proxy->SystemInstancesToProxyData_RT.Contains(InstanceID)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceLandscape.cpp"
                             ,0x6c0,L"");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          break;
        }
        iVar5 = *(int *)((longlong)iVar5 * 0x450 + 0x440 + *(longlong *)(lVar1 + 0x10));
      } while (iVar5 != -1);
    }
  }
  TMapBase<unsigned___int64,FNDILandscapeData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDILandscapeData_RenderThread,0>_>
  ::Emplace<unsigned___int64_const_&>
            ((TMapBase<unsigned___int64,FNDILandscapeData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDILandscapeData_RenderThread,0>_>
              *)(*(longlong *)this + 0x10),(ulong64 *)((longlong)this + 8));
  return;
}

// operator() @ 14916e720

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
`UNiagaraDataInterfaceLandscape::DrawDebugHud'::__l29::<lambda_2>::operator()
          (void *this,ALandscapeProxy *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong *plVar3;
  ulonglong uVar4;
  int iVar5;
  uint uVar6;
  longlong *plVar7;
  FScriptContainerElement *pFVar8;
  ALandscapeProxy *local_res10;
  undefined1 local_res18 [8];
  ALandscapeProxy *local_res20;
  
  pFVar8 = (param_1->CollisionComponents).AllocatorInstance.Data;
  iVar2 = (param_1->CollisionComponents).ArrayNum;
  pFVar1 = pFVar8 + (longlong)iVar2 * 8;
  local_res10 = param_1;
LAB_14916e747:
  do {
    if ((param_1->CollisionComponents).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<ULandscapeHeightfieldCollisionComponent>,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (pFVar8 == pFVar1) {
      return true;
    }
    plVar3 = *(longlong **)this;
    uVar4 = *(ulonglong *)pFVar8;
    uVar6 = ((uint)(uVar4 >> 0x14) & 0xffff ^ (uint)(uVar4 >> 4)) * -0x7a143595;
    uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
    if ((int)plVar3[1] != *(int *)((longlong)plVar3 + 0x34)) {
      plVar7 = plVar3 + 7;
      if ((longlong *)plVar3[8] != (longlong *)0x0) {
        plVar7 = (longlong *)plVar3[8];
      }
      iVar5 = *(int *)((longlong)plVar7 +
                      (ulonglong)((int)plVar3[9] - 1U & (uVar6 >> 0x10 ^ uVar6)) * 4);
      if (iVar5 != -1) {
        do {
          if (*(ulonglong *)(*plVar3 + (longlong)iVar5 * 0x10) == uVar4) {
            TSet<ALandscapeProxy_const_*,DefaultKeyFuncs<ALandscapeProxy_const_*,0>,FDefaultSetAllocator>
            ::Emplace<ALandscapeProxy_const_*_const_&>
                      (*(TSet<ALandscapeProxy_const_*,DefaultKeyFuncs<ALandscapeProxy_const_*,0>,FDefaultSetAllocator>
                         **)((longlong)this + 8),&local_res20,(bool *)&local_res10);
            goto LAB_14916e7f7;
          }
          iVar5 = *(int *)(*plVar3 + 8 + (longlong)iVar5 * 0x10);
        } while (iVar5 != -1);
        pFVar8 = pFVar8 + 8;
        goto LAB_14916e747;
      }
    }
LAB_14916e7f7:
    pFVar8 = pFVar8 + 8;
  } while( true );
}

// ApplyLandscape @ 149170270

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __thiscall
UNiagaraDataInterfaceLandscape::ApplyLandscape
          (UNiagaraDataInterfaceLandscape *this,FNiagaraSystemInstance *param_1,
          FNDILandscapeData_GameThread *param_2)

{
  int *piVar1;
  atomic<int> *paVar2;
  atomic<int> aVar3;
  ERuntimeVirtualTextureMaterialType EVar4;
  int iVar5;
  URuntimeVirtualTexture *this_00;
  code *pcVar6;
  TVector2<double>_u_0 TVar7;
  TVector2<double>_u_0 TVar8;
  FNDI_Landscape_SharedResource *pFVar9;
  bool bVar10;
  ALandscape *pAVar11;
  UObject *pUVar12;
  FStaticShaderPlatform FVar13;
  uint uVar14;
  uint uVar15;
  longlong lVar16;
  FWeakObjectPtr local_res18;
  undefined8 local_res20;
  ulonglong in_stack_fffffffffffffee8;
  FNDI_SharedResourceHandle<FNDI_Landscape_SharedResource,FNDI_SharedResourceUsage> local_108;
  ALandscape *local_f0;
  ALandscape *local_e8;
  double local_e0;
  double local_d8;
  double local_c8;
  double local_c0;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined7 uStack_3f;
  
  pAVar11 = GetLandscape(this,param_1,param_2);
  local_e8 = pAVar11;
  bVar10 = TWeakObjectPtr<ALandscape,FWeakObjectPtr>::UEOpEquals<ALandscape,bool>
                     (&param_2->Landscape,pAVar11);
  if (!bVar10) {
    if (pAVar11 == (ALandscape *)0x0) {
      local_res18.ObjectIndex = 0;
      local_res18.ObjectSerialNumber = 0;
      local_res20 = 0;
      FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_res20);
      (param_2->Landscape).WeakPtr = local_res18;
      local_108.Usage.RequiresCpuAccess = false;
      local_108.Usage.RequiresGpuAccess = false;
      local_108.Resource.Object = (FNDI_Landscape_SharedResource *)0x0;
      local_108.Resource.SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      FNDI_SharedResourceHandle<FNDI_Landscape_SharedResource,FNDI_SharedResourceUsage>::operator=
                (&param_2->SharedResourceHandle,&local_108);
      pFVar9 = local_108.Resource.Object;
      if (local_108.Resource.Object != (FNDI_Landscape_SharedResource *)0x0) {
        if ((local_108.Usage.RequiresCpuAccess != false) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Usage.RequiresCpuAccess == false",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceLandscape.cpp"
                                ,0x37f,L""), bVar10)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if (local_108.Usage.RequiresGpuAccess != false) {
          LOCK();
          paVar2 = &pFVar9->ShaderPhysicsDataUserCount;
          aVar3 = *paVar2;
          *paVar2 = (atomic<int>)((int)*paVar2 + -1);
          UNLOCK();
          if (aVar3 == (atomic<int>)0x1) {
            pFVar9->NextState = Released;
          }
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_108.Resource.SharedReferenceCount.ReferenceController);
      piVar1 = &(param_2->RegionRequests).ArrayMax;
      (param_2->RegionRequests).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x30,8,0,&(param_2->RegionRequests).AllocatorInstance,0,piVar1);
      }
      param_2->BaseColorVirtualTextureSRGB = false;
      param_2->BaseColorVirtualTextureUnpackType = None;
      (param_2->RVTLandscapeBounds).Min.field0_0x0._s_0.X = 0.0;
      (param_2->RVTLandscapeBounds).Min.field0_0x0._s_0.Y = 0.0;
      (param_2->RVTLandscapeBounds).Max.field0_0x0._s_0.X = 0.0;
      (param_2->RVTLandscapeBounds).Max.field0_0x0._s_0.Y = 0.0;
      param_2->BaseColorVirtualTextureIndex = -1;
      param_2->HeightVirtualTextureIndex = -1;
      *(undefined8 *)&(param_2->RVTLandscapeBounds).bIsValid = 0;
      param_2->NormalVirtualTextureIndex = -1;
      param_2->NormalVirtualTextureMode = Count;
      param_2->RequiresCollisionCacheCpu = false;
      param_2->RequiresCollisionCacheGpu = false;
      param_2->RequiresPhysMatCacheGpu = false;
      param_2->SystemRequiresBaseColorGpu = false;
      param_2->SystemRequiresHeightsGpu = false;
      param_2->SystemRequiresNormalsGpu = false;
    }
    else {
      local_f0 = pAVar11;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pAVar11);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)param_2,(FObjectPtr)&local_f0);
      param_2->BaseColorVirtualTextureIndex = -1;
      param_2->HeightVirtualTextureIndex = -1;
      (param_2->RVTLandscapeBounds).Min.field0_0x0._s_0.X = 0.0;
      (param_2->RVTLandscapeBounds).Min.field0_0x0._s_0.Y = 0.0;
      param_2->NormalVirtualTextureIndex = -1;
      (param_2->RVTLandscapeBounds).Max.field0_0x0._s_0.X = 0.0;
      (param_2->RVTLandscapeBounds).Max.field0_0x0._s_0.Y = 0.0;
      local_90 = 0;
      local_b0 = 0;
      uStack_a8 = 0;
      local_a0 = 0;
      uStack_98 = 0;
      *(undefined8 *)&(param_2->RVTLandscapeBounds).bIsValid = 0;
      if (this->bVirtualTexturesSupported != false) {
        if (param_1->FeatureLevel == Num) {
          FVar13.Platform = SP_NumPlatforms;
        }
        else {
          FVar13.Platform = GRHIGlobals.ShaderPlatformForFeatureLevel[(int)param_1->FeatureLevel];
        }
        bVar10 = UseVirtualTexturing(FVar13);
        if (bVar10) {
          pUVar12 = FWeakObjectPtr::Get((FWeakObjectPtr *)param_2);
          uVar15 = 0;
          iVar5 = *(int *)&pUVar12[0x1d].field_0x8;
          if (0 < (longlong)iVar5) {
            lVar16 = 0;
            do {
              pUVar12 = FWeakObjectPtr::Get((FWeakObjectPtr *)param_2);
              uVar14 = 0;
              if ((int)uVar15 < *(int *)&pUVar12[0x1d].field_0x8) {
                uVar14 = ~uVar15 >> 0x1f;
              }
              if (uVar14 == 0) {
                in_stack_fffffffffffffee8 = (ulonglong)(int)uVar15;
                bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar10) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
              }
              this_00 = *(URuntimeVirtualTexture **)(*(longlong *)(pUVar12 + 0x1d) + lVar16 * 8);
              if (this_00 != (URuntimeVirtualTexture *)0x0) {
                EVar4 = this_00->MaterialType;
                switch(EVar4) {
                case BaseColor_Normal_Roughness:
                case BaseColor_Normal_Specular:
                case BaseColor_Normal_Specular_YCoCg:
                case BaseColor_Normal_Specular_Mask_YCoCg:
                  if (param_2->NormalVirtualTextureIndex == -1) {
                    param_2->NormalVirtualTextureIndex = uVar15;
                    param_2->NormalVirtualTextureMode = EVar4;
                  }
                case BaseColor:
                  if (param_2->BaseColorVirtualTextureIndex == -1) {
                    param_2->BaseColorVirtualTextureIndex = uVar15;
                  }
                  break;
                case WorldHeight:
                  if (param_2->HeightVirtualTextureIndex == -1) {
                    param_2->HeightVirtualTextureIndex = uVar15;
                  }
                }
                if (param_2->BaseColorVirtualTextureIndex == uVar15) {
                  bVar10 = URuntimeVirtualTexture::IsLayerSRGB(this_00,0);
                  param_2->BaseColorVirtualTextureSRGB = bVar10;
                  bVar10 = URuntimeVirtualTexture::IsLayerYCoCg(this_00,0);
                  if (bVar10) {
                    param_2->BaseColorVirtualTextureUnpackType = YCoCgUnpack;
                  }
                  else if (EVar4 == BaseColor_Normal_Roughness) {
                    param_2->BaseColorVirtualTextureUnpackType = SRGBUnpack;
                  }
                }
              }
              uVar15 = uVar15 + 1;
              lVar16 = lVar16 + 1;
              pAVar11 = local_e8;
            } while (lVar16 < iVar5);
          }
        }
      }
      if (((param_2->HeightVirtualTextureIndex != -1) || (param_2->NormalVirtualTextureIndex != -1))
         || (param_2->BaseColorVirtualTextureIndex != -1)) {
        (**(code **)(*(longlong *)pAVar11 + 0x358))
                  (pAVar11,1,&local_e0,&local_c8,in_stack_fffffffffffffee8 & 0xffffffffffffff00);
        TVar7._8_4_ = SUB84(local_d8 - local_c0,0);
        TVar7._s_0.X = local_e0 - local_c8;
        TVar7._12_4_ = (int)((ulonglong)(local_d8 - local_c0) >> 0x20);
        (param_2->RVTLandscapeBounds).Min.field0_0x0 = TVar7;
        TVar8._8_4_ = SUB84(local_d8 + local_c0,0);
        TVar8._s_0.X = local_e0 + local_c8;
        TVar8._12_4_ = (int)((ulonglong)(local_d8 + local_c0) >> 0x20);
        (param_2->RVTLandscapeBounds).Max.field0_0x0 = TVar8;
        *(ulonglong *)&(param_2->RVTLandscapeBounds).bIsValid = CONCAT71(uStack_3f,1);
      }
      if ((((param_2->SystemRequiresBaseColorGpu == false) ||
           (param_2->BaseColorVirtualTextureIndex != -1)) &&
          ((param_2->SystemRequiresHeightsGpu == false || (param_2->HeightVirtualTextureIndex != -1)
           ))) && ((param_2->SystemRequiresNormalsGpu == false ||
                   (param_2->NormalVirtualTextureIndex != -1)))) {
        bVar10 = false;
      }
      else {
        bVar10 = true;
      }
      param_2->RequiresCollisionCacheGpu = bVar10;
    }
  }
  return;
}

// BuildShaderParameters @ 149170f90

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UNiagaraDataInterfaceLandscape::BuildShaderParameters
          (UNiagaraDataInterfaceLandscape *this,FNiagaraShaderParametersBuilder *param_1)

{
  int *piVar1;
  uint uVar2;
  FShaderParametersMetadataBuilder *pFVar3;
  int iVar4;
  FShaderParametersMetadata *pFVar5;
  FScriptContainerElement *pFVar6;
  wchar_t *pwVar7;
  
  pFVar3 = param_1->MetadataBuilder;
  if ((param_1->GPUParamInfo->DataInterfaceHLSLSymbol).Data.ArrayNum == 0) {
    pwVar7 = L"";
  }
  else {
    pwVar7 = (wchar_t *)(param_1->GPUParamInfo->DataInterfaceHLSLSymbol).Data.AllocatorInstance.Data
    ;
  }
  pFVar3->NextMemberOffset = pFVar3->NextMemberOffset + 0xf & 0xfffffff0;
  pFVar5 = TShaderParameterStructTypeInfo<NiagaraDataInterfaceLandscape::FShaderParameters>::
           GetStructMetadata();
  piVar1 = &(pFVar3->Members).ArrayMax;
  iVar4 = (pFVar3->Members).ArrayNum;
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,(ForAnyElementType *)pFVar3,piVar1);
  }
  (pFVar3->Members).ArrayNum = iVar4 + 1;
  uVar2 = pFVar3->NextMemberOffset;
  pFVar6 = (pFVar3->Members).AllocatorInstance.Data + (longlong)iVar4 * 0x30;
  *(wchar_t **)(pFVar6 + 8) = L"";
  *(FShaderParametersMetadata **)(pFVar6 + 0x28) = pFVar5;
  *(wchar_t **)pFVar6 = pwVar7;
  *(undefined4 *)(pFVar6 + 0x10) = 0x7b;
  *(uint *)(pFVar6 + 0x14) = uVar2;
  *(undefined2 *)(pFVar6 + 0x18) = 0x14;
  *(undefined4 *)(pFVar6 + 0x1c) = 1;
  *(undefined8 *)(pFVar6 + 0x20) = 1;
  pFVar3->NextMemberOffset = pFVar3->NextMemberOffset + 0x310;
  return;
}

// CanExecuteOnTarget @ 149171890

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UNiagaraDataInterfaceLandscape::CanExecuteOnTarget
          (UNiagaraDataInterfaceLandscape *this,ENiagaraSimTarget param_1)

{
  return param_1 == GPUComputeSim;
}

// CopyToInternal @ 149174000

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UNiagaraDataInterfaceLandscape::CopyToInternal
          (UNiagaraDataInterfaceLandscape *this,UNiagaraDataInterface *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  AActor *pAVar5;
  FScriptContainerElement *pFVar6;
  bool bVar7;
  UClass *pUVar8;
  FString *pFVar9;
  wchar_t *pwVar10;
  wchar_t *pwVar11;
  FString local_28;
  FString local_18;
  
  bVar7 = UNiagaraDataInterface::CopyToInternal((UNiagaraDataInterface *)this,param_1);
  if (!bVar7) {
    return false;
  }
  if (param_1 == (UNiagaraDataInterface *)0x0) {
    pFVar9 = GetTypeName<UNiagaraDataInterfaceLandscape>(&local_28);
    if ((pFVar9->Data).ArrayNum == 0) {
      pwVar10 = L"";
    }
    else {
      pwVar10 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar10);
  }
  pUVar8 = StaticClass();
  iVar3 = (int)pUVar8->_padding_;
  if ((iVar3 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar3 * 8)
      == &pUVar8->_padding_)) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pAVar5 = (this->SourceLandscape).field0_0x0.DebugPtr, pAVar5 != (AActor *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pAVar5);
    }
    *(TObjectPtr<AActor>_u_0 *)(param_1 + 1) = (this->SourceLandscape).field0_0x0;
    plVar1 = &param_1[1]._padding_;
    *(ENDILandscape_SourceMode *)&param_1[1]._padding_ = this->SourceMode;
    if ((TArray<TObjectPtr<UPhysicalMaterial>,TSizedDefaultAllocator<32>_> *)plVar1 !=
        &this->PhysicalMaterials) {
      iVar3 = *(int *)((longlong)&param_1[1]._padding_ + 4);
      piVar2 = (int *)((longlong)&param_1[1]._padding_ + 4);
      iVar4 = (this->PhysicalMaterials).ArrayNum;
      pFVar6 = (this->PhysicalMaterials).AllocatorInstance.Data;
      *(int *)&param_1[1]._padding_ = iVar4;
      if ((iVar4 == 0) && (iVar3 == 0)) {
        *piVar2 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,iVar4,iVar3,(ForAnyElementType *)plVar1,iVar4,piVar2);
        ConstructItems<TObjectPtr<UPhysicalMaterial>,TObjectPtr<UPhysicalMaterial>,int>
                  ((void *)*plVar1,(TObjectPtr<UPhysicalMaterial> *)pFVar6,iVar4);
      }
    }
    *(bool *)&param_1[1]._padding_ = this->bVirtualTexturesSupported;
    return true;
  }
  pFVar9 = GetTypeName<UNiagaraDataInterfaceLandscape>(&local_28);
  pwVar10 = L"";
  if ((pFVar9->Data).ArrayNum == 0) {
    pwVar11 = L"";
  }
  else {
    pwVar11 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
  }
  pFVar9 = GetFullNameForCastLogError<UNiagaraDataInterface>(&local_18,param_1);
  if ((pFVar9->Data).ArrayNum != 0) {
    pwVar10 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar10,pwVar11);
}

// DestroyPerInstanceData @ 149177b00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UNiagaraDataInterfaceLandscape::DestroyPerInstanceData
          (UNiagaraDataInterfaceLandscape *this,void *param_1,FNiagaraSystemInstance *param_2)

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
  longlong lStack_70;
  ulong64 local_68;
  undefined ***local_60;
  undefined1 local_58 [16];
  undefined **local_48;
  longlong lStack_40;
  ulong64 local_38;
  undefined ***local_30;
  byte local_28;
  ulonglong local_18;
  
  if (param_1 != (void *)0x0) {
    local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
    if (*(void **)((longlong)param_1 + 0x28) != (void *)0x0) {
      FMemory::Free(*(void **)((longlong)param_1 + 0x28));
    }
    if (*(FNDI_Landscape_SharedResource **)((longlong)param_1 + 0x18) !=
        (FNDI_Landscape_SharedResource *)0x0) {
      FNDI_Landscape_SharedResource::UnregisterUser
                (*(FNDI_Landscape_SharedResource **)((longlong)param_1 + 0x18),
                 (FNDI_SharedResourceUsage *)((longlong)param_1 + 0x10));
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x20));
    lStack_70 = this->_padding_;
    if ((lStack_70 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypedProxy != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterface.h"
                           ,0x3a0,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    local_78 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`UNiagaraDataInterfaceLandscape::DestroyPerInstanceData'::`5'::<lambda_1>,1,0>
                ::_vftable_;
    local_68 = param_2->ID;
    local_88[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`UNiagaraDataInterfaceLandscape::DestroyPerInstanceData'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
                  ::Call;
    local_60 = (undefined ***)0x0;
    this_00 = FRenderCommandList::GetInstanceTLS();
    if (this_00 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_UNiagaraDataInterfaceLandscape::DestroyPerInstanceData_::__l5::TSTR_FNiagaraDIDestroyProxy1742>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_88);
    }
    else {
      this_01 = FRenderCommandList::GetRenderThread(this_00);
      local_58._0_8_ = local_88[0];
      local_30 = local_60;
      local_48 = local_78;
      lStack_40 = lStack_70;
      local_38 = local_68;
      local_88[0] = (code *)0x0;
      local_28 = 2;
      pFVar3 = (FRenderCommandTag *)
               TRenderCommandTag<`UNiagaraDataInterfaceLandscape::DestroyPerInstanceData'::__l5::TSTR_FNiagaraDIDestroyProxy1742>
               ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)local_58,pFVar3);
      uVar5 = (ulonglong)local_28;
      if ((2 < uVar5) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
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
  }
  return;
}

// DrawDebugHud @ 149177d00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UNiagaraDataInterfaceLandscape::DrawDebugHud
          (UNiagaraDataInterfaceLandscape *this,FNDIDrawDebugHudContext *param_1)

{
  TIntPoint<int>_u_0 *pTVar1;
  ulonglong uVar2;
  FNiagaraSystemInstance *pFVar3;
  code *pcVar4;
  longlong *plVar5;
  bool bVar6;
  UNiagaraDataInterfaceLandscape *pUVar7;
  UObject *pUVar8;
  void *pvVar9;
  ULandscapeInfo *this_00;
  FNDI_Landscape_SharedResource *pFVar10;
  TTuple<UE::Math::TIntPoint<int>,ULandscapeHeightfieldCollisionComponent_*> *pTVar11;
  byte bVar12;
  int iVar13;
  FWeakObjectPtr *this_01;
  FWeakObjectPtr *pFVar14;
  TIntPoint<int>_u_0 *pTVar15;
  uint uVar16;
  uint uVar17;
  longlong lVar18;
  uint uVar19;
  uint *puVar20;
  undefined1 auStackY_428 [32];
  undefined1 local_3e8 [8];
  FString local_3e0;
  FString local_3d0;
  longlong local_3c0;
  undefined8 local_3b8;
  FName local_3b0;
  FName local_3a8;
  longlong *local_3a0;
  uint uStack_398;
  uint uStack_394;
  TBitArray<FDefaultBitArrayAllocator> *local_390;
  undefined4 uStack_388;
  uint uStack_384;
  uint local_380;
  undefined4 uStack_37c;
  int iStack_378;
  undefined4 uStack_374;
  longlong *local_370;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_368;
  undefined8 uStack_348;
  TSet<ULandscapeHeightfieldCollisionComponent_const_*,DefaultKeyFuncs<ULandscapeHeightfieldCollisionComponent_const_*,0>,FDefaultSetAllocator>
  *local_340;
  undefined1 *local_338;
  code *local_330;
  TSet<ULandscapeHeightfieldCollisionComponent_const_*,DefaultKeyFuncs<ULandscapeHeightfieldCollisionComponent_const_*,0>,FDefaultSetAllocator>
  **local_328;
  undefined4 local_304;
  undefined1 local_2f8 [32];
  uint *local_2d8;
  uint local_2d0;
  undefined4 local_2cc;
  undefined4 local_2c8;
  int local_2c4;
  void *local_2b8;
  undefined4 local_2b0;
  TSet<ULandscapeHeightfieldCollisionComponent_const_*,DefaultKeyFuncs<ULandscapeHeightfieldCollisionComponent_const_*,0>,FDefaultSetAllocator>
  local_2a8;
  TStringBuilderBase<wchar_t> local_258;
  wchar_t local_238 [256];
  ulonglong local_38 [2];
  
  local_38[0] = __security_cookie.value ^ (ulonglong)auStackY_428;
  pFVar3 = param_1->SystemInstance;
  this_01 = (FWeakObjectPtr *)(pFVar3->DataInterfaceInstanceDataOffsets).AllocatorInstance.Data;
  pFVar14 = (FWeakObjectPtr *)
            ((longlong)this_01 + (longlong)(pFVar3->DataInterfaceInstanceDataOffsets).ArrayNum * 0xc
            );
  while( true ) {
    if (this_01 == pFVar14) {
      return;
    }
    pUVar7 = (UNiagaraDataInterfaceLandscape *)FWeakObjectPtr::Get(this_01);
    if (pUVar7 == this) break;
    this_01 = (FWeakObjectPtr *)&this_01[1].ObjectSerialNumber;
  }
  if (this_01 == (FWeakObjectPtr *)0x0) {
    return;
  }
  uVar17 = this_01[1].ObjectIndex;
  uVar19 = 0;
  uVar16 = uVar19;
  if ((int)uVar17 < (pFVar3->DataInterfaceInstanceData).ArrayNum) {
    uVar16 = ~uVar17 >> 0x1f;
  }
  if ((uVar16 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar14 = (FWeakObjectPtr *)
            ((pFVar3->DataInterfaceInstanceData).AllocatorInstance.Data + (int)uVar17);
  if (pFVar14 == (FWeakObjectPtr *)0x0) {
    return;
  }
  local_258.Base = local_238;
  local_258.bIsDynamic = false;
  local_258.bIsExternal = false;
  local_258.CurPos = local_238;
  local_258.End = (wchar_t *)local_38;
  pUVar8 = FWeakObjectPtr::Get(pFVar14);
  if (pUVar8 == (UObject *)0x0) {
    ::FString::FString(&local_3e0,L"none");
  }
  else if (*(int *)&pUVar8[0xc].field_0x10 < 2) {
    local_3b0.ComparisonIndex.Value = *(uint *)&pUVar8->field_0x18;
    local_3b0.Number = *(uint *)&pUVar8->field_0x1c;
    ::FName::ToString(&local_3b0,&local_3e0);
  }
  else {
    local_3e0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_3e0.Data.ArrayNum = *(int *)&pUVar8[0xc].field_0x10;
    lVar18 = (longlong)local_3e0.Data.ArrayNum;
    pvVar9 = *(void **)&pUVar8[0xc].field_0x8;
    if (local_3e0.Data.ArrayNum == 0) {
      local_3e0.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_3e0.Data.ArrayNum,0,(ForAnyElementType *)&local_3e0,
                 local_3e0.Data.ArrayNum,&local_3e0.Data.ArrayMax);
      memcpy(local_3e0.Data.AllocatorInstance.Data,pvVar9,lVar18 * 2);
    }
  }
  TStringBuilderBase<wchar_t>::AppendfImpl(&local_258,L"Landscape(%s)");
  if (local_3e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3e0.Data.AllocatorInstance.Data);
  }
  if (pFVar14[8].ObjectIndex != -1) {
    if (local_258.End < local_258.CurPos + 0xe) {
      TStringBuilderBase<wchar_t>::Extend(&local_258,0xe);
    }
    pvVar9 = FGenericPlatformString::Memcpy(local_258.CurPos,L" BaseColor:RVT",0x1c);
    local_258.CurPos = (wchar_t *)((longlong)pvVar9 + 0x1c);
  }
  if (pFVar14[8].ObjectSerialNumber != -1) {
    if (local_258.End < local_258.CurPos + 0xb) {
      TStringBuilderBase<wchar_t>::Extend(&local_258,0xb);
    }
    pvVar9 = FGenericPlatformString::Memcpy(local_258.CurPos,L" Height:RVT",0x16);
    local_258.CurPos = (wchar_t *)((longlong)pvVar9 + 0x16);
  }
  if (pFVar14[9].ObjectIndex != -1) {
    if (local_258.End < local_258.CurPos + 0xb) {
      TStringBuilderBase<wchar_t>::Extend(&local_258,0xb);
    }
    pvVar9 = FGenericPlatformString::Memcpy(local_258.CurPos,L" Normal:RVT",0x16);
    local_258.CurPos = (wchar_t *)((longlong)pvVar9 + 0x16);
  }
  if ((*(char *)((longlong)&pFVar14[0xf].ObjectIndex + 1) != '\0') ||
     (*(char *)((longlong)&pFVar14[0xf].ObjectIndex + 2) != '\0')) {
    if (local_258.End < local_258.CurPos + 0x12) {
      TStringBuilderBase<wchar_t>::Extend(&local_258,0x12);
    }
    pvVar9 = FGenericPlatformString::Memcpy(local_258.CurPos,L" HasCollisionCache",0x24);
    local_258.CurPos = (wchar_t *)((longlong)pvVar9 + 0x24);
  }
  if (((*(char *)((longlong)&pFVar14[0xf].ObjectIndex + 3) != '\0') ||
      ((char)pFVar14[0xf].ObjectSerialNumber != '\0')) ||
     (*(char *)((longlong)&pFVar14[0xf].ObjectSerialNumber + 1) != '\0')) {
    TStringBuilderBase<wchar_t>::AppendfImpl
              (&local_258,L" GpuReqs(BaseColor:%s, Height:%s, Normal:%s)");
  }
  if (((param_1->bVerbose != false) && (pFVar14[3] != (FWeakObjectPtr)0x0)) &&
     ((pUVar8 = FWeakObjectPtr::Get(pFVar14), pUVar8 != (UObject *)0x0 &&
      (this_00 = (ULandscapeInfo *)(**(code **)(*(longlong *)&pUVar8[0x11].field_0x18 + 0x18))(),
      this_00 != (ULandscapeInfo *)0x0)))) {
    local_2a8.Elements._0_8_ = 0;
    local_2a8.Elements._8_8_ = 0;
    local_2a8.Elements._32_8_ = 0;
    local_2a8.Elements._40_4_ = 0;
    local_2a8.Elements._44_4_ = 0x80;
    local_2a8.Elements._48_4_ = 0xffffffff;
    local_2a8.Elements._52_4_ = 0;
    local_2a8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_2a8.HashSize = 0;
    local_2f8._0_8_ = 0;
    local_2f8._8_8_ = 0;
    local_2d8 = (uint *)0x0;
    local_2d0 = 0;
    local_2cc = 0x80;
    local_2c8 = 0xffffffff;
    local_2c4 = 0;
    local_2b8 = (void *)0x0;
    local_2b0 = 0;
    pFVar10 = FNDI_SharedResourceHandle<FNDI_Landscape_SharedResource,FNDI_SharedResourceUsage>::
              ReadResource((FNDI_SharedResourceHandle<FNDI_Landscape_SharedResource,FNDI_SharedResourceUsage>
                            *)(pFVar14 + 2));
    iVar13 = (pFVar10->ResourceKey).CapturedRegions.ArrayNum;
    pTVar15 = (TIntPoint<int>_u_0 *)(pFVar10->ResourceKey).CapturedRegions.AllocatorInstance.Data;
    if ((iVar13 < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pTVar1 = pTVar15 + iVar13;
    for (; pTVar15 != pTVar1; pTVar15 = pTVar15 + 1) {
      pTVar11 = TSet<TTuple<UE::Math::TIntPoint<int>,ULandscapeHeightfieldCollisionComponent_*>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,ULandscapeHeightfieldCollisionComponent_*,0>,FDefaultSetAllocator>
                ::Find((TSet<TTuple<UE::Math::TIntPoint<int>,ULandscapeHeightfieldCollisionComponent_*>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,ULandscapeHeightfieldCollisionComponent_*,0>,FDefaultSetAllocator>
                        *)&this_00->XYtoCollisionComponentMap,(TIntPoint<int>)pTVar15->_s_0);
      if (pTVar11 ==
          (TTuple<UE::Math::TIntPoint<int>,ULandscapeHeightfieldCollisionComponent_*> *)0x0) {
        local_3c0 = 0;
      }
      else {
        local_3c0 = *(longlong *)&pTVar11->field_0x8;
        if (local_3c0 != 0) {
          TSet<ULandscapeHeightfieldCollisionComponent_const_*,DefaultKeyFuncs<ULandscapeHeightfieldCollisionComponent_const_*,0>,FDefaultSetAllocator>
          ::Emplace<ULandscapeHeightfieldCollisionComponent_const_*_const_&>
                    (&local_2a8,(ULandscapeHeightfieldCollisionComponent **)&local_3b8,
                     (bool *)&local_3c0);
        }
      }
    }
    local_340 = &local_2a8;
    local_338 = local_2f8;
    local_328 = &local_340;
    local_330 = UE::Core::Private::Function::
                TFunctionRefCaller<`UNiagaraDataInterfaceLandscape::DrawDebugHud'::__l29::<lambda_2>,bool,ALandscapeProxy_*>
                ::Call;
    ULandscapeInfo::ForEachLandscapeProxy
              (this_00,(TFunctionRef<bool___cdecl(ALandscapeProxy_*)> *)&local_330);
    if (local_2f8._8_4_ != local_2c4) {
      if (local_258.End < local_258.CurPos + 9) {
        TStringBuilderBase<wchar_t>::Extend(&local_258,9);
      }
      pvVar9 = FGenericPlatformString::Memcpy(local_258.CurPos,L" Proxies:",0x12);
      uVar17 = local_2d0;
      local_258.CurPos = (wchar_t *)((longlong)pvVar9 + 0x12);
      local_380 = 0;
      uStack_394 = 1;
      uStack_384 = local_380;
      if (local_2d0 != 0) {
        puVar20 = (uint *)(local_2f8 + 0x10);
        if (local_2d8 != (uint *)0x0) {
          puVar20 = local_2d8;
        }
        uVar16 = *puVar20;
        local_380 = 0;
        uVar19 = 0;
        while (uVar16 == 0) {
          lVar18 = (longlong)(int)uVar19;
          local_380 = local_380 + 0x20;
          uVar19 = uVar19 + 1;
          uStack_384 = local_2d0;
          if ((int)((local_2d0 - 1) + ((int)(local_2d0 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar19)
          goto LAB_1491782e1;
          uVar16 = puVar20[lVar18 + 1];
        }
        uStack_394 = -uVar16 & uVar16;
        uVar2 = (ulonglong)uStack_394 * 2 + 1;
        lVar18 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar18 == 0; lVar18 = lVar18 + -1) {
          }
        }
        local_3b8._4_4_ = (int)lVar18;
        uStack_384 = (local_380 - 1) + local_3b8._4_4_;
        if ((int)local_2d0 < (int)uStack_384) {
          uStack_384 = local_2d0;
        }
      }
LAB_1491782e1:
      local_3a0 = (longlong *)local_2f8;
      uStack_37c = local_304;
      local_390 = (TBitArray<FDefaultBitArrayAllocator> *)(local_2f8 + 0x10);
      uVar16 = local_2d0 & 0xffffffe0;
      iStack_378 = local_2f8._8_4_ - local_2c4;
      uStack_388 = 0xffffffff;
      TStack_368.CurrentBitIndex = uStack_384;
      TStack_368.UnvisitedBitMask = 0xffffffff;
      TStack_368._padding_ = CONCAT44(uStack_394,uVar19);
      iVar13 = (int)local_2d0 >> 5;
      TStack_368._28_4_ = local_304;
      TStack_368.BaseBitIndex = local_380;
      uStack_348 = CONCAT44(uStack_374,iStack_378);
      bVar12 = (byte)local_2d0;
      uStack_398 = uVar19;
      local_370 = local_3a0;
      TStack_368.Array = local_390;
      if (((int)local_2d0 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (uVar17 != local_2d0) {
        puVar20 = (uint *)(local_2f8 + 0x10);
        if (local_2d8 != (uint *)0x0) {
          puVar20 = local_2d8;
        }
        uVar17 = -1 << (bVar12 & 0x1f) & puVar20[iVar13];
        while (uVar17 == 0) {
          lVar18 = (longlong)iVar13;
          uVar16 = uVar16 + 0x20;
          iVar13 = iVar13 + 1;
          uVar17 = local_2d0;
          if ((int)((local_2d0 - 1) + ((int)(local_2d0 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13)
          goto LAB_1491783dc;
          uVar17 = puVar20[lVar18 + 1];
        }
        uVar2 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
        lVar18 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar18 == 0; lVar18 = lVar18 + -1) {
          }
        }
        uVar17 = (int)lVar18 + -1 + uVar16;
        if ((int)local_2d0 < (int)uVar17) {
          uVar17 = local_2d0;
        }
      }
LAB_1491783dc:
      while( true ) {
        plVar5 = local_370;
        if ((int)local_370[1] - *(int *)((longlong)local_370 + 0x34) != (int)uStack_348) {
          `TSparseArray<TSparseSetElement<ALandscapeProxy_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_3e8);
        }
        if (((TStack_368.CurrentBitIndex == uVar17) &&
            (TStack_368.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_2f8 + 0x10))) &&
           (plVar5 == (longlong *)local_2f8)) break;
        lVar18 = *(longlong *)(*plVar5 + (longlong)TStack_368.CurrentBitIndex * 0x10);
        if (local_258.End < local_258.CurPos + 1) {
          TStringBuilderBase<wchar_t>::Extend(&local_258,1);
        }
        pvVar9 = FGenericPlatformString::Memcpy(local_258.CurPos,L"\n",2);
        local_258.CurPos = (wchar_t *)((longlong)pvVar9 + 2);
        if (lVar18 == 0) {
          ::FString::FString(&local_3d0,L"none");
        }
        else {
          iVar13 = *(int *)(lVar18 + 0x1f0);
          if (iVar13 < 2) {
            local_3a8 = *(FName *)(lVar18 + 0x18);
            ::FName::ToString(&local_3a8,&local_3d0);
          }
          else {
            pvVar9 = *(void **)(lVar18 + 0x1e8);
            local_3d0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_3d0.Data.ArrayNum = iVar13;
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,iVar13,0,(ForAnyElementType *)&local_3d0,iVar13,&local_3d0.Data.ArrayMax)
            ;
            memcpy(local_3d0.Data.AllocatorInstance.Data,pvVar9,(longlong)iVar13 * 2);
          }
        }
        TStringBuilderBase<wchar_t>::AppendfImpl(&local_258,L"\t%s");
        if (local_3d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_3d0.Data.AllocatorInstance.Data);
        }
        TStack_368.UnvisitedBitMask = TStack_368.UnvisitedBitMask & ~TStack_368._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_368);
      }
    }
    local_2b0 = 0;
    if (local_2b8 != (void *)0x0) {
      FMemory::Free(local_2b8);
    }
    TSparseArray<TSparseSetElement<ALandscapeProxy_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<ALandscapeProxy_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<ALandscapeProxy_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_2f8);
    local_2a8.HashSize = 0;
    if (local_2a8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_2a8.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<ULandscapeHeightfieldCollisionComponent_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<ULandscapeHeightfieldCollisionComponent_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_2a8.Elements);
  }
  ::FString::AppendChars
            (&param_1->OutputString,local_258.Base,
             (int)((longlong)local_258.CurPos - (longlong)local_258.Base >> 1));
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_258);
  return;
}

// Equals @ 1491792f0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UNiagaraDataInterfaceLandscape::Equals
          (UNiagaraDataInterfaceLandscape *this,UNiagaraDataInterface *param_1)

{
  int iVar1;
  bool bVar2;
  UClass *pUVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  FString local_28;
  FString local_18;
  
  bVar2 = UNiagaraDataInterface::Equals((UNiagaraDataInterface *)this,param_1);
  if (bVar2) {
    if (param_1 == (UNiagaraDataInterface *)0x0) {
      pFVar4 = GetTypeName<UNiagaraDataInterfaceLandscape_const_>(&local_28);
      if ((pFVar4->Data).ArrayNum == 0) {
        pwVar6 = L"";
      }
      else {
        pwVar6 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(L"nullptr",pwVar6);
    }
    pUVar3 = StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((*(int *)(param_1->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar3->_padding_)) {
      pFVar4 = GetTypeName<UNiagaraDataInterfaceLandscape_const_>(&local_28);
      pwVar6 = L"";
      if ((pFVar4->Data).ArrayNum == 0) {
        pwVar5 = L"";
      }
      else {
        pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
      }
      pFVar4 = GetFullNameForCastLogError<UNiagaraDataInterface_const_>(&local_18,param_1);
      if ((pFVar4->Data).ArrayNum != 0) {
        pwVar6 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar6,pwVar5);
    }
    if ((((AActor *)param_1[1]._padding_ == (this->SourceLandscape).field0_0x0.DebugPtr) &&
        ((ENDILandscape_SourceMode)param_1[1]._padding_ == this->SourceMode)) &&
       (iVar1 = (int)param_1[1]._padding_, iVar1 == (this->PhysicalMaterials).ArrayNum)) {
      bVar2 = CompareItems<TObjectPtr<UPhysicalMaterial>,int>
                        ((TObjectPtr<UPhysicalMaterial> *)param_1[1]._padding_,
                         (TObjectPtr<UPhysicalMaterial> *)
                         (this->PhysicalMaterials).AllocatorInstance.Data,iVar1);
      if ((bVar2) && ((bool)(char)param_1[1]._padding_ == this->bVirtualTexturesSupported)) {
        return true;
      }
    }
  }
  return false;
}

// GetLandscape @ 14917e600

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

ALandscape * __thiscall
UNiagaraDataInterfaceLandscape::GetLandscape
          (UNiagaraDataInterfaceLandscape *this,FNiagaraSystemInstance *param_1,
          FNDILandscapeData_GameThread *param_2)

{
  UWorld *pUVar1;
  code *pcVar2;
  bool bVar3;
  UClass *pUVar4;
  TMatrix<double> *pTVar5;
  ALandscape *pAVar6;
  AActor *pAVar7;
  undefined1 auStack_198 [32];
  UClass *local_178;
  FNDILandscapeData_GameThread *local_170;
  TBox<double> *local_168;
  FNiagaraSystemInstance *local_160;
  TActorIteratorBase<TActorIterator<ALandscape>_> local_158;
  TBox<double> local_f8;
  TMatrix<double> local_b8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_198;
  if ((this->SourceLandscape).field0_0x0.DebugPtr != (AActor *)0x0) {
    pUVar4 = Z_Construct_UClass_ALandscape_NoRegister();
    bVar3 = FObjectPtr::IsA((FObjectPtr *)&this->SourceLandscape,pUVar4);
    if ((bVar3) &&
       (pAVar6 = (ALandscape *)(this->SourceLandscape).field0_0x0.DebugPtr,
       pAVar6 != (ALandscape *)0x0)) {
      if (this->SourceMode == Source) {
        return pAVar6;
      }
      if (this->SourceMode == Default) {
        return pAVar6;
      }
    }
  }
  pTVar5 = UE::Math::TTransform<double>::ToMatrixWithScale(&param_1->WorldTransform,&local_b8);
  UE::Math::TBox<double>::TransformBy(&param_1->LocalBounds,&local_f8,pTVar5);
  local_168 = &local_f8;
  local_170 = param_2;
  local_160 = param_1;
  pAVar6 = (ALandscape *)FWeakObjectPtr::Get((FWeakObjectPtr *)param_2);
  if ((pAVar6 == (ALandscape *)0x0) ||
     (bVar3 = `UNiagaraDataInterfaceLandscape::GetLandscape'::__l2::<lambda_1>::operator()
                        (&local_170,pAVar6), !bVar3)) {
    pUVar4 = Z_Construct_UClass_ALandscape_NoRegister();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    pUVar1 = param_1->World;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    local_158.Flags = OnlyActiveLevels|SkipPendingKill;
    local_158.State.bIsSet = false;
    local_178 = pUVar4;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    FActorIteratorState::FActorIteratorState
              (&local_158.State.TypedValue,pUVar1,(TSubclassOf<AActor>)&local_178);
    local_158.State.bIsSet = true;
    do {
      TActorIteratorBase<TActorIterator<ALandscape>_>::operator++(&local_158);
      if ((local_158.State.bIsSet == false) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        pAVar6 = (ALandscape *)(*pcVar2)();
        return pAVar6;
      }
      if (local_158.State.TypedValue.ReachedEnd != false) {
        if (local_158.State.bIsSet != false) {
          UWorld::RemoveOnActorSpawnedHandler
                    (local_158.State.TypedValue.CurrentWorld,
                     local_158.State.TypedValue.ActorSpawnedDelegateHandle);
          if (local_158.State.TypedValue.SpawnedActorArray.AllocatorInstance.Data !=
              (FScriptContainerElement *)0x0) {
            FMemory::Free(local_158.State.TypedValue.SpawnedActorArray.AllocatorInstance.Data);
          }
          if (local_158.State.TypedValue.ActorArray.AllocatorInstance.Data !=
              (FScriptContainerElement *)0x0) {
            FMemory::Free(local_158.State.TypedValue.ActorArray.AllocatorInstance.Data);
          }
        }
        return (ALandscape *)0x0;
      }
      if ((local_158.State.bIsSet == false) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        pAVar6 = (ALandscape *)(*pcVar2)();
        return pAVar6;
      }
      pAVar7 = FActorIteratorState::GetActorChecked(&local_158.State.TypedValue);
      pAVar6 = CastChecked<ALandscape,AActor>(pAVar7);
    } while ((pAVar6 == (ALandscape *)0x0) ||
            (bVar3 = `UNiagaraDataInterfaceLandscape::GetLandscape'::__l2::<lambda_1>::operator()
                               (&local_170,pAVar6), !bVar3));
    if (local_158.State.bIsSet != false) {
      UWorld::RemoveOnActorSpawnedHandler
                (local_158.State.TypedValue.CurrentWorld,
                 local_158.State.TypedValue.ActorSpawnedDelegateHandle);
      if (local_158.State.TypedValue.SpawnedActorArray.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0) {
        FMemory::Free(local_158.State.TypedValue.SpawnedActorArray.AllocatorInstance.Data);
      }
      if (local_158.State.TypedValue.ActorArray.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0) {
        FMemory::Free(local_158.State.TypedValue.ActorArray.AllocatorInstance.Data);
      }
    }
  }
  return pAVar6;
}

// GetPrivateStaticClass @ 14917fd10

UClass * __cdecl UNiagaraDataInterfaceLandscape::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceLandscape.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataInterfaceLandscape",
               &Z_Registration_Info_UClass_UNiagaraDataInterfaceLandscape.InnerSingleton,
               StaticRegisterNativesUNiagaraDataInterfaceLandscape,0x60,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraDataInterfaceLandscape>,
               InternalVTableHelperCtorCaller<UNiagaraDataInterfaceLandscape>,local_res8,
               UNiagaraDataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceLandscape.InnerSingleton;
}

// GetVMExternalFunction @ 149181f00

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UNiagaraDataInterfaceLandscape::GetVMExternalFunction
          (UNiagaraDataInterfaceLandscape *this,FVMExternalFunctionBindingInfo *param_1,
          void *param_2,
          TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
          *param_3)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  undefined1 local_48 [8];
  FDelegateAllocation local_40;
  FDestructionSentinel local_30;
  FDelegateAllocation *local_18;
  
  if (param_1->Name == NiagaraDataInterfaceLandscape::NAME_GenerateRvtFeedback) {
    local_48 = (undefined1  [8])0x0;
    local_40.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_40.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
               (FWriteAccessScope *)&local_30);
    local_18 = &local_40;
    puVar1 = UE::Core::Private::DelegateAllocate(0x20,&local_40);
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar2 = FDelegateHandle::GenerateNewID();
      puVar1[2] = uVar2;
      *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`UNiagaraDataInterfaceLandscape::GetVMExternalFunction'::`5'::<lambda_1>_>
                 ::_vftable_;
      puVar1[3] = this;
    }
    if (local_30.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_48);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
               (FWriteAccessScope *)&local_30);
    if ((local_40.DelegateSize != 0) &&
       (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_40.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_40,0,0,0x10);
      local_40.DelegateSize = 0;
    }
    if (local_30.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
    }
    if (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_40.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_48);
  }
  return;
}

// HasPreSimulateTick @ 149182560

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UNiagaraDataInterfaceLandscape::HasPreSimulateTick(UNiagaraDataInterfaceLandscape *this)

{
  return true;
}

// InitPerInstanceData @ 149184f20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
UNiagaraDataInterfaceLandscape::InitPerInstanceData
          (UNiagaraDataInterfaceLandscape *this,void *param_1,FNiagaraSystemInstance *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar4;
  undefined ***pppuVar5;
  ulonglong uVar6;
  undefined1 auStack_d8 [32];
  bool local_b8;
  bool local_b7;
  bool local_b6;
  bool local_b5;
  bool local_b4;
  bool local_b3;
  bool local_b2;
  bool local_b1 [9];
  code *local_a8 [2];
  undefined **local_98;
  longlong lStack_90;
  ulong64 local_88;
  undefined ***local_80;
  undefined1 local_78 [16];
  undefined **local_68;
  longlong lStack_60;
  ulong64 local_58;
  undefined ***local_50;
  byte local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_d8;
  *(undefined4 *)((longlong)param_1 + 0x12) = 0;
  *(undefined2 *)((longlong)param_1 + 0x16) = 0;
  *(undefined2 *)((longlong)param_1 + 0x39) = 0;
  *(undefined1 *)((longlong)param_1 + 0x3b) = 0;
  *(undefined2 *)((longlong)param_1 + 0x4d) = 0;
  *(undefined1 *)((longlong)param_1 + 0x4f) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined2 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined1 *)((longlong)param_1 + 0x38) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0xffffffffffffffff;
  *(undefined4 *)((longlong)param_1 + 0x48) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x4c) = 8;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  local_b4 = false;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  local_b7 = false;
  FNiagaraSystemInstance::EvaluateBoundFunction
            (param_2,NiagaraDataInterfaceLandscape::NAME_GetHeight,&local_b4,&local_b7);
  local_b3 = false;
  local_b6 = false;
  FNiagaraSystemInstance::EvaluateBoundFunction
            (param_2,NiagaraDataInterfaceLandscape::NAME_GetWorldNormal,&local_b3,&local_b6);
  local_b2 = false;
  local_b5 = false;
  FNiagaraSystemInstance::EvaluateBoundFunction
            (param_2,NiagaraDataInterfaceLandscape::NAME_GetPhysicalMaterialIndex,&local_b2,
             &local_b5);
  local_b1[0] = false;
  local_b8 = false;
  FNiagaraSystemInstance::EvaluateBoundFunction
            (param_2,NiagaraDataInterfaceLandscape::NAME_GetBaseColor,local_b1,&local_b8);
  *(bool *)((longlong)param_1 + 0x7b) = local_b8;
  *(bool *)((longlong)param_1 + 0x7c) = local_b7;
  *(bool *)((longlong)param_1 + 0x7d) = local_b6;
  *(bool *)((longlong)param_1 + 0x7a) = local_b5;
  ApplyLandscape(this,param_2,param_1);
  lStack_90 = this->_padding_;
  if (lStack_90 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypedProxy != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterface.h"
                       ,0x3a0,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  local_80 = (undefined ***)0x0;
  local_98 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UNiagaraDataInterfaceLandscape::InitPerInstanceData'::`2'::<lambda_1>,1,0>
              ::_vftable_;
  local_88 = param_2->ID;
  local_a8[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UNiagaraDataInterfaceLandscape::InitPerInstanceData'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                ::Call;
  this_00 = FRenderCommandList::GetInstanceTLS();
  if (this_00 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_UNiagaraDataInterfaceLandscape::InitPerInstanceData_::__l2::TSTR_FNiagaraDICreateProxy1725>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_a8);
  }
  else {
    this_01 = FRenderCommandList::GetRenderThread(this_00);
    local_78._0_8_ = local_a8[0];
    local_50 = local_80;
    local_68 = local_98;
    lStack_60 = lStack_90;
    local_58 = local_88;
    local_a8[0] = (code *)0x0;
    local_48 = 2;
    pFVar4 = (FRenderCommandTag *)
             TRenderCommandTag<`UNiagaraDataInterfaceLandscape::InitPerInstanceData'::__l2::TSTR_FNiagaraDICreateProxy1725>
             ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_78,pFVar4);
    uVar6 = (ulonglong)local_48;
    if (2 < uVar6) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar6] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if ((code *)local_78._0_8_ != (code *)0x0) {
        pppuVar5 = (undefined ***)(local_78 + 0x10);
        if (local_50 != (undefined ***)0x0) {
          pppuVar5 = local_50;
        }
        (*(code *)(*pppuVar5)[2])();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar6])(local_78);
    }
  }
  if (local_a8[0] != (code *)0x0) {
    pppuVar5 = &local_98;
    if (local_80 != (undefined ***)0x0) {
      pppuVar5 = local_80;
    }
    (*(code *)(*pppuVar5)[2])();
  }
  return true;
}

// PerInstanceDataSize @ 149186760

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

int __thiscall
UNiagaraDataInterfaceLandscape::PerInstanceDataSize(UNiagaraDataInterfaceLandscape *this)

{
  return 0x80;
}

// PerInstanceTick @ 149186fd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

bool __thiscall
UNiagaraDataInterfaceLandscape::PerInstanceTick
          (UNiagaraDataInterfaceLandscape *this,void *param_1,FNiagaraSystemInstance *param_2,
          float param_3)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  uint uVar3;
  code *pcVar4;
  FNDI_Landscape_SharedResource *pFVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  FNiagaraWorldManager *this_00;
  FNDI_Landscape_GeneratedData *this_01;
  FNDI_SharedResourceHandle<FNDI_Landscape_SharedResource,FNDI_SharedResourceUsage> *pFVar9;
  UObject *pUVar10;
  FRenderCommandList *this_02;
  FCommandList *this_03;
  FRenderCommandTag *pFVar11;
  code **ppcVar12;
  ulonglong uVar13;
  code *pcVar14;
  code *pcVar15;
  code *pcVar16;
  undefined1 auStackY_178 [32];
  code *local_130;
  FNDI_SharedResourceHandle<FNDI_Landscape_SharedResource,FNDI_SharedResourceUsage> local_128;
  code *local_110;
  code *pcStack_108;
  undefined1 local_100;
  undefined7 uStack_ff;
  code *pcStack_f8;
  code *local_f0;
  undefined1 uStack_e8;
  undefined7 uStack_e7;
  code *local_e0;
  FNDI_SharedResourceHandle<FNDI_Landscape_SharedResource,FNDI_SharedResourceUsage> local_d8;
  code *local_b8 [2];
  code *local_a8 [3];
  code **local_90;
  undefined1 local_88 [40];
  code **local_60;
  byte local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_178;
  if (param_1 != (void *)0x0) {
    ApplyLandscape(this,param_2,param_1);
    if ((*(char *)((longlong)param_1 + 0x79) == '\0') &&
       (*(char *)((longlong)param_1 + 0x7a) == '\0')) {
      local_128.Usage.RequiresCpuAccess = false;
      local_128.Usage.RequiresGpuAccess = false;
      local_128.Resource.Object = (FNDI_Landscape_SharedResource *)0x0;
      local_128.Resource.SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      FNDI_SharedResourceHandle<FNDI_Landscape_SharedResource,FNDI_SharedResourceUsage>::operator=
                ((FNDI_SharedResourceHandle<FNDI_Landscape_SharedResource,FNDI_SharedResourceUsage>
                  *)((longlong)param_1 + 0x10),&local_128);
      pFVar5 = local_128.Resource.Object;
      local_d8.Resource.SharedReferenceCount.ReferenceController =
           local_128.Resource.SharedReferenceCount.ReferenceController;
      if (local_128.Resource.Object != (FNDI_Landscape_SharedResource *)0x0) {
        if ((local_128.Usage.RequiresCpuAccess != false) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Usage.RequiresCpuAccess == false",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceLandscape.cpp"
                               ,0x37f,L""), bVar6)) {
          pcVar16 = (code *)swi(3);
          uVar7 = (*pcVar16)();
          return (bool)uVar7;
        }
        local_d8.Resource.SharedReferenceCount.ReferenceController =
             local_128.Resource.SharedReferenceCount.ReferenceController;
        if (local_128.Usage.RequiresGpuAccess != false) {
          LOCK();
          paVar1 = &pFVar5->ShaderPhysicsDataUserCount;
          aVar2 = *paVar1;
          *paVar1 = (atomic<int>)((int)*paVar1 + -1);
          UNLOCK();
          if (aVar2 == (atomic<int>)0x1) {
            pFVar5->NextState = Released;
          }
        }
      }
    }
    else {
      this_00 = FNiagaraSystemInstance::GetWorldManager(param_2);
      this_01 = FNiagaraWorldManager::EditGeneratedData<FNDI_Landscape_GeneratedData>(this_00);
      pFVar9 = FNDI_Landscape_GeneratedData::GetLandscapeData
                         (this_01,&local_d8,this,param_2,param_1,(FNDI_SharedResourceUsage)0x100,
                          true);
      FNDI_SharedResourceHandle<FNDI_Landscape_SharedResource,FNDI_SharedResourceUsage>::operator=
                ((FNDI_SharedResourceHandle<FNDI_Landscape_SharedResource,FNDI_SharedResourceUsage>
                  *)((longlong)param_1 + 0x10),pFVar9);
      if (local_d8.Resource.Object != (FNDI_Landscape_SharedResource *)0x0) {
        FNDI_Landscape_SharedResource::UnregisterUser(local_d8.Resource.Object,&local_d8.Usage);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_d8.Resource.SharedReferenceCount.ReferenceController);
    local_130 = (code *)0x0;
    pcVar16 = (code *)0x0;
    pcVar15 = (code *)0x0;
    pUVar10 = FWeakObjectPtr::Get(param_1);
    pcVar14 = (code *)0x0;
    if (pUVar10 != (UObject *)0x0) {
      uVar3 = *(uint *)((longlong)param_1 + 0x40);
      if ((-1 < (int)uVar3) && ((int)uVar3 < *(int *)&pUVar10[0x1d].field_0x8)) {
        uVar8 = 0;
        if ((int)uVar3 < *(int *)&pUVar10[0x1d].field_0x8) {
          uVar8 = ~uVar3 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar16 = (code *)swi(3);
          uVar7 = (*pcVar16)();
          return (bool)uVar7;
        }
        pcVar16 = *(code **)(*(longlong *)(pUVar10 + 0x1d) + (longlong)(int)uVar3 * 8);
      }
      uVar3 = *(uint *)((longlong)param_1 + 0x44);
      if ((-1 < (int)uVar3) && ((int)uVar3 < *(int *)&pUVar10[0x1d].field_0x8)) {
        uVar8 = 0;
        if ((int)uVar3 < *(int *)&pUVar10[0x1d].field_0x8) {
          uVar8 = ~uVar3 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar16 = (code *)swi(3);
          uVar7 = (*pcVar16)();
          return (bool)uVar7;
        }
        local_130 = *(code **)(*(longlong *)(pUVar10 + 0x1d) + (longlong)(int)uVar3 * 8);
      }
      uVar3 = *(uint *)((longlong)param_1 + 0x48);
      pcVar14 = local_130;
      if ((-1 < (int)uVar3) && ((int)uVar3 < *(int *)&pUVar10[0x1d].field_0x8)) {
        uVar8 = 0;
        if ((int)uVar3 < *(int *)&pUVar10[0x1d].field_0x8) {
          uVar8 = ~uVar3 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar16 = (code *)swi(3);
          uVar7 = (*pcVar16)();
          return (bool)uVar7;
        }
        pcVar15 = *(code **)(*(longlong *)(pUVar10 + 0x1d) + (longlong)(int)uVar3 * 8);
      }
    }
    pcVar4 = (code *)this->_padding_;
    if ((pcVar4 == (code *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypedProxy != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterface.h"
                           ,0x3a0,L""), bVar6)) {
      pcVar16 = (code *)swi(3);
      uVar7 = (*pcVar16)();
      return (bool)uVar7;
    }
    local_100 = *(undefined1 *)((longlong)param_1 + 0x38);
    uStack_e8 = *(undefined1 *)((longlong)param_1 + 0x4c);
    local_e0 = (code *)param_2->ID;
    local_b8[0] = (code *)0x0;
    local_110 = pcVar4;
    pcStack_108 = pcVar16;
    pcStack_f8 = pcVar14;
    local_f0 = pcVar15;
    local_90 = FMemory::Malloc(0x40,8);
    *local_90 = (code *)&UE::Core::Private::Function::
                         TFunction_OwnedObject<`UNiagaraDataInterfaceLandscape::PerInstanceTick'::`5'::<lambda_1>,1,1>
                         ::_vftable_;
    local_90[1] = local_110;
    local_90[2] = pcStack_108;
    local_90[3] = (code *)CONCAT71(uStack_ff,local_100);
    local_90[4] = pcStack_f8;
    local_90[5] = local_f0;
    local_90[6] = (code *)CONCAT71(uStack_e7,uStack_e8);
    local_90[7] = local_e0;
    if (local_90 + 1 != (code **)0x0) {
      local_b8[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`UNiagaraDataInterfaceLandscape::PerInstanceTick'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
                    ::Call;
    }
    this_02 = FRenderCommandList::GetInstanceTLS();
    if (this_02 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_UNiagaraDataInterfaceLandscape::PerInstanceTick_::__l5::TSTR_FNiagaraDIUpdateProxy1796>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_b8);
    }
    else {
      this_03 = FRenderCommandList::GetRenderThread(this_02);
      local_88._0_8_ = local_b8[0];
      local_60 = local_90;
      local_90 = (code **)0x0;
      local_88._16_8_ = local_a8[0];
      local_88._24_8_ = local_a8[1];
      local_88._32_8_ = local_a8[2];
      local_b8[0] = (code *)0x0;
      local_58 = 2;
      pFVar11 = (FRenderCommandTag *)
                TRenderCommandTag<`UNiagaraDataInterfaceLandscape::PerInstanceTick'::__l5::TSTR_FNiagaraDIUpdateProxy1796>
                ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (this_03,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)local_88,pFVar11);
      uVar13 = (ulonglong)local_58;
      if ((2 < uVar13) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar6)) {
        pcVar16 = (code *)swi(3);
        uVar7 = (*pcVar16)();
        return (bool)uVar7;
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar13] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)local_88._0_8_ != (code *)0x0) {
          ppcVar12 = (code **)(local_88 + 0x10);
          if (local_60 != (code **)0x0) {
            ppcVar12 = local_60;
          }
          (**(code **)(*ppcVar12 + 0x10))();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar13])(local_88);
      }
    }
    if (local_b8[0] != (code *)0x0) {
      ppcVar12 = local_b8 + 2;
      if (local_90 != (code **)0x0) {
        ppcVar12 = local_90;
      }
      (**(code **)(*ppcVar12 + 0x10))();
    }
  }
  return false;
}

// PostInitProperties @ 149188a90

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UNiagaraDataInterfaceLandscape::PostInitProperties(UNiagaraDataInterfaceLandscape *this)

{
  TObjectPtr<UObject>_u_0 local_28;
  undefined2 local_20;
  undefined1 local_1e;
  undefined8 local_1c;
  undefined4 local_14;
  
  UObject::PostInitProperties((UObject *)this);
  if ((this->_padding_ & 0x10) != 0) {
    local_28 = (TObjectPtr<UObject>_u_0)this->_padding_;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_28.DebugPtr != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_28.DebugPtr);
    }
    local_1e = 0;
    local_20 = 1;
    local_1c = 0xffffffffffffffff;
    local_14 = 0xffffffff;
    FNiagaraTypeDefinition::GeneratePathNameHash((FNiagaraTypeDefinition *)&local_28.ObjectPtr);
    FNiagaraTypeRegistry::Register
              ((FNiagaraTypeDefinition *)&local_28.ObjectPtr,AllowParameter|AllowAnyVariable);
  }
  return;
}

// ProvidePerInstanceDataForRenderThread @ 1491894b0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UNiagaraDataInterfaceLandscape::ProvidePerInstanceDataForRenderThread
          (UNiagaraDataInterfaceLandscape *this,void *param_1,void *param_2,ulong64 *param_3)

{
  undefined8 *puVar1;
  FScriptContainerElement *pFVar2;
  double dVar3;
  FNDILandscapeData_GameToRenderThread *pFVar4;
  TArray<FRegionRequest,TSizedDefaultAllocator<32>_> *pTVar5;
  
  memset(param_1,0,0x170);
  pFVar4 = FNDILandscapeData_GameToRenderThread::FNDILandscapeData_GameToRenderThread(param_1);
  puVar1 = *(undefined8 **)((longlong)param_2 + 0x18);
  if (puVar1 != (undefined8 *)0x0) {
    pFVar4->TextureResources = (FLandscapeTextureResource *)*puVar1;
    dVar3 = (double)puVar1[0x25];
    (pFVar4->CachedHeightTextureUvScaleBias).field0_0x0._s_0.X = (double)puVar1[0x24];
    (pFVar4->CachedHeightTextureUvScaleBias).field0_0x0._s_0.Y = dVar3;
    dVar3 = (double)puVar1[0x27];
    (pFVar4->CachedHeightTextureUvScaleBias).field0_0x0._s_0.Z = (double)puVar1[0x26];
    (pFVar4->CachedHeightTextureUvScaleBias).field0_0x0._s_0.W = dVar3;
    *(undefined8 *)&(pFVar4->CachedHeightTextureLWCTile).field0_0x0 = puVar1[1];
    (pFVar4->CachedHeightTextureLWCTile).field0_0x0._s_0.Z = *(float *)(puVar1 + 2);
    dVar3 = (double)puVar1[0x15];
    (pFVar4->CachedHeightTextureWorldToUvTransform).M[0][0] = (double)puVar1[0x14];
    (pFVar4->CachedHeightTextureWorldToUvTransform).M[0][1] = dVar3;
    dVar3 = (double)puVar1[0x17];
    (pFVar4->CachedHeightTextureWorldToUvTransform).M[0][2] = (double)puVar1[0x16];
    (pFVar4->CachedHeightTextureWorldToUvTransform).M[0][3] = dVar3;
    dVar3 = (double)puVar1[0x19];
    (pFVar4->CachedHeightTextureWorldToUvTransform).M[1][0] = (double)puVar1[0x18];
    (pFVar4->CachedHeightTextureWorldToUvTransform).M[1][1] = dVar3;
    dVar3 = (double)puVar1[0x1b];
    (pFVar4->CachedHeightTextureWorldToUvTransform).M[1][2] = (double)puVar1[0x1a];
    (pFVar4->CachedHeightTextureWorldToUvTransform).M[1][3] = dVar3;
    dVar3 = (double)puVar1[0x1d];
    (pFVar4->CachedHeightTextureWorldToUvTransform).M[2][0] = (double)puVar1[0x1c];
    (pFVar4->CachedHeightTextureWorldToUvTransform).M[2][1] = dVar3;
    dVar3 = (double)puVar1[0x1f];
    (pFVar4->CachedHeightTextureWorldToUvTransform).M[2][2] = (double)puVar1[0x1e];
    (pFVar4->CachedHeightTextureWorldToUvTransform).M[2][3] = dVar3;
    dVar3 = (double)puVar1[0x21];
    (pFVar4->CachedHeightTextureWorldToUvTransform).M[3][0] = (double)puVar1[0x20];
    (pFVar4->CachedHeightTextureWorldToUvTransform).M[3][1] = dVar3;
    dVar3 = (double)puVar1[0x23];
    (pFVar4->CachedHeightTextureWorldToUvTransform).M[3][2] = (double)puVar1[0x22];
    (pFVar4->CachedHeightTextureWorldToUvTransform).M[3][3] = dVar3;
    dVar3 = (double)puVar1[5];
    (pFVar4->CachedHeightTextureUvToWorldTransform).M[0][0] = (double)puVar1[4];
    (pFVar4->CachedHeightTextureUvToWorldTransform).M[0][1] = dVar3;
    dVar3 = (double)puVar1[7];
    (pFVar4->CachedHeightTextureUvToWorldTransform).M[0][2] = (double)puVar1[6];
    (pFVar4->CachedHeightTextureUvToWorldTransform).M[0][3] = dVar3;
    dVar3 = (double)puVar1[9];
    (pFVar4->CachedHeightTextureUvToWorldTransform).M[1][0] = (double)puVar1[8];
    (pFVar4->CachedHeightTextureUvToWorldTransform).M[1][1] = dVar3;
    dVar3 = (double)puVar1[0xb];
    (pFVar4->CachedHeightTextureUvToWorldTransform).M[1][2] = (double)puVar1[10];
    (pFVar4->CachedHeightTextureUvToWorldTransform).M[1][3] = dVar3;
    dVar3 = (double)puVar1[0xd];
    (pFVar4->CachedHeightTextureUvToWorldTransform).M[2][0] = (double)puVar1[0xc];
    (pFVar4->CachedHeightTextureUvToWorldTransform).M[2][1] = dVar3;
    dVar3 = (double)puVar1[0xf];
    (pFVar4->CachedHeightTextureUvToWorldTransform).M[2][2] = (double)puVar1[0xe];
    (pFVar4->CachedHeightTextureUvToWorldTransform).M[2][3] = dVar3;
    dVar3 = (double)puVar1[0x11];
    (pFVar4->CachedHeightTextureUvToWorldTransform).M[3][0] = (double)puVar1[0x10];
    (pFVar4->CachedHeightTextureUvToWorldTransform).M[3][1] = dVar3;
    dVar3 = (double)puVar1[0x13];
    (pFVar4->CachedHeightTextureUvToWorldTransform).M[3][2] = (double)puVar1[0x12];
    (pFVar4->CachedHeightTextureUvToWorldTransform).M[3][3] = dVar3;
    dVar3 = (double)puVar1[0x2a];
    (pFVar4->CachedHeightTextureWorldGridSize).field0_0x0._s_0.X = (double)puVar1[0x29];
    (pFVar4->CachedHeightTextureWorldGridSize).field0_0x0._s_0.Y = dVar3;
  }
  puVar1 = (undefined8 *)((longlong)param_2 + 0x28);
  pFVar4->BaseColorVirtualTextureUnpackType = *(EBaseColorUnpackType *)((longlong)param_2 + 0x3c);
  pTVar5 = &pFVar4->RegionRequests;
  if (pTVar5 != (TArray<FRegionRequest,TSizedDefaultAllocator<32>_> *)puVar1) {
    pFVar2 = (pTVar5->AllocatorInstance).Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pTVar5->AllocatorInstance).Data = (FScriptContainerElement *)*puVar1;
    *puVar1 = 0;
    (pFVar4->RegionRequests).ArrayNum = *(int *)((longlong)param_2 + 0x30);
    (pFVar4->RegionRequests).ArrayMax = *(int *)((longlong)param_2 + 0x34);
    *(undefined8 *)((longlong)param_2 + 0x30) = 0;
  }
  return;
}

// SetShaderParameters @ 14918dfd0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UNiagaraDataInterfaceLandscape::SetShaderParameters
          (UNiagaraDataInterfaceLandscape *this,
          FNiagaraDataInterfaceSetShaderParametersContext *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  EBaseColorUnpackType EVar10;
  FNiagaraDataInterfaceProxy *pFVar11;
  FRHIShaderResourceView *pFVar12;
  code *pcVar13;
  EPixelFormatCapabilities EVar14;
  undefined8 uVar15;
  bool bVar16;
  bool bVar17;
  undefined8 uVar18;
  TRefCountPtr<FRHISamplerState> TVar19;
  bool bVar20;
  bool bVar21;
  ulong64 uVar22;
  FNDILandscapeData_RenderThread *this_00;
  FShaderParametersMetadata *pFVar23;
  TRefCountPtr<FRHISamplerState> TVar24;
  uint uVar25;
  FShaderParameters *pFVar26;
  TVector<double>_u_0 local_168;
  TVector<double>_u_0 local_150;
  TVector<double>_u_0 local_138;
  TVector<double>_u_0 local_120;
  double local_108;
  double local_100;
  double local_f8;
  TVector<double>_u_0 local_f0;
  double local_d8;
  double local_d0;
  double local_c8;
  TVector<double>_u_0 local_c0;
  double local_a8;
  double local_a0;
  double local_98;
  
  if (param_1->DataInterfaceProxy == (FNiagaraDataInterfaceProxy *)0x0) {
    bVar20 = ::FDebug::CheckVerifyFailedImpl2
                       ("DataInterfaceProxy",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterface.h"
                        ,0x1c1,L"");
    if (bVar20) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
  }
  pFVar11 = param_1->DataInterfaceProxy;
  uVar22 = FNiagaraDataInterfaceSetShaderParametersContext::GetSystemInstanceID(param_1);
  this_00 = TMapBase<unsigned___int64,FNDILandscapeData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDILandscapeData_RenderThread,0>_>
            ::Find((TMapBase<unsigned___int64,FNDILandscapeData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDILandscapeData_RenderThread,0>_>
                    *)(pFVar11 + 1),uVar22);
  uVar25 = param_1->ParametersOffset + 0xf & 0xfffffff0;
  pFVar23 = TShaderParameterStructTypeInfo<NiagaraDataInterfaceLandscape::FShaderParameters>::
            GetStructMetadata();
  pFVar26 = (FShaderParameters *)(param_1->BaseParameters + uVar25);
  param_1->ParametersOffset = pFVar23->Size + uVar25;
  TVar19 = TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
           ::StaticResource.StateRHI;
  TVar24 = TStaticStateRHI<TStaticSamplerState<0,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
           ::StaticResource.StateRHI;
  bVar20 = true;
  bVar17 = true;
  pFVar26->BaseColorVirtualTextureSampler =
       TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
       ::StaticResource.StateRHI.Reference;
  pFVar26->HeightVirtualTextureSampler = TVar19.Reference;
  pFVar26->NormalVirtualTexture0Sampler = TVar19.Reference;
  pFVar26->NormalVirtualTexture1Sampler = TVar19.Reference;
  EVar14 = GPixelFormats[0xd].Capabilities & TextureFilterable;
  pFVar26->PointClampedSampler = TVar24.Reference;
  if (EVar14 != None) {
    TVar24 = TVar19;
  }
  pFVar26->CachedHeightTextureSampler = TVar24.Reference;
  bVar21 = bVar17;
  if (this_00 != (FNDILandscapeData_RenderThread *)0x0) {
    if (((this_00->BaseColorVirtualPage).PageTableRef.Reference == (FRHITexture *)0x0) ||
       (pFVar12 = (this_00->BaseColorVirtualLayer).TextureSRV.Reference,
       pFVar12 == (FRHIShaderResourceView *)0x0)) {
      bVar16 = true;
    }
    else {
      pFVar26->BaseColorVirtualTexture = pFVar12;
      pFVar26->BaseColorVirtualTexturePageTable =
           (this_00->BaseColorVirtualPage).PageTableRef.Reference;
      local_168._s_0.X = (this_00->BaseColorVirtualPage).WorldToUvParameters[0].field0_0x0._s_0.X;
      local_168._s_0.Y = (this_00->BaseColorVirtualPage).WorldToUvParameters[0].field0_0x0._s_0.Y;
      local_168._s_0.Z = (this_00->BaseColorVirtualPage).WorldToUvParameters[0].field0_0x0._s_0.Z;
      TLargeWorldRenderPosition<double>::TLargeWorldRenderPosition<double><double>
                ((TLargeWorldRenderPosition<double> *)&local_120._s_0,
                 (TVector<double> *)&local_168._s_0);
      (pFVar26->BaseColorVirtualTextureLWCTile).field0_0x0._s_0.X = (float)local_120._s_0.X;
      (pFVar26->BaseColorVirtualTextureLWCTile).field0_0x0._s_0.Y = (float)local_120._s_0.Y;
      (pFVar26->BaseColorVirtualTextureLWCTile).field0_0x0._s_0.Z = (float)local_120._s_0.Z;
      uVar18 = _UNK_150689648;
      uVar15 = ___xmm_3f800000000000000000000000000000;
      dVar1 = (this_00->BaseColorVirtualPage).WorldToUvParameters[1].field0_0x0._s_0.X;
      dVar2 = (this_00->BaseColorVirtualPage).WorldToUvParameters[2].field0_0x0._s_0.X;
      dVar3 = (this_00->BaseColorVirtualPage).WorldToUvParameters[1].field0_0x0._s_0.Y;
      dVar4 = (this_00->BaseColorVirtualPage).WorldToUvParameters[2].field0_0x0._s_0.Y;
      dVar5 = (this_00->BaseColorVirtualPage).WorldToUvParameters[1].field0_0x0._s_0.Z;
      dVar6 = (this_00->BaseColorVirtualPage).WorldToUvParameters[2].field0_0x0._s_0.Z;
      (pFVar26->BaseColorVirtualTextureWorldToUvTransform).M[0][0] = (float)local_108;
      (pFVar26->BaseColorVirtualTextureWorldToUvTransform).M[0][1] = (float)local_100;
      (pFVar26->BaseColorVirtualTextureWorldToUvTransform).M[0][2] = (float)local_f8;
      (pFVar26->BaseColorVirtualTextureWorldToUvTransform).M[0][3] = 0.0;
      (pFVar26->BaseColorVirtualTextureWorldToUvTransform).M[1][0] = (float)dVar1;
      (pFVar26->BaseColorVirtualTextureWorldToUvTransform).M[1][1] = (float)dVar3;
      (pFVar26->BaseColorVirtualTextureWorldToUvTransform).M[1][2] = (float)dVar5;
      (pFVar26->BaseColorVirtualTextureWorldToUvTransform).M[1][3] = 0.0;
      (pFVar26->BaseColorVirtualTextureWorldToUvTransform).M[2][0] = (float)dVar2;
      (pFVar26->BaseColorVirtualTextureWorldToUvTransform).M[2][1] = (float)dVar4;
      (pFVar26->BaseColorVirtualTextureWorldToUvTransform).M[2][2] = (float)dVar6;
      (pFVar26->BaseColorVirtualTextureWorldToUvTransform).M[2][3] = 0.0;
      *(undefined8 *)(pFVar26->BaseColorVirtualTextureWorldToUvTransform).M[3] = uVar15;
      *(undefined8 *)((pFVar26->BaseColorVirtualTextureWorldToUvTransform).M[3] + 2) = uVar18;
      pFVar26->BaseColorVirtualTextureUnpackSRGB =
           (uint)((this_00->LandscapeData).BaseColorVirtualTextureUnpackType == SRGBUnpack);
      EVar10 = (this_00->LandscapeData).BaseColorVirtualTextureUnpackType;
      pFVar26->BaseColorVirtualTextureEnabled = 1;
      pFVar26->BaseColorVirtualTextureUnpackYCoCg = (uint)(EVar10 == YCoCgUnpack);
      uVar15 = *(undefined8 *)
                ((longlong)&(this_00->BaseColorVirtualPage).PageTableUniforms[0].field0_0x0 + 8);
      *(undefined8 *)&(pFVar26->BaseColorVirtualTexturePackedUniform0).field0_0x0 =
           *(undefined8 *)&(this_00->BaseColorVirtualPage).PageTableUniforms[0].field0_0x0;
      *(undefined8 *)((longlong)&(pFVar26->BaseColorVirtualTexturePackedUniform0).field0_0x0 + 8) =
           uVar15;
      uVar15 = *(undefined8 *)
                ((longlong)&(this_00->BaseColorVirtualPage).PageTableUniforms[1].field0_0x0 + 8);
      *(undefined8 *)&(pFVar26->BaseColorVirtualTexturePackedUniform1).field0_0x0 =
           *(undefined8 *)&(this_00->BaseColorVirtualPage).PageTableUniforms[1].field0_0x0;
      *(undefined8 *)((longlong)&(pFVar26->BaseColorVirtualTexturePackedUniform1).field0_0x0 + 8) =
           uVar15;
      uVar15 = *(undefined8 *)
                ((longlong)&(this_00->BaseColorVirtualLayer).TextureUniforms.field0_0x0 + 8);
      *(undefined8 *)&(pFVar26->BaseColorVirtualTextureUniforms).field0_0x0 =
           *(undefined8 *)&(this_00->BaseColorVirtualLayer).TextureUniforms.field0_0x0;
      *(undefined8 *)((longlong)&(pFVar26->BaseColorVirtualTextureUniforms).field0_0x0 + 8) = uVar15
      ;
      bVar16 = false;
    }
    if (((this_00->HeightVirtualPage).PageTableRef.Reference != (FRHITexture *)0x0) &&
       (pFVar12 = (this_00->HeightVirtualLayer).TextureSRV.Reference,
       pFVar12 != (FRHIShaderResourceView *)0x0)) {
      pFVar26->HeightVirtualTexture = pFVar12;
      pFVar26->HeightVirtualTexturePageTable = (this_00->HeightVirtualPage).PageTableRef.Reference;
      local_150._s_0.X = (this_00->HeightVirtualPage).WorldToUvParameters[0].field0_0x0._s_0.X;
      local_150._s_0.Y = (this_00->HeightVirtualPage).WorldToUvParameters[0].field0_0x0._s_0.Y;
      local_150._s_0.Z = (this_00->HeightVirtualPage).WorldToUvParameters[0].field0_0x0._s_0.Z;
      TLargeWorldRenderPosition<double>::TLargeWorldRenderPosition<double><double>
                ((TLargeWorldRenderPosition<double> *)&local_f0._s_0,
                 (TVector<double> *)&local_150._s_0);
      (pFVar26->HeightVirtualTextureLWCTile).field0_0x0._s_0.X = (float)local_f0._s_0.X;
      (pFVar26->HeightVirtualTextureLWCTile).field0_0x0._s_0.Y = (float)local_f0._s_0.Y;
      (pFVar26->HeightVirtualTextureLWCTile).field0_0x0._s_0.Z = (float)local_f0._s_0.Z;
      dVar1 = (this_00->HeightVirtualPage).WorldToUvParameters[1].field0_0x0._s_0.X;
      dVar2 = (this_00->HeightVirtualPage).WorldToUvParameters[1].field0_0x0._s_0.Y;
      dVar3 = (this_00->HeightVirtualPage).WorldToUvParameters[1].field0_0x0._s_0.Z;
      dVar4 = (this_00->HeightVirtualPage).WorldToUvParameters[2].field0_0x0._s_0.X;
      dVar5 = (this_00->HeightVirtualPage).WorldToUvParameters[3].field0_0x0._s_0.X;
      dVar6 = (this_00->HeightVirtualPage).WorldToUvParameters[2].field0_0x0._s_0.Y;
      dVar7 = (this_00->HeightVirtualPage).WorldToUvParameters[3].field0_0x0._s_0.Y;
      dVar8 = (this_00->HeightVirtualPage).WorldToUvParameters[2].field0_0x0._s_0.Z;
      dVar9 = (this_00->HeightVirtualPage).WorldToUvParameters[3].field0_0x0._s_0.Z;
      pFVar26->HeightVirtualTextureEnabled = 1;
      (pFVar26->HeightVirtualTextureWorldToUvTransform).M[0][0] = (float)local_d8;
      (pFVar26->HeightVirtualTextureWorldToUvTransform).M[0][1] = (float)local_d0;
      (pFVar26->HeightVirtualTextureWorldToUvTransform).M[0][2] = (float)local_c8;
      (pFVar26->HeightVirtualTextureWorldToUvTransform).M[0][3] = 0.0;
      (pFVar26->HeightVirtualTextureWorldToUvTransform).M[1][0] = (float)dVar1;
      (pFVar26->HeightVirtualTextureWorldToUvTransform).M[1][1] = (float)dVar2;
      (pFVar26->HeightVirtualTextureWorldToUvTransform).M[1][2] = (float)dVar3;
      (pFVar26->HeightVirtualTextureWorldToUvTransform).M[1][3] = 0.0;
      (pFVar26->HeightVirtualTextureWorldToUvTransform).M[2][0] = (float)dVar4;
      (pFVar26->HeightVirtualTextureWorldToUvTransform).M[2][1] = (float)dVar6;
      (pFVar26->HeightVirtualTextureWorldToUvTransform).M[2][2] = (float)dVar8;
      (pFVar26->HeightVirtualTextureWorldToUvTransform).M[2][3] = 0.0;
      (pFVar26->HeightVirtualTextureWorldToUvTransform).M[3][0] = (float)dVar5;
      (pFVar26->HeightVirtualTextureWorldToUvTransform).M[3][1] = (float)dVar7;
      (pFVar26->HeightVirtualTextureWorldToUvTransform).M[3][2] = (float)dVar9;
      (pFVar26->HeightVirtualTextureWorldToUvTransform).M[3][3] = 1.0;
      uVar15 = *(undefined8 *)
                ((longlong)&(this_00->HeightVirtualPage).PageTableUniforms[0].field0_0x0 + 8);
      *(undefined8 *)&(pFVar26->HeightVirtualTexturePackedUniform0).field0_0x0 =
           *(undefined8 *)&(this_00->HeightVirtualPage).PageTableUniforms[0].field0_0x0;
      *(undefined8 *)((longlong)&(pFVar26->HeightVirtualTexturePackedUniform0).field0_0x0 + 8) =
           uVar15;
      bVar20 = false;
      uVar15 = *(undefined8 *)
                ((longlong)&(this_00->HeightVirtualPage).PageTableUniforms[1].field0_0x0 + 8);
      *(undefined8 *)&(pFVar26->HeightVirtualTexturePackedUniform1).field0_0x0 =
           *(undefined8 *)&(this_00->HeightVirtualPage).PageTableUniforms[1].field0_0x0;
      *(undefined8 *)((longlong)&(pFVar26->HeightVirtualTexturePackedUniform1).field0_0x0 + 8) =
           uVar15;
      uVar15 = *(undefined8 *)
                ((longlong)&(this_00->HeightVirtualLayer).TextureUniforms.field0_0x0 + 8);
      *(undefined8 *)&(pFVar26->HeightVirtualTextureUniforms).field0_0x0 =
           *(undefined8 *)&(this_00->HeightVirtualLayer).TextureUniforms.field0_0x0;
      *(undefined8 *)((longlong)&(pFVar26->HeightVirtualTextureUniforms).field0_0x0 + 8) = uVar15;
    }
    if ((((this_00->NormalVirtualPage).PageTableRef.Reference != (FRHITexture *)0x0) &&
        (pFVar12 = (this_00->NormalVirtualLayer0).TextureSRV.Reference, bVar17 = true,
        pFVar12 != (FRHIShaderResourceView *)0x0)) &&
       ((this_00->NormalVirtualLayer1).TextureSRV.Reference != (FRHIShaderResourceView *)0x0)) {
      pFVar26->NormalVirtualTexture0 = pFVar12;
      pFVar26->NormalVirtualTexture1 = (this_00->NormalVirtualLayer1).TextureSRV.Reference;
      pFVar26->NormalVirtualTexturePageTable = (this_00->NormalVirtualPage).PageTableRef.Reference;
      local_138._s_0.X = (this_00->NormalVirtualPage).WorldToUvParameters[0].field0_0x0._s_0.X;
      local_138._s_0.Y = (this_00->NormalVirtualPage).WorldToUvParameters[0].field0_0x0._s_0.Y;
      local_138._s_0.Z = (this_00->NormalVirtualPage).WorldToUvParameters[0].field0_0x0._s_0.Z;
      TLargeWorldRenderPosition<double>::TLargeWorldRenderPosition<double><double>
                ((TLargeWorldRenderPosition<double> *)&local_c0._s_0,
                 (TVector<double> *)&local_138._s_0);
      (pFVar26->NormalVirtualTextureLWCTile).field0_0x0._s_0.X = (float)local_c0._s_0.X;
      (pFVar26->NormalVirtualTextureLWCTile).field0_0x0._s_0.Y = (float)local_c0._s_0.Y;
      (pFVar26->NormalVirtualTextureLWCTile).field0_0x0._s_0.Z = (float)local_c0._s_0.Z;
      uVar18 = _UNK_150689648;
      uVar15 = ___xmm_3f800000000000000000000000000000;
      dVar1 = (this_00->NormalVirtualPage).WorldToUvParameters[1].field0_0x0._s_0.X;
      dVar2 = (this_00->NormalVirtualPage).WorldToUvParameters[2].field0_0x0._s_0.X;
      dVar3 = (this_00->NormalVirtualPage).WorldToUvParameters[1].field0_0x0._s_0.Y;
      dVar4 = (this_00->NormalVirtualPage).WorldToUvParameters[2].field0_0x0._s_0.Y;
      dVar5 = (this_00->NormalVirtualPage).WorldToUvParameters[1].field0_0x0._s_0.Z;
      dVar6 = (this_00->NormalVirtualPage).WorldToUvParameters[2].field0_0x0._s_0.Z;
      dVar7 = (this_00->NormalVirtualPage).WorldToUvParameters[1].field0_0x0._s_0.W;
      dVar8 = (this_00->NormalVirtualPage).WorldToUvParameters[2].field0_0x0._s_0.W;
      pFVar26->NormalVirtualTextureEnabled = 1;
      (pFVar26->NormalVirtualTextureWorldToUvTransform).M[0][0] = (float)local_a8;
      (pFVar26->NormalVirtualTextureWorldToUvTransform).M[0][1] = (float)local_a0;
      (pFVar26->NormalVirtualTextureWorldToUvTransform).M[0][2] = (float)local_98;
      (pFVar26->NormalVirtualTextureWorldToUvTransform).M[0][3] = 1.0;
      (pFVar26->NormalVirtualTextureWorldToUvTransform).M[1][0] = (float)dVar1;
      (pFVar26->NormalVirtualTextureWorldToUvTransform).M[1][1] = (float)dVar3;
      (pFVar26->NormalVirtualTextureWorldToUvTransform).M[1][2] = (float)dVar5;
      (pFVar26->NormalVirtualTextureWorldToUvTransform).M[1][3] = (float)dVar7;
      (pFVar26->NormalVirtualTextureWorldToUvTransform).M[2][0] = (float)dVar2;
      (pFVar26->NormalVirtualTextureWorldToUvTransform).M[2][1] = (float)dVar4;
      (pFVar26->NormalVirtualTextureWorldToUvTransform).M[2][2] = (float)dVar6;
      (pFVar26->NormalVirtualTextureWorldToUvTransform).M[2][3] = (float)dVar8;
      *(undefined8 *)(pFVar26->NormalVirtualTextureWorldToUvTransform).M[3] = uVar15;
      *(undefined8 *)((pFVar26->NormalVirtualTextureWorldToUvTransform).M[3] + 2) = uVar18;
      pFVar26->NormalVirtualTextureUnpackMode = this_00->NormalUnpackMode;
      uVar15 = *(undefined8 *)
                ((longlong)&(this_00->NormalVirtualPage).PageTableUniforms[0].field0_0x0 + 8);
      *(undefined8 *)&(pFVar26->NormalVirtualTexturePackedUniform0).field0_0x0 =
           *(undefined8 *)&(this_00->NormalVirtualPage).PageTableUniforms[0].field0_0x0;
      *(undefined8 *)((longlong)&(pFVar26->NormalVirtualTexturePackedUniform0).field0_0x0 + 8) =
           uVar15;
      uVar15 = *(undefined8 *)
                ((longlong)&(this_00->NormalVirtualPage).PageTableUniforms[1].field0_0x0 + 8);
      *(undefined8 *)&(pFVar26->NormalVirtualTexturePackedUniform1).field0_0x0 =
           *(undefined8 *)&(this_00->NormalVirtualPage).PageTableUniforms[1].field0_0x0;
      *(undefined8 *)((longlong)&(pFVar26->NormalVirtualTexturePackedUniform1).field0_0x0 + 8) =
           uVar15;
      uVar15 = *(undefined8 *)
                ((longlong)&(this_00->NormalVirtualLayer0).TextureUniforms.field0_0x0 + 8);
      *(undefined8 *)&(pFVar26->NormalVirtualTextureUniforms0).field0_0x0 =
           *(undefined8 *)&(this_00->NormalVirtualLayer0).TextureUniforms.field0_0x0;
      *(undefined8 *)((longlong)&(pFVar26->NormalVirtualTextureUniforms0).field0_0x0 + 8) = uVar15;
      uVar15 = *(undefined8 *)
                ((longlong)&(this_00->NormalVirtualLayer1).TextureUniforms.field0_0x0 + 8);
      *(undefined8 *)&(pFVar26->NormalVirtualTextureUniforms1).field0_0x0 =
           *(undefined8 *)&(this_00->NormalVirtualLayer1).TextureUniforms.field0_0x0;
      *(undefined8 *)((longlong)&(pFVar26->NormalVirtualTextureUniforms1).field0_0x0 + 8) = uVar15;
      bVar17 = false;
    }
    bVar21 = FNDILandscapeData_RenderThread::SetCachedHeightTextureParameters(this_00,pFVar26);
    bVar21 = !bVar21;
    if (!bVar16) goto LAB_14918e786;
  }
  pFVar26->BaseColorVirtualTexture = (GBlackTextureWithSRV->ShaderResourceViewRHI).Reference;
  pFVar26->BaseColorVirtualTexturePageTable = (GBlackUintTexture->TextureRHI).Reference;
  uVar15 = UE::Math::TMatrix<float>::Identity.M[0]._8_8_;
  *(undefined8 *)(pFVar26->BaseColorVirtualTextureWorldToUvTransform).M[0] =
       UE::Math::TMatrix<float>::Identity.M[0]._0_8_;
  *(undefined8 *)((pFVar26->BaseColorVirtualTextureWorldToUvTransform).M[0] + 2) = uVar15;
  uVar15 = UE::Math::TMatrix<float>::Identity.M[1]._8_8_;
  *(undefined8 *)(pFVar26->BaseColorVirtualTextureWorldToUvTransform).M[1] =
       UE::Math::TMatrix<float>::Identity.M[1]._0_8_;
  *(undefined8 *)((pFVar26->BaseColorVirtualTextureWorldToUvTransform).M[1] + 2) = uVar15;
  uVar15 = UE::Math::TMatrix<float>::Identity.M[2]._8_8_;
  *(undefined8 *)(pFVar26->BaseColorVirtualTextureWorldToUvTransform).M[2] =
       UE::Math::TMatrix<float>::Identity.M[2]._0_8_;
  *(undefined8 *)((pFVar26->BaseColorVirtualTextureWorldToUvTransform).M[2] + 2) = uVar15;
  uVar15 = UE::Math::TMatrix<float>::Identity.M[3]._8_8_;
  *(undefined8 *)(pFVar26->BaseColorVirtualTextureWorldToUvTransform).M[3] =
       UE::Math::TMatrix<float>::Identity.M[3]._0_8_;
  *(undefined8 *)((pFVar26->BaseColorVirtualTextureWorldToUvTransform).M[3] + 2) = uVar15;
  pFVar26->BaseColorVirtualTextureUnpackSRGB = 0;
  pFVar26->BaseColorVirtualTextureUnpackYCoCg = 0;
  pFVar26->BaseColorVirtualTextureEnabled = 0;
  *(undefined8 *)&(pFVar26->BaseColorVirtualTexturePackedUniform0).field0_0x0 = 0;
  *(undefined8 *)((longlong)&(pFVar26->BaseColorVirtualTexturePackedUniform0).field0_0x0 + 8) = 0;
  *(undefined8 *)&(pFVar26->BaseColorVirtualTexturePackedUniform1).field0_0x0 = 0;
  *(undefined8 *)((longlong)&(pFVar26->BaseColorVirtualTexturePackedUniform1).field0_0x0 + 8) = 0;
  *(undefined8 *)&(pFVar26->BaseColorVirtualTextureUniforms).field0_0x0 = 0;
  *(undefined8 *)((longlong)&(pFVar26->BaseColorVirtualTextureUniforms).field0_0x0 + 8) = 0;
LAB_14918e786:
  if (bVar20) {
    pFVar26->HeightVirtualTexture = (GBlackTextureWithSRV->ShaderResourceViewRHI).Reference;
    pFVar26->HeightVirtualTexturePageTable = (GBlackUintTexture->TextureRHI).Reference;
    uVar15 = UE::Math::TMatrix<float>::Identity.M[0]._8_8_;
    *(undefined8 *)(pFVar26->HeightVirtualTextureWorldToUvTransform).M[0] =
         UE::Math::TMatrix<float>::Identity.M[0]._0_8_;
    *(undefined8 *)((pFVar26->HeightVirtualTextureWorldToUvTransform).M[0] + 2) = uVar15;
    uVar15 = UE::Math::TMatrix<float>::Identity.M[1]._8_8_;
    *(undefined8 *)(pFVar26->HeightVirtualTextureWorldToUvTransform).M[1] =
         UE::Math::TMatrix<float>::Identity.M[1]._0_8_;
    *(undefined8 *)((pFVar26->HeightVirtualTextureWorldToUvTransform).M[1] + 2) = uVar15;
    uVar15 = UE::Math::TMatrix<float>::Identity.M[2]._8_8_;
    *(undefined8 *)(pFVar26->HeightVirtualTextureWorldToUvTransform).M[2] =
         UE::Math::TMatrix<float>::Identity.M[2]._0_8_;
    *(undefined8 *)((pFVar26->HeightVirtualTextureWorldToUvTransform).M[2] + 2) = uVar15;
    uVar15 = UE::Math::TMatrix<float>::Identity.M[3]._8_8_;
    *(undefined8 *)(pFVar26->HeightVirtualTextureWorldToUvTransform).M[3] =
         UE::Math::TMatrix<float>::Identity.M[3]._0_8_;
    *(undefined8 *)((pFVar26->HeightVirtualTextureWorldToUvTransform).M[3] + 2) = uVar15;
    pFVar26->HeightVirtualTextureEnabled = 0;
    *(undefined8 *)&(pFVar26->HeightVirtualTexturePackedUniform0).field0_0x0 = 0;
    *(undefined8 *)((longlong)&(pFVar26->HeightVirtualTexturePackedUniform0).field0_0x0 + 8) = 0;
    *(undefined8 *)&(pFVar26->HeightVirtualTexturePackedUniform1).field0_0x0 = 0;
    *(undefined8 *)((longlong)&(pFVar26->HeightVirtualTexturePackedUniform1).field0_0x0 + 8) = 0;
    *(undefined8 *)&(pFVar26->HeightVirtualTextureUniforms).field0_0x0 = 0;
    *(undefined8 *)((longlong)&(pFVar26->HeightVirtualTextureUniforms).field0_0x0 + 8) = 0;
  }
  if (bVar17) {
    pFVar26->NormalVirtualTexture0 = (GBlackTextureWithSRV->ShaderResourceViewRHI).Reference;
    pFVar26->NormalVirtualTexture1 = (GBlackTextureWithSRV->ShaderResourceViewRHI).Reference;
    pFVar26->NormalVirtualTexturePageTable = (GBlackUintTexture->TextureRHI).Reference;
    uVar15 = UE::Math::TMatrix<float>::Identity.M[0]._8_8_;
    *(undefined8 *)(pFVar26->NormalVirtualTextureWorldToUvTransform).M[0] =
         UE::Math::TMatrix<float>::Identity.M[0]._0_8_;
    *(undefined8 *)((pFVar26->NormalVirtualTextureWorldToUvTransform).M[0] + 2) = uVar15;
    uVar15 = UE::Math::TMatrix<float>::Identity.M[1]._8_8_;
    *(undefined8 *)(pFVar26->NormalVirtualTextureWorldToUvTransform).M[1] =
         UE::Math::TMatrix<float>::Identity.M[1]._0_8_;
    *(undefined8 *)((pFVar26->NormalVirtualTextureWorldToUvTransform).M[1] + 2) = uVar15;
    uVar15 = UE::Math::TMatrix<float>::Identity.M[2]._8_8_;
    *(undefined8 *)(pFVar26->NormalVirtualTextureWorldToUvTransform).M[2] =
         UE::Math::TMatrix<float>::Identity.M[2]._0_8_;
    *(undefined8 *)((pFVar26->NormalVirtualTextureWorldToUvTransform).M[2] + 2) = uVar15;
    uVar15 = UE::Math::TMatrix<float>::Identity.M[3]._8_8_;
    *(undefined8 *)(pFVar26->NormalVirtualTextureWorldToUvTransform).M[3] =
         UE::Math::TMatrix<float>::Identity.M[3]._0_8_;
    *(undefined8 *)((pFVar26->NormalVirtualTextureWorldToUvTransform).M[3] + 2) = uVar15;
    pFVar26->NormalVirtualTextureUnpackMode = 0;
    pFVar26->NormalVirtualTextureEnabled = 0;
    *(undefined8 *)&(pFVar26->NormalVirtualTexturePackedUniform0).field0_0x0 = 0;
    *(undefined8 *)((longlong)&(pFVar26->NormalVirtualTexturePackedUniform0).field0_0x0 + 8) = 0;
    *(undefined8 *)&(pFVar26->NormalVirtualTexturePackedUniform1).field0_0x0 = 0;
    *(undefined8 *)((longlong)&(pFVar26->NormalVirtualTexturePackedUniform1).field0_0x0 + 8) = 0;
    *(undefined8 *)&(pFVar26->NormalVirtualTextureUniforms0).field0_0x0 = 0;
    *(undefined8 *)((longlong)&(pFVar26->NormalVirtualTextureUniforms0).field0_0x0 + 8) = 0;
    *(undefined8 *)&(pFVar26->NormalVirtualTextureUniforms1).field0_0x0 = 0;
    *(undefined8 *)((longlong)&(pFVar26->NormalVirtualTextureUniforms1).field0_0x0 + 8) = 0;
  }
  if (bVar21) {
    pFVar26->CachedHeightTexture = (GBlackTexture->TextureRHI).Reference;
    *(undefined8 *)&(pFVar26->CachedHeightTextureLWCTile).field0_0x0 =
         UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
    (pFVar26->CachedHeightTextureLWCTile).field0_0x0._s_0.Z =
         UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
    uVar15 = UE::Math::TMatrix<float>::Identity.M[0]._8_8_;
    *(undefined8 *)(pFVar26->CachedHeightTextureWorldToUvTransform).M[0] =
         UE::Math::TMatrix<float>::Identity.M[0]._0_8_;
    *(undefined8 *)((pFVar26->CachedHeightTextureWorldToUvTransform).M[0] + 2) = uVar15;
    uVar15 = UE::Math::TMatrix<float>::Identity.M[1]._8_8_;
    *(undefined8 *)(pFVar26->CachedHeightTextureWorldToUvTransform).M[1] =
         UE::Math::TMatrix<float>::Identity.M[1]._0_8_;
    *(undefined8 *)((pFVar26->CachedHeightTextureWorldToUvTransform).M[1] + 2) = uVar15;
    uVar15 = UE::Math::TMatrix<float>::Identity.M[2]._8_8_;
    *(undefined8 *)(pFVar26->CachedHeightTextureWorldToUvTransform).M[2] =
         UE::Math::TMatrix<float>::Identity.M[2]._0_8_;
    *(undefined8 *)((pFVar26->CachedHeightTextureWorldToUvTransform).M[2] + 2) = uVar15;
    uVar15 = UE::Math::TMatrix<float>::Identity.M[3]._8_8_;
    *(undefined8 *)(pFVar26->CachedHeightTextureWorldToUvTransform).M[3] =
         UE::Math::TMatrix<float>::Identity.M[3]._0_8_;
    *(undefined8 *)((pFVar26->CachedHeightTextureWorldToUvTransform).M[3] + 2) = uVar15;
    uVar15 = UE::Math::TMatrix<float>::Identity.M[0]._8_8_;
    *(undefined8 *)(pFVar26->CachedHeightTextureUvToWorldTransform).M[0] =
         UE::Math::TMatrix<float>::Identity.M[0]._0_8_;
    *(undefined8 *)((pFVar26->CachedHeightTextureUvToWorldTransform).M[0] + 2) = uVar15;
    uVar15 = UE::Math::TMatrix<float>::Identity.M[1]._8_8_;
    *(undefined8 *)(pFVar26->CachedHeightTextureUvToWorldTransform).M[1] =
         UE::Math::TMatrix<float>::Identity.M[1]._0_8_;
    *(undefined8 *)((pFVar26->CachedHeightTextureUvToWorldTransform).M[1] + 2) = uVar15;
    uVar15 = UE::Math::TMatrix<float>::Identity.M[2]._8_8_;
    *(undefined8 *)(pFVar26->CachedHeightTextureUvToWorldTransform).M[2] =
         UE::Math::TMatrix<float>::Identity.M[2]._0_8_;
    *(undefined8 *)((pFVar26->CachedHeightTextureUvToWorldTransform).M[2] + 2) = uVar15;
    uVar15 = UE::Math::TMatrix<float>::Identity.M[3]._8_8_;
    *(undefined8 *)(pFVar26->CachedHeightTextureUvToWorldTransform).M[3] =
         UE::Math::TMatrix<float>::Identity.M[3]._0_8_;
    *(undefined8 *)((pFVar26->CachedHeightTextureUvToWorldTransform).M[3] + 2) = uVar15;
    *(undefined8 *)&(pFVar26->CachedHeightTextureUvScaleBias).field0_0x0 = 0;
    *(undefined8 *)((longlong)&(pFVar26->CachedHeightTextureUvScaleBias).field0_0x0 + 8) = 0;
    (pFVar26->CachedHeightTextureWorldGridSize).field0_0x0._s_0 =
         (TVector2<float>_u_0_s_0)UE::Math::TVector2<float>::ZeroVector.field0_0x0;
    pFVar26->CachedHeightTextureEnabled = 0;
    pFVar26->CachedPhysMatTexture = (GBlackUintTexture->TextureRHI).Reference;
  }
  return;
}

// StaticRegisterNativesUNiagaraDataInterfaceLandscape @ 14918ef30

void __cdecl
UNiagaraDataInterfaceLandscape::StaticRegisterNativesUNiagaraDataInterfaceLandscape(void)

{
  return;
}

// VMGenerateRvtFeedback @ 149190bc0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UNiagaraDataInterfaceLandscape::VMGenerateRvtFeedback
          (UNiagaraDataInterfaceLandscape *this,FVectorVMExternalFunctionContext *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  uchar uVar5;
  char cVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  uint *puVar12;
  void *pvVar13;
  code *pcVar14;
  double dVar15;
  undefined1 auVar16 [16];
  undefined8 uVar17;
  bool bVar18;
  float *pfVar19;
  float *pfVar20;
  float *pfVar21;
  float *pfVar22;
  float *pfVar23;
  float *pfVar24;
  longlong lVar25;
  longlong lVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  longlong lVar33;
  undefined1 (*pauVar34) [16];
  float *pfVar35;
  longlong lVar36;
  longlong lVar37;
  longlong lVar38;
  longlong lVar39;
  longlong lVar40;
  int iVar41;
  longlong lVar42;
  double dVar43;
  double dVar44;
  undefined4 uVar45;
  double dVar46;
  undefined4 uVar47;
  undefined4 uVar48;
  undefined4 uVar49;
  undefined4 uVar50;
  undefined4 uVar51;
  undefined4 uVar52;
  undefined4 uVar53;
  float *local_res20;
  float *local_1d8;
  float *local_1d0;
  float *local_1c8;
  float *local_1c0;
  float *local_1b8;
  float *local_1b0;
  int local_140 [6];
  int local_128 [2];
  float *local_120;
  int local_110 [6];
  int local_f8 [6];
  int local_e0 [4];
  bool local_d0;
  undefined7 uStack_cf;
  int local_b8 [6];
  int local_a0 [6];
  int local_88 [6];
  int local_70 [14];
  
  if ((param_1->NumRegisters <= param_1->RegReadCount) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("RegReadCount < NumRegisters",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VectorVM\\Public\\VectorVM.h"
                          ,0x160,L""), bVar18)) {
    pcVar14 = (code *)swi(3);
    (*pcVar14)();
    return;
  }
  iVar27 = param_1->RegReadCount;
  uVar5 = param_1->RegInc[iVar27];
  puVar12 = param_1->RegisterData[iVar27];
  param_1->RegReadCount = iVar27 + 1;
  if ((uVar5 != '\0') &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("AdvanceOffset == 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VectorVM\\Public\\VectorVM.h"
                          ,0x19e,L""), bVar18)) {
    pcVar14 = (code *)swi(3);
    (*pcVar14)();
    return;
  }
  uVar7 = *puVar12;
  if ((uVar7 == 0xffffffff) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("UserPtrIdx != INDEX_NONE",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VectorVM\\Public\\VectorVM.h"
                          ,0x1a0,L""), bVar18)) {
    pcVar14 = (code *)swi(3);
    (*pcVar14)();
    return;
  }
  if ((param_1->NumUserPtrs <= (int)uVar7) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("UserPtrIdx < NumUserPtrs",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VectorVM\\Public\\VectorVM.h"
                          ,0x15b,L""), bVar18)) {
    pcVar14 = (code *)swi(3);
    (*pcVar14)();
    return;
  }
  iVar41 = 0;
  local_140[0] = 0;
  pvVar13 = param_1->UserPtrTable[(int)uVar7];
  pfVar19 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_140);
  iVar27 = local_140[0] * param_1->PerInstanceFnInstanceIdx;
  local_128[0] = 0;
  pfVar20 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_128);
  lVar33 = (longlong)local_128[0];
  local_110[0] = 0;
  iVar28 = local_128[0] * param_1->PerInstanceFnInstanceIdx;
  local_120 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_110);
  local_f8[0] = 0;
  local_120 = local_120 + local_110[0] * param_1->PerInstanceFnInstanceIdx;
  pfVar21 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_f8);
  lVar42 = (longlong)local_f8[0];
  local_70[0] = 0;
  iVar29 = local_f8[0] * param_1->PerInstanceFnInstanceIdx;
  pfVar22 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_70);
  lVar38 = (longlong)local_70[0];
  local_e0[0] = 0;
  iVar30 = local_70[0] * param_1->PerInstanceFnInstanceIdx;
  local_1c8 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_e0);
  lVar39 = (longlong)local_e0[0];
  local_a0[0] = 0;
  local_1c8 = local_1c8 + local_e0[0] * param_1->PerInstanceFnInstanceIdx;
  local_1c0 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_a0);
  local_88[0] = 0;
  local_1c0 = local_1c0 + local_a0[0] * param_1->PerInstanceFnInstanceIdx;
  pfVar23 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_88);
  iVar31 = local_88[0] * param_1->PerInstanceFnInstanceIdx;
  local_b8[0] = 0;
  pfVar24 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_b8);
  iVar32 = local_b8[0] * param_1->PerInstanceFnInstanceIdx;
  cVar6 = *(char *)((longlong)pvVar13 + 0x70);
  if (param_1->NumInstances != 0) {
    if (cVar6 != '\0') {
      uVar7 = *(int *)((longlong)pvVar13 + 0x30) + param_1->NumInstances;
      if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar7);
      }
      if (*(int *)((longlong)pvVar13 + 0x34) < (int)uVar7) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x30,8,uVar7,(ForAnyElementType *)((longlong)pvVar13 + 0x28),
                   *(int *)((longlong)pvVar13 + 0x30),(int *)((longlong)pvVar13 + 0x34));
      }
    }
    if (0 < param_1->NumInstances) {
      lVar25 = (longlong)local_88[0];
      lVar36 = (longlong)local_140[0];
      lVar37 = (longlong)local_110[0];
      lVar40 = (longlong)local_a0[0];
      lVar26 = (longlong)local_b8[0];
      pfVar19 = pfVar19 + iVar27;
      pfVar35 = local_120;
      local_res20 = pfVar20 + iVar28;
      local_1d8 = pfVar21 + iVar29;
      local_1d0 = pfVar22 + iVar30;
      local_1b8 = pfVar23 + iVar31;
      local_1b0 = pfVar24 + iVar32;
      do {
        uVar17 = _local_d0;
        fVar8 = *local_1d0;
        fVar9 = *local_1c8;
        local_1c8 = local_1c8 + lVar39;
        fVar10 = *local_1c0;
        local_1c0 = local_1c0 + lVar40;
        fVar11 = *local_1b8;
        if ((*local_1b0 != 0.0) && (cVar6 != '\0')) {
          dVar1 = *(double *)((longlong)pvVar13 + 0x50);
          dVar46 = (double)*pfVar35;
          dVar43 = (double)*local_1d8;
          dVar15 = (double)*pfVar19;
          dVar44 = (double)*local_res20;
          if ((dVar46 < dVar1) ||
             (((dVar2 = *(double *)((longlong)pvVar13 + 0x60), dVar2 < dVar15 ||
               (dVar3 = *(double *)((longlong)pvVar13 + 0x58), dVar43 < dVar3)) ||
              (dVar4 = *(double *)((longlong)pvVar13 + 0x68), dVar4 < dVar44)))) {
            if ((*(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                         0x9d4c) <
                 `public:_struct_UE::Math::TBox2<double>___cdecl_UE::Math::TBox2<double>::Overlap(UE::Math::TBox2<double>_const&___ptr64)const___ptr64'
                 ::__l5::_thread_safe_static_guard_0__) &&
               (_Init_thread_header(&`public:_struct_UE::Math::TBox2<double>___cdecl_UE::Math::TBox2<double>::Overlap(UE::Math::TBox2<double>_const&___ptr64)const___ptr64'
                                     ::__l5::_thread_safe_static_guard_0__),
               `public:_struct_UE::Math::TBox2<double>___cdecl_UE::Math::TBox2<double>::Overlap(UE::Math::TBox2<double>_const&___ptr64)const___ptr64'
               ::__l5::_thread_safe_static_guard_0__ == -1)) {
              `public:_struct_UE::Math::TBox2<double>___cdecl_UE::Math::TBox2<double>::Overlap(UE::Math::TBox2<double>_const&___ptr64)const___ptr64'
              ::__l5::EmptyBox.Min.field0_0x0 = (TVector2<double>_u_0)ZEXT816(0);
              `public:_struct_UE::Math::TBox2<double>___cdecl_UE::Math::TBox2<double>::Overlap(UE::Math::TBox2<double>_const&___ptr64)const___ptr64'
              ::__l5::EmptyBox.bIsValid = false;
              `public:_struct_UE::Math::TBox2<double>___cdecl_UE::Math::TBox2<double>::Overlap(UE::Math::TBox2<double>_const&___ptr64)const___ptr64'
              ::__l5::EmptyBox._33_7_ = 0;
              `public:_struct_UE::Math::TBox2<double>___cdecl_UE::Math::TBox2<double>::Overlap(UE::Math::TBox2<double>_const&___ptr64)const___ptr64'
              ::__l5::EmptyBox.Max.field0_0x0 = (TVector2<double>_u_0)ZEXT816(0);
              _Init_thread_footer(&`public:_struct_UE::Math::TBox2<double>___cdecl_UE::Math::TBox2<double>::Overlap(UE::Math::TBox2<double>_const&___ptr64)const___ptr64'
                                   ::__l5::_thread_safe_static_guard_0__);
            }
            uVar52 = `public:_struct_UE::Math::TBox2<double>___cdecl_UE::Math::TBox2<double>::Overlap(UE::Math::TBox2<double>_const&___ptr64)const___ptr64'
                     ::__l5::EmptyBox._32_4_;
            uVar53 = `public:_struct_UE::Math::TBox2<double>___cdecl_UE::Math::TBox2<double>::Overlap(UE::Math::TBox2<double>_const&___ptr64)const___ptr64'
                     ::__l5::EmptyBox._36_4_;
            dVar15 = `public:_struct_UE::Math::TBox2<double>___cdecl_UE::Math::TBox2<double>::Overlap(UE::Math::TBox2<double>_const&___ptr64)const___ptr64'
                     ::__l5::EmptyBox.Min.field0_0x0._0_8_;
            uVar50 = `public:_struct_UE::Math::TBox2<double>___cdecl_UE::Math::TBox2<double>::Overlap(UE::Math::TBox2<double>_const&___ptr64)const___ptr64'
                     ::__l5::EmptyBox.Min.field0_0x0._8_4_;
            uVar51 = `public:_struct_UE::Math::TBox2<double>___cdecl_UE::Math::TBox2<double>::Overlap(UE::Math::TBox2<double>_const&___ptr64)const___ptr64'
                     ::__l5::EmptyBox.Min.field0_0x0._12_4_;
            uVar45 = `public:_struct_UE::Math::TBox2<double>___cdecl_UE::Math::TBox2<double>::Overlap(UE::Math::TBox2<double>_const&___ptr64)const___ptr64'
                     ::__l5::EmptyBox.Max.field0_0x0._0_4_;
            uVar47 = `public:_struct_UE::Math::TBox2<double>___cdecl_UE::Math::TBox2<double>::Overlap(UE::Math::TBox2<double>_const&___ptr64)const___ptr64'
                     ::__l5::EmptyBox.Max.field0_0x0._4_4_;
            uVar48 = `public:_struct_UE::Math::TBox2<double>___cdecl_UE::Math::TBox2<double>::Overlap(UE::Math::TBox2<double>_const&___ptr64)const___ptr64'
                     ::__l5::EmptyBox.Max.field0_0x0._8_4_;
            uVar49 = `public:_struct_UE::Math::TBox2<double>___cdecl_UE::Math::TBox2<double>::Overlap(UE::Math::TBox2<double>_const&___ptr64)const___ptr64'
                     ::__l5::EmptyBox.Max.field0_0x0._12_4_;
            local_d0 = `public:_struct_UE::Math::TBox2<double>___cdecl_UE::Math::TBox2<double>::Overlap(UE::Math::TBox2<double>_const&___ptr64)const___ptr64'
                       ::__l5::EmptyBox.bIsValid;
            uStack_cf = `public:_struct_UE::Math::TBox2<double>___cdecl_UE::Math::TBox2<double>::Overlap(UE::Math::TBox2<double>_const&___ptr64)const___ptr64'
                        ::__l5::EmptyBox._33_7_;
            uVar17 = _local_d0;
            local_d0 = `public:_struct_UE::Math::TBox2<double>___cdecl_UE::Math::TBox2<double>::Overlap(UE::Math::TBox2<double>_const&___ptr64)const___ptr64'
                       ::__l5::EmptyBox.bIsValid;
            bVar18 = local_d0 == false;
            _local_d0 = uVar17;
            if (bVar18) goto LAB_1491910d9;
          }
          else {
            if (dVar15 <= dVar1) {
              dVar15 = dVar1;
            }
            local_d0 = true;
            uVar52 = (undefined4)_local_d0;
            uVar53 = SUB84(uVar17,4);
            if (dVar2 <= dVar46) {
              dVar46 = dVar2;
            }
            if (dVar44 <= dVar3) {
              dVar44 = dVar3;
            }
            if (dVar4 <= dVar43) {
              dVar43 = dVar4;
            }
            uVar45 = SUB84(dVar46,0);
            uVar47 = (undefined4)((ulonglong)dVar46 >> 0x20);
            uVar50 = SUB84(dVar44,0);
            uVar51 = (undefined4)((ulonglong)dVar44 >> 0x20);
            uVar48 = SUB84(dVar43,0);
            uVar49 = (undefined4)((ulonglong)dVar43 >> 0x20);
          }
          iVar27 = *(int *)((longlong)pvVar13 + 0x30);
          if (iVar27 == *(int *)((longlong)pvVar13 + 0x34)) {
            iVar27 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x830,(ForAnyElementType *)((longlong)pvVar13 + 0x28),
                                (int *)((longlong)pvVar13 + 0x34));
          }
          *(int *)((longlong)pvVar13 + 0x30) = iVar27 + 1;
          pauVar34 = (undefined1 (*) [16])
                     (*(longlong *)((longlong)pvVar13 + 0x28) + (longlong)iVar27 * 0x30);
          DefaultConstructItems<FRegionRequest,int>(pauVar34,1);
          auVar16._8_4_ = uVar50;
          auVar16._0_8_ = dVar15;
          auVar16._12_4_ = uVar51;
          *pauVar34 = auVar16;
          pauVar34[2][0xe] = fVar11 != 0.0;
          *(undefined4 *)pauVar34[1] = uVar45;
          *(undefined4 *)(pauVar34[1] + 4) = uVar47;
          *(undefined4 *)(pauVar34[1] + 8) = uVar48;
          *(undefined4 *)(pauVar34[1] + 0xc) = uVar49;
          *(float *)(pauVar34[2] + 8) = fVar8;
          *(ulonglong *)pauVar34[2] = CONCAT44(uVar53,uVar52);
          pauVar34[2][0xc] = fVar9 != 0.0;
          pauVar34[2][0xd] = fVar10 != 0.0;
        }
LAB_1491910d9:
        iVar41 = iVar41 + 1;
        pfVar19 = pfVar19 + lVar36;
        pfVar35 = pfVar35 + lVar37;
        local_res20 = local_res20 + lVar33;
        local_1d8 = local_1d8 + lVar42;
        local_1d0 = local_1d0 + lVar38;
        local_1b8 = local_1b8 + lVar25;
        local_1b0 = local_1b0 + lVar26;
      } while (iVar41 < param_1->NumInstances);
    }
  }
  return;
}

