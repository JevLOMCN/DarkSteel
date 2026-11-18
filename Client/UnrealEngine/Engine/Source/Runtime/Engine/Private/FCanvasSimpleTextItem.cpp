// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 9

// operator() @ 148911f20

void __thiscall
`FCanvasSimpleTextItem::DrawStringInternal_OfflineCache'::__l19::<lambda_1>::operator()
          (void *this,TVector2<float> *param_1,FLinearColor *param_2)

{
  ESimpleElementBlendMode EVar1;
  longlong lVar2;
  FBatchedElements *pFVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  FTextureResource *pFVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  TVector2<float>_u_0 local_res10;
  TVector4<float>_u_0 local_88 [5];
  
  lVar2 = *(longlong *)((longlong)this + 0x18);
  local_88[0]._12_4_ = *(float *)(lVar2 + 0x44);
  fVar11 = (float)((double)(param_1->field0_0x0)._s_0.X + **(double **)((longlong)this + 8) +
                  **(double **)this);
  fVar9 = (float)local_88[0]._12_4_ * fVar11;
  fVar12 = (fVar11 + **(float **)((longlong)this + 0x20)) * (float)local_88[0]._12_4_;
  local_res10._s_0.X = **(float **)((longlong)this + 0x30);
  fVar10 = (float)((double)*(int *)(*(longlong *)((longlong)this + 0x10) + 0x14) *
                   *(double *)(lVar2 + 0xd8) + (*(double **)this)[1] +
                  (double)(param_1->field0_0x0)._s_0.Y + (*(double **)((longlong)this + 8))[1]);
  fVar11 = (float)local_88[0]._12_4_ * fVar10;
  local_res10._s_0.Y = **(float **)((longlong)this + 0x38);
  fVar10 = (fVar10 + **(float **)((longlong)this + 0x28)) * (float)local_88[0]._12_4_;
  local_88[0]._s_0.Z = 0.0;
  local_88[0]._0_4_ = fVar9;
  local_88[0]._4_4_ = fVar11;
  iVar4 = FBatchedElements::AddVertexf
                    (*(FBatchedElements **)(lVar2 + 400),(TVector4<float> *)&local_88[0]._s_0,
                     (TVector2<float> *)&local_res10._s_0,param_2,
                     (FHitProxyId)**(int **)((longlong)this + 0x40));
  local_res10._s_0.X = **(float **)((longlong)this + 0x30) + **(float **)((longlong)this + 0x48);
  local_res10._s_0.Y = **(float **)((longlong)this + 0x38);
  local_88[0]._12_4_ = *(float *)(*(longlong *)((longlong)this + 0x18) + 0x44);
  local_88[0]._s_0.Z = 0.0;
  local_88[0]._0_4_ = fVar12;
  local_88[0]._4_4_ = fVar11;
  iVar5 = FBatchedElements::AddVertexf
                    (*(FBatchedElements **)(*(longlong *)((longlong)this + 0x18) + 400),
                     (TVector4<float> *)&local_88[0]._s_0,(TVector2<float> *)&local_res10._s_0,
                     param_2,(FHitProxyId)**(int **)((longlong)this + 0x40));
  local_res10._s_0.Y = **(float **)((longlong)this + 0x38) + **(float **)((longlong)this + 0x50);
  local_res10._s_0.X = **(float **)((longlong)this + 0x30);
  local_88[0]._12_4_ = *(float *)(*(longlong *)((longlong)this + 0x18) + 0x44);
  local_88[0]._s_0.Z = 0.0;
  local_88[0]._0_4_ = fVar9;
  local_88[0]._4_4_ = fVar10;
  iVar6 = FBatchedElements::AddVertexf
                    (*(FBatchedElements **)(*(longlong *)((longlong)this + 0x18) + 400),
                     (TVector4<float> *)&local_88[0]._s_0,(TVector2<float> *)&local_res10._s_0,
                     param_2,(FHitProxyId)**(int **)((longlong)this + 0x40));
  local_res10._s_0.Y = **(float **)((longlong)this + 0x38) + **(float **)((longlong)this + 0x50);
  local_res10._s_0.X = **(float **)((longlong)this + 0x30) + **(float **)((longlong)this + 0x48);
  local_88[0]._12_4_ = *(float *)(*(longlong *)((longlong)this + 0x18) + 0x44);
  local_88[0]._s_0.Z = 0.0;
  local_88[0]._0_4_ = fVar12;
  local_88[0]._4_4_ = fVar10;
  iVar7 = FBatchedElements::AddVertexf
                    (*(FBatchedElements **)(*(longlong *)((longlong)this + 0x18) + 400),
                     (TVector4<float> *)&local_88[0]._s_0,(TVector2<float> *)&local_res10._s_0,
                     param_2,(FHitProxyId)**(int **)((longlong)this + 0x40));
  lVar2 = *(longlong *)((longlong)this + 0x18);
  pFVar3 = *(FBatchedElements **)(lVar2 + 400);
  EVar1 = *(ESimpleElementBlendMode *)(lVar2 + 0x1c);
  pFVar8 = UTexture::GetResource((UTexture *)**(undefined8 **)((longlong)this + 0x58));
  FBatchedElements::AddTriangle
            (pFVar3,iVar4,iVar5,iVar7,(FTexture *)pFVar8,EVar1,(FDepthFieldGlowInfo *)(lVar2 + 0x50)
            );
  lVar2 = *(longlong *)((longlong)this + 0x18);
  pFVar3 = *(FBatchedElements **)(lVar2 + 400);
  EVar1 = *(ESimpleElementBlendMode *)(lVar2 + 0x1c);
  pFVar8 = UTexture::GetResource((UTexture *)**(undefined8 **)((longlong)this + 0x58));
  FBatchedElements::AddTriangle
            (pFVar3,iVar4,iVar7,iVar6,(FTexture *)pFVar8,EVar1,(FDepthFieldGlowInfo *)(lVar2 + 0x50)
            );
  return;
}

// operator() @ 1489128c0

void __thiscall
`FCanvasSimpleTextItem::DrawStringInternal_RuntimeCache'::__l52::<lambda_1>::operator()
          (void *this,TVector2<float> *param_1,FLinearColor *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  TVector2<float>_u_0 local_res8;
  TVector4<float>_u_0 local_68 [5];
  
  lVar1 = *(longlong *)((longlong)this + 0x10);
  lVar2 = *(longlong *)((longlong)this + 0x18);
  fVar9 = (float)((double)(int)*(short *)(lVar1 + 0x32) * *(double *)(lVar2 + 0xd0) +
                  (double)**(float **)((longlong)this + 8) +
                 (double)(param_1->field0_0x0)._s_0.X + **(double **)this);
  local_68[0]._12_4_ = *(float *)(lVar2 + 0x44);
  fVar7 = (float)local_68[0]._12_4_ * fVar9;
  local_res8._s_0.X = **(float **)((longlong)this + 0x48);
  fVar10 = (fVar9 + **(float **)((longlong)this + 0x38)) * (float)local_68[0]._12_4_;
  fVar8 = (float)((((double)(param_1->field0_0x0)._s_0.Y + (*(double **)this)[1] +
                   (double)**(float **)((longlong)this + 0x20)) -
                  (double)(int)*(short *)(lVar1 + 0x30) * *(double *)(lVar2 + 0xd8)) +
                 ((double)(int)*(short *)(lVar1 + 0x34) * *(double *)(lVar2 + 0xd8) +
                 (double)**(float **)((longlong)this + 0x28)) *
                 (double)**(float **)((longlong)this + 0x30));
  fVar9 = (float)local_68[0]._12_4_ * fVar8;
  local_res8._s_0.Y = **(float **)((longlong)this + 0x50);
  fVar8 = (fVar8 + **(float **)((longlong)this + 0x40)) * (float)local_68[0]._12_4_;
  local_68[0]._s_0.Z = 0.0;
  local_68[0]._0_4_ = fVar7;
  local_68[0]._4_4_ = fVar9;
  iVar3 = FBatchedElements::AddVertexf
                    (*(FBatchedElements **)(lVar2 + 400),(TVector4<float> *)&local_68[0]._s_0,
                     (TVector2<float> *)&local_res8._s_0,param_2,
                     (FHitProxyId)**(int **)((longlong)this + 0x58));
  local_res8._s_0.X = **(float **)((longlong)this + 0x48) + **(float **)((longlong)this + 0x60);
  local_res8._s_0.Y = **(float **)((longlong)this + 0x50);
  local_68[0]._12_4_ = *(float *)(*(longlong *)((longlong)this + 0x18) + 0x44);
  local_68[0]._s_0.Z = 0.0;
  local_68[0]._0_4_ = fVar10;
  local_68[0]._4_4_ = fVar9;
  iVar4 = FBatchedElements::AddVertexf
                    (*(FBatchedElements **)(*(longlong *)((longlong)this + 0x18) + 400),
                     (TVector4<float> *)&local_68[0]._s_0,(TVector2<float> *)&local_res8._s_0,
                     param_2,(FHitProxyId)**(int **)((longlong)this + 0x58));
  local_res8._s_0.Y = **(float **)((longlong)this + 0x50) + **(float **)((longlong)this + 0x68);
  local_res8._s_0.X = **(float **)((longlong)this + 0x48);
  local_68[0]._12_4_ = *(float *)(*(longlong *)((longlong)this + 0x18) + 0x44);
  local_68[0]._s_0.Z = 0.0;
  local_68[0]._0_4_ = fVar7;
  local_68[0]._4_4_ = fVar8;
  iVar5 = FBatchedElements::AddVertexf
                    (*(FBatchedElements **)(*(longlong *)((longlong)this + 0x18) + 400),
                     (TVector4<float> *)&local_68[0]._s_0,(TVector2<float> *)&local_res8._s_0,
                     param_2,(FHitProxyId)**(int **)((longlong)this + 0x58));
  local_res8._s_0.Y = **(float **)((longlong)this + 0x50) + **(float **)((longlong)this + 0x68);
  local_res8._s_0.X = **(float **)((longlong)this + 0x48) + **(float **)((longlong)this + 0x60);
  local_68[0]._12_4_ = *(float *)(*(longlong *)((longlong)this + 0x18) + 0x44);
  local_68[0]._s_0.Z = 0.0;
  local_68[0]._0_4_ = fVar10;
  local_68[0]._4_4_ = fVar8;
  iVar6 = FBatchedElements::AddVertexf
                    (*(FBatchedElements **)(*(longlong *)((longlong)this + 0x18) + 400),
                     (TVector4<float> *)&local_68[0]._s_0,(TVector2<float> *)&local_res8._s_0,
                     param_2,(FHitProxyId)**(int **)((longlong)this + 0x58));
  FBatchedElements::AddTriangle
            (*(FBatchedElements **)(*(longlong *)((longlong)this + 0x18) + 400),iVar3,iVar4,iVar6,
             (FTexture *)**(undefined8 **)((longlong)this + 0x70),
             **(ESimpleElementBlendMode **)((longlong)this + 0x78),
             (FDepthFieldGlowInfo *)(*(longlong *)((longlong)this + 0x18) + 0x50));
  FBatchedElements::AddTriangle
            (*(FBatchedElements **)(*(longlong *)((longlong)this + 0x18) + 400),iVar3,iVar6,iVar5,
             (FTexture *)**(undefined8 **)((longlong)this + 0x70),
             **(ESimpleElementBlendMode **)((longlong)this + 0x78),
             (FDepthFieldGlowInfo *)(*(longlong *)((longlong)this + 0x18) + 0x50));
  return;
}

// DrawStringInternal @ 148935a40

void __thiscall
FCanvasSimpleTextItem::DrawStringInternal
          (FCanvasSimpleTextItem *this,FCanvas *param_1,TStringView<wchar_t> *param_2,
          TVector2<double> *param_3,FLinearColor *param_4,
          TArrayView<FCanvasTextItemBase::FTextEffect,int> *param_5)

{
  EFontCacheType EVar1;
  TArrayView<FCanvasTextItemBase::FTextEffect,int> local_28;
  TArrayView<FCanvasTextItemBase::FTextEffect,int> local_18;
  
  EVar1 = this->Font->FontCacheType;
  if (EVar1 == Offline) {
    local_28.DataPtr = (FTextEffect *)param_2->DataPtr;
    local_28.ArrayNum = param_2->Size;
    local_28._12_4_ = *(undefined4 *)&param_2->field_0xc;
    local_18.DataPtr = param_5->DataPtr;
    local_18.ArrayNum = param_5->ArrayNum;
    local_18._12_4_ = *(undefined4 *)&param_5->field_0xc;
    DrawStringInternal_OfflineCache
              (this,param_1,(TStringView<wchar_t> *)&local_28,param_3,param_4,&local_18);
  }
  else if (EVar1 == Runtime) {
    local_18.DataPtr = (FTextEffect *)param_2->DataPtr;
    local_18.ArrayNum = param_2->Size;
    local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
    local_28.DataPtr = param_5->DataPtr;
    local_28.ArrayNum = param_5->ArrayNum;
    local_28._12_4_ = *(undefined4 *)&param_5->field_0xc;
    DrawStringInternal_RuntimeCache
              (this,param_1,(TStringView<wchar_t> *)&local_18,param_3,param_4,&local_28);
    return;
  }
  return;
}

// DrawStringInternal_OfflineCache @ 148935c80

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FCanvasSimpleTextItem::DrawStringInternal_OfflineCache
          (FCanvasSimpleTextItem *this,FCanvas *param_1,TStringView<wchar_t> *param_2,
          TVector2<double> *param_3,FLinearColor *param_4,
          TArrayView<FCanvasTextItemBase::FTextEffect,int> *param_5)

{
  FScriptContainerElement *pFVar1;
  FTextEffect *pFVar2;
  float fVar3;
  double dVar4;
  FScriptContainerElement FVar5;
  ushort uVar6;
  int iVar7;
  ESimpleElementBlendMode EVar8;
  HHitProxy *pHVar9;
  UFont *pUVar10;
  code *pcVar11;
  double dVar12;
  double dVar13;
  bool bVar14;
  bool bVar15;
  float fVar16;
  longlong lVar17;
  bool bVar18;
  bool bVar19;
  wchar_t wVar20;
  int iVar21;
  FName *pFVar22;
  FThreadSafeStaticStat<_protected:_void___cdecl_FCanvasSimpleTextItem::DrawStringInternal_OfflineCache(FCanvas_*,TStringView<wchar_t>,UE::Math::TVector2<double>_const_&,FLinearColor_const_&,TArrayView<FCanvasTextItemBase::FTextEffect,int>)_::_2_::FStat_DrawStringInternal_OfflineCache>
  FVar23;
  FTextureResource *pFVar24;
  FTextureResource *pFVar25;
  FBatchedElements *pFVar26;
  FName FVar27;
  FTextEffect *pFVar28;
  int iVar29;
  float fVar30;
  float local_res18 [2];
  TVector2<double> *local_res20;
  UTexture *local_178;
  int local_170;
  int local_16c;
  longlong local_168;
  FColor_u_0 local_160;
  float local_15c;
  float local_158;
  float local_154;
  int local_150;
  float local_14c;
  float local_148 [2];
  double local_140;
  double dStack_138;
  FName local_130;
  FName local_128;
  FName local_120;
  double *local_108;
  TVector2<double> *local_100;
  FScriptContainerElement *local_f8;
  FCanvasSimpleTextItem *local_f0;
  float *local_e8;
  float *local_e0;
  float *local_d8;
  float *local_d0;
  int *local_c8;
  float *local_c0;
  float *local_b8;
  UTexture **local_b0;
  FName local_a8;
  FName local_a0 [12];
  
  iVar29 = 0;
  local_res20 = param_3;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_DrawStringInternal_OfflineCache ==
        (FThreadSafeStaticStat<_protected:_void___cdecl_FCanvasSimpleTextItem::DrawStringInternal_OfflineCache(FCanvas_*,TStringView<wchar_t>,UE::Math::TVector2<double>_const_&,FLinearColor_const_&,TArrayView<FCanvasTextItemBase::FTextEffect,int>)_::_2_::FStat_DrawStringInternal_OfflineCache>
         )0x0) {
      pFVar22 = ::FName::FName(&local_a8,"DrawStringInternal_OfflineCache");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_DrawStringInternal_OfflineCache,*pFVar22,
                 L"DrawStringInternal_OfflineCache","STATGROUP_Quick","STATCAT_Advanced",L"Quick",
                 true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar23 = StatPtr_DrawStringInternal_OfflineCache;
  if (StatPtr_DrawStringInternal_OfflineCache ==
      (FThreadSafeStaticStat<_protected:_void___cdecl_FCanvasSimpleTextItem::DrawStringInternal_OfflineCache(FCanvas_*,TStringView<wchar_t>,UE::Math::TVector2<double>_const_&,FLinearColor_const_&,TArrayView<FCanvasTextItemBase::FTextEffect,int>)_::_2_::FStat_DrawStringInternal_OfflineCache>
       )0x0) {
    pFVar22 = ::FName::FName(local_a0,"DrawStringInternal_OfflineCache");
    FVar23 = (FThreadSafeStaticStat<_protected:_void___cdecl_FCanvasSimpleTextItem::DrawStringInternal_OfflineCache(FCanvas_*,TStringView<wchar_t>,UE::Math::TVector2<double>_const_&,FLinearColor_const_&,TArrayView<FCanvasTextItemBase::FTextEffect,int>)_::_2_::FStat_DrawStringInternal_OfflineCache>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_DrawStringInternal_OfflineCache,
                          *pFVar22,L"DrawStringInternal_OfflineCache","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar27 = *(FName *)FVar23;
  bVar15 = false;
  bVar14 = false;
  local_120.ComparisonIndex.Value = 0;
  local_120.Number = 0;
  bVar19 = false;
  bVar18 = false;
  if ((FVar27.ComparisonIndex.Value.Value != 0) || (FVar27.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_160.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_160._s_0,(char *)*(FName *)((longlong)FVar23 + 0x10));
      bVar15 = false;
      bVar14 = true;
      bVar19 = false;
      bVar18 = true;
      if (-1 < CpuChannel->Enabled) {
        local_130.ComparisonIndex.Value = FVar27.ComparisonIndex.Value.Value;
        local_130.Number = FVar27.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_130,(wchar_t *)*(FName *)((longlong)FVar23 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\UserInterface\\CanvasItem.cpp"
                   ,0x404);
        bVar15 = true;
        bVar14 = true;
        bVar19 = true;
        bVar18 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_128 = FVar27;
      FThreadStats::AddMessage(FVar27,CycleScopeStart);
      bVar18 = true;
      goto LAB_148935e2a;
    }
  }
  bVar15 = bVar19;
  bVar14 = bVar18;
  bVar18 = false;
  local_128 = local_120;
  FVar27 = local_120;
LAB_148935e2a:
  local_16c = param_2->Size;
  *(TVector2<double>_u_0 *)&this->_padding_ =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  fVar16 = __real_3f800000;
  if (local_16c != 0) {
    pHVar9 = (param_1->CurrentHitProxy).Reference;
    local_140 = 0.0;
    dStack_138 = 0.0;
    if (pHVar9 == (HHitProxy *)0x0) {
      local_150 = -1;
    }
    else {
      local_150 = (pHVar9->Id).Index;
    }
    local_178 = (UTexture *)0x0;
    iVar7 = this->Font->Kerning;
    fVar3 = *(float *)&this->_padding_;
    dVar4 = (double)this->_padding_;
    if (0 < local_16c) {
      pFVar25 = (FTextureResource *)0x0;
      local_168 = 0;
      local_170 = 1;
      dVar12 = __real_3ff0000000000000;
      dVar13 = __real_3ff0000000000000;
      do {
        lVar17 = local_168;
        pUVar10 = this->Font;
        if ((param_2->Size <= iVar29) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("Index >= 0 && Index < Size",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                                ,0x234,
                                L"Index out of bounds on StringView: index %i on a view with a length of %i"
                               ), bVar19)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        wVar20 = UFont::RemapChar(pUVar10,*(wchar_t *)((longlong)param_2->DataPtr + lVar17));
        pUVar10 = this->Font;
        if ((int)(uint)(ushort)wVar20 < (pUVar10->Characters).ArrayNum) {
          if (((pUVar10->Characters).ArrayNum <= (int)(uint)(ushort)wVar20) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar19)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          pFVar1 = (pUVar10->Characters).AllocatorInstance.Data + (ulonglong)(ushort)wVar20 * 0x18;
          if ((double)this->_padding_ == 0.0) {
            fVar30 = UFont::GetMaxCharHeight(this->Font);
            this->_padding_ = (longlong)((double)fVar30 * (double)this->_padding_);
          }
          if ((param_2->Size <= iVar29) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Index >= 0 && Index < Size",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                                  ,0x234,
                                  L"Index out of bounds on StringView: index %i on a view with a length of %i"
                                 ), bVar19)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          uVar6 = *(ushort *)(local_168 + (longlong)param_2->DataPtr);
          if ((uVar6 == 0x2028 || (uVar6 - 10 < 4 || uVar6 == 0x2029)) || uVar6 == 0x85) {
            local_140 = 0.0;
            fVar30 = UFont::GetMaxCharHeight(this->Font);
            dStack_138 = dStack_138 + (double)fVar30 * (double)this->_padding_;
            fVar30 = UFont::GetMaxCharHeight(this->Font);
            this->_padding_ =
                 (longlong)((double)fVar30 * (double)this->_padding_ + (double)this->_padding_);
          }
          else {
            pUVar10 = this->Font;
            FVar5 = pFVar1[0x10];
            if ((int)(uint)(byte)FVar5 < (pUVar10->Textures).ArrayNum) {
              if (((pUVar10->Textures).ArrayNum <= (int)(uint)(byte)FVar5) &&
                 (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar19)) {
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
              local_178 = *(UTexture **)
                           ((pUVar10->Textures).AllocatorInstance.Data + (ulonglong)(byte)FVar5 * 8)
              ;
              if ((local_178 != (UTexture *)0x0) &&
                 (pFVar24 = UTexture::GetResource(local_178), pFVar24 != (FTextureResource *)0x0)) {
                pFVar24 = UTexture::GetResource(local_178);
                if ((pFVar25 != pFVar24) || (this->_padding_ == 0)) {
                  EVar8 = *(ESimpleElementBlendMode *)((longlong)&this->_padding_ + 4);
                  pFVar25 = UTexture::GetResource(local_178);
                  pFVar26 = FCanvas::GetBatchedElements
                                      (param_1,ET_Triangle,(FBatchedElementParameters *)0x0,
                                       (FTexture *)pFVar25,EVar8,
                                       (FDepthFieldGlowInfo *)&this->_padding_,false);
                  this->_padding_ = (longlong)pFVar26;
                  if ((pFVar26 == (FBatchedElements *)0x0) &&
                     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                         ("BatchedElements != nullptr",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\UserInterface\\CanvasItem.cpp"
                                          ,0x443,L""), bVar19)) {
                    pcVar11 = (code *)swi(3);
                    (*pcVar11)();
                    return;
                  }
                  pFVar26 = (FBatchedElements *)this->_padding_;
                  EVar8 = *(ESimpleElementBlendMode *)((longlong)&this->_padding_ + 4);
                  pFVar25 = UTexture::GetResource(local_178);
                  iVar21 = local_16c;
                  FBatchedElements::ReserveTriangles
                            (pFVar26,local_16c * 2,(FTexture *)pFVar25,EVar8);
                  FBatchedElements::ReserveVertices((FBatchedElements *)this->_padding_,iVar21 * 4);
                  fVar30 = (float)(**(code **)(local_178->_padding_ + 0x368))();
                  dVar12 = (double)(fVar16 / fVar30);
                  fVar30 = (float)(**(code **)(local_178->_padding_ + 0x370))();
                  dVar13 = (double)(fVar16 / fVar30);
                }
                pFVar25 = UTexture::GetResource(local_178);
                local_108 = &local_140;
                local_e8 = local_res18;
                local_e0 = &local_15c;
                local_d8 = &local_158;
                local_d0 = &local_154;
                local_c8 = &local_150;
                local_c0 = &local_14c;
                local_b8 = local_148;
                local_b0 = &local_178;
                pFVar28 = param_5->DataPtr;
                pFVar2 = pFVar28 + param_5->ArrayNum;
                local_res18[0] = (float)((double)*(int *)(pFVar1 + 8) * (double)this->_padding_);
                local_15c = (float)((double)*(int *)(pFVar1 + 0xc) * (double)this->_padding_);
                local_158 = (float)((double)*(int *)pFVar1 * dVar12);
                local_154 = (float)((double)*(int *)(pFVar1 + 4) * dVar13);
                local_14c = (float)((double)*(int *)(pFVar1 + 8) * dVar12);
                local_148[0] = (float)((double)*(int *)(pFVar1 + 0xc) * dVar13);
                local_f8 = pFVar1;
                local_f0 = this;
                local_100 = local_res20;
                for (; pFVar28 != pFVar2; pFVar28 = pFVar28 + 1) {
                  `FCanvasSimpleTextItem::DrawStringInternal_OfflineCache'::__l19::<lambda_1>::
                  operator()(&local_108,&pFVar28->Offset,&pFVar28->Color);
                }
                `FCanvasSimpleTextItem::DrawStringInternal_OfflineCache'::__l19::<lambda_1>::
                operator()(&local_108,&UE::Math::TVector2<float>::ZeroVector,param_4);
                if ((-1 < local_170) && (iVar29 + 1 < param_2->Size)) {
                  if ((iVar29 + 1 < 0) &&
                     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Index >= 0 && Index < Size",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                                          ,0x234,
                                          L"Index out of bounds on StringView: index %i on a view with a length of %i"
                                         ), bVar19)) {
                    pcVar11 = (code *)swi(3);
                    (*pcVar11)();
                    return;
                  }
                  iVar21 = iswspace(*(wint_t *)((longlong)param_2->DataPtr + local_168 + 2));
                  if (iVar21 == 0) {
                    local_res18[0] =
                         local_res18[0] + (float)((double)((float)iVar7 + fVar3) * dVar4);
                  }
                }
                local_140 = local_140 + (double)local_res18[0];
                if ((double)this->_padding_ <= local_140 && local_140 != (double)this->_padding_) {
                  this->_padding_ = (longlong)local_140;
                }
              }
            }
          }
        }
        iVar29 = iVar29 + 1;
        local_168 = local_168 + 2;
        local_170 = local_170 + 1;
        FVar27 = local_128;
      } while (iVar29 < local_16c);
    }
  }
  if (bVar14) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar15) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar18) {
    FThreadStats::AddMessage(FVar27,CycleScopeEnd);
  }
  return;
}

// DrawStringInternal_RuntimeCache @ 148936610

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall
FCanvasSimpleTextItem::DrawStringInternal_RuntimeCache
          (FCanvasSimpleTextItem *this,FCanvas *param_1,TStringView<wchar_t> *param_2,
          TVector2<double> *param_3,FLinearColor *param_4,
          TArrayView<FCanvasTextItemBase::FTextEffect,int> *param_5)

{
  wchar_t _C;
  FSlateFontServices *this_00;
  FSlateFontCache *this_01;
  HHitProxy *pHVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  float fVar5;
  longlong lVar6;
  bool bVar7;
  bool bVar8;
  schar sVar9;
  ushort uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  FName *pFVar16;
  FThreadSafeStaticStat<_protected:_void___cdecl_FCanvasSimpleTextItem::DrawStringInternal_RuntimeCache(FCanvas_*,TStringView<wchar_t>,UE::Math::TVector2<double>_const_&,FLinearColor_const_&,TArrayView<FCanvasTextItemBase::FTextEffect,int>)_::_2_::FStat_DrawStringInternal_RuntimeCache>
  FVar17;
  TSharedRef<FSlateFontCache,1> *pTVar18;
  FSlateFontInfo *pFVar19;
  FCharacterList *this_02;
  FCharacterEntry *pFVar20;
  ISlateFontTexture *pIVar21;
  FLinearColor *pFVar22;
  FBatchedElements *pFVar23;
  FCharacterEntry *pFVar24;
  TReferenceControllerBase<1> *pTVar25;
  FTextEffect *pFVar26;
  FName FVar27;
  wchar_t wVar28;
  float fVar29;
  double dVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float local_3c8;
  float local_3c4;
  FHitProxyId local_3c0;
  ESimpleElementBlendMode local_3bc;
  float local_3b8;
  float local_3b4;
  float local_3b0 [2];
  FTexture *local_3a8;
  wchar_t local_3a0;
  float local_39c;
  float local_398;
  float local_394;
  float local_390;
  float local_38c;
  uint local_388;
  int local_384;
  int local_380;
  FColor_u_0 local_37c;
  float local_378;
  FName local_370;
  TVector2<float>_u_0 local_368;
  TVector2<float>_u_0 local_360;
  TVector2<float>_u_0 local_358;
  TVector2<float>_u_0 local_350;
  FLinearColor *local_348;
  FCharacterList *local_340;
  longlong local_338;
  FName local_330;
  TReferenceControllerBase<1> *local_328;
  FName local_320;
  TVector4<float>_u_0 local_308;
  TVector4<float>_u_0 local_2f8;
  TVector4<float>_u_0 local_2e8;
  TVector4<float>_u_0 local_2d8;
  FSlateFontCache *local_2c8;
  FTextEffect *local_2c0;
  FLinearColor_u_0 local_2b8;
  TVector2<double> *local_2a8;
  float *local_2a0;
  FCharacterEntry *local_298;
  FCanvasSimpleTextItem *local_290;
  float *local_288;
  float *local_280;
  float *local_278;
  float *local_270;
  float *local_268;
  float *local_260;
  float *local_258;
  FHitProxyId *local_250;
  float *local_248;
  float *local_240;
  FTexture **local_238;
  ESimpleElementBlendMode *local_230;
  FName local_228;
  FName local_220;
  TSharedRef<FSlateFontCache,1> local_218;
  FSlateFontInfo local_208;
  FSlateFontInfo local_1a8;
  FSlateFontInfo local_148 [2];
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_DrawStringInternal_RuntimeCache ==
        (FThreadSafeStaticStat<_protected:_void___cdecl_FCanvasSimpleTextItem::DrawStringInternal_RuntimeCache(FCanvas_*,TStringView<wchar_t>,UE::Math::TVector2<double>_const_&,FLinearColor_const_&,TArrayView<FCanvasTextItemBase::FTextEffect,int>)_::_2_::FStat_DrawStringInternal_RuntimeCache>
         )0x0) {
      pFVar16 = ::FName::FName(&local_228,"DrawStringInternal_RuntimeCache");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_DrawStringInternal_RuntimeCache,*pFVar16,
                 L"DrawStringInternal_RuntimeCache","STATGROUP_Quick","STATCAT_Advanced",L"Quick",
                 true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar17 = StatPtr_DrawStringInternal_RuntimeCache;
  if (StatPtr_DrawStringInternal_RuntimeCache ==
      (FThreadSafeStaticStat<_protected:_void___cdecl_FCanvasSimpleTextItem::DrawStringInternal_RuntimeCache(FCanvas_*,TStringView<wchar_t>,UE::Math::TVector2<double>_const_&,FLinearColor_const_&,TArrayView<FCanvasTextItemBase::FTextEffect,int>)_::_2_::FStat_DrawStringInternal_RuntimeCache>
       )0x0) {
    pFVar16 = ::FName::FName(&local_220,"DrawStringInternal_RuntimeCache");
    FVar17 = (FThreadSafeStaticStat<_protected:_void___cdecl_FCanvasSimpleTextItem::DrawStringInternal_RuntimeCache(FCanvas_*,TStringView<wchar_t>,UE::Math::TVector2<double>_const_&,FLinearColor_const_&,TArrayView<FCanvasTextItemBase::FTextEffect,int>)_::_2_::FStat_DrawStringInternal_RuntimeCache>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_DrawStringInternal_RuntimeCache,
                          *pFVar16,L"DrawStringInternal_RuntimeCache","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar27 = *(FName *)FVar17;
  bVar4 = false;
  bVar3 = false;
  local_320.ComparisonIndex.Value = 0;
  local_320.Number = 0;
  bVar8 = false;
  bVar7 = false;
  if ((FVar27.ComparisonIndex.Value.Value != 0) || (FVar27.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_37c.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_37c._s_0,(char *)*(FName *)((longlong)FVar17 + 0x10));
      bVar4 = false;
      bVar3 = true;
      bVar8 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_370.ComparisonIndex.Value = FVar27.ComparisonIndex.Value.Value;
        local_370.Number = FVar27.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_370,(wchar_t *)*(FName *)((longlong)FVar17 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\UserInterface\\CanvasItem.cpp"
                   ,0x497);
        bVar4 = true;
        bVar3 = true;
        bVar8 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_330 = FVar27;
      FThreadStats::AddMessage(FVar27,CycleScopeStart);
      bVar7 = true;
      goto LAB_1489367cb;
    }
  }
  bVar4 = bVar8;
  bVar3 = bVar7;
  bVar7 = false;
  local_330 = local_320;
  FVar27 = local_320;
LAB_1489367cb:
  fVar5 = __real_3f800000;
  fVar31 = __real_3f800000;
  if (param_1->bStereoRendering == false) {
    fVar31 = param_1->DPIScale;
  }
  *(TVector2<double>_u_0 *)&this->_padding_ =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  if (param_2->Size != 0) {
    if ((FEngineFontServices::Instance == (FEngineFontServices *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Instance",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\UserInterface\\EngineFontServices.cpp"
                           ,0x31,L""), bVar8)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    this_00 = (FEngineFontServices::Instance->SlateFontServices).Object;
    pTVar25 = (TReferenceControllerBase<1> *)0x0;
    if (this_00 != (FSlateFontServices *)0x0) {
      pTVar18 = FSlateFontServices::GetFontCache(this_00,&local_218);
      this_01 = pTVar18->Object;
      local_328 = (pTVar18->SharedReferenceCount).ReferenceController;
      if (local_328 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_328->SharedReferenceCount = (atomic<int>)((int)local_328->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_2c8 = this_01;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_218.SharedReferenceCount.ReferenceController);
      pTVar25 = local_328;
      if (this_01 != (FSlateFontCache *)0x0) {
        if ((this->SlateFontInfo).bIsSet == false) {
          pFVar19 = UFont::GetLegacySlateFontInfo(this->Font,local_148);
          FSlateFontInfo::FSlateFontInfo(&local_208,pFVar19);
          local_1a8.CompositeFont.SharedReferenceCount.ReferenceController =
               local_148[0].CompositeFont.SharedReferenceCount.ReferenceController;
        }
        else {
          pFVar19 = TOptional<FSlateFontInfo>::GetValue(&this->SlateFontInfo);
          pFVar19 = FSlateFontInfo::FSlateFontInfo(&local_1a8,pFVar19);
          FSlateFontInfo::FSlateFontInfo(&local_208,pFVar19);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_1a8.CompositeFont.SharedReferenceCount.ReferenceController);
        this_02 = FSlateFontCache::GetCharacterList
                            (this_01,&local_208,fVar31,&FFontOutlineSettings::NoOutline);
        pHVar1 = (param_1->CurrentHitProxy).Reference;
        if (pHVar1 == (HHitProxy *)0x0) {
          local_3c0.Index = -1;
        }
        else {
          local_3c0.Index = (pHVar1->Id).Index;
        }
        local_3bc = *(ESimpleElementBlendMode *)((longlong)&this->_padding_ + 4);
        uVar12 = 0;
        fVar34 = 0.0;
        local_388 = 0;
        fVar35 = 0.0;
        local_3a8 = (FTexture *)0x0;
        local_2b8._0_8_ = *(undefined8 *)&param_4->field0_0x0;
        local_2b8._8_8_ = *(undefined8 *)((longlong)&param_4->field0_0x0 + 8);
        local_3b0[0] = 0.0;
        fVar31 = (float)((double)*(float *)&this->_padding_ * (double)this->_padding_);
        local_378 = fVar31;
        local_340 = this_02;
        uVar10 = FCharacterList::GetMaxHeight(this_02);
        wVar28 = L'\0';
        local_3c8 = 0.0;
        local_384 = 0;
        local_380 = param_2->Size;
        fVar29 = (float)((double)uVar10 * (double)this->_padding_);
        local_3b4 = fVar29;
        if (0 < local_380) {
          local_338 = 0;
          do {
            lVar6 = local_338;
            iVar13 = local_384;
            if ((param_2->Size <= local_384) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index >= 0 && Index < Size",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                                   ,0x234,
                                   L"Index out of bounds on StringView: index %i on a view with a length of %i"
                                  ), fVar29 = local_3b4, bVar8)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            dVar30 = (double)this->_padding_;
            _C = *(wchar_t *)(lVar6 + (longlong)param_2->DataPtr);
            if (dVar30 == 0.0) {
              dVar30 = (double)fVar29;
              this->_padding_ = (longlong)dVar30;
            }
            local_3a0 = _C;
            if (_C == L'\n') {
              local_3b0[0] = local_3b0[0] + fVar29;
              local_3c8 = 0.0;
              this->_padding_ = (longlong)((double)fVar29 + dVar30);
              local_338 = lVar6;
            }
            else {
              pFVar20 = FCharacterList::GetCharacter(this_02,_C,local_208.FontFallback);
              if ((pFVar20->Valid != false) &&
                 ((local_3a8 == (FTexture *)0x0 || (pFVar20->TextureIndex != uVar12)))) {
                local_388 = (uint)pFVar20->TextureIndex;
                pIVar21 = FSlateFontCache::GetFontTexture(local_2c8,local_388);
                if ((pIVar21 == (ISlateFontTexture *)0x0) &&
                   (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                      ("SlateFontTexture",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\UserInterface\\CanvasItem.cpp"
                                       ,0x4e2,L""), bVar8)) {
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
                local_3a8 = (FTexture *)(**(code **)((longlong)*pIVar21 + 0x10))(pIVar21);
                if ((local_3a8 == (FTexture *)0x0) &&
                   (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                      ("FontTexture",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\UserInterface\\CanvasItem.cpp"
                                       ,0x4e5,L""), bVar8)) {
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
                iVar11 = (**(code **)((longlong)*pIVar21 + 0x18))(pIVar21);
                local_3bc = SE_BLEND_Translucent;
                if (iVar11 == 1) {
                  pFVar22 = &FLinearColor::White;
                }
                else {
                  local_3bc = *(ESimpleElementBlendMode *)((longlong)&this->_padding_ + 4);
                  pFVar22 = param_4;
                }
                local_2b8._0_8_ = *(undefined8 *)&pFVar22->field0_0x0;
                local_2b8._8_8_ = *(undefined8 *)((longlong)&pFVar22->field0_0x0 + 8);
                pFVar23 = FCanvas::GetBatchedElements
                                    (param_1,ET_Triangle,(FBatchedElementParameters *)0x0,local_3a8,
                                     local_3bc,(FDepthFieldGlowInfo *)&this->_padding_,false);
                this->_padding_ = (longlong)pFVar23;
                if ((pFVar23 == (FBatchedElements *)0x0) &&
                   (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                      ("BatchedElements",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\UserInterface\\CanvasItem.cpp"
                                       ,0x4ed,L""), bVar8)) {
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
                iVar11 = param_5->ArrayNum;
                FBatchedElements::ReserveTriangles
                          ((FBatchedElements *)this->_padding_,(iVar11 + 1) * local_380 * 2,
                           local_3a8,local_3bc);
                FBatchedElements::ReserveVertices
                          ((FBatchedElements *)this->_padding_,(iVar11 + 1) * local_380 * 4);
                uVar12 = (**(code **)(local_3a8->_padding_ + 0x30))();
                fVar34 = fVar5 / (float)uVar12;
                uVar12 = (**(code **)(local_3a8->_padding_ + 0x38))();
                fVar35 = fVar5 / (float)uVar12;
              }
              if ((pFVar20->Valid == false) || (iVar11 = iswspace(_C), iVar11 != 0)) {
                bVar8 = true;
                iVar11 = 0;
              }
              else {
                bVar8 = false;
                iVar11 = 0;
                if (iVar13 != 0) {
                  pFVar24 = FCharacterList::GetCharacter(local_340,wVar28,local_208.FontFallback);
                  sVar9 = FCharacterList::GetKerning(local_340,pFVar24,pFVar20);
                  iVar11 = (int)((double)(int)sVar9 * (double)this->_padding_);
                }
              }
              local_3c8 = local_3c8 + (float)iVar11;
              wVar28 = _C;
              if (!bVar8) {
                local_394 = fVar5 / pFVar20->BitmapRenderScale;
                dVar30 = (double)pFVar20->BitmapRenderScale;
                local_3b8 = (float)pFVar20->StartU * fVar34;
                local_3c4 = (float)pFVar20->StartV * fVar35;
                local_390 = (float)((double)pFVar20->USize * (double)this->_padding_ * dVar30);
                local_2a0 = &local_3c8;
                local_288 = local_3b0;
                local_280 = &local_3b4;
                local_278 = &local_394;
                local_270 = &local_390;
                local_268 = &local_38c;
                local_260 = &local_3b8;
                local_258 = &local_3c4;
                local_250 = &local_3c0;
                local_248 = &local_39c;
                local_240 = &local_398;
                local_238 = &local_3a8;
                local_230 = &local_3bc;
                local_38c = (float)((double)pFVar20->VSize * (double)this->_padding_ * dVar30);
                pFVar26 = param_5->DataPtr;
                local_2c0 = pFVar26 + param_5->ArrayNum;
                local_39c = (float)pFVar20->USize * fVar34;
                local_398 = (float)pFVar20->VSize * fVar35;
                local_2a8 = param_3;
                local_298 = pFVar20;
                local_290 = this;
                if (pFVar26 != local_2c0) {
                  pFVar22 = &pFVar26->Color;
                  do {
                    local_308._s_0.Z = 0.0;
                    fVar29 = (float)((double)(int)pFVar20->HorizontalOffset *
                                     (double)this->_padding_ +
                                     (double)(pFVar26->Offset).field0_0x0._s_0.X +
                                    (double)local_3c8 + (param_3->field0_0x0)._s_0.X);
                    local_308._s_0.W = *(float *)((longlong)&this->_padding_ + 4);
                    fVar32 = local_308._s_0.W * fVar29;
                    fVar31 = (float)((((double)pFVar22[-1].field0_0x0._s_0.A +
                                       (param_3->field0_0x0)._s_0.Y + (double)local_3b0[0]) -
                                     (double)(int)pFVar20->VerticalOffset * (double)this->_padding_)
                                    + ((double)(int)pFVar20->GlobalDescender *
                                       (double)this->_padding_ + (double)local_3b4) *
                                      (double)local_394);
                    fVar33 = (fVar29 + local_390) * local_308._s_0.W;
                    fVar29 = local_308._s_0.W * fVar31;
                    fVar31 = (local_38c + fVar31) * local_308._s_0.W;
                    local_368._s_0.X = local_3b8;
                    local_368._s_0.Y = local_3c4;
                    local_348 = pFVar22;
                    local_308._s_0.X = fVar32;
                    local_308._s_0.Y = fVar29;
                    iVar13 = FBatchedElements::AddVertexf
                                       ((FBatchedElements *)this->_padding_,
                                        (TVector4<float> *)&local_308._s_0,
                                        (TVector2<float> *)&local_368._s_0,pFVar22,local_3c0);
                    local_360._s_0.X = local_39c + local_3b8;
                    local_360._s_0.Y = local_3c4;
                    local_2f8._s_0.W = *(float *)((longlong)&this->_padding_ + 4);
                    local_2f8._s_0.Z = 0.0;
                    local_2f8._s_0.X = fVar33;
                    local_2f8._s_0.Y = fVar29;
                    iVar11 = FBatchedElements::AddVertexf
                                       ((FBatchedElements *)this->_padding_,
                                        (TVector4<float> *)&local_2f8._s_0,
                                        (TVector2<float> *)&local_360._s_0,pFVar22,local_3c0);
                    local_358._s_0.Y = local_398 + local_3c4;
                    local_358._s_0.X = local_3b8;
                    local_2e8._s_0.W = *(float *)((longlong)&this->_padding_ + 4);
                    local_2e8._s_0.Z = 0.0;
                    local_2e8._s_0.X = fVar32;
                    local_2e8._s_0.Y = fVar31;
                    iVar14 = FBatchedElements::AddVertexf
                                       ((FBatchedElements *)this->_padding_,
                                        (TVector4<float> *)&local_2e8._s_0,
                                        (TVector2<float> *)&local_358._s_0,pFVar22,local_3c0);
                    local_350._s_0.X = local_39c + local_3b8;
                    local_350._s_0.Y = local_398 + local_3c4;
                    local_2d8._s_0.W = *(float *)((longlong)&this->_padding_ + 4);
                    local_2d8._s_0.Z = 0.0;
                    local_2d8._s_0.X = fVar33;
                    local_2d8._s_0.Y = fVar31;
                    iVar15 = FBatchedElements::AddVertexf
                                       ((FBatchedElements *)this->_padding_,
                                        (TVector4<float> *)&local_2d8._s_0,
                                        (TVector2<float> *)&local_350._s_0,pFVar22,local_3c0);
                    FBatchedElements::AddTriangle
                              ((FBatchedElements *)this->_padding_,iVar13,iVar11,iVar15,local_3a8,
                               local_3bc,(FDepthFieldGlowInfo *)&this->_padding_);
                    FBatchedElements::AddTriangle
                              ((FBatchedElements *)this->_padding_,iVar13,iVar15,iVar14,local_3a8,
                               local_3bc,(FDepthFieldGlowInfo *)&this->_padding_);
                    pFVar26 = pFVar26 + 1;
                    pFVar22 = (FLinearColor *)((longlong)&local_348[1].field0_0x0 + 8);
                    fVar31 = local_378;
                    wVar28 = local_3a0;
                    iVar13 = local_384;
                    local_348 = pFVar22;
                  } while (pFVar26 != local_2c0);
                }
                `FCanvasSimpleTextItem::DrawStringInternal_RuntimeCache'::__l52::<lambda_1>::
                operator()(&local_2a8,&UE::Math::TVector2<float>::ZeroVector,
                           (FLinearColor *)&local_2b8._s_0);
              }
              local_3c8 = (float)((double)(int)pFVar20->XAdvance * (double)this->_padding_ +
                                 (double)local_3c8) + fVar31;
              dVar30 = (double)local_3c8;
              this_02 = local_340;
              uVar12 = local_388;
              fVar29 = local_3b4;
              if ((double)this->_padding_ <= dVar30 && dVar30 != (double)this->_padding_) {
                this->_padding_ = (longlong)dVar30;
              }
            }
            local_384 = iVar13 + 1;
            local_338 = local_338 + 2;
            FVar27 = local_330;
          } while (local_384 < local_380);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_208.CompositeFont.SharedReferenceCount.ReferenceController);
        pTVar25 = local_328;
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar25);
  }
  if (bVar3) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar7) {
    FThreadStats::AddMessage(FVar27,CycleScopeEnd);
  }
  return;
}

// GetFontCacheType @ 148958b00

EFontCacheType __thiscall FCanvasSimpleTextItem::GetFontCacheType(FCanvasSimpleTextItem *this)

{
  return this->Font->FontCacheType;
}

// GetTextBlendMode @ 14895e5e0

ESimpleElementBlendMode __thiscall
FCanvasSimpleTextItem::GetTextBlendMode(FCanvasSimpleTextItem *this,bool param_1)

{
  code *pcVar1;
  bool bVar2;
  ESimpleElementBlendMode EVar3;
  
  EVar3 = *(ESimpleElementBlendMode *)((longlong)&this->_padding_ + 4);
  if ((this->Font->ImportOptions).bUseDistanceFieldAlpha != 0) {
    if (EVar3 == SE_BLEND_Masked) {
      EVar3 = param_1 + SE_BLEND_MaskedDistanceField;
    }
    else if (EVar3 == SE_BLEND_Translucent) {
      EVar3 = param_1 + SE_BLEND_TranslucentDistanceField;
    }
  }
  if (this->Font->FontCacheType == Runtime) {
    if ((EVar3 != SE_BLEND_Translucent) && (1 < EVar3 - SE_BLEND_TranslucentAlphaOnly)) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("BlendModeToUse == SE_BLEND_Translucent || BlendModeToUse == SE_BLEND_TranslucentAlphaOnly || BlendModeToUse == SE_BLEND_TranslucentAlphaOnlyWriteAlpha"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\UserInterface\\CanvasItem.cpp"
                         ,0x3cf,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        EVar3 = (*pcVar1)();
        return EVar3;
      }
    }
    return SE_BLEND_TranslucentAlphaOnly;
  }
  return EVar3;
}

// GetTextSizeInternal @ 14895e850

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

TVector2<double> * __thiscall
FCanvasSimpleTextItem::GetTextSizeInternal
          (FCanvasSimpleTextItem *this,TVector2<double> *__return_storage_ptr__,
          TStringView<wchar_t> *param_1,float param_2)

{
  wchar_t *pwVar1;
  double dVar2;
  double dVar3;
  EFontCacheType EVar4;
  wchar_t wVar5;
  UFont *this_00;
  longlong lVar6;
  code *pcVar7;
  bool bVar8;
  schar sVar9;
  int iVar10;
  FSlateFontInfo *pFVar11;
  FSlateApplication *pFVar12;
  TVector2<double> *pTVar13;
  FDeprecateSlateVector2D FVar14;
  wchar_t *pwVar15;
  wchar_t *pwVar16;
  wchar_t *pwVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auVar21 [12];
  float local_res8 [2];
  float local_res10 [2];
  float local_1e8;
  float local_1e4;
  float local_1e0;
  float fStack_1dc;
  TSharedRef<FSlateFontMeasure,1> local_1d8;
  TStringView<wchar_t> local_1c8;
  TObjectPtr<UObject_const_>_u_0 local_1b8;
  undefined8 uStack_1b0;
  FSlateFontInfo local_1a8;
  FSlateFontInfo local_148;
  FSlateFontInfo local_e8 [2];
  
  this_00 = this->Font;
  pwVar16 = (wchar_t *)0x0;
  EVar4 = this_00->FontCacheType;
  (__return_storage_ptr__->field0_0x0)._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector;
  if (EVar4 != Offline) {
    if (EVar4 != Runtime) {
      return __return_storage_ptr__;
    }
    if ((this->SlateFontInfo).bIsSet == false) {
      pFVar11 = UFont::GetLegacySlateFontInfo(this_00,local_e8);
      FSlateFontInfo::FSlateFontInfo(&local_1a8,pFVar11);
      local_148.CompositeFont.SharedReferenceCount.ReferenceController =
           local_e8[0].CompositeFont.SharedReferenceCount.ReferenceController;
    }
    else {
      pFVar11 = FSlateFontInfo::FSlateFontInfo(&local_148,&(this->SlateFontInfo).TypedValue);
      FSlateFontInfo::FSlateFontInfo(&local_1a8,pFVar11);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_148.CompositeFont.SharedReferenceCount.ReferenceController);
    pFVar12 = FSlateApplication::Get();
    lVar6 = *(longlong *)&pFVar12->field_0x60;
    if ((*(longlong *)(lVar6 + 8) == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      pTVar13 = (TVector2<double> *)(*pcVar7)();
      return pTVar13;
    }
    FSlateFontServices::GetFontMeasureService(*(FSlateFontServices **)(lVar6 + 8),&local_1d8);
    local_1b8.ObjectPtr.field0_0x0 = (FObjectPtr)param_1->DataPtr;
    uStack_1b0 = *(undefined8 *)&param_1->Size;
    FVar14 = FSlateFontMeasure::Measure
                       (local_1d8.Object,&local_1c8,(FSlateFontInfo *)&local_1b8.ObjectPtr,param_2);
    fVar18 = (float)(double)this->_padding_ * *(float *)FVar14;
    fVar19 = (float)(double)this->_padding_ * *(float *)((longlong)FVar14 + 4);
    _local_1e0 = CONCAT44(fVar19,fVar18);
    (__return_storage_ptr__->field0_0x0)._s_0.X = (double)fVar18;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)fVar19;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1d8.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1a8.CompositeFont.SharedReferenceCount.ReferenceController);
    return __return_storage_ptr__;
  }
  dVar2 = (double)this->_padding_;
  dVar3 = (double)this->_padding_;
  if ((UE::GC::GIsIncrementalReachabilityPending == false) || (this_00 == (UFont *)0x0)) {
    fVar18 = 0.0;
    fVar19 = 0.0;
    auVar21 = SUB1612(*param_1,0);
    if (this_00 == (UFont *)0x0) goto LAB_14895ebcd;
  }
  else {
    UE::GC::MarkAsReachable((UObject *)this_00);
    auVar21 = SUB1612(*param_1,0);
  }
  fVar18 = 0.0;
  UFont::GetCharSize(this_00,L'0',&local_1e8,&local_1e4);
  if (local_1e8 == 0.0) {
    UFont::GetCharSize(this_00,L'A',&local_1e8,&local_1e4);
  }
  pwVar15 = auVar21._0_8_;
  pwVar1 = pwVar15 + auVar21._8_4_;
  fVar19 = 0.0;
  while (pwVar17 = pwVar16, pwVar15 < pwVar1) {
    while( true ) {
      pwVar16 = pwVar15;
      wVar5 = *pwVar16;
      if (wVar5 == L'\0') goto LAB_14895ebcd;
      UFont::GetCharSize(this_00,wVar5,local_res10,local_res8);
      if ((local_res8[0] == 0.0) && (wVar5 == L'\n')) {
        local_res8[0] = local_1e4;
      }
      fVar20 = 0.0;
      if (pwVar17 != (wchar_t *)0x0) {
        sVar9 = UFont::GetCharKerning(this_00,*pwVar17,wVar5);
        fVar20 = (float)(int)sVar9 * (float)dVar2;
      }
      pwVar15 = pwVar16 + 1;
      local_res10[0] = local_res10[0] * (float)dVar2;
      local_res8[0] = local_res8[0] * (float)dVar3;
      if (((pwVar1 <= pwVar15) || (*pwVar15 == L'\0')) || (iVar10 = iswspace(*pwVar15), iVar10 != 0)
         ) break;
      if (fVar19 <= local_res8[0]) {
        fVar19 = local_res8[0];
      }
      local_res10[0] = local_res10[0] + fVar20;
      fVar18 = fVar18 + local_res10[0];
      pwVar17 = pwVar16;
    }
    fVar20 = local_res8[0];
    if (local_res8[0] <= fVar19) {
      fVar20 = fVar19;
    }
    fVar18 = fVar18 + local_res10[0];
    fVar19 = fVar20;
  }
LAB_14895ebcd:
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)fVar19;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (double)fVar18;
  return __return_storage_ptr__;
}

// HasValidText @ 148960cf0

bool __thiscall FCanvasSimpleTextItem::HasValidText(FCanvasSimpleTextItem *this)

{
  return this->Font != (UFont *)0x0;
}

