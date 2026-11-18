// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// Get @ 147bde670

FExternalTextureRegistry * __cdecl FExternalTextureRegistry::Get(void)

{
  code *pcVar1;
  bool bVar2;
  FExternalTextureRegistry *pFVar3;
  
  bVar2 = IsInParallelRenderingThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInParallelRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ExternalTexture.cpp"
                       ,0x10,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FExternalTextureRegistry *)(*pcVar1)();
      return pFVar3;
    }
  }
  if (Singleton == (FExternalTextureRegistry *)0x0) {
    pFVar3 = ::operator_new(200);
    if (pFVar3 != (FExternalTextureRegistry *)0x0) {
      *(undefined8 *)&pFVar3->TextureEntries = 0;
      *(undefined8 *)&(pFVar3->TextureEntries).field_0x8 = 0;
      *(undefined8 *)&(pFVar3->TextureEntries).field_0x20 = 0;
      *(undefined4 *)&(pFVar3->TextureEntries).field_0x28 = 0;
      *(undefined4 *)&(pFVar3->TextureEntries).field_0x2c = 0x80;
      *(undefined4 *)&(pFVar3->TextureEntries).field_0x30 = 0xffffffff;
      *(undefined4 *)&(pFVar3->TextureEntries).field_0x34 = 0;
      *(undefined8 *)&(pFVar3->TextureEntries).field_0x40 = 0;
      *(undefined4 *)&(pFVar3->TextureEntries).field_0x48 = 0;
      *(undefined8 *)&(pFVar3->ReferencingMaterialRenderProxies).Elements = 0;
      *(undefined8 *)&(pFVar3->ReferencingMaterialRenderProxies).Elements.field_0x8 = 0;
      *(undefined8 *)&(pFVar3->ReferencingMaterialRenderProxies).Elements.field_0x20 = 0;
      *(undefined4 *)&(pFVar3->ReferencingMaterialRenderProxies).Elements.field_0x28 = 0;
      *(undefined4 *)&(pFVar3->ReferencingMaterialRenderProxies).Elements.field_0x2c = 0x80;
      *(undefined4 *)&(pFVar3->ReferencingMaterialRenderProxies).Elements.field_0x30 = 0xffffffff;
      *(undefined4 *)&(pFVar3->ReferencingMaterialRenderProxies).Elements.field_0x34 = 0;
      (pFVar3->ReferencingMaterialRenderProxies).Hash.SecondaryData =
           (ForElementType<FSetElementId>)0x0;
      (pFVar3->ReferencingMaterialRenderProxies).HashSize = 0;
      InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&pFVar3->CriticalSection,4000);
      Singleton = pFVar3;
      return pFVar3;
    }
    Singleton = (FExternalTextureRegistry *)0x0;
  }
  return Singleton;
}

// GetExternalTexture @ 147be0170

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FExternalTextureRegistry::GetExternalTexture
          (FExternalTextureRegistry *this,FMaterialRenderProxy *param_1,FGuid *param_2,
          TRefCountPtr<FRHITexture> *param_3,TRefCountPtr<FRHISamplerState> *param_4)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FRHITexture *this_00;
  FRHITexture *this_01;
  FRHIResource *this_02;
  FRHIResource *this_03;
  FExternalTextureEntry *pFVar1;
  bool bVar2;
  FMaterialRenderProxy *local_res8;
  FMaterialRenderProxy *local_res10;
  
  lpCriticalSection = &this->CriticalSection;
  local_res10 = param_1;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (param_1 != (FMaterialRenderProxy *)0x0) {
    if (param_1->MarkedForGarbageCollection != 0) {
      UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogMaterial);
    }
    if ((int)param_1->_padding_ != -1) {
      TSet<FMaterialRenderProxy_const_*,DefaultKeyFuncs<FMaterialRenderProxy_const_*,0>,FDefaultSetAllocator>
      ::Emplace<FMaterialRenderProxy_const_*_const_&>
                (&this->ReferencingMaterialRenderProxies,&local_res8,(bool *)&local_res10);
    }
  }
  if (((param_2->D != 0 || param_2->C != 0) || param_2->B != 0) || param_2->A != 0) {
    pFVar1 = TMapBase<FGuid,FExternalTextureRegistry::FExternalTextureEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FExternalTextureRegistry::FExternalTextureEntry,0>_>
             ::Find((TMapBase<FGuid,FExternalTextureRegistry::FExternalTextureEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FExternalTextureRegistry::FExternalTextureEntry,0>_>
                     *)this,param_2);
    if (pFVar1 != (FExternalTextureEntry *)0x0) {
      this_00 = (pFVar1->TextureRHI).Reference;
      this_01 = param_3->Reference;
      if (this_01 != this_00) {
        param_3->Reference = this_00;
        if (this_00 != (FRHITexture *)0x0) {
          FRHIResource::AddRef((FRHIResource *)this_00);
        }
        if (this_01 != (FRHITexture *)0x0) {
          FRHIResource::Release((FRHIResource *)this_01);
        }
      }
      this_02 = (FRHIResource *)(pFVar1->SamplerStateRHI).Reference;
      this_03 = (FRHIResource *)param_4->Reference;
      if (this_03 != this_02) {
        param_4->Reference = (FRHISamplerState *)this_02;
        if (this_02 != (FRHIResource *)0x0) {
          FRHIResource::AddRef(this_02);
        }
        if (this_03 != (FRHIResource *)0x0) {
          FRHIResource::Release(this_03);
        }
      }
      bVar2 = true;
      goto LAB_147be025f;
    }
  }
  bVar2 = false;
LAB_147be025f:
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return bVar2;
}

// GetExternalTextureCoordinateOffset @ 147be0290

bool __thiscall
FExternalTextureRegistry::GetExternalTextureCoordinateOffset
          (FExternalTextureRegistry *this,FGuid *param_1,FLinearColor *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  ulong64 uVar6;
  longlong lVar7;
  bool bVar8;
  
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  uVar6 = CityHash64((char *)param_1,0x10);
  iVar5 = TSet<TTuple<FGuid,FExternalTextureRegistry::FExternalTextureEntry>,TDefaultMapHashableKeyFuncs<FGuid,FExternalTextureRegistry::FExternalTextureEntry,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FGuid>
                    ((TSet<TTuple<FGuid,FExternalTextureRegistry::FExternalTextureEntry>,TDefaultMapHashableKeyFuncs<FGuid,FExternalTextureRegistry::FExternalTextureEntry,0>,FDefaultSetAllocator>
                      *)this,(uint)uVar6,param_1);
  if (iVar5 != -1) {
    lVar1 = *(longlong *)&this->TextureEntries + (longlong)iVar5 * 0x48;
    lVar7 = lVar1 + 0x10;
    if (lVar1 == 0) {
      lVar7 = 0;
    }
    if (lVar7 != 0) {
      fVar2 = *(float *)(lVar7 + 0x24);
      fVar3 = *(float *)(lVar7 + 0x28);
      fVar4 = *(float *)(lVar7 + 0x2c);
      bVar8 = true;
      (param_2->field0_0x0)._s_0.R = *(float *)(lVar7 + 0x20);
      (param_2->field0_0x0)._s_0.G = fVar2;
      (param_2->field0_0x0)._s_0.B = fVar3;
      (param_2->field0_0x0)._s_0.A = fVar4;
      goto LAB_147be030e;
    }
  }
  bVar8 = false;
LAB_147be030e:
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return bVar8;
}

// GetExternalTextureCoordinateScaleRotation @ 147be0340

bool __thiscall
FExternalTextureRegistry::GetExternalTextureCoordinateScaleRotation
          (FExternalTextureRegistry *this,FGuid *param_1,FLinearColor *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  ulong64 uVar6;
  longlong lVar7;
  bool bVar8;
  
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  uVar6 = CityHash64((char *)param_1,0x10);
  iVar5 = TSet<TTuple<FGuid,FExternalTextureRegistry::FExternalTextureEntry>,TDefaultMapHashableKeyFuncs<FGuid,FExternalTextureRegistry::FExternalTextureEntry,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FGuid>
                    ((TSet<TTuple<FGuid,FExternalTextureRegistry::FExternalTextureEntry>,TDefaultMapHashableKeyFuncs<FGuid,FExternalTextureRegistry::FExternalTextureEntry,0>,FDefaultSetAllocator>
                      *)this,(uint)uVar6,param_1);
  if (iVar5 != -1) {
    lVar1 = *(longlong *)&this->TextureEntries + (longlong)iVar5 * 0x48;
    lVar7 = lVar1 + 0x10;
    if (lVar1 == 0) {
      lVar7 = 0;
    }
    if (lVar7 != 0) {
      fVar2 = *(float *)(lVar7 + 0x14);
      fVar3 = *(float *)(lVar7 + 0x18);
      fVar4 = *(float *)(lVar7 + 0x1c);
      bVar8 = true;
      (param_2->field0_0x0)._s_0.R = *(float *)(lVar7 + 0x10);
      (param_2->field0_0x0)._s_0.G = fVar2;
      (param_2->field0_0x0)._s_0.B = fVar3;
      (param_2->field0_0x0)._s_0.A = fVar4;
      goto LAB_147be03be;
    }
  }
  bVar8 = false;
LAB_147be03be:
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return bVar8;
}

// RegisterExternalTexture @ 147bfaee0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FExternalTextureRegistry::RegisterExternalTexture
          (FExternalTextureRegistry *this,FGuid *param_1,TRefCountPtr<FRHITexture> *param_2,
          TRefCountPtr<FRHISamplerState> *param_3,FLinearColor *param_4,FLinearColor *param_5)

{
  undefined1 *puVar1;
  TSet<FMaterialRenderProxy_const_*,DefaultKeyFuncs<FMaterialRenderProxy_const_*,0>,FDefaultSetAllocator>
  *pTVar2;
  FWindowsRecursiveMutex *lpCriticalSection;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  FMaterialRenderProxy *this_00;
  code *pcVar6;
  TSet<FMaterialRenderProxy_const_*,DefaultKeyFuncs<FMaterialRenderProxy_const_*,0>,FDefaultSetAllocator>
  *pTVar7;
  bool bVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  undefined1 *puVar12;
  uint *puVar13;
  uint uVar14;
  undefined1 local_res8 [8];
  TPairInitializer<FGuid_const_&,FExternalTextureRegistry::FExternalTextureEntry_&&> local_f8;
  TSet<FMaterialRenderProxy_const_*,DefaultKeyFuncs<FMaterialRenderProxy_const_*,0>,FDefaultSetAllocator>
  *local_e8;
  int iStack_e0;
  uint uStack_dc;
  undefined1 *local_d8;
  undefined4 uStack_d0;
  int iStack_cc;
  int local_c8;
  undefined4 uStack_c4;
  int iStack_c0;
  undefined4 uStack_bc;
  TSet<FMaterialRenderProxy_const_*,DefaultKeyFuncs<FMaterialRenderProxy_const_*,0>,FDefaultSetAllocator>
  *local_b8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_b0;
  undefined8 uStack_90;
  FGuid *local_88;
  FRHITexture **local_80;
  FRHITexture *local_78;
  FRHIResource *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_2c;
  
  bVar8 = IsInRenderingThread();
  if ((!bVar8) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ExternalTexture.cpp"
                         ,0x1d,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  local_78 = param_2->Reference;
  if (local_78 != (FRHITexture *)0x0) {
    FRHIResource::AddRef((FRHIResource *)local_78);
  }
  local_70 = (FRHIResource *)param_3->Reference;
  if (local_70 != (FRHIResource *)0x0) {
    FRHIResource::AddRef(local_70);
  }
  local_68 = *(undefined8 *)&param_4->field0_0x0;
  uStack_60 = *(undefined8 *)((longlong)&param_4->field0_0x0 + 8);
  local_58 = *(undefined8 *)&param_5->field0_0x0;
  uStack_50 = *(undefined8 *)((longlong)&param_5->field0_0x0 + 8);
  local_80 = &local_78;
  local_88 = param_1;
  TSet<TTuple<FGuid,FExternalTextureRegistry::FExternalTextureEntry>,TDefaultMapHashableKeyFuncs<FGuid,FExternalTextureRegistry::FExternalTextureEntry,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FGuid_const_&,FExternalTextureRegistry::FExternalTextureEntry_&&>_>
            ((TSet<TTuple<FGuid,FExternalTextureRegistry::FExternalTextureEntry>,TDefaultMapHashableKeyFuncs<FGuid,FExternalTextureRegistry::FExternalTextureEntry,0>,FDefaultSetAllocator>
              *)this,&local_f8,(bool *)&local_88);
  if (local_70 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_70);
  }
  if (local_78 != (FRHITexture *)0x0) {
    FRHIResource::Release((FRHIResource *)local_78);
  }
  iVar4 = *(int *)&(this->ReferencingMaterialRenderProxies).Elements.field_0x28;
  puVar1 = &(this->ReferencingMaterialRenderProxies).Elements.field_0x10;
  iStack_e0 = 0;
  pTVar2 = &this->ReferencingMaterialRenderProxies;
  uStack_dc = 1;
  local_c8 = 0;
  iStack_cc = local_c8;
  if (iVar4 != 0) {
    puVar13 = *(uint **)&(this->ReferencingMaterialRenderProxies).Elements.field_0x20;
    if (puVar13 == (uint *)0x0) {
      puVar13 = (uint *)puVar1;
    }
    uVar10 = *puVar13;
    local_c8 = 0;
    while (uVar10 == 0) {
      lVar9 = (longlong)iStack_e0;
      local_c8 = local_c8 + 0x20;
      iStack_e0 = iStack_e0 + 1;
      iStack_cc = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_e0) goto LAB_147bfb050;
      uVar10 = puVar13[lVar9 + 1];
    }
    uStack_dc = -uVar10 & uVar10;
    uVar3 = (ulonglong)uStack_dc * 2 + 1;
    lVar9 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_f8.Key._4_4_ = (int)lVar9;
    iStack_cc = local_f8.Key._4_4_ + -1 + local_c8;
    if (iVar4 < iStack_cc) {
      iStack_cc = iVar4;
    }
  }
LAB_147bfb050:
  uStack_c4 = local_2c;
  iStack_c0 = *(int *)&(this->ReferencingMaterialRenderProxies).Elements.field_0x8 -
              *(int *)&(this->ReferencingMaterialRenderProxies).Elements.field_0x34;
  uVar10 = *(uint *)&(this->ReferencingMaterialRenderProxies).Elements.field_0x28;
  uStack_d0 = 0xffffffff;
  uVar14 = uVar10 & 0xffffffe0;
  TStack_b0._padding_ = CONCAT44(uStack_dc,iStack_e0);
  TStack_b0.CurrentBitIndex = iStack_cc;
  TStack_b0.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_b0._28_4_ = local_2c;
  TStack_b0.BaseBitIndex = local_c8;
  uStack_90 = CONCAT44(uStack_bc,iStack_c0);
  local_e8 = pTVar2;
  local_d8 = puVar1;
  local_b8 = pTVar2;
  TStack_b0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar10 < 0) || (iVar4 < (int)uVar10)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar5 = *(uint *)&(this->ReferencingMaterialRenderProxies).Elements.field_0x28;
  if (uVar10 != uVar5) {
    puVar12 = *(undefined1 **)&(this->ReferencingMaterialRenderProxies).Elements.field_0x20;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar9 = (longlong)iVar11;
      uVar14 = uVar14 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar5;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_147bfb160;
      uVar10 = *(uint *)(puVar12 + lVar9 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_f8.Value._0_4_ = (int)lVar9;
    uVar10 = (int)local_f8.Value + -1 + uVar14;
    if ((int)uVar5 < (int)uVar10) {
      uVar10 = uVar5;
    }
  }
LAB_147bfb160:
  while( true ) {
    pTVar7 = local_b8;
    if (*(int *)&(local_b8->Elements).field_0x8 - *(int *)&(local_b8->Elements).field_0x34 !=
        (int)uStack_90) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<FMaterialRenderProxy_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_b0.CurrentBitIndex == uVar10) &&
        (TStack_b0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar7 == pTVar2))
    break;
    this_00 = *(FMaterialRenderProxy **)
               (*(longlong *)&pTVar7->Elements + (longlong)TStack_b0.CurrentBitIndex * 0x10);
    bVar8 = IsInRenderingThread();
    if ((!bVar8) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsInRenderingThread()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                           ,0x1594,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    FMaterialRenderProxy::CacheUniformExpressions
              (this_00,(FRHICommandListBase *)&GRHICommandList.CommandListImmediate,false);
    TStack_b0.UnvisitedBitMask = TStack_b0.UnvisitedBitMask & ~TStack_b0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_b0);
  }
                    /* WARNING: Could not recover jumptable at 0x000147bfb21d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// RemoveMaterialRenderProxyReference @ 147bfd4e0

void __thiscall
FExternalTextureRegistry::RemoveMaterialRenderProxyReference
          (FExternalTextureRegistry *this,FMaterialRenderProxy *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    TSet<FMaterialRenderProxy_const_*,DefaultKeyFuncs<FMaterialRenderProxy_const_*,0>,FDefaultSetAllocator>
    ::Remove(&this->ReferencingMaterialRenderProxies,param_1);
                    /* WARNING: Could not recover jumptable at 0x000147bfd528. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// UnregisterExternalTexture @ 147c096f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FExternalTextureRegistry::UnregisterExternalTexture(FExternalTextureRegistry *this,FGuid *param_1)

{
  undefined1 *puVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  ulonglong uVar2;
  int iVar3;
  FMaterialRenderProxy *this_00;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  ulong64 uVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  undefined1 *puVar12;
  int iVar13;
  uint *puVar14;
  uint uVar15;
  undefined1 local_res8 [8];
  undefined4 local_9c;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  bVar5 = IsInRenderingThread();
  if ((!bVar5) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ExternalTexture.cpp"
                         ,0x2a,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (*(int *)&(this->TextureEntries).field_0x8 != *(int *)&(this->TextureEntries).field_0x34) {
    uVar8 = CityHash64((char *)param_1,0x10);
    TSet<TTuple<FGuid,FExternalTextureRegistry::FExternalTextureEntry>,TDefaultMapHashableKeyFuncs<FGuid,FExternalTextureRegistry::FExternalTextureEntry,0>,FDefaultSetAllocator>
    ::RemoveImpl<FGuid>((TSet<TTuple<FGuid,FExternalTextureRegistry::FExternalTextureEntry>,TDefaultMapHashableKeyFuncs<FGuid,FExternalTextureRegistry::FExternalTextureEntry,0>,FDefaultSetAllocator>
                         *)this,(uint)uVar8,param_1);
  }
  iVar3 = *(int *)&(this->ReferencingMaterialRenderProxies).Elements.field_0x28;
  puVar1 = &(this->ReferencingMaterialRenderProxies).Elements.field_0x10;
  iVar11 = 0;
  uVar6 = 1;
  iVar13 = 0;
  iVar7 = iVar13;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&(this->ReferencingMaterialRenderProxies).Elements.field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar10 = *puVar14;
    iVar13 = 0;
    while (uVar10 == 0) {
      lVar9 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_147c0981f;
      uVar10 = puVar14[lVar9 + 1];
    }
    uVar6 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    iVar7 = (int)lVar9 + -1 + iVar13;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_147c0981f:
  uVar10 = *(uint *)&(this->ReferencingMaterialRenderProxies).Elements.field_0x28;
  uVar15 = uVar10 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar11);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_60._28_4_ = local_9c;
  TStack_60.BaseBitIndex = iVar13;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->ReferencingMaterialRenderProxies).Elements.field_0x8 -
                       *(int *)&(this->ReferencingMaterialRenderProxies).Elements.field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)&(this->ReferencingMaterialRenderProxies).Elements.field_0x28;
  if (uVar10 != uVar6) {
    puVar12 = *(undefined1 **)&(this->ReferencingMaterialRenderProxies).Elements.field_0x20;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar9 = (longlong)iVar11;
      uVar15 = uVar15 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_147c09930;
      uVar10 = *(uint *)(puVar12 + lVar9 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar10 = (int)lVar9 + -1 + uVar15;
    if ((int)uVar6 < (int)uVar10) {
      uVar10 = uVar6;
    }
  }
LAB_147c09930:
  while( true ) {
    if (*(int *)&(this->ReferencingMaterialRenderProxies).Elements.field_0x8 -
        *(int *)&(this->ReferencingMaterialRenderProxies).Elements.field_0x34 != (int)uStack_40) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<FMaterialRenderProxy_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar10) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    this_00 = *(FMaterialRenderProxy **)
               (*(longlong *)&(this->ReferencingMaterialRenderProxies).Elements +
               (longlong)TStack_60.CurrentBitIndex * 0x10);
    bVar5 = IsInRenderingThread();
    if ((!bVar5) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsInRenderingThread()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                           ,0x1594,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    FMaterialRenderProxy::CacheUniformExpressions
              (this_00,(FRHICommandListBase *)&GRHICommandList.CommandListImmediate,false);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
                    /* WARNING: Could not recover jumptable at 0x000147c099ea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

