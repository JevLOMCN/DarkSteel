// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateRHIRenderer
// Functions: 12

// FSlateMaterialResource @ 145fe63d0

FSlateMaterialResource * __thiscall
FSlateMaterialResource::FSlateMaterialResource
          (FSlateMaterialResource *this,UMaterialInterface *param_1,TVector2<float> param_2,
          FSlateShaderResource *param_3)

{
  undefined1 *puVar1;
  ESlatePostRT EVar2;
  uint uVar3;
  UObjectBaseUtility *this_00;
  code *pcVar4;
  ulonglong uVar5;
  UObject *pUVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  bool bVar9;
  char cVar10;
  byte bVar11;
  int iVar12;
  FSlateShaderResourceProxy *pFVar13;
  FSlateShaderResourceProxy *pFVar14;
  FMaterialRenderProxy *pFVar15;
  UClass *pUVar16;
  FSlateMaterialResource *pFVar17;
  FString *pFVar18;
  ulonglong uVar19;
  longlong lVar20;
  ulonglong uVar21;
  int iVar22;
  undefined8 *puVar23;
  longlong lVar24;
  undefined1 *puVar25;
  uint *puVar26;
  uint uVar27;
  uint uVar28;
  FSlateShaderResourceProxy *pFVar29;
  float fVar30;
  float fVar31;
  uint local_res8 [2];
  undefined1 local_res11;
  undefined8 local_res18;
  undefined1 local_res22;
  undefined8 *local_118;
  ulonglong local_110;
  FName local_108;
  undefined8 *local_100;
  UObject *local_f8;
  int local_f0;
  int local_ec;
  UMaterialInterface *local_e8;
  undefined8 *local_e0;
  undefined1 *local_d8;
  int iStack_d0;
  uint uStack_cc;
  undefined1 *local_c8;
  undefined4 uStack_c0;
  int iStack_bc;
  int local_b8;
  undefined4 uStack_b4;
  int iStack_b0;
  undefined4 uStack_ac;
  longlong *local_a8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_a0;
  undefined8 uStack_80;
  FString local_78 [2];
  undefined4 local_4c;
  
  pFVar29 = (FSlateShaderResourceProxy *)0x0;
  local_res8[0] = 0;
  this->MaterialObject = param_1;
  (this->MaterialObjectWeakPtr).WeakPtr = (FWeakObjectPtr)0x0;
  (this->DebugName).ComparisonIndex = 0;
  (this->DebugName).Number = 0;
  *(undefined1 *)&this->_padding_ = 0x21;
  this->_padding_ = (longlong)&___7FSlateMaterialResource__6B_;
  local_res18 = param_2.field0_0x0;
  pFVar13 = ::operator_new(0x30);
  pFVar14 = pFVar29;
  if (pFVar13 != (FSlateShaderResourceProxy *)0x0) {
    (pFVar13->StartUV).field0_0x0 = (TVector2<float>_u_0)0x0;
    (pFVar13->SizeUV).field0_0x0._s_0.X = 1.0;
    (pFVar13->SizeUV).field0_0x0._s_0.Y = 1.0;
    pFVar13->Resource = (FSlateShaderResource *)0x0;
    (pFVar13->ActualSize).field0_0x0 = (TIntPoint<int>_u_0)0x0;
    (pFVar13->HandleData).Object = (FSlateSharedHandleData *)0x0;
    (pFVar13->HandleData).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    pFVar14 = pFVar13;
  }
  fVar30 = (float)(undefined4)local_res18 * __real_40000000;
  this->TextureMaskResource = param_3;
  this->SlateProxy = pFVar14;
  this->CachedSlatePostBuffers = None;
  this->CachedUsesVirtualTextures = false;
  local_108.ComparisonIndex.Value = 0;
  local_108.Number = 0;
  fVar31 = (float)local_res18._4_4_ * __real_40000000;
  uVar27 = (int)ROUND(fVar30 + __real_3f000000) >> 1;
  this->Width = uVar27;
  uVar28 = (int)ROUND(fVar31 + __real_3f000000) >> 1;
  this->Height = uVar28;
  SlateMaterialResource::CheckInvalidUMaterial(param_1,&local_108);
  pFVar15 = (FMaterialRenderProxy *)(**(code **)(param_1->_padding_ + 0x310))(param_1);
  local_e8 = this->MaterialObject;
  this->MaterialProxy = pFVar15;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_e8 != (UMaterialInterface *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_e8);
  }
  FWeakObjectPtr::operator=(&(this->MaterialObjectWeakPtr).WeakPtr,(FObjectPtr)&local_e8);
  UpdateMaterialName(this);
  SlateMaterialResource::CheckInvalidMaterialProxy(this->MaterialProxy,&this->DebugName);
  local_res18._4_4_ = uVar28;
  local_res18._0_4_ = uVar27;
  (this->SlateProxy->ActualSize).field0_0x0 = (TIntPoint<int>_u_0)local_res18;
  this->SlateProxy->Resource = (FSlateShaderResource *)this;
  if ((this->MaterialObject != (UMaterialInterface *)0x0) &&
     ((bVar9 = IsInRenderingThread(), bVar9 || (bVar9 = IsInGameThread(), bVar9)))) {
    local_118 = (undefined8 *)0x0;
    local_110 = 0;
    local_res22 = 0;
    local_res11 = 0;
    (**(code **)(this->MaterialObject->_padding_ + 0x330))(this->MaterialObject,&local_118);
    this->CachedSlatePostBuffers = None;
    pUVar16 = USlateRHIRendererSettings::StaticClass();
    if ((pUVar16->ClassDefaultObject).field0_0x0.DebugPtr != (UObject *)0x0) {
      pUVar16 = USlateRHIRendererSettings::StaticClass();
      if ((pUVar16->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
        UClass::InternalCreateDefaultObjectWrapper(pUVar16);
      }
      uVar5 = local_110;
      local_f8 = (pUVar16->ClassDefaultObject).field0_0x0.DebugPtr;
      if (local_f8 != (UObject *)0x0) {
        uVar19 = (ulonglong)(int)local_110;
        local_e0 = local_118 + uVar19;
        uVar21 = uVar19;
        puVar23 = local_118;
LAB_145fe65c9:
        puVar7 = local_e0;
        pUVar6 = local_f8;
        local_100 = puVar23;
        if ((int)uVar19 != (int)uVar21) {
          local_res18 = local_res18 & 0xffffffffffffff00;
          `TCheckedPointerIterator<UTexture_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (&local_res18);
        }
        if (puVar23 != puVar7) {
          this_00 = (UObjectBaseUtility *)*puVar23;
          puVar1 = &pUVar6[1].field_0x20;
          iVar12 = *(int *)&pUVar6[2].field_0x10;
          local_d8 = &pUVar6[1].field_0x10;
          iStack_d0 = 0;
          local_b8 = 0;
          uStack_cc = 1;
          iStack_bc = 0;
          if (iVar12 != 0) {
            puVar26 = (uint *)puVar1;
            if (*(uint **)&pUVar6[2].field_0x8 != (uint *)0x0) {
              puVar26 = *(uint **)&pUVar6[2].field_0x8;
            }
            uVar27 = *puVar26;
            while (uVar27 == 0) {
              lVar20 = (longlong)iStack_d0;
              local_b8 = local_b8 + 0x20;
              iStack_d0 = iStack_d0 + 1;
              iStack_bc = iVar12;
              if ((int)(iVar12 + -1 + (iVar12 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_d0)
              goto LAB_145fe6673;
              uVar27 = puVar26[lVar20 + 1];
            }
            uStack_cc = -uVar27 & uVar27;
            uVar21 = (ulonglong)uStack_cc * 2 + 1;
            lVar20 = 0x3f;
            if (uVar21 != 0) {
              for (; uVar21 >> lVar20 == 0; lVar20 = lVar20 + -1) {
              }
            }
            local_f0 = (int)lVar20;
            iStack_bc = local_b8 + -1 + local_f0;
            if (iVar12 < iStack_bc) {
              iStack_bc = iVar12;
            }
          }
LAB_145fe6673:
          uStack_b4 = local_4c;
          iStack_b0 = *(int *)&pUVar6[1].field_0x18 - *(int *)&pUVar6[2].field_0x1c;
          uVar27 = *(uint *)&pUVar6[2].field_0x10;
          uVar28 = uVar27 & 0xffffffe0;
          TStack_a0._padding_ = CONCAT44(uStack_cc,iStack_d0);
          uStack_c0 = 0xffffffff;
          TStack_a0.CurrentBitIndex = iStack_bc;
          TStack_a0.UnvisitedBitMask = 0xffffffff;
          iVar22 = (int)uVar27 >> 5;
          TStack_a0._28_4_ = local_4c;
          TStack_a0.BaseBitIndex = local_b8;
          uStack_80 = CONCAT44(uStack_ac,iStack_b0);
          local_c8 = puVar1;
          local_a8 = (longlong *)local_d8;
          TStack_a0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
          if ((((int)uVar27 < 0) || (iVar12 < (int)uVar27)) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                 ,0x7af,L""), bVar9)) {
            pcVar4 = (code *)swi(3);
            pFVar17 = (FSlateMaterialResource *)(*pcVar4)();
            return pFVar17;
          }
          uVar3 = *(uint *)&pUVar6[2].field_0x10;
          if (uVar27 != uVar3) {
            puVar25 = puVar1;
            if (*(undefined1 **)&pUVar6[2].field_0x8 != (undefined1 *)0x0) {
              puVar25 = *(undefined1 **)&pUVar6[2].field_0x8;
            }
            uVar27 = -1 << ((byte)uVar27 & 0x1f) & *(uint *)(puVar25 + (longlong)iVar22 * 4);
            while (uVar27 == 0) {
              lVar20 = (longlong)iVar22;
              uVar28 = uVar28 + 0x20;
              iVar22 = iVar22 + 1;
              uVar27 = uVar3;
              if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar22)
              goto LAB_145fe6780;
              uVar27 = *(uint *)(puVar25 + lVar20 * 4 + 4);
            }
            uVar21 = (ulonglong)(-uVar27 & uVar27) * 2 + 1;
            lVar20 = 0x3f;
            if (uVar21 != 0) {
              for (; uVar21 >> lVar20 == 0; lVar20 = lVar20 + -1) {
              }
            }
            local_ec = (int)lVar20;
            uVar27 = local_ec + -1 + uVar28;
            if ((int)uVar3 < (int)uVar27) {
              uVar27 = uVar3;
            }
          }
LAB_145fe6780:
          do {
            plVar8 = local_a8;
            if ((int)local_a8[1] - *(int *)((longlong)local_a8 + 0x34) != (int)uStack_80) {
              local_res8[0] = local_res8[0] & 0xffffff00;
              `TSparseArray<TSparseSetElement<TTuple<enum_ESlatePostRT,FSlatePostSettings>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
            }
            if (((TStack_a0.CurrentBitIndex == uVar27) &&
                (TStack_a0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
               (plVar8 == (longlong *)&local_f8[1].field_0x10)) goto LAB_145fe685e;
            lVar20 = *plVar8;
            lVar24 = (longlong)TStack_a0.CurrentBitIndex * 0x40;
            EVar2 = *(ESlatePostRT *)(lVar24 + lVar20);
            if (((*(byte *)(lVar24 + 8 + lVar20) & 1) == 0) ||
               (this_00 == (UObjectBaseUtility *)0x0)) {
LAB_145fe6821:
              bVar9 = false;
            }
            else {
              pFVar29 = (FSlateShaderResourceProxy *)&DAT_00000001;
              pFVar18 = UObjectBaseUtility::GetPathName(this_00,local_78,(UObject *)0x0);
              iVar12 = *(int *)(lVar24 + 0x20 + lVar20);
              iVar22 = (pFVar18->Data).ArrayNum;
              if (iVar22 == iVar12) {
                if (1 < iVar22) {
                  iVar12 = FGenericPlatformStricmp::Stricmp
                                     ((wchar_t *)(pFVar18->Data).AllocatorInstance.Data,
                                      *(wchar_t **)(lVar24 + 0x18 + lVar20));
                  bVar9 = iVar12 == 0;
                  goto LAB_145fe6816;
                }
              }
              else {
                bVar9 = iVar12 + iVar22 == 1;
LAB_145fe6816:
                if (!bVar9) goto LAB_145fe6821;
              }
              bVar9 = true;
            }
            if ((pFVar29 != (FSlateShaderResourceProxy *)0x0) &&
               (pFVar29 = (FSlateShaderResourceProxy *)0x0,
               local_78[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
              FMemory::Free(local_78[0].Data.AllocatorInstance.Data);
            }
            if (bVar9) {
              this->CachedSlatePostBuffers = this->CachedSlatePostBuffers | EVar2;
            }
            TStack_a0.UnvisitedBitMask = TStack_a0.UnvisitedBitMask & ~TStack_a0._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_a0);
          } while( true );
        }
      }
    }
    if (local_118 != (undefined8 *)0x0) {
      FMemory::Free(local_118);
    }
  }
  if ((this->MaterialProxy != (FMaterialRenderProxy *)0x0) &&
     ((this->MaterialProxy->DeletedFlag != 0 ||
      (this->MaterialProxy->MarkedForGarbageCollection != 0)))) {
    this->MaterialProxy = (FMaterialRenderProxy *)0x0;
  }
  return this;
LAB_145fe685e:
  bVar9 = this->CachedUsesVirtualTextures;
  if ((this_00 == (UObjectBaseUtility *)0x0) ||
     (cVar10 = (**(code **)(*(longlong *)this_00 + 0x348))(this_00), cVar10 == '\0')) {
    bVar11 = 0;
  }
  else {
    bVar11 = 1;
  }
  uVar19 = local_110 & 0xffffffff;
  puVar23 = local_100 + 1;
  uVar21 = uVar5 & 0xffffffff;
  this->CachedUsesVirtualTextures = (bool)(bVar11 | bVar9);
  goto LAB_145fe65c9;
}

// ~FSlateMaterialResource @ 145fea1f0

void __thiscall FSlateMaterialResource::~FSlateMaterialResource(FSlateMaterialResource *this)

{
  FSlateShaderResourceProxy *pFVar1;
  FSlateSharedHandleData *pFVar2;
  
  pFVar1 = this->SlateProxy;
  this->_padding_ = (longlong)&___7FSlateMaterialResource__6B_;
  if (pFVar1 != (FSlateShaderResourceProxy *)0x0) {
    pFVar2 = (pFVar1->HandleData).Object;
    if (pFVar2 != (FSlateSharedHandleData *)0x0) {
      pFVar2->Proxy = (FSlateShaderResourceProxy *)0x0;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((pFVar1->HandleData).SharedReferenceCount.ReferenceController);
    ::operator_delete(pFVar1,0x30);
  }
  *(undefined1 *)&this->_padding_ = 0x84;
  this->_padding_ = (longlong)&___7FSlateShaderResource__6B_;
  return;
}

// CheckForStaleResources @ 145ff6d40

void __thiscall FSlateMaterialResource::CheckForStaleResources(FSlateMaterialResource *this)

{
  code *pcVar1;
  bool bVar2;
  FString local_18;
  
  if ((this->DebugName != (FName)0x0) &&
     (bVar2 = FWeakObjectPtr::IsValid(&(this->MaterialObjectWeakPtr).WeakPtr,true,true), !bVar2)) {
    ::FName::ToString(&this->DebugName,&local_18);
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("MaterialObjectWeakPtr.IsValid(bEvenIfPendingKill, bThreadSafe)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateRHIRenderer\\Private\\SlateMaterialResource.cpp"
                       ,0x107,
                       L"Material %s has become invalid.  This means the resource was garbage collected while slate was using it"
                      );
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// GetHeight @ 14600cae0

uint __thiscall FSlateMaterialResource::GetHeight(FSlateMaterialResource *this)

{
  return this->Height;
}

// GetType @ 146018fe0

Type __thiscall FSlateMaterialResource::GetType(FSlateMaterialResource *this)

{
  return Material;
}

// GetUsedSlatePostBuffers @ 1460197e0

ESlatePostRT __thiscall
FSlateMaterialResource::GetUsedSlatePostBuffers(FSlateMaterialResource *this)

{
  return this->CachedSlatePostBuffers;
}

// GetWidth @ 146019b00

uint __thiscall FSlateMaterialResource::GetWidth(FSlateMaterialResource *this)

{
  return this->Width;
}

// IsResourceValid @ 14601b740

bool __thiscall FSlateMaterialResource::IsResourceValid(FSlateMaterialResource *this)

{
  FMaterialRenderProxy *pFVar1;
  
  if ((this->MaterialProxy != (FMaterialRenderProxy *)0x0) &&
     (this->MaterialObject != (UMaterialInterface *)0x0)) {
    pFVar1 = (FMaterialRenderProxy *)(**(code **)(this->MaterialObject->_padding_ + 0x310))();
    return this->MaterialProxy == pFVar1;
  }
  return true;
}

// RequiresVirtualTextureFeedback @ 146022d10

bool __thiscall FSlateMaterialResource::RequiresVirtualTextureFeedback(FSlateMaterialResource *this)

{
  return this->CachedUsesVirtualTextures;
}

// ResetMaterial @ 146022d30

void __thiscall FSlateMaterialResource::ResetMaterial(FSlateMaterialResource *this)

{
  int iVar1;
  UMaterialInterface *pUVar2;
  longlong lVar3;
  FSlateShaderResourceProxy *pFVar4;
  UClass *pUVar5;
  FName FVar6;
  FWeakObjectPtr local_res8;
  undefined8 local_res10;
  
  this->MaterialObject = (UMaterialInterface *)0x0;
  this->MaterialProxy = (FMaterialRenderProxy *)0x0;
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10 = 0;
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
  pUVar2 = this->MaterialObject;
  (this->MaterialObjectWeakPtr).WeakPtr = local_res8;
  if (pUVar2 != (UMaterialInterface *)0x0) {
    pUVar5 = Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if (((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
        ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
         == &pUVar5->_padding_)) &&
       (lVar3 = *(longlong *)&pUVar2[1].SubsurfaceProfiles.ArrayNum, lVar3 != 0)) {
      FVar6 = *(FName *)(lVar3 + 0x18);
      goto LAB_146022dc0;
    }
  }
  if (this->MaterialObject == (UMaterialInterface *)0x0) {
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    FVar6.ComparisonIndex.Value = 0;
    FVar6.Number = 0;
  }
  else {
    FVar6 = (FName)this->MaterialObject->_padding_;
  }
LAB_146022dc0:
  pFVar4 = this->SlateProxy;
  this->DebugName = FVar6;
  this->CachedSlatePostBuffers = None;
  this->TextureMaskResource = (FSlateShaderResource *)0x0;
  if (pFVar4 != (FSlateShaderResourceProxy *)0x0) {
    if ((pFVar4->HandleData).Object != (FSlateSharedHandleData *)0x0) {
      ((pFVar4->HandleData).Object)->Proxy = (FSlateShaderResourceProxy *)0x0;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((pFVar4->HandleData).SharedReferenceCount.ReferenceController);
    ::operator_delete(pFVar4,0x30);
  }
  this->Width = 0;
  this->Height = 0;
  this->SlateProxy = (FSlateShaderResourceProxy *)0x0;
  return;
}

// UpdateMaterial @ 14602e230

void __thiscall
FSlateMaterialResource::UpdateMaterial
          (FSlateMaterialResource *this,UMaterialInterface *param_1,TVector2<float> param_2,
          FSlateShaderResource *param_3)

{
  undefined1 *puVar1;
  ESlatePostRT EVar2;
  uint uVar3;
  code *pcVar4;
  UObject *pUVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  bool bVar8;
  int iVar9;
  FMaterialRenderProxy *pFVar10;
  UClass *pUVar11;
  FString *pFVar12;
  FSlateShaderResourceProxy *pFVar13;
  ulonglong uVar14;
  longlong lVar15;
  ulonglong uVar16;
  int iVar17;
  undefined8 *puVar18;
  longlong lVar19;
  uint uVar20;
  uint uVar21;
  undefined1 *puVar22;
  FSlateShaderResourceProxy *pFVar23;
  uint *puVar24;
  FMaterialRenderProxy *pFVar25;
  float fVar26;
  uint local_res8 [2];
  undefined1 local_res10 [8];
  undefined8 local_res18;
  TIntPoint<int>_u_0 local_res20;
  undefined1 local_128;
  undefined1 local_127;
  undefined1 local_122;
  uint local_120;
  undefined8 *local_118;
  ulonglong local_110;
  undefined8 *local_108;
  UObject *local_100;
  int local_f8;
  int local_f4;
  UMaterialInterface *local_f0;
  UObjectBaseUtility *local_e8;
  undefined8 *local_e0;
  undefined1 *local_d8;
  int iStack_d0;
  uint uStack_cc;
  undefined1 *local_c8;
  undefined4 uStack_c0;
  int iStack_bc;
  int local_b8;
  undefined4 uStack_b4;
  int iStack_b0;
  undefined4 uStack_ac;
  longlong *local_a8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_a0;
  undefined8 uStack_80;
  FString local_78 [2];
  undefined4 local_4c;
  
  pFVar25 = (FMaterialRenderProxy *)0x0;
  local_res8[0] = 0;
  local_res18 = param_2.field0_0x0;
  local_res20 = (TIntPoint<int>_u_0)param_3;
  if (((param_1 == (UMaterialInterface *)0x0) || (((uint)param_1->_padding_ >> 0x1e & 1) != 0)) ||
     (bVar8 = UObjectBase::IsValidLowLevelFast((UObjectBase *)param_1,false), !bVar8)) {
    bVar8 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<9167873259729846430>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateRHIRenderer\\Private\\SlateMaterialResource.cpp"
                       ,0x9e,
                       "IsValid(&InMaterialResource) && InMaterialResource.IsValidLowLevelFast(false)"
                      );
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    this->MaterialObject = (UMaterialInterface *)0x0;
    pFVar10 = pFVar25;
  }
  else {
    this->MaterialObject = param_1;
    pFVar10 = (FMaterialRenderProxy *)(**(code **)(param_1->_padding_ + 0x310))(param_1);
  }
  this->MaterialProxy = pFVar10;
  SlateMaterialResource::CheckInvalidUMaterial(param_1,&this->DebugName);
  local_f0 = this->MaterialObject;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_f0 != (UMaterialInterface *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_f0);
  }
  FWeakObjectPtr::operator=(&(this->MaterialObjectWeakPtr).WeakPtr,(FObjectPtr)&local_f0);
  UpdateMaterialName(this);
  SlateMaterialResource::CheckInvalidMaterialProxy(this->MaterialProxy,&this->DebugName);
  if ((this->MaterialObject != (UMaterialInterface *)0x0) &&
     ((bVar8 = IsInRenderingThread(), bVar8 || (bVar8 = IsInGameThread(), bVar8)))) {
    local_118 = (undefined8 *)0x0;
    local_110 = 0;
    local_122 = 0;
    local_127 = 0;
    (**(code **)(this->MaterialObject->_padding_ + 0x330))
              (this->MaterialObject,&local_118,&local_128);
    this->CachedSlatePostBuffers = None;
    pUVar11 = USlateRHIRendererSettings::StaticClass();
    if ((pUVar11->ClassDefaultObject).field0_0x0.DebugPtr != (UObject *)0x0) {
      pUVar11 = USlateRHIRendererSettings::StaticClass();
      if ((pUVar11->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
        UClass::InternalCreateDefaultObjectWrapper(pUVar11);
      }
      local_100 = (pUVar11->ClassDefaultObject).field0_0x0.DebugPtr;
      if (local_100 != (UObject *)0x0) {
        uVar14 = (ulonglong)(int)(uint)local_110;
        local_120 = (uint)local_110;
        local_e0 = local_118 + uVar14;
        uVar16 = uVar14;
        puVar18 = local_118;
LAB_14602e3d2:
        puVar6 = local_e0;
        pUVar5 = local_100;
        local_108 = puVar18;
        if ((int)uVar14 != (int)uVar16) {
          local_res8[0] = local_res8[0] & 0xffffff00;
          `TCheckedPointerIterator<UTexture_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res8);
        }
        param_3 = (FSlateShaderResource *)local_res20;
        if (puVar18 != puVar6) {
          local_e8 = (UObjectBaseUtility *)*puVar18;
          local_d8 = &pUVar5[1].field_0x10;
          iVar9 = *(int *)&pUVar5[2].field_0x10;
          puVar1 = &pUVar5[1].field_0x20;
          local_b8 = 0;
          uStack_cc = 1;
          iStack_bc = 0;
          iStack_d0 = 0;
          if (iVar9 != 0) {
            puVar24 = (uint *)puVar1;
            if (*(uint **)&pUVar5[2].field_0x8 != (uint *)0x0) {
              puVar24 = *(uint **)&pUVar5[2].field_0x8;
            }
            uVar21 = *puVar24;
            while (uVar21 == 0) {
              lVar15 = (longlong)iStack_d0;
              local_b8 = local_b8 + 0x20;
              iStack_d0 = iStack_d0 + 1;
              iStack_bc = iVar9;
              if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_d0)
              goto LAB_14602e47e;
              uVar21 = puVar24[lVar15 + 1];
            }
            uStack_cc = -uVar21 & uVar21;
            uVar16 = (ulonglong)uStack_cc * 2 + 1;
            lVar15 = 0x3f;
            if (uVar16 != 0) {
              for (; uVar16 >> lVar15 == 0; lVar15 = lVar15 + -1) {
              }
            }
            local_f8 = (int)lVar15;
            iStack_bc = local_b8 + -1 + local_f8;
            if (iVar9 < iStack_bc) {
              iStack_bc = iVar9;
            }
          }
LAB_14602e47e:
          uStack_b4 = local_4c;
          iStack_b0 = *(int *)&pUVar5[1].field_0x18 - *(int *)&pUVar5[2].field_0x1c;
          uVar21 = *(uint *)&pUVar5[2].field_0x10;
          uVar20 = uVar21 & 0xffffffe0;
          TStack_a0._padding_ = CONCAT44(uStack_cc,iStack_d0);
          uStack_c0 = 0xffffffff;
          TStack_a0.CurrentBitIndex = iStack_bc;
          TStack_a0.UnvisitedBitMask = 0xffffffff;
          iVar17 = (int)uVar21 >> 5;
          TStack_a0._28_4_ = local_4c;
          TStack_a0.BaseBitIndex = local_b8;
          uStack_80 = CONCAT44(uStack_ac,iStack_b0);
          local_c8 = puVar1;
          local_a8 = (longlong *)local_d8;
          TStack_a0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
          if ((((int)uVar21 < 0) || (iVar9 < (int)uVar21)) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                 ,0x7af,L""), bVar8)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          uVar3 = *(uint *)&pUVar5[2].field_0x10;
          if (uVar21 != uVar3) {
            puVar22 = puVar1;
            if (*(undefined1 **)&pUVar5[2].field_0x8 != (undefined1 *)0x0) {
              puVar22 = *(undefined1 **)&pUVar5[2].field_0x8;
            }
            uVar21 = -1 << ((byte)uVar21 & 0x1f) & *(uint *)(puVar22 + (longlong)iVar17 * 4);
            while (uVar21 == 0) {
              lVar15 = (longlong)iVar17;
              uVar20 = uVar20 + 0x20;
              iVar17 = iVar17 + 1;
              uVar21 = uVar3;
              if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar17)
              goto LAB_14602e580;
              uVar21 = *(uint *)(puVar22 + lVar15 * 4 + 4);
            }
            uVar16 = (ulonglong)(-uVar21 & uVar21) * 2 + 1;
            lVar15 = 0x3f;
            if (uVar16 != 0) {
              for (; uVar16 >> lVar15 == 0; lVar15 = lVar15 + -1) {
              }
            }
            local_f4 = (int)lVar15;
            uVar21 = local_f4 + -1 + uVar20;
            if ((int)uVar3 < (int)uVar21) {
              uVar21 = uVar3;
            }
          }
LAB_14602e580:
          do {
            plVar7 = local_a8;
            if ((int)local_a8[1] - *(int *)((longlong)local_a8 + 0x34) != (int)uStack_80) {
              local_res10[0] = 0;
              `TSparseArray<TSparseSetElement<TTuple<enum_ESlatePostRT,FSlatePostSettings>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
            }
            if (((TStack_a0.CurrentBitIndex == uVar21) &&
                (TStack_a0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
               (plVar7 == (longlong *)&local_100[1].field_0x10)) goto LAB_14602e659;
            lVar15 = *plVar7;
            lVar19 = (longlong)TStack_a0.CurrentBitIndex * 0x40;
            EVar2 = *(ESlatePostRT *)(lVar19 + lVar15);
            if (((*(byte *)(lVar19 + 8 + lVar15) & 1) == 0) ||
               (local_e8 == (UObjectBaseUtility *)0x0)) {
LAB_14602e621:
              bVar8 = false;
            }
            else {
              pFVar25 = (FMaterialRenderProxy *)&DAT_00000001;
              pFVar12 = UObjectBaseUtility::GetPathName(local_e8,local_78,(UObject *)0x0);
              iVar9 = *(int *)(lVar19 + 0x20 + lVar15);
              iVar17 = (pFVar12->Data).ArrayNum;
              if (iVar17 == iVar9) {
                if (1 < iVar17) {
                  iVar9 = FGenericPlatformStricmp::Stricmp
                                    ((wchar_t *)(pFVar12->Data).AllocatorInstance.Data,
                                     *(wchar_t **)(lVar19 + 0x18 + lVar15));
                  bVar8 = iVar9 == 0;
                  goto LAB_14602e616;
                }
              }
              else {
                bVar8 = iVar9 + iVar17 == 1;
LAB_14602e616:
                if (!bVar8) goto LAB_14602e621;
              }
              bVar8 = true;
            }
            if ((pFVar25 != (FMaterialRenderProxy *)0x0) &&
               (pFVar25 = (FMaterialRenderProxy *)0x0,
               local_78[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
              FMemory::Free(local_78[0].Data.AllocatorInstance.Data);
            }
            if (bVar8) {
              this->CachedSlatePostBuffers = this->CachedSlatePostBuffers | EVar2;
            }
            TStack_a0.UnvisitedBitMask = TStack_a0.UnvisitedBitMask & ~TStack_a0._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_a0);
          } while( true );
        }
      }
    }
    if (local_118 != (undefined8 *)0x0) {
      FMemory::Free(local_118);
    }
  }
  pFVar23 = (FSlateShaderResourceProxy *)0x0;
  if ((this->MaterialProxy != (FMaterialRenderProxy *)0x0) &&
     ((this->MaterialProxy->DeletedFlag != 0 ||
      (this->MaterialProxy->MarkedForGarbageCollection != 0)))) {
    this->MaterialProxy = (FMaterialRenderProxy *)0x0;
  }
  pFVar13 = this->SlateProxy;
  if (this->SlateProxy == (FSlateShaderResourceProxy *)0x0) {
    pFVar13 = ::operator_new(0x30);
    if (pFVar13 != (FSlateShaderResourceProxy *)0x0) {
      (pFVar13->StartUV).field0_0x0 = (TVector2<float>_u_0)0x0;
      (pFVar13->SizeUV).field0_0x0._s_0.X = 1.0;
      (pFVar13->SizeUV).field0_0x0._s_0.Y = 1.0;
      pFVar13->Resource = (FSlateShaderResource *)0x0;
      (pFVar13->ActualSize).field0_0x0 = (TIntPoint<int>_u_0)0x0;
      (pFVar13->HandleData).Object = (FSlateSharedHandleData *)0x0;
      (pFVar13->HandleData).SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      pFVar23 = pFVar13;
    }
    this->SlateProxy = pFVar23;
    pFVar13 = pFVar23;
  }
  fVar26 = (float)local_res18 * __real_40000000;
  this->TextureMaskResource = param_3;
  local_res20._s_0.X = (int)ROUND(fVar26 + __real_3f000000) >> 1;
  local_res20._s_0.Y = (int)ROUND(local_res18._4_4_ * __real_40000000 + __real_3f000000) >> 1;
  (pFVar13->ActualSize).field0_0x0 = local_res20;
  this->SlateProxy->Resource = (FSlateShaderResource *)this;
  this->Width = local_res20._s_0.X;
  this->Height = local_res20._s_0.Y;
  return;
LAB_14602e659:
  uVar14 = local_110 & 0xffffffff;
  puVar18 = local_108 + 1;
  uVar16 = (ulonglong)local_120;
  goto LAB_14602e3d2;
}

// UpdateMaterialName @ 14602e790

void __thiscall FSlateMaterialResource::UpdateMaterialName(FSlateMaterialResource *this)

{
  int iVar1;
  undefined4 uVar2;
  UClass *pUVar3;
  UMaterialInterface *pUVar4;
  
  pUVar4 = this->MaterialObject;
  if (pUVar4 != (UMaterialInterface *)0x0) {
    pUVar3 = Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if (((iVar1 <= *(int *)(pUVar4->_padding_ + 0x38)) &&
        ((longlong *)*(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar1 * 8)
         == &pUVar3->_padding_)) &&
       (pUVar4 = *(UMaterialInterface **)&pUVar4[1].SubsurfaceProfiles.ArrayNum,
       pUVar4 != (UMaterialInterface *)0x0)) goto LAB_14602e7d5;
  }
  pUVar4 = this->MaterialObject;
  if (pUVar4 == (UMaterialInterface *)0x0) {
    (this->DebugName).ComparisonIndex = 0;
    (this->DebugName).Number = 0;
    return;
  }
LAB_14602e7d5:
  uVar2 = *(undefined4 *)((longlong)&pUVar4->_padding_ + 4);
  (this->DebugName).ComparisonIndex = (FNameEntryId)*(undefined4 *)&pUVar4->_padding_;
  (this->DebugName).Number = uVar2;
  return;
}

