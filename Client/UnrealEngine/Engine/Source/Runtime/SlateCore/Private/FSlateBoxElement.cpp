// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 2

// SetBrush @ 14251f180

void __thiscall
FSlateBoxElement::SetBrush
          (FSlateBoxElement *this,FSlateBrush *param_1,FDeprecateVector2DParameter param_2,
          float param_3)

{
  FSlateSharedHandleData *pFVar1;
  FSlateShaderResourceProxy *pFVar2;
  code *pcVar3;
  TVector2<float>_u_0 TVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined3 uVar8;
  bool bVar9;
  undefined1 local_res8 [8];
  
  if (param_1 == (FSlateBrush *)0x0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("InBrush",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Rendering\\DrawElementTypes.h"
                       ,0x1b8,L"");
    if (bVar9) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if ((param_1->DrawAs).Value == '\0') {
    `FSlateBoxElement::SetBrush'::__l2::<lambda_1>::operator()(local_res8);
  }
  fVar5 = (param_1->Margin).Top;
  fVar6 = (param_1->Margin).Right;
  fVar7 = (param_1->Margin).Bottom;
  (this->Margin).Left = (param_1->Margin).Left;
  (this->Margin).Top = fVar5;
  (this->Margin).Right = fVar6;
  (this->Margin).Bottom = fVar7;
  TVar4 = (param_1->UVRegion).Max.field0_0x0;
  (this->UVRegion).Min.field0_0x0 = (param_1->UVRegion).Min.field0_0x0;
  (this->UVRegion).Max.field0_0x0 = TVar4;
  uVar8 = *(undefined3 *)&(param_1->UVRegion).field_0x11;
  (this->UVRegion).bIsValid = (param_1->UVRegion).bIsValid;
  *(undefined3 *)&(this->UVRegion).field_0x11 = uVar8;
  this->Tiling = (uint)(param_1->Tiling).Value;
  this->Mirroring = (uint)(param_1->Mirroring).Value;
  this->DrawType = (uint)(param_1->DrawAs).Value;
  FSlateBrush::UpdateRenderingResource(param_1,(TVector2<float>)param_2,param_3);
  pFVar1 = (param_1->ResourceHandle).Data.Object;
  if ((pFVar1 == (FSlateSharedHandleData *)0x0) ||
     (pFVar2 = pFVar1->Proxy, pFVar2 == (FSlateShaderResourceProxy *)0x0)) {
    this->ResourceProxy = (FSlateShaderResourceProxy *)0x0;
  }
  else {
    this->ResourceProxy = pFVar2;
  }
  return;
}

// operator() @ 15048f740

bool __thiscall `FSlateBoxElement::SetBrush'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_8355642584109940295>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8355642584109940295>,
                       &`public:___cdecl_`public:_void___cdecl_FSlateBoxElement::SetBrush(FSlateBrush_const*___ptr64,UE::Slate::FDeprecateVector2DParameter,float)___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

