// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateRHIRenderer
// Functions: 4

// FSlateUTextureResource @ 145fe7ec0

FSlateUTextureResource * __thiscall
FSlateUTextureResource::FSlateUTextureResource(FSlateUTextureResource *this,UTexture *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  ulonglong uVar3;
  byte bVar4;
  uint uVar5;
  UObject *pUVar6;
  code *pcVar7;
  longlong *plVar8;
  bool bVar9;
  FSlateShaderResourceProxy *pFVar10;
  FSlateShaderResourceProxy *pFVar11;
  UClass *pUVar12;
  FSlateUTextureResource *pFVar13;
  FString *pFVar14;
  TIntPoint<int>_u_0 TVar15;
  longlong lVar16;
  int iVar17;
  longlong lVar18;
  FSlateShaderResourceProxy *pFVar19;
  int iVar20;
  uint uVar21;
  undefined1 *puVar22;
  uint *puVar23;
  uint uVar24;
  float fVar25;
  float fVar26;
  undefined4 local_res8 [2];
  FString local_b0;
  undefined1 *local_a0;
  undefined4 uStack_98;
  uint uStack_94;
  undefined1 *local_90;
  undefined4 uStack_88;
  int iStack_84;
  uint local_80;
  int iStack_7c;
  int iStack_78;
  undefined4 uStack_74;
  longlong *local_70;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_68;
  undefined8 uStack_48;
  
  pFVar19 = (FSlateShaderResourceProxy *)0x0;
  local_res8[0] = 0;
  FSlateBaseUTextureResource::FSlateBaseUTextureResource((FSlateBaseUTextureResource *)this,param_1)
  ;
  this->_padding_ = (longlong)&___7FSlateUTextureResource__6B_;
  pFVar10 = ::operator_new(0x30);
  pFVar11 = pFVar19;
  if (pFVar10 != (FSlateShaderResourceProxy *)0x0) {
    (pFVar10->StartUV).field0_0x0 = (TVector2<float>_u_0)0x0;
    (pFVar10->SizeUV).field0_0x0._s_0.X = 1.0;
    (pFVar10->SizeUV).field0_0x0._s_0.Y = 1.0;
    pFVar10->Resource = (FSlateShaderResource *)0x0;
    (pFVar10->ActualSize).field0_0x0 = (TIntPoint<int>_u_0)0x0;
    (pFVar10->HandleData).Object = (FSlateSharedHandleData *)0x0;
    (pFVar10->HandleData).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    pFVar11 = pFVar10;
  }
  this->Proxy = pFVar11;
  if (this->_padding_ == 0) {
    return this;
  }
  if (param_1 == (UTexture *)0x0) {
    TVar15 = (TIntPoint<int>_u_0)&DAT_100000001;
  }
  else {
    fVar25 = (float)(**(code **)(param_1->_padding_ + 0x370))(param_1);
    fVar26 = (float)(**(code **)(param_1->_padding_ + 0x368))(param_1);
    TVar15._0_4_ = (int)fVar26;
    TVar15._s_0.Y = (int)fVar25;
  }
  (this->Proxy->ActualSize).field0_0x0 = TVar15;
  this->Proxy->Resource = (FSlateShaderResource *)this;
  *(undefined1 *)&this->_padding_ = 0;
  pUVar12 = USlateRHIRendererSettings::StaticClass();
  if ((pUVar12->ClassDefaultObject).field0_0x0.DebugPtr != (UObject *)0x0) {
    pUVar12 = USlateRHIRendererSettings::StaticClass();
    if ((pUVar12->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(pUVar12);
    }
    pUVar6 = (pUVar12->ClassDefaultObject).field0_0x0.DebugPtr;
    if (pUVar6 != (UObject *)0x0) {
      iVar17 = *(int *)&pUVar6[2].field_0x10;
      puVar1 = &pUVar6[1].field_0x20;
      puVar2 = &pUVar6[1].field_0x10;
      uStack_94 = 1;
      local_80 = 0;
      iVar20 = 0;
      pFVar11 = pFVar19;
      iStack_84 = 0;
      if (iVar17 != 0) {
        puVar23 = *(uint **)&pUVar6[2].field_0x8;
        if (*(uint **)&pUVar6[2].field_0x8 == (uint *)0x0) {
          puVar23 = (uint *)puVar1;
        }
        uVar21 = *puVar23;
        pFVar10 = pFVar19;
        local_80 = 0;
        while (uVar21 == 0) {
          iVar20 = (int)pFVar11;
          local_80 = (int)pFVar10 + 0x20;
          pFVar10 = (FSlateShaderResourceProxy *)(ulonglong)local_80;
          uVar21 = iVar20 + 1;
          pFVar11 = (FSlateShaderResourceProxy *)(ulonglong)uVar21;
          if ((int)(iVar17 + -1 + (iVar17 + -1 >> 0x1f & 0x1fU)) >> 5 < (int)uVar21) {
            iVar20 = *(int *)&pUVar6[2].field_0x10;
            iStack_84 = iVar17;
            goto LAB_145fe8074;
          }
          uVar21 = puVar23[(longlong)iVar20 + 1];
        }
        iVar20 = *(int *)&pUVar6[2].field_0x10;
        uStack_94 = -uVar21 & uVar21;
        uVar3 = (ulonglong)uStack_94 * 2 + 1;
        lVar16 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar16 == 0; lVar16 = lVar16 + -1) {
          }
        }
        iStack_84 = (local_80 - 1) + (int)lVar16;
        if (iVar20 < iStack_84) {
          iStack_84 = iVar17;
        }
      }
LAB_145fe8074:
      iStack_78 = *(int *)&pUVar6[1].field_0x18 - *(int *)&pUVar6[2].field_0x1c;
      uVar21 = *(uint *)&pUVar6[2].field_0x10;
      uStack_98 = SUB84(pFVar11,0);
      TStack_68._padding_ = CONCAT44(uStack_94,uStack_98);
      uStack_88 = 0xffffffff;
      uVar24 = uVar21 & 0xffffffe0;
      TStack_68.CurrentBitIndex = iStack_84;
      TStack_68.UnvisitedBitMask = 0xffffffff;
      iVar17 = (int)uVar21 >> 5;
      TStack_68._28_4_ = iStack_84;
      TStack_68.BaseBitIndex = local_80;
      uStack_48 = CONCAT44(uStack_74,iStack_78);
      local_a0 = puVar2;
      local_90 = puVar1;
      iStack_7c = iStack_84;
      local_70 = (longlong *)puVar2;
      TStack_68.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
      if ((((int)uVar21 < 0) || (iVar20 < (int)uVar21)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar9)) {
        pcVar7 = (code *)swi(3);
        pFVar13 = (FSlateUTextureResource *)(*pcVar7)();
        return pFVar13;
      }
      uVar5 = *(uint *)&pUVar6[2].field_0x10;
      if (uVar21 != uVar5) {
        puVar22 = *(undefined1 **)&pUVar6[2].field_0x8;
        if (*(undefined1 **)&pUVar6[2].field_0x8 == (undefined1 *)0x0) {
          puVar22 = puVar1;
        }
        uVar21 = -1 << ((byte)uVar21 & 0x1f) & *(uint *)(puVar22 + (longlong)iVar17 * 4);
        while (uVar21 == 0) {
          lVar16 = (longlong)iVar17;
          uVar24 = uVar24 + 0x20;
          iVar17 = iVar17 + 1;
          uVar21 = uVar5;
          if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar17)
          goto LAB_145fe8170;
          uVar21 = *(uint *)(puVar22 + lVar16 * 4 + 4);
        }
        uVar3 = (ulonglong)(-uVar21 & uVar21) * 2 + 1;
        lVar16 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar16 == 0; lVar16 = lVar16 + -1) {
          }
        }
        uVar21 = (int)lVar16 + -1 + uVar24;
        if ((int)uVar5 < (int)uVar21) {
          uVar21 = uVar5;
        }
      }
LAB_145fe8170:
      do {
        plVar8 = local_70;
        if ((int)local_70[1] - *(int *)((longlong)local_70 + 0x34) != (int)uStack_48) {
          `TSparseArray<TSparseSetElement<TTuple<enum_ESlatePostRT,FSlatePostSettings>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
        }
        if (((TStack_68.CurrentBitIndex == uVar21) &&
            (TStack_68.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
           (plVar8 == (longlong *)puVar2)) {
          return this;
        }
        lVar16 = *plVar8;
        lVar18 = (longlong)TStack_68.CurrentBitIndex * 0x40;
        bVar4 = *(byte *)(lVar18 + lVar16);
        if (((*(byte *)(lVar18 + 8 + lVar16) & 1) == 0) || (param_1 == (UTexture *)0x0)) {
LAB_145fe820d:
          bVar9 = false;
        }
        else {
          pFVar19 = (FSlateShaderResourceProxy *)&DAT_00000001;
          pFVar14 = UObjectBaseUtility::GetPathName
                              ((UObjectBaseUtility *)param_1,&local_b0,(UObject *)0x0);
          iVar17 = *(int *)(lVar18 + 0x20 + lVar16);
          iVar20 = (pFVar14->Data).ArrayNum;
          if (iVar20 == iVar17) {
            if (1 < iVar20) {
              iVar17 = FGenericPlatformStricmp::Stricmp
                                 ((wchar_t *)(pFVar14->Data).AllocatorInstance.Data,
                                  *(wchar_t **)(lVar18 + 0x18 + lVar16));
              bVar9 = iVar17 == 0;
              goto LAB_145fe8202;
            }
          }
          else {
            bVar9 = iVar17 + iVar20 == 1;
LAB_145fe8202:
            if (!bVar9) goto LAB_145fe820d;
          }
          bVar9 = true;
        }
        if ((pFVar19 != (FSlateShaderResourceProxy *)0x0) &&
           (pFVar19 = (FSlateShaderResourceProxy *)0x0,
           local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_b0.Data.AllocatorInstance.Data);
        }
        if (bVar9) {
          *(byte *)&this->_padding_ = (byte)this->_padding_ | bVar4;
        }
        TStack_68.UnvisitedBitMask = TStack_68.UnvisitedBitMask & ~TStack_68._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_68);
      } while( true );
    }
  }
  return this;
}

// ~FSlateUTextureResource @ 145fea710

void __thiscall FSlateUTextureResource::~FSlateUTextureResource(FSlateUTextureResource *this)

{
  FSlateShaderResourceProxy *pFVar1;
  FSlateSharedHandleData *pFVar2;
  
  pFVar1 = this->Proxy;
  this->_padding_ = (longlong)&___7FSlateUTextureResource__6B_;
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

// ResetTexture @ 146022e20

void __thiscall FSlateUTextureResource::ResetTexture(FSlateUTextureResource *this)

{
  FSlateShaderResourceProxy *pFVar1;
  FSlateSharedHandleData *pFVar2;
  longlong lVar3;
  FWeakObjectPtr local_res8;
  undefined8 local_res10;
  
  lVar3 = 0;
  this->_padding_ = 0;
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10 = 0;
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
  this->_padding_ = (longlong)local_res8;
  if (this->_padding_ == 0) {
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
  }
  else {
    lVar3 = *(longlong *)(this->_padding_ + 0x18);
  }
  pFVar1 = this->Proxy;
  this->_padding_ = lVar3;
  *(undefined1 *)&this->_padding_ = 0;
  if (pFVar1 != (FSlateShaderResourceProxy *)0x0) {
    pFVar2 = (pFVar1->HandleData).Object;
    if (pFVar2 != (FSlateSharedHandleData *)0x0) {
      pFVar2->Proxy = (FSlateShaderResourceProxy *)0x0;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((pFVar1->HandleData).SharedReferenceCount.ReferenceController);
    ::operator_delete(pFVar1,0x30);
  }
  this->Proxy = (FSlateShaderResourceProxy *)0x0;
  return;
}

// UpdateTexture @ 14602e810

void __thiscall
FSlateUTextureResource::UpdateTexture(FSlateUTextureResource *this,UTexture *param_1)

{
  ulonglong uVar1;
  byte bVar2;
  uint uVar3;
  UObject *pUVar4;
  code *pcVar5;
  longlong *plVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  FSlateShaderResourceProxy *pFVar13;
  FSlateShaderResourceProxy *pFVar14;
  UClass *pUVar15;
  FString *pFVar16;
  FTextureResource *pFVar17;
  TIntPoint<int>_u_0 TVar18;
  longlong lVar19;
  longlong lVar20;
  uint uVar21;
  int iVar22;
  ForElementType<unsigned_int> FVar23;
  int iVar24;
  uint *puVar25;
  FSlateShaderResourceProxy *pFVar26;
  FSlateShaderResourceProxy *pFVar27;
  undefined4 local_res8 [2];
  int local_res10;
  ForElementType<unsigned_int> local_res18;
  undefined8 local_res20;
  undefined4 uStack_9c;
  UTexture *local_98;
  longlong *local_90;
  longlong *local_88;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_80;
  undefined8 uStack_60;
  FString local_58;
  
  pFVar27 = (FSlateShaderResourceProxy *)0x0;
  local_res8[0] = 0;
  this->_padding_ = (longlong)param_1;
  pFVar26 = (FSlateShaderResourceProxy *)0x0;
  local_98 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UTexture *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&this->_padding_,(FObjectPtr)&local_98);
  lVar19 = this->_padding_;
  if (lVar19 == 0) {
    local_res20 = 0;
    pFVar14 = pFVar27;
  }
  else {
    pFVar14 = *(FSlateShaderResourceProxy **)(lVar19 + 0x18);
  }
  this->_padding_ = (longlong)pFVar14;
  if (this->Proxy == (FSlateShaderResourceProxy *)0x0) {
    if (lVar19 == 0) {
      return;
    }
    pFVar13 = ::operator_new(0x30);
    pFVar14 = pFVar27;
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
    this->Proxy = pFVar14;
    if (pFVar14 == (FSlateShaderResourceProxy *)0x0) {
      return;
    }
  }
  if (this->_padding_ != 0) {
    *(undefined1 *)&this->_padding_ = 0;
    pUVar15 = USlateRHIRendererSettings::StaticClass();
    if ((pUVar15->ClassDefaultObject).field0_0x0.DebugPtr != (UObject *)0x0) {
      pUVar15 = USlateRHIRendererSettings::StaticClass();
      if ((pUVar15->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
        UClass::InternalCreateDefaultObjectWrapper(pUVar15);
      }
      pUVar4 = (pUVar15->ClassDefaultObject).field0_0x0.DebugPtr;
      if (pUVar4 != (UObject *)0x0) {
        iVar10 = *(int *)&pUVar4[2].field_0x10;
        local_res18 = (ForElementType<unsigned_int>)&pUVar4[1].field_0x20;
        iVar22 = 0;
        iVar24 = 0;
        local_90 = (longlong *)&pUVar4[1].field_0x10;
        uVar8 = 1;
        iVar9 = 0;
        if (iVar10 != 0) {
          puVar25 = *(uint **)&pUVar4[2].field_0x8;
          if (*(uint **)&pUVar4[2].field_0x8 == (uint *)0x0) {
            puVar25 = (uint *)&pUVar4[1].field_0x20;
          }
          uVar21 = *puVar25;
          while (uVar21 == 0) {
            lVar19 = (longlong)iVar22;
            iVar24 = iVar24 + 0x20;
            iVar22 = iVar22 + 1;
            iVar9 = iVar10;
            if ((int)(iVar10 + -1 + (iVar10 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar22)
            goto LAB_14602e9c1;
            uVar21 = puVar25[lVar19 + 1];
          }
          uVar8 = -uVar21 & uVar21;
          uVar1 = (ulonglong)uVar8 * 2 + 1;
          lVar19 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar19 == 0; lVar19 = lVar19 + -1) {
            }
          }
          local_res10 = (int)lVar19;
          iVar9 = iVar24 + -1 + local_res10;
          if (iVar10 < iVar9) {
            iVar9 = iVar10;
          }
        }
LAB_14602e9c1:
        TStack_80.Array = (TBitArray<FDefaultBitArrayAllocator> *)&pUVar4[1].field_0x20;
        uVar21 = *(uint *)&pUVar4[2].field_0x10;
        TStack_80._padding_ = CONCAT44(uVar8,iVar22);
        uVar8 = uVar21 & 0xffffffe0;
        TStack_80.CurrentBitIndex = iVar9;
        TStack_80.UnvisitedBitMask = 0xffffffff;
        iVar22 = (int)uVar21 >> 5;
        TStack_80._28_4_ = iVar9;
        TStack_80.BaseBitIndex = iVar24;
        uStack_60 = CONCAT44(uStack_9c,*(int *)&pUVar4[1].field_0x18 - *(int *)&pUVar4[2].field_0x1c
                            );
        local_88 = local_90;
        if ((((int)uVar21 < 0) || (iVar10 < (int)uVar21)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("StartIndex >= 0 && StartIndex <= Array.Num()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x7af,L""), bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar3 = *(int *)((longlong)local_res18 + 0x18);
        if (uVar21 != uVar3) {
          FVar23 = *(ForElementType<unsigned_int> *)((longlong)local_res18 + 0x10);
          if (*(ForElementType<unsigned_int> *)((longlong)local_res18 + 0x10) ==
              (ForElementType<unsigned_int>)0x0) {
            FVar23 = local_res18;
          }
          uVar21 = -1 << ((byte)uVar21 & 0x1f) & *(uint *)((longlong)FVar23 + (longlong)iVar22 * 4);
          while (pFVar27 = pFVar26, uVar21 == 0) {
            lVar19 = (longlong)iVar22;
            uVar8 = uVar8 + 0x20;
            iVar22 = iVar22 + 1;
            uVar21 = uVar3;
            if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar22)
            goto LAB_14602eac0;
            uVar21 = *(uint *)((undefined1 *)((longlong)FVar23 + 4) + lVar19 * 4);
          }
          uVar1 = (ulonglong)(-uVar21 & uVar21) * 2 + 1;
          lVar19 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar19 == 0; lVar19 = lVar19 + -1) {
            }
          }
          uVar21 = (int)lVar19 + -1 + uVar8;
          if ((int)uVar3 < (int)uVar21) {
            uVar21 = uVar3;
          }
        }
LAB_14602eac0:
        do {
          plVar6 = local_88;
          if ((int)local_88[1] - *(int *)((longlong)local_88 + 0x34) != (int)uStack_60) {
            `TSparseArray<TSparseSetElement<TTuple<enum_ESlatePostRT,FSlatePostSettings>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
          }
          if (((TStack_80.CurrentBitIndex == uVar21) &&
              ((ForElementType<unsigned_int>)TStack_80.Array == local_res18)) &&
             (plVar6 == local_90)) break;
          lVar19 = *plVar6;
          lVar20 = (longlong)TStack_80.CurrentBitIndex * 0x40;
          bVar2 = *(byte *)(lVar20 + lVar19);
          if (((*(byte *)(lVar20 + 8 + lVar19) & 1) == 0) || (param_1 == (UTexture *)0x0)) {
LAB_14602eb55:
            bVar7 = false;
          }
          else {
            pFVar27 = (FSlateShaderResourceProxy *)&DAT_00000001;
            pFVar16 = UObjectBaseUtility::GetPathName
                                ((UObjectBaseUtility *)param_1,&local_58,(UObject *)0x0);
            iVar10 = *(int *)(lVar20 + 0x20 + lVar19);
            iVar24 = (pFVar16->Data).ArrayNum;
            if (iVar24 == iVar10) {
              if (1 < iVar24) {
                iVar10 = FGenericPlatformStricmp::Stricmp
                                   ((wchar_t *)(pFVar16->Data).AllocatorInstance.Data,
                                    *(wchar_t **)(lVar20 + 0x18 + lVar19));
                bVar7 = iVar10 == 0;
                goto LAB_14602eb4a;
              }
            }
            else {
              bVar7 = iVar10 + iVar24 == 1;
LAB_14602eb4a:
              if (!bVar7) goto LAB_14602eb55;
            }
            bVar7 = true;
          }
          if ((pFVar27 != (FSlateShaderResourceProxy *)0x0) &&
             (pFVar27 = (FSlateShaderResourceProxy *)0x0,
             local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
            FMemory::Free(local_58.Data.AllocatorInstance.Data);
          }
          if (bVar7) {
            *(byte *)&this->_padding_ = (byte)this->_padding_ | bVar2;
          }
          TStack_80.UnvisitedBitMask = TStack_80.UnvisitedBitMask & ~TStack_80._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_80);
        } while( true );
      }
    }
    pFVar17 = UTexture::GetResource((UTexture *)this->_padding_);
    this->Proxy->Resource = (FSlateShaderResource *)this;
    if (pFVar17 == (FTextureResource *)0x0) {
      TVar18 = (TIntPoint<int>_u_0)0x0;
    }
    else {
      uVar11 = (**(code **)(pFVar17->_padding_ + 0x38))(pFVar17);
      uVar12 = (**(code **)(pFVar17->_padding_ + 0x30))(pFVar17);
      TVar18._s_0.Y = uVar11;
      TVar18._s_0.X = uVar12;
    }
    (this->Proxy->ActualSize).field0_0x0 = TVar18;
  }
  return;
}

