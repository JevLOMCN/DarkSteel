// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 5

// FScreenPassTextureViewport @ 14472e590

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FScreenPassTextureViewport * __thiscall
FScreenPassTextureViewport::FScreenPassTextureViewport
          (FScreenPassTextureViewport *this,FScreenPassTexture *param_1)

{
  code *pcVar1;
  bool bVar2;
  FScreenPassTextureViewport *pFVar3;
  
  (this->Extent).field0_0x0._s_0 =
       (TIntPoint<int>_u_0_s_0)UE::Math::TIntPoint<int>::ZeroValue.field0_0x0;
  (this->Rect).field0_0x0._s_0.Min.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  (this->Rect).field0_0x0._s_0.Max.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  if (((param_1->Texture == (FRDGTexture *)0x0) ||
      ((*(int *)((longlong)&(param_1->ViewRect).field0_0x0 + 8) ==
        *(int *)&(param_1->ViewRect).field0_0x0 &&
       (*(int *)((longlong)&(param_1->ViewRect).field0_0x0 + 0xc) ==
        *(int *)((longlong)&(param_1->ViewRect).field0_0x0 + 4))))) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InTexture.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\ScreenPass.inl"
                         ,0xab,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FScreenPassTextureViewport *)(*pcVar1)();
    return pFVar3;
  }
  (this->Extent).field0_0x0 = *(TIntPoint<int>_u_0 *)&(param_1->Texture->Desc).field_0x24;
  (this->Rect).field0_0x0._s_0.Min.field0_0x0 = (param_1->ViewRect).field0_0x0._s_0.Min.field0_0x0;
  (this->Rect).field0_0x0._s_0.Max.field0_0x0 = (param_1->ViewRect).field0_0x0._s_0.Max.field0_0x0;
  return this;
}

// FScreenPassTextureViewport @ 1450b0980

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FScreenPassTextureViewport * __thiscall
FScreenPassTextureViewport::FScreenPassTextureViewport
          (FScreenPassTextureViewport *this,FRDGTexture *param_1,TIntRect<int> *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FScreenPassTextureViewport *pFVar7;
  int iVar8;
  int iVar9;
  
  uVar2 = *(undefined8 *)&param_2->field0_0x0;
  uVar3 = *(undefined8 *)((longlong)&param_2->field0_0x0 + 8);
  iVar8 = (int)uVar3;
  iVar9 = (int)((ulonglong)uVar3 >> 0x20);
  if (param_1 != (FRDGTexture *)0x0) {
    iVar1 = (param_1->VisualizeTextureExtent).field0_0x0._s_0.X;
    iVar6 = iVar8;
    if (iVar8 < iVar1) {
      iVar6 = iVar1;
    }
    iVar1 = (param_1->VisualizeTextureExtent).field0_0x0._s_0.Y;
    (param_1->VisualizeTextureExtent).field0_0x0._s_0.X = iVar6;
    iVar6 = iVar9;
    if (iVar9 < iVar1) {
      iVar6 = iVar1;
    }
    (param_1->VisualizeTextureExtent).field0_0x0._s_0.Y = iVar6;
  }
  (this->Extent).field0_0x0._s_0 =
       (TIntPoint<int>_u_0_s_0)UE::Math::TIntPoint<int>::ZeroValue.field0_0x0;
  (this->Rect).field0_0x0._s_0.Min.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  (this->Rect).field0_0x0._s_0.Max.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  if ((param_1 == (FRDGTexture *)0x0) ||
     ((iVar8 == (int)uVar2 && (iVar9 == (int)((ulonglong)uVar2 >> 0x20))))) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InTexture.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\ScreenPass.inl"
                       ,0xab,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FScreenPassTextureViewport *)(*pcVar4)();
      return pFVar7;
    }
  }
  (this->Extent).field0_0x0 = *(TIntPoint<int>_u_0 *)&(param_1->Desc).field_0x24;
  *(undefined8 *)&(this->Rect).field0_0x0 = uVar2;
  *(undefined8 *)((longlong)&(this->Rect).field0_0x0 + 8) = uVar3;
  return this;
}

// FScreenPassTextureViewport @ 145127570

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FScreenPassTextureViewport * __thiscall
FScreenPassTextureViewport::FScreenPassTextureViewport
          (FScreenPassTextureViewport *this,FScreenPassTextureSlice *param_1)

{
  code *pcVar1;
  bool bVar2;
  FScreenPassTextureViewport *pFVar3;
  
  (this->Extent).field0_0x0._s_0 =
       (TIntPoint<int>_u_0_s_0)UE::Math::TIntPoint<int>::ZeroValue.field0_0x0;
  (this->Rect).field0_0x0._s_0.Min.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  (this->Rect).field0_0x0._s_0.Max.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  if (((param_1->TextureSRV == (FRDGTextureSRV *)0x0) ||
      ((*(int *)((longlong)&(param_1->ViewRect).field0_0x0 + 8) ==
        *(int *)&(param_1->ViewRect).field0_0x0 &&
       (*(int *)((longlong)&(param_1->ViewRect).field0_0x0 + 0xc) ==
        *(int *)((longlong)&(param_1->ViewRect).field0_0x0 + 4))))) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InTexture.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\ScreenPass.inl"
                         ,0xb2,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FScreenPassTextureViewport *)(*pcVar1)();
    return pFVar3;
  }
  (this->Extent).field0_0x0 =
       *(TIntPoint<int>_u_0 *)&(((param_1->TextureSRV->Desc).Texture)->Desc).field_0x24;
  (this->Rect).field0_0x0._s_0.Min.field0_0x0 = (param_1->ViewRect).field0_0x0._s_0.Min.field0_0x0;
  (this->Rect).field0_0x0._s_0.Max.field0_0x0 = (param_1->ViewRect).field0_0x0._s_0.Max.field0_0x0;
  return this;
}

// operator= @ 145196770

FScreenPassTextureViewport * __thiscall
FScreenPassTextureViewport::operator=
          (FScreenPassTextureViewport *this,FScreenPassTextureViewport *param_1)

{
  (this->Extent).field0_0x0 = (param_1->Extent).field0_0x0;
  (this->Rect).field0_0x0._s_0.Min.field0_0x0 = (param_1->Rect).field0_0x0._s_0.Min.field0_0x0;
  (this->Rect).field0_0x0._s_0.Max.field0_0x0 = (param_1->Rect).field0_0x0._s_0.Max.field0_0x0;
  return this;
}

// FScreenPassTextureViewport @ 145295e50

FScreenPassTextureViewport * __thiscall
FScreenPassTextureViewport::FScreenPassTextureViewport
          (FScreenPassTextureViewport *this,TIntPoint<int> param_1,TIntRect<int> *param_2)

{
  (this->Extent).field0_0x0._s_0 = (TIntPoint<int>_u_0_s_0)param_1.field0_0x0;
  (this->Rect).field0_0x0._s_0.Min.field0_0x0 = (param_2->field0_0x0)._s_0.Min.field0_0x0;
  (this->Rect).field0_0x0._s_0.Max.field0_0x0 = (param_2->field0_0x0)._s_0.Max.field0_0x0;
  return this;
}

