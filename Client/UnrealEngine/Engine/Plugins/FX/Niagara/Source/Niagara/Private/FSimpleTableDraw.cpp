// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 4

// AddColumns @ 149283ea0

void __thiscall
`FNiagaraDebugHud::DrawGpuComputeOverriew'::__l2::FSimpleTableDraw::AddColumns
          (void *this,int param_1,float param_2)

{
  int iVar1;
  ForElementType<_private:_void___cdecl_FNiagaraDebugHud::DrawGpuComputeOverriew(FNiagaraWorldManager_*,FCanvas_*,UE::Math::TVector2<float>_&)_::_2_::FSimpleTableDraw::FColumn>
  *pFVar2;
  ulonglong uVar3;
  uchar *puVar4;
  
  if (0 < param_1) {
    uVar3 = (ulonglong)(uint)param_1;
    do {
      iVar1 = *(int *)((longlong)this + 0x1310);
      if (iVar1 == *(int *)((longlong)this + 0x1314)) {
        iVar1 = UE::Core::Private::
                ReallocGrow1_DoAlloc<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<_FNiagaraDebugHud::DrawGpuComputeOverriew_::__l2::FSimpleTableDraw::FColumn>_>
                          (0x130,8,(ForElementType<_private:_void___cdecl_FNiagaraDebugHud::DrawGpuComputeOverriew(FNiagaraWorldManager_*,FCanvas_*,UE::Math::TVector2<float>_&)_::_2_::FSimpleTableDraw::FColumn>
                                    *)((longlong)this + 8),(int *)((longlong)this + 0x1314));
      }
      *(int *)((longlong)this + 0x1310) = iVar1 + 1;
      pFVar2 = (ForElementType<_private:_void___cdecl_FNiagaraDebugHud::DrawGpuComputeOverriew(FNiagaraWorldManager_*,FCanvas_*,UE::Math::TVector2<float>_&)_::_2_::FSimpleTableDraw::FColumn>
                *)((longlong)this + 8);
      if (*(ForElementType<_private:_void___cdecl_FNiagaraDebugHud::DrawGpuComputeOverriew(FNiagaraWorldManager_*,FCanvas_*,UE::Math::TVector2<float>_&)_::_2_::FSimpleTableDraw::FColumn>
            **)((longlong)this + 0x1308) !=
          (ForElementType<_private:_void___cdecl_FNiagaraDebugHud::DrawGpuComputeOverriew(FNiagaraWorldManager_*,FCanvas_*,UE::Math::TVector2<float>_&)_::_2_::FSimpleTableDraw::FColumn>
           *)0x0) {
        pFVar2 = *(ForElementType<_private:_void___cdecl_FNiagaraDebugHud::DrawGpuComputeOverriew(FNiagaraWorldManager_*,FCanvas_*,UE::Math::TVector2<float>_&)_::_2_::FSimpleTableDraw::FColumn>
                   **)((longlong)this + 0x1308);
      }
      puVar4 = pFVar2->InlineData + (longlong)iVar1 * 0x130;
      DefaultConstructItems<_FNiagaraDebugHud::DrawGpuComputeOverriew_::__l2::FSimpleTableDraw::FColumn,int>
                (puVar4,1);
      *(float *)puVar4 = param_2;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return;
}

// Draw @ 14928d290

void __thiscall
`FNiagaraDebugHud::DrawGpuComputeOverriew'::__l2::FSimpleTableDraw::Draw
          (void *this,UFont *param_1,FCanvas *param_2,TVector2<float> *param_3,FLinearColor *param_4
          ,FLinearColor *param_5)

{
  int iVar1;
  code *pcVar2;
  TVector2<float>_u_0 TVar3;
  bool bVar4;
  uint uVar5;
  undefined4 uVar6;
  TVector2<float> TVar7;
  size_t sVar8;
  longlong lVar9;
  uint uVar10;
  longlong *plVar11;
  longlong lVar12;
  int iVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined8 local_res8;
  undefined1 local_res20 [8];
  undefined1 local_98 [40];
  longlong lStack_70;
  
  iVar1 = *(int *)((longlong)this + 0x1310);
  lVar9 = *(longlong *)((longlong)this + 0x1308);
  if (*(longlong *)((longlong)this + 0x1308) == 0) {
    lVar9 = (longlong)this + 8;
  }
  local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  TVar3._s_0 = local_res8;
  plVar11 = (longlong *)(lVar9 + 0x18);
  local_res8._4_4_ = UE::Math::TVector2<float>::ZeroVector.field0_0x0._4_4_;
  local_res8._0_4_ = UE::Math::TVector2<float>::ZeroVector.field0_0x0._0_4_;
  fVar15 = (float)local_res8;
  fVar16 = local_res8._4_4_;
  iVar13 = iVar1;
  local_res8 = TVar3._s_0;
  while( true ) {
    if (iVar13 != iVar1) {
      local_res8 = local_res8 & 0xffffffffffffff00;
      `TCheckedPointerIterator<`FNiagaraDebugHud::DrawGpuComputeOverriew'::__l2::FSimpleTableDraw::FColumn,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(&local_res8);
    }
    if (plVar11 + -3 == (longlong *)((longlong)iVar1 * 0x130 + lVar9)) break;
    if ((ulonglong)plVar11[1] < *plVar11 + 2U) {
      TStringBuilderBase<wchar_t>::Extend((TStringBuilderBase<wchar_t> *)(plVar11 + -1),1);
    }
    *(undefined2 *)*plVar11 = 0;
    TVar7 = NiagaraDebugLocal::GetStringSize((UFont *)local_98,(wchar_t *)param_1);
    *(undefined8 *)((longlong)plVar11 + -0x14) = *(undefined8 *)TVar7.field0_0x0;
    *(float *)((longlong)plVar11 + -0xc) = fVar15;
    uVar10 = *(int *)((longlong)this + 0x1310) - 1;
    uVar5 = 0;
    if ((int)uVar10 < *(int *)((longlong)this + 0x1310)) {
      uVar5 = ~uVar10 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    iVar13 = *(int *)((longlong)this + 0x1310);
    lVar12 = (longlong)this + 8;
    if (*(longlong *)((longlong)this + 0x1308) != 0) {
      lVar12 = *(longlong *)((longlong)this + 0x1308);
    }
    if (plVar11 + -3 == (longlong *)((longlong)(iVar13 + -1) * 0x130 + lVar12)) {
      fVar15 = 0.0;
    }
    else {
      fVar15 = *(float *)this;
    }
    fVar15 = fVar15 + *(float *)((longlong)plVar11 + -0x14);
    fVar14 = *(float *)(plVar11 + -2);
    if (*(float *)(plVar11 + -2) <= fVar16) {
      fVar14 = fVar16;
    }
    if (fVar15 <= *(float *)(plVar11 + -3)) {
      fVar15 = *(float *)(plVar11 + -3);
    }
    fVar15 = fVar15 + *(float *)((longlong)plVar11 + -0xc);
    plVar11 = plVar11 + 0x26;
    fVar16 = fVar14;
  }
  FCanvas::DrawTile(param_2,(double)((param_3->field0_0x0)._s_0.X - __real_3f800000),
                    (double)((param_3->field0_0x0)._s_0.Y - __real_3f800000),
                    (double)(fVar15 + __real_3f800000),(double)(fVar16 + __real_40000000),0.0,0.0,
                    0.0,0.0,param_5,(FTexture *)0x0,true);
  iVar1 = *(int *)((longlong)this + 0x1310);
  lVar9 = *(longlong *)((longlong)this + 0x1308);
  if (*(longlong *)((longlong)this + 0x1308) == 0) {
    lVar9 = (longlong)this + 8;
  }
  plVar11 = (longlong *)(lVar9 + 0x18);
  while( true ) {
    if (*(int *)((longlong)this + 0x1310) != iVar1) {
      `TCheckedPointerIterator<`FNiagaraDebugHud::DrawGpuComputeOverriew'::__l2::FSimpleTableDraw::FColumn,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res20);
    }
    if (plVar11 + -3 == (longlong *)((longlong)iVar1 * 0x130 + lVar9)) break;
    if ((ulonglong)plVar11[1] < *plVar11 + 2U) {
      TStringBuilderBase<wchar_t>::Extend((TStringBuilderBase<wchar_t> *)(plVar11 + -1),1);
    }
    *(undefined2 *)*plVar11 = 0;
    uVar6 = 0;
    local_98._16_8_ = plVar11[-1];
    if ((wchar_t *)local_98._16_8_ != (wchar_t *)0x0) {
      sVar8 = wcslen((wchar_t *)local_98._16_8_);
      uVar6 = (undefined4)sVar8;
    }
    lStack_70 = CONCAT44(local_98._28_4_,uVar6);
    local_98._32_8_ = local_98._16_8_;
    local_98._24_4_ = uVar6;
    FCanvas::DrawShadowedString
              (param_2,(double)(*(float *)((longlong)plVar11 + -0xc) + (param_3->field0_0x0)._s_0.X)
               ,(double)(param_3->field0_0x0)._s_0.Y,(TStringView<wchar_t> *)(local_98 + 0x20),
               param_1,param_4,&FLinearColor::Black);
    plVar11 = plVar11 + 0x26;
  }
  (param_3->field0_0x0)._s_0.Y = fVar16 + (param_3->field0_0x0)._s_0.Y;
  return;
}

// GetColumnText @ 1492a1360

TStringBuilderWithBuffer<wchar_t,128> * __thiscall
`FNiagaraDebugHud::DrawGpuComputeOverriew'::__l2::FSimpleTableDraw::GetColumnText
          (void *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TStringBuilderWithBuffer<wchar_t,128> *pTVar4;
  longlong lVar5;
  
  uVar3 = 0;
  if (param_1 < *(int *)((longlong)this + 0x1310)) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TStringBuilderWithBuffer<wchar_t,128> *)(*pcVar1)();
      return pTVar4;
    }
  }
  lVar5 = *(longlong *)((longlong)this + 0x1308);
  if (*(longlong *)((longlong)this + 0x1308) == 0) {
    lVar5 = (longlong)this + 8;
  }
  return (TStringBuilderWithBuffer<wchar_t,128> *)((longlong)param_1 * 0x130 + 0x10 + lVar5);
}

// RowComplete @ 1492b5220

void __thiscall
`FNiagaraDebugHud::DrawGpuComputeOverriew'::__l2::FSimpleTableDraw::RowComplete(void *this)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  
  uVar6 = 0;
  if (0 < *(int *)((longlong)this + 0x1310)) {
    lVar5 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar6 < *(int *)((longlong)this + 0x1310)) {
        uVar3 = ~uVar6 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      lVar4 = (longlong)this + 8;
      if (*(longlong *)((longlong)this + 0x1308) != 0) {
        lVar4 = *(longlong *)((longlong)this + 0x1308);
      }
      lVar4 = lVar4 + lVar5;
      if (*(ulonglong *)(lVar4 + 0x20) < *(longlong *)(lVar4 + 0x18) + 2U) {
        TStringBuilderBase<wchar_t>::Extend((TStringBuilderBase<wchar_t> *)(lVar4 + 0x10),1);
      }
      uVar6 = uVar6 + 1;
      lVar5 = lVar5 + 0x130;
      **(undefined2 **)(lVar4 + 0x18) = 10;
      *(longlong *)(lVar4 + 0x18) = *(longlong *)(lVar4 + 0x18) + 2;
    } while ((int)uVar6 < *(int *)((longlong)this + 0x1310));
  }
  return;
}

