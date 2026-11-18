// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppFramework
// Functions: 3

// ComputeDesiredSize @ 14306f6f0

TVector2<double> * __thiscall
SCustomPaintWidget::ComputeDesiredSize
          (SCustomPaintWidget *this,TVector2<double> *__return_storage_ptr__,float param_1)

{
  (__return_storage_ptr__->field0_0x0)._s_0.X = __real_4060000000000000;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = __real_4060000000000000;
  return __return_storage_ptr__;
}

// Construct @ 1430778b0

void __thiscall SCustomPaintWidget::Construct(SCustomPaintWidget *this,FArguments *param_1)

{
  TDelegate<int___cdecl(FOnPaintHandlerParams_const_&),FDefaultDelegateUserPolicy>::operator=
            (&this->OnPaintHandler,&param_1->_OnPaintHandler);
  return;
}

// OnPaint @ 1430e0c80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
SCustomPaintWidget::OnPaint
          (SCustomPaintWidget *this,FPaintArgs *param_1,FGeometry *param_2,FSlateRect *param_3,
          FSlateWindowElementList *param_4,int param_5,FWidgetStyle *param_6,bool param_7)

{
  undefined1 uVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  FLinearColor *pFVar5;
  undefined1 *puVar6;
  undefined1 auStackY_128 [32];
  bool local_e8;
  bool local_e7;
  TVector2<float>_u_0 local_d8;
  FDeprecateVector2DParameter local_d0;
  TTransform2<float> *local_c8;
  FSlateLayoutTransform *local_c0;
  FPaintGeometry *local_b8;
  FOnPaintHandlerParams local_b0;
  undefined1 local_90 [24];
  FLinearColor local_78;
  FSlateLayoutTransform local_68;
  FPaintGeometry local_58;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_128;
  bVar2 = TDelegateBase<FNotThreadSafeDelegateMode>::IsBound
                    ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnPaintHandler);
  if (bVar2) {
    if (param_7) {
      bVar2 = SWidget::IsEnabled((SWidget *)this);
      if (!bVar2) goto LAB_1430e0cf7;
      local_e8 = true;
    }
    else {
LAB_1430e0cf7:
      local_e8 = false;
    }
    local_b0.OutDrawElements = param_4;
    local_b0.Layer = param_5;
    local_b0.bEnabled = local_e8;
    local_b0.Geometry = param_2;
    local_b0.ClippingRect = param_3;
    TDelegate<int___cdecl(FOnPaintHandlerParams_const_&),FDefaultDelegateUserPolicy>::Execute
              (&this->OnPaintHandler,&local_b0);
  }
  else {
    pFVar5 = &FLinearColor::White;
    puVar6 = local_90;
    for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
      *puVar6 = *(undefined1 *)&pFVar5->field0_0x0;
      pFVar5 = (FLinearColor *)((longlong)&pFVar5->field0_0x0 + 1);
      puVar6 = puVar6 + 1;
    }
    local_d8._s_0 = *(TVector2<float>_u_0_s_0 *)&param_2->Size;
    UE::Slate::FDeprecateVector2DParameter::FDeprecateVector2DParameter
              (&local_d0,(TVector2<float> *)&local_d8._s_0);
    local_c8 = FGeometry::GetAccumulatedRenderTransform(param_2);
    local_c0 = FGeometry::GetAccumulatedLayoutTransform(param_2,&local_68);
    FPaintGeometry::FPaintGeometry
              (&local_58,local_c0,local_c8,&local_d0,param_2->bHasRenderTransform);
    local_b8 = &local_58;
    puVar6 = local_90;
    pFVar5 = &local_78;
    for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
      *(undefined1 *)&pFVar5->field0_0x0 = *puVar6;
      puVar6 = puVar6 + 1;
      pFVar5 = (FLinearColor *)((longlong)&pFVar5->field0_0x0 + 1);
    }
    FSlateDrawElement::MakeDebugQuad(param_4,param_5,local_b8,&local_78);
  }
  if (param_7) {
    bVar2 = SWidget::IsEnabled((SWidget *)this);
    if (bVar2) {
      local_e7 = true;
      goto LAB_1430e0e82;
    }
  }
  local_e7 = false;
LAB_1430e0e82:
  iVar3 = SCompoundWidget::OnPaint
                    ((SCompoundWidget *)this,param_1,param_2,param_3,param_4,param_5,param_6,
                     local_e7);
  return iVar3;
}

