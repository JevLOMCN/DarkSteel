// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioWidgets
// Functions: 4

// ApplyNewMaterial @ 14d8da5d0

UMaterialInstanceDynamic * __thiscall
SAudioMaterialEnvelope::ApplyNewMaterial(SAudioMaterialEnvelope *this)

{
  FAudioMaterialEnvelopeStyle *pFVar1;
  code *pcVar2;
  UObject *pUVar3;
  UMaterialInstanceDynamic *pUVar4;
  UObject *local_res8;
  
  pFVar1 = this->AudioMaterialEnvelopeStyle;
  if (pFVar1 != (FAudioMaterialEnvelopeStyle *)0x0) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x18);
    pUVar3 = FWeakObjectPtr::Get(&(this->Owner).WeakPtr);
    local_res8 = (UObject *)(*pcVar2)(pFVar1,pUVar3);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_res8);
    }
    FWeakObjectPtr::operator=(&(this->DynamicMaterial).WeakPtr,(FObjectPtr)&local_res8);
  }
  pUVar4 = (UMaterialInstanceDynamic *)FWeakObjectPtr::Get(&(this->DynamicMaterial).WeakPtr);
  return pUVar4;
}

// ComputeDesiredSize @ 14d8e5860

TVector2<double> * __thiscall
SAudioMaterialEnvelope::ComputeDesiredSize
          (SAudioMaterialEnvelope *this,TVector2<double> *__return_storage_ptr__,float param_1)

{
  float fVar1;
  FAudioMaterialEnvelopeStyle *pFVar2;
  
  pFVar2 = this->AudioMaterialEnvelopeStyle;
  if (pFVar2 != (FAudioMaterialEnvelopeStyle *)0x0) {
    fVar1 = *(float *)((longlong)&pFVar2->_padding_ + 4);
    (__return_storage_ptr__->field0_0x0)._s_0.X = (double)*(float *)&pFVar2->_padding_;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)fVar1;
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->field0_0x0)._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector;
  return __return_storage_ptr__;
}

// Construct @ 14d8e9070

void __thiscall SAudioMaterialEnvelope::Construct(SAudioMaterialEnvelope *this,FArguments *param_1)

{
  (this->Owner).WeakPtr = (param_1->_Owner).WeakPtr;
  this->EnvelopeSettings = param_1->_EnvelopeSettings;
  this->AudioMaterialEnvelopeStyle = param_1->_AudioMaterialEnvelopeStyle;
  ApplyNewMaterial(this);
  return;
}

// OnPaint @ 14d952640

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
SAudioMaterialEnvelope::OnPaint
          (SAudioMaterialEnvelope *this,FPaintArgs *param_1,FGeometry *param_2,FSlateRect *param_3,
          FSlateWindowElementList *param_4,int param_5,FWidgetStyle *param_6,bool param_7)

{
  TWeakObjectPtr<UMaterialInstanceDynamic,FWeakObjectPtr> *this_00;
  float fVar1;
  FAudioMaterialEnvelopeStyle *pFVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  UMaterialInstanceDynamic *pUVar7;
  FName *pFVar8;
  UObject *pUVar9;
  ESlateDrawEffect EVar10;
  undefined1 auStackY_198 [32];
  FName local_168 [2];
  FLinearColor_u_0 local_158;
  FLinearColor_u_0 local_148;
  FSlateBrush local_138;
  TVector2<float>_u_0 local_88;
  float local_80;
  undefined8 local_7c;
  FDeprecateSlateVector2D local_74;
  float local_6c [2];
  float afStack_64 [2];
  TVector2<float>_u_0 local_5c;
  byte local_54;
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStackY_198;
  if ((this->AudioMaterialEnvelopeStyle != (FAudioMaterialEnvelopeStyle *)0x0) &&
     (this->EnvelopeSettings != (FAudioMaterialEnvelopeSettings *)0x0)) {
    this_00 = &this->DynamicMaterial;
    bVar6 = FWeakObjectPtr::IsValid(&this_00->WeakPtr);
    if (bVar6) {
      pUVar7 = (UMaterialInstanceDynamic *)FWeakObjectPtr::Get(&this_00->WeakPtr);
      fVar1 = this->EnvelopeSettings->AttackCurve;
      pFVar8 = ::FName::FName(local_168,"A_Curve");
      UMaterialInstanceDynamic::SetScalarParameterValue(pUVar7,*pFVar8,fVar1);
      pUVar7 = (UMaterialInstanceDynamic *)FWeakObjectPtr::Get(&this_00->WeakPtr);
      fVar1 = this->EnvelopeSettings->AttackValue;
      pFVar8 = ::FName::FName(local_168,"A_Int");
      UMaterialInstanceDynamic::SetScalarParameterValue(pUVar7,*pFVar8,fVar1);
      pUVar7 = (UMaterialInstanceDynamic *)FWeakObjectPtr::Get(&this_00->WeakPtr);
      fVar1 = this->EnvelopeSettings->AttackTime;
      pFVar8 = ::FName::FName(local_168,"A_Time");
      UMaterialInstanceDynamic::SetScalarParameterValue(pUVar7,*pFVar8,fVar1);
      pUVar7 = (UMaterialInstanceDynamic *)FWeakObjectPtr::Get(&this_00->WeakPtr);
      fVar1 = this->EnvelopeSettings->DecayCurve;
      pFVar8 = ::FName::FName(local_168,"D_Curve");
      UMaterialInstanceDynamic::SetScalarParameterValue(pUVar7,*pFVar8,fVar1);
      pUVar7 = (UMaterialInstanceDynamic *)FWeakObjectPtr::Get(&this_00->WeakPtr);
      fVar1 = this->EnvelopeSettings->DecayTime;
      pFVar8 = ::FName::FName(local_168,"D_Time");
      UMaterialInstanceDynamic::SetScalarParameterValue(pUVar7,*pFVar8,fVar1);
      if (this->EnvelopeSettings->EnvelopeType == ADSR) {
        pUVar7 = (UMaterialInstanceDynamic *)FWeakObjectPtr::Get(&this_00->WeakPtr);
        fVar1 = this->EnvelopeSettings->ReleaseCurve;
        pFVar8 = ::FName::FName(local_168,"R_Curve");
        UMaterialInstanceDynamic::SetScalarParameterValue(pUVar7,*pFVar8,fVar1);
        pUVar7 = (UMaterialInstanceDynamic *)FWeakObjectPtr::Get(&this_00->WeakPtr);
        fVar1 = this->EnvelopeSettings->ReleaseTime;
        pFVar8 = ::FName::FName(local_168,"R_Time");
        UMaterialInstanceDynamic::SetScalarParameterValue(pUVar7,*pFVar8,fVar1);
        pUVar7 = (UMaterialInstanceDynamic *)FWeakObjectPtr::Get(&this_00->WeakPtr);
        fVar1 = this->EnvelopeSettings->SustainValue;
        pFVar8 = ::FName::FName(local_168,"S_Int");
        UMaterialInstanceDynamic::SetScalarParameterValue(pUVar7,*pFVar8,fVar1);
      }
      pUVar7 = (UMaterialInstanceDynamic *)FWeakObjectPtr::Get(&this_00->WeakPtr);
      uVar4 = *(undefined8 *)&(this->AudioMaterialEnvelopeStyle->CurveColor).field0_0x0;
      uVar5 = *(undefined8 *)
               ((longlong)&(this->AudioMaterialEnvelopeStyle->CurveColor).field0_0x0 + 8);
      pFVar8 = ::FName::FName(local_168,"MainColor");
      local_158._0_8_ = uVar4;
      local_158._8_8_ = uVar5;
      UMaterialInstanceDynamic::SetVectorParameterValue
                (pUVar7,*pFVar8,(FLinearColor *)&local_158._s_0);
      pUVar7 = (UMaterialInstanceDynamic *)FWeakObjectPtr::Get(&this_00->WeakPtr);
      uVar4 = *(undefined8 *)&(this->AudioMaterialEnvelopeStyle->BackgroundColor).field0_0x0;
      uVar5 = *(undefined8 *)
               ((longlong)&(this->AudioMaterialEnvelopeStyle->BackgroundColor).field0_0x0 + 8);
      pFVar8 = ::FName::FName(local_168,"BoxBG");
      local_158._0_8_ = uVar4;
      local_158._8_8_ = uVar5;
      UMaterialInstanceDynamic::SetVectorParameterValue
                (pUVar7,*pFVar8,(FLinearColor *)&local_158._s_0);
      pUVar7 = (UMaterialInstanceDynamic *)FWeakObjectPtr::Get(&this_00->WeakPtr);
      uVar4 = *(undefined8 *)&(this->AudioMaterialEnvelopeStyle->OutlineColor).field0_0x0;
      uVar5 = *(undefined8 *)
               ((longlong)&(this->AudioMaterialEnvelopeStyle->OutlineColor).field0_0x0 + 8);
      pFVar8 = ::FName::FName(local_168,"BoxOutline");
      local_158._0_8_ = uVar4;
      local_158._8_8_ = uVar5;
      UMaterialInstanceDynamic::SetVectorParameterValue
                (pUVar7,*pFVar8,(FLinearColor *)&local_158._s_0);
      pUVar7 = (UMaterialInstanceDynamic *)FWeakObjectPtr::Get(&this_00->WeakPtr);
      local_168[0] = *(FName *)&param_2->Size;
      pFVar8 = ::FName::FName((FName *)&local_158._s_0,"LocalWidth");
      UMaterialInstanceDynamic::SetScalarParameterValue
                (pUVar7,*pFVar8,(float)local_168[0].ComparisonIndex.Value);
      pUVar7 = (UMaterialInstanceDynamic *)FWeakObjectPtr::Get(&this_00->WeakPtr);
      local_168[0] = *(FName *)&param_2->Size;
      pFVar8 = ::FName::FName((FName *)&local_158._s_0,"LocalHeigth");
      UMaterialInstanceDynamic::SetScalarParameterValue(pUVar7,*pFVar8,(float)local_168[0].Number);
      if ((!param_7) || (bVar6 = true, *(char *)((longlong)&this->_padding_ + 2) == '\0')) {
        bVar6 = false;
      }
      local_148._0_8_ = *(undefined8 *)&(param_6->ColorAndOpacityTint).field0_0x0;
      local_148._8_8_ = *(undefined8 *)((longlong)&(param_6->ColorAndOpacityTint).field0_0x0 + 8);
      FSlateBrush::FSlateBrush(&local_138);
      pUVar9 = FWeakObjectPtr::Get(&this_00->WeakPtr);
      FSlateBrush::SetResourceObject(&local_138,pUVar9);
      local_88 = (param_2->AbsolutePosition).field0_0x0;
      local_80 = param_2->Scale;
      local_5c = (param_2->AccumulatedRenderTransform).Trans.field0_0x0;
      local_74 = param_2->Size;
      local_6c = (param_2->AccumulatedRenderTransform).M.M[0];
      afStack_64 = (param_2->AccumulatedRenderTransform).M.M[1];
      local_54 = param_2->bHasRenderTransform * '\x02' | local_54 & 0xfc;
      local_7c = 0;
      EVar10 = DisabledEffect;
      if (bVar6) {
        EVar10 = None;
      }
      FSlateDrawElement::MakeBox
                (param_4,param_5,(FPaintGeometry *)&local_88._s_0,&local_138,EVar10,
                 (FLinearColor *)&local_148._s_0);
      local_138._padding_ = (longlong)&___7FSlateBrush__6B_;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_138.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
      param_5 = param_5 + 1;
    }
    else {
      pFVar2 = this->AudioMaterialEnvelopeStyle;
      if (pFVar2 != (FAudioMaterialEnvelopeStyle *)0x0) {
        pcVar3 = *(code **)(pFVar2->_padding_ + 0x18);
        pUVar9 = FWeakObjectPtr::Get(&(this->Owner).WeakPtr);
        local_168[0] = (FName)(*pcVar3)(pFVar2,pUVar9);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_168[0] != (FName)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_168[0]);
        }
        FWeakObjectPtr::operator=(&this_00->WeakPtr,(FObjectPtr)local_168);
      }
    }
  }
  return param_5;
}

