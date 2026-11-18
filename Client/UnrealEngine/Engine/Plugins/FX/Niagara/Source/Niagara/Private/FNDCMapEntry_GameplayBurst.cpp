// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 4

// StaticStruct @ 14907c620

UScriptStruct * __cdecl FNDCMapEntry_GameplayBurst::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNDCMapEntry_GameplayBurst.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UScriptStruct_FNDCMapEntry_GameplayBurst.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNDCMapEntry_GameplayBurst,(UObject *)pUVar1,
                         L"NDCMapEntry_GameplayBurst");
  }
  return Z_Registration_Info_UScriptStruct_FNDCMapEntry_GameplayBurst.OuterSingleton;
}

// Init @ 14907c660

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FNDCMapEntry_GameplayBurst::Init
          (FNDCMapEntry_GameplayBurst *this,FNDCAccessContextInst *param_1,
          UNiagaraDataChannelHandler_MapBase *param_2,FNDCMapKey *param_3)

{
  longlong *plVar1;
  double dVar2;
  double dVar3;
  longlong *plVar4;
  code *pcVar5;
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  bool bVar16;
  int iVar17;
  UClass *pUVar18;
  FNDCAccessContext_GameplayBurst *pFVar19;
  TSharedPtr<FNiagaraDataChannelData,1> *pTVar20;
  FNDCAccessContext_MapBase *pFVar21;
  TVector<double> *pTVar22;
  TVector<float> *pTVar23;
  longlong lVar24;
  FString *pFVar25;
  wchar_t *pwVar26;
  wchar_t *pwVar27;
  UObject *pUVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  double dVar31;
  double dVar32;
  double dVar35;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 unaff_XMM9 [16];
  undefined1 auVar36 [16];
  undefined1 unaff_XMM10 [16];
  undefined1 auVar37 [16];
  UObject *local_res18;
  double local_210;
  TSharedPtr<FNiagaraDataChannelData,1> local_208;
  TVector<double>_u_0 local_1f8;
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  TVector<double>_u_0 local_198;
  undefined1 local_178 [16];
  double local_168;
  double local_158;
  double dStack_150;
  double local_148;
  TVector<float> local_138;
  TVector<float> local_12c;
  undefined1 local_120 [24];
  double local_108;
  double local_100;
  double local_f8;
  FString local_e8;
  FString local_d8;
  FString local_c8 [5];
  
  if (param_2 == (UNiagaraDataChannelHandler_MapBase *)0x0) {
    pFVar25 = GetTypeName<UNiagaraDataChannelHandler_GameplayBurst>(&local_e8);
    if ((pFVar25->Data).ArrayNum == 0) {
      pwVar26 = L"";
    }
    else {
      pwVar26 = (wchar_t *)(pFVar25->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar26);
  }
  pUVar18 = UNiagaraDataChannelHandler_GameplayBurst::StaticClass();
  iVar17 = (int)pUVar18->_padding_;
  if ((*(int *)(param_2->_padding_ + 0x38) < iVar17) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(param_2->_padding_ + 0x30) + (longlong)iVar17 * 8)
      != &pUVar18->_padding_)) {
    pFVar25 = GetTypeName<UNiagaraDataChannelHandler_GameplayBurst>(&local_d8);
    pwVar26 = L"";
    if ((pFVar25->Data).ArrayNum == 0) {
      pwVar27 = L"";
    }
    else {
      pwVar27 = (wchar_t *)(pFVar25->Data).AllocatorInstance.Data;
    }
    pFVar25 = GetFullNameForCastLogError<UNiagaraDataChannelHandler_MapBase>(local_c8,param_2);
    if ((pFVar25->Data).ArrayNum != 0) {
      pwVar26 = (wchar_t *)(pFVar25->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(pwVar26,pwVar27);
  }
  pFVar19 = FNDCAccessContextInst::GetChecked<FNDCAccessContext_GameplayBurst>(param_1);
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)param_2);
  }
  this->_padding_ = (longlong)param_2;
  pTVar20 = UNiagaraDataChannelHandler::CreateData((UNiagaraDataChannelHandler *)param_2,&local_208)
  ;
  plVar1 = &this->_padding_;
  if ((TSharedPtr<FNiagaraDataChannelData,1> *)plVar1 != pTVar20) {
    *plVar1 = (longlong)pTVar20->Object;
    pTVar20->Object = (FNiagaraDataChannelData *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&this->_padding_,&pTVar20->SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_208.SharedReferenceCount.ReferenceController);
  *(undefined4 *)&this->_padding_ = 0;
  pFVar21 = FNDCAccessContextInst::GetChecked<FNDCAccessContext_MapBase>(param_1);
  if ((pFVar21->field_0x28 & 2) == 0) {
    pUVar28 = (param_2->DefaultSystemToSpawn).field0_0x0.DebugPtr;
  }
  else {
    pUVar28 = *(UObject **)&pFVar21->field_0x30;
  }
  pTVar22 = &pFVar19->SystemBoundsPadding;
  if (pFVar19->bOverrideBoundsPadding == '\0') {
    pTVar22 = (TVector<double> *)&param_2[1]._padding_;
  }
  dVar2 = (pTVar22->field0_0x0)._s_0.Z;
  dVar13 = (pTVar22->field0_0x0)._s_0.X;
  dVar7 = (pTVar22->field0_0x0)._s_0.Y;
  if (pFVar19->bAttachedToOwningComponent == 0) {
    lVar24 = pFVar19->_padding_;
    if ((lVar24 == 0) || ((pFVar19->_padding_ & 1) != 0)) {
      local_210 = (double)pFVar19->_padding_;
      uVar29 = SUB84(local_210,0);
      uVar30 = (undefined4)((ulonglong)local_210 >> 0x20);
      dVar32 = (double)pFVar19->_padding_;
      dVar35 = (double)pFVar19->_padding_;
    }
    else {
      local_210 = *(double *)(lVar24 + 0x220);
      uVar29 = SUB84(local_210,0);
      uVar30 = (undefined4)((ulonglong)local_210 >> 0x20);
      dVar32 = *(double *)(lVar24 + 0x210);
      dVar35 = *(double *)(lVar24 + 0x218);
    }
    if (*plVar1 == 0) {
      bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("Data.IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataChannel_GameplayBurst.cpp"
                          ,0x53,L"");
      if (bVar16) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if ((*plVar1 == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar16)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    lVar24 = *plVar1;
    local_198._s_0.Z = (double)CONCAT44(uVar30,uVar29);
    local_198._s_0.X = dVar32;
    local_198._s_0.Y = dVar35;
    pTVar23 = TLargeWorldRenderScalar<double>::GetTileFor
                        (&local_12c,(TVector<double> *)&local_198._s_0);
    *(undefined8 *)(lVar24 + 0x80) = *(undefined8 *)&pTVar23->field0_0x0;
    *(float *)(lVar24 + 0x88) = (pTVar23->field0_0x0)._s_0.Z;
    if (pUVar28 != (UObject *)0x0) {
      if (pFVar19->bOverrideCellSize == '\0') {
        pTVar22 = (TVector<double> *)&param_2[1]._padding_;
      }
      else {
        pTVar22 = &pFVar19->CellSizeOverride;
      }
      dVar14 = (pTVar22->field0_0x0)._s_0.X;
      dVar15 = (pTVar22->field0_0x0)._s_0.Y;
      dVar3 = (pTVar22->field0_0x0)._s_0.Z;
      dVar8 = dVar14 * __real_3fe0000000000000;
      dVar9 = dVar15 * __real_3fe0000000000000;
      dVar10 = dVar3 * __real_3fe0000000000000;
      dVar11 = __real_47eff933c0000000;
      if (dVar14 != 0.0) {
        dVar11 = __real_3ff0000000000000 / dVar14;
      }
      dVar12 = __real_47eff933c0000000;
      if (dVar15 != 0.0) {
        dVar12 = __real_3ff0000000000000 / dVar15;
      }
      dVar31 = __real_47eff933c0000000;
      if (dVar3 != 0.0) {
        dVar31 = __real_3ff0000000000000 / dVar3;
      }
      pcVar5 = *(code **)(this->_padding_ + 0x38);
      auVar33._0_8_ = dVar32 * dVar11;
      auVar33._8_8_ = dVar35;
      auVar34._8_8_ = 0;
      auVar34._0_8_ = local_210 * dVar31;
      auVar37 = roundpd(unaff_XMM10,auVar34,1);
      auVar36._8_8_ = 0;
      auVar36._0_8_ = dVar35 * dVar12;
      auVar36 = roundpd(unaff_XMM9,auVar36,1);
      dVar7 = dVar7 + dVar9;
      auVar6._8_8_ = 0;
      auVar6._0_8_ = auVar33._0_8_;
      auVar34 = roundpd(auVar33,auVar6,1);
      pFVar21 = FNDCAccessContextInst::GetChecked<FNDCAccessContext_MapBase>(param_1);
      local_178._8_4_ = SUB84(dVar7,0);
      local_178._0_8_ = dVar13 + dVar8;
      local_178._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
      local_168 = dVar2 + dVar10;
      local_158 = auVar34._0_8_ * dVar14 + dVar8;
      dStack_150 = auVar36._0_8_ * dVar15 + dVar9;
      local_148 = auVar37._0_8_ * dVar3 + dVar10;
      (*pcVar5)(this,pFVar21,pUVar28,0,&local_158,local_178,1);
    }
  }
  else {
    local_res18 = (UObject *)pFVar19->_padding_;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res18 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_res18);
    }
    FWeakObjectPtr::operator=(&(this->AttachComponent).WeakPtr,(FObjectPtr)&local_res18);
    plVar4 = (longlong *)pFVar19->_padding_;
    if ((plVar4 == (longlong *)0x0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("Comp",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataChannel_GameplayBurst.cpp"
                            ,0x3d,L""), bVar16)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    dVar35 = (double)plVar4[0x42];
    dVar3 = (double)plVar4[0x43];
    dVar32 = (double)plVar4[0x44];
    if (*plVar1 == 0) {
      bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("Data.IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataChannel_GameplayBurst.cpp"
                          ,0x41,L"");
      if (bVar16) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if ((*plVar1 == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar16)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    lVar24 = *plVar1;
    local_1f8._s_0.X = dVar35;
    local_1f8._s_0.Y = dVar3;
    local_1f8._s_0.Z = dVar32;
    pTVar23 = TLargeWorldRenderScalar<double>::GetTileFor
                        (&local_138,(TVector<double> *)&local_1f8._s_0);
    *(undefined8 *)(lVar24 + 0x80) = *(undefined8 *)&pTVar23->field0_0x0;
    *(float *)(lVar24 + 0x88) = (pTVar23->field0_0x0)._s_0.Z;
    if (pUVar28 != (UObject *)0x0) {
      (**(code **)(*plVar4 + 0x598))(plVar4,local_120,plVar4 + 0x3e);
      pcVar5 = *(code **)(this->_padding_ + 0x38);
      pFVar21 = FNDCAccessContextInst::GetChecked<FNDCAccessContext_MapBase>(param_1);
      local_1d8 = local_108 + dVar13;
      dStack_1d0 = local_100 + dVar7;
      local_1c8 = local_f8 + dVar2;
      local_1b8 = dVar35;
      dStack_1b0 = dVar3;
      local_1a8 = dVar32;
      lVar24 = (*pcVar5)(this,pFVar21,pUVar28,plVar4,&local_1b8,&local_1d8,1);
      if (lVar24 != 0) {
        if (((*(ulonglong *)(lVar24 + 0x68) < 0x155271de1) &&
            (&UNiagaraDataChannelHandler_GameplayBurst::AttachedComponentTag <
             (FName *)(*(ulonglong *)(lVar24 + 0x68) + (longlong)*(int *)(lVar24 + 0x74) * 8))) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar16)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar17 = *(int *)(lVar24 + 0x70);
        if (iVar17 == *(int *)(lVar24 + 0x74)) {
          iVar17 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x408,(ForAnyElementType *)(lVar24 + 0x68),(int *)(lVar24 + 0x74));
        }
        *(int *)(lVar24 + 0x70) = iVar17 + 1;
        *(FName *)(((ForAnyElementType *)(lVar24 + 0x68))->Data + (longlong)iVar17 * 8) =
             UNiagaraDataChannelHandler_GameplayBurst::AttachedComponentTag;
      }
    }
  }
  return;
}

// Reset @ 14907cd40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FNDCMapEntry_GameplayBurst::Reset(FNDCMapEntry_GameplayBurst *this,FNDCMapKey *param_1)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  FName *pFVar6;
  code *pcVar7;
  bool bVar8;
  UClass *pUVar9;
  FName FVar10;
  FString *pFVar11;
  ulonglong uVar12;
  longlong *plVar13;
  longlong lVar14;
  wchar_t *pwVar15;
  wchar_t *pwVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  FString local_70;
  FString local_60;
  FString local_50;
  
  if (((this->AttachComponent).WeakPtr.ObjectIndex != 0) ||
     ((this->AttachComponent).WeakPtr.ObjectSerialNumber != 0)) {
    if (this->_padding_ == 0) {
      pFVar11 = GetTypeName<UNiagaraDataChannelHandler_GameplayBurst>(&local_50);
      if ((pFVar11->Data).ArrayNum == 0) {
        pwVar15 = L"";
      }
      else {
        pwVar15 = (wchar_t *)(pFVar11->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(L"nullptr",pwVar15);
    }
    pUVar9 = UNiagaraDataChannelHandler_GameplayBurst::StaticClass();
    bVar8 = FObjectPtr::IsA((FObjectPtr *)&this->_padding_,pUVar9);
    if ((!bVar8) || (this->_padding_ == 0)) {
      pFVar11 = GetTypeName<UNiagaraDataChannelHandler_GameplayBurst>(&local_70);
      pwVar15 = L"";
      if ((pFVar11->Data).ArrayNum == 0) {
        pwVar16 = L"";
      }
      else {
        pwVar16 = (wchar_t *)(pFVar11->Data).AllocatorInstance.Data;
      }
      pFVar11 = GetFullNameForCastLogError<UNiagaraDataChannelHandler_MapBase>
                          (&local_60,(UNiagaraDataChannelHandler_MapBase *)this->_padding_);
      if ((pFVar11->Data).ArrayNum != 0) {
        pwVar15 = (wchar_t *)(pFVar11->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar15,pwVar16);
    }
    uVar3 = (uint)this->_padding_;
    uVar12 = (ulonglong)(int)uVar3;
    plVar13 = (longlong *)this->_padding_;
    plVar2 = plVar13 + uVar12;
    while( true ) {
      if ((int)this->_padding_ != (int)uVar12) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<TObjectPtr<UNiagaraComponent>,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(local_res18);
      }
      if (plVar13 == plVar2) break;
      lVar5 = *plVar13;
      if (((*(ulonglong *)(lVar5 + 0x68) < 0x155271de1) &&
          (&UNiagaraDataChannelHandler_GameplayBurst::AttachedComponentTag <
           (FName *)(*(ulonglong *)(lVar5 + 0x68) + (longlong)*(int *)(lVar5 + 0x74) * 8))) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar4 = *(int *)(lVar5 + 0x70);
      if (iVar4 != 0) {
        pFVar6 = *(FName **)(lVar5 + 0x68);
        iVar19 = 0;
        lVar14 = 0;
        bVar8 = *pFVar6 != UNiagaraDataChannelHandler_GameplayBurst::AttachedComponentTag;
        FVar10 = UNiagaraDataChannelHandler_GameplayBurst::AttachedComponentTag;
        iVar17 = 0;
        do {
          iVar18 = iVar17;
          do {
            lVar14 = lVar14 + 1;
            iVar18 = iVar18 + 1;
            if (iVar4 <= lVar14) break;
          } while (bVar8 == (pFVar6[lVar14] != FVar10));
          if (bVar8 != false) {
            if (iVar19 != iVar17) {
              memmove(pFVar6 + iVar19,pFVar6 + iVar17,(longlong)(iVar18 - iVar17) << 3);
              FVar10 = UNiagaraDataChannelHandler_GameplayBurst::AttachedComponentTag;
            }
            iVar19 = iVar19 + (iVar18 - iVar17);
          }
          bVar8 = (bool)(bVar8 ^ 1);
          iVar17 = iVar18;
        } while (lVar14 < iVar4);
        *(int *)(lVar5 + 0x70) = iVar19;
      }
      uVar12 = (ulonglong)uVar3;
      plVar13 = plVar13 + 1;
    }
  }
  (this->AttachComponent).WeakPtr = (FWeakObjectPtr)0x0;
  if ((FNiagaraDataChannelData *)this->_padding_ != (FNiagaraDataChannelData *)0x0) {
    FNiagaraDataChannelData::Reset((FNiagaraDataChannelData *)this->_padding_);
  }
  plVar13 = (longlong *)this->_padding_;
  iVar4 = (int)this->_padding_;
  plVar2 = plVar13 + iVar4;
  while( true ) {
    if ((int)this->_padding_ != iVar4) {
      `TCheckedPointerIterator<TObjectPtr<UNiagaraComponent>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res20);
    }
    if (plVar13 == plVar2) break;
    if ((longlong *)*plVar13 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*plVar13 + 0xae0))();
    }
    plVar13 = plVar13 + 1;
  }
  piVar1 = (int *)((longlong)&this->_padding_ + 4);
  *(undefined4 *)&this->_padding_ = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)&this->_padding_,0,piVar1);
  }
  return;
}

// BeginFrame @ 14907d040

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
FNDCMapEntry_GameplayBurst::BeginFrame
          (FNDCMapEntry_GameplayBurst *this,float param_1,FNiagaraWorldManager *param_2,
          FNDCMapKey *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  UNiagaraComponent *this_00;
  bool bVar3;
  bool bVar4;
  UWorld *pUVar5;
  undefined8 *puVar6;
  undefined1 local_res8 [8];
  
  if (((this->AttachComponent).WeakPtr.ObjectIndex != 0) ||
     ((this->AttachComponent).WeakPtr.ObjectSerialNumber != 0)) {
    bVar3 = FWeakObjectPtr::IsValid(&(this->AttachComponent).WeakPtr);
    if (!bVar3) {
      bVar3 = false;
      goto LAB_14907d06f;
    }
  }
  bVar3 = true;
LAB_14907d06f:
  pUVar5 = FNiagaraWorldManager::GetWorld(param_2);
  *(float *)&this->_padding_ = (float)pUVar5->RealTimeSeconds;
  if ((FNiagaraDataChannelData *)this->_padding_ != (FNiagaraDataChannelData *)0x0) {
    FNiagaraDataChannelData::BeginFrame
              ((FNiagaraDataChannelData *)this->_padding_,
               (UNiagaraDataChannelHandler *)this->_padding_);
    if ((this->_padding_ == 0) || (*(int *)(this->_padding_ + 8) != 1)) {
LAB_14907d10c:
      if (bVar3) {
        bVar3 = true;
      }
      else {
LAB_14907d115:
        bVar3 = false;
      }
      return bVar3;
    }
  }
  puVar6 = (undefined8 *)this->_padding_;
  iVar2 = (int)this->_padding_;
  puVar1 = puVar6 + iVar2;
  do {
    if ((int)this->_padding_ != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UNiagaraComponent>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (puVar6 == puVar1) goto LAB_14907d115;
    this_00 = (UNiagaraComponent *)*puVar6;
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
      if (this_00 != (UNiagaraComponent *)0x0) goto LAB_14907d0fa;
    }
    else if (this_00 != (UNiagaraComponent *)0x0) {
      UE::GC::MarkAsReachable((UObject *)this_00);
LAB_14907d0fa:
      bVar4 = UNiagaraComponent::IsComplete(this_00);
      if (!bVar4) goto LAB_14907d10c;
    }
    puVar6 = puVar6 + 1;
  } while( true );
}

